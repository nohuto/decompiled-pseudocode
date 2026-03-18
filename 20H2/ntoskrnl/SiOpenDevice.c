/*
 * XREFs of SiOpenDevice @ 0x1406C65E4
 * Callers:
 *     SiGetDiskPartitionInformation @ 0x1406C6550 (SiGetDiskPartitionInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140776D54 (SiGetDriveLayoutInformation.c)
 *     SiGetDeviceNumberInformation @ 0x140976058 (SiGetDeviceNumberInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140976134 (SiIssueSynchronousIoctl.c)
 *     SiQueryProperty @ 0x1409761D0 (SiQueryProperty.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ZwOpenFile @ 0x1403F87D0 (ZwOpenFile.c)
 */

NTSTATUS __fastcall SiOpenDevice(PCWSTR SourceString, PHANDLE FileHandle)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  *FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IoStatusBlock = 0LL;
  return ZwOpenFile(FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
}
