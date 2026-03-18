/*
 * XREFs of PipCriticalDeviceWaitCallback @ 0x140A932B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiString @ 0x14023DB90 (RtlInitAnsiString.c)
 *     RtlStringCchPrintfA @ 0x1403B6BA4 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenFile @ 0x1403F87D0 (ZwOpenFile.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405DFB00 (RtlAnsiStringToUnicodeString.c)
 */

__int64 __fastcall PipCriticalDeviceWaitCallback(__int64 a1, const char *a2, UNICODE_STRING *a3)
{
  NTSTATUS v4; // ebx
  HANDLE FileHandle; // [rsp+30h] [rbp-D0h] BYREF
  STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  char pszDest[256]; // [rsp+90h] [rbp-70h] BYREF

  FileHandle = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( a2 )
  {
    v4 = RtlStringCchPrintfA(pszDest, 0x100uLL, "\\ArcName\\%s", a2);
    if ( v4 >= 0 )
    {
      RtlInitAnsiString(&DestinationString, pszDest);
      v4 = RtlAnsiStringToUnicodeString(a3, &DestinationString, 1u);
      if ( v4 >= 0 )
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.ObjectName = a3;
        v4 = ZwOpenFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0, 0x40u);
      }
    }
    if ( FileHandle )
      ZwClose(FileHandle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
