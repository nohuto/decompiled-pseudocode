/*
 * XREFs of PiOpenDirectoryWithRoot @ 0x14089B210
 * Callers:
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x14089A8A0 (PiBuildAndOpenDeviceDirectoryPath.c)
 *     PiGetDriverMutableStateDirectory @ 0x14089B0A8 (PiGetDriverMutableStateDirectory.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenFile @ 0x1403F2990 (ZwOpenFile.c)
 *     RtlPrefixUnicodeString @ 0x14061B6D0 (RtlPrefixUnicodeString.c)
 *     PiCreateDirectoryPath @ 0x14089A9D4 (PiCreateDirectoryPath.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14089FB84 (PiAuGetStateDirectorySecurityObject.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiOpenDirectoryWithRoot(UNICODE_STRING *SourceString, UNICODE_STRING *a2, char a3, _QWORD *a4)
{
  void *v4; // rdi
  HANDLE v5; // rsi
  int v10; // ebx
  NTSTATUS v11; // eax
  int StateDirectorySecurityObject; // eax
  HANDLE v13; // rax
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  void *v16; // [rsp+38h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+B0h] [rbp+30h] BYREF

  FileHandle = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v16 = 0LL;
  Handle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( !SourceString || !a2 || !a4 )
  {
    v10 = -1073741811;
LABEL_16:
    if ( v5 )
      ZwClose(v5);
    goto LABEL_18;
  }
  if ( !RtlPrefixUnicodeString(SourceString, a2, 1u) )
    return (unsigned int)-1073741811;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  v10 = v11;
  if ( v11 == -1073741766 )
  {
    if ( a3 )
    {
      StateDirectorySecurityObject = PiAuGetStateDirectorySecurityObject(&v16);
      v4 = v16;
      v10 = StateDirectorySecurityObject;
      if ( StateDirectorySecurityObject >= 0 )
      {
        v10 = PiCreateDirectoryPath(SourceString, v16, &Handle);
        if ( v10 < 0 || (v10 = PiCreateDirectoryPath(a2, v4, &FileHandle), v10 < 0) )
        {
          v5 = Handle;
          goto LABEL_16;
        }
        v5 = Handle;
        goto LABEL_14;
      }
    }
  }
  else if ( v11 >= 0 )
  {
LABEL_14:
    v13 = FileHandle;
    FileHandle = 0LL;
    *a4 = v13;
    goto LABEL_16;
  }
LABEL_18:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v10;
}
