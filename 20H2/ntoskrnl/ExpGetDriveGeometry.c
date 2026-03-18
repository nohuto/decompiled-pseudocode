/*
 * XREFs of ExpGetDriveGeometry @ 0x140952E8C
 * Callers:
 *     ExpCreateOutputEFI @ 0x1409522CC (ExpCreateOutputEFI.c)
 *     ExpTranslateEfiPath @ 0x140954A6C (ExpTranslateEfiPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x1403D5F80 (swprintf_s.c)
 *     ZwDeviceIoControlFile @ 0x1403F8250 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenFile @ 0x1403F87D0 (ZwOpenFile.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetDriveGeometry(unsigned int a1, _DWORD *a2)
{
  wchar_t *PoolWithTag; // rax
  WCHAR *v5; // rdi
  NTSTATUS v6; // ebx
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+27h] BYREF
  HANDLE FileHandle; // [rsp+C8h] [rbp+77h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  DestinationString = 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x4CuLL, 0x72766E45u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    swprintf_s(PoolWithTag, 0x26uLL, L"\\Device\\Harddisk%lu\\Partition0", a1);
    RtlInitUnicodeString(&DestinationString, v5);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    IoStatusBlock = 0LL;
    v6 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x60u);
    if ( v6 >= 0 )
    {
      v6 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70000u, 0LL, 0, a2, 0x18u);
      ZwClose(FileHandle);
      if ( v6 >= 0 && a2[5] < 0x200u )
        v6 = -1073741823;
    }
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
