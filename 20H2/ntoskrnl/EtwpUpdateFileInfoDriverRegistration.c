/*
 * XREFs of EtwpUpdateFileInfoDriverRegistration @ 0x14078DC20
 * Callers:
 *     EtwpUpdateFileInfoDriverState @ 0x14078DED0 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x140204C10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140204C30 (PsAttachSiloToCurrentThread.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     HalSystemVectorDispatchEntry @ 0x140245E60 (HalSystemVectorDispatchEntry.c)
 *     ZwDeviceIoControlFile @ 0x1403F8250 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenFile @ 0x1403F87D0 (ZwOpenFile.c)
 */

__int64 __fastcall EtwpUpdateFileInfoDriverRegistration(int a1)
{
  struct _LIST_ENTRY *v2; // rax
  struct _LIST_ENTRY *v3; // rdi
  NTSTATUS v4; // ebx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+17h] BYREF
  __int64 InputBuffer; // [rsp+C8h] [rbp+6Fh] BYREF
  HANDLE FileHandle; // [rsp+D0h] [rbp+77h] BYREF

  InputBuffer = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  v2 = (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry();
  v3 = PsAttachSiloToCurrentThread(v2);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\FileInfo");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  if ( v4 >= 0 )
  {
    LODWORD(InputBuffer) = 1;
    HIDWORD(InputBuffer) = a1;
    v4 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x220020u, &InputBuffer, 8u, 0LL, 0);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  PsDetachSiloFromCurrentThread(v3);
  return (unsigned int)v4;
}
