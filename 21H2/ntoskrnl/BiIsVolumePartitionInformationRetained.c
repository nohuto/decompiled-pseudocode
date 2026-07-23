/*
 * XREFs of BiIsVolumePartitionInformationRetained @ 0x14078596C
 * Callers:
 *     BiConvertNtDeviceToBootEnvironment @ 0x1407851B8 (BiConvertNtDeviceToBootEnvironment.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ZwDeviceIoControlFile @ 0x1403FA660 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenFile @ 0x1403FABE0 (ZwOpenFile.c)
 */

bool __fastcall BiIsVolumePartitionInformationRetained(PCWSTR SourceString)
{
  NTSTATUS v1; // ebx
  bool v2; // bl
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+27h] BYREF
  HANDLE FileHandle; // [rsp+B8h] [rbp+6Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IoStatusBlock = 0LL;
  v1 = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( v1 >= 0 )
  {
    IoStatusBlock = 0LL;
    v1 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x560028u, 0LL, 0, 0LL, 0);
  }
  v2 = v1 >= 0;
  if ( FileHandle )
    ZwClose(FileHandle);
  return v2;
}
