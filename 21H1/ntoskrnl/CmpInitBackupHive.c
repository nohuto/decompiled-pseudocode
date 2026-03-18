/*
 * XREFs of CmpInitBackupHive @ 0x14086FFEC
 * Callers:
 *     CmpLoadHiveThread @ 0x140781490 (CmpLoadHiveThread.c)
 *     CmpFlushBackupHive @ 0x14086FC00 (CmpFlushBackupHive.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwCreateFile @ 0x1403F2DD0 (ZwCreateFile.c)
 *     ZwSetSecurityObject @ 0x1403F5810 (ZwSetSecurityObject.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     RtlAppendStringToString @ 0x140759410 (RtlAppendStringToString.c)
 */

NTSTATUS __fastcall CmpInitBackupHive(ULONG_PTR BugCheckParameter2, PCWSTR SourceString)
{
  void *v4; // rcx
  NTSTATUS v5; // eax
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  STRING Destination; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  char v14; // [rsp+C0h] [rbp-40h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  IoStatusBlock = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  DestinationString = 0LL;
  if ( CmpSpecialBootCondition )
  {
    if ( CmpAdminSystemFileSecurityDescriptor )
    {
      v4 = *(void **)(BugCheckParameter2 + 1536);
      if ( v4 )
      {
        v5 = ZwSetSecurityObject(v4, 4u, CmpAdminSystemFileSecurityDescriptor);
        if ( v5 < 0 )
          KeBugCheckEx(0x51u, 0x13uLL, BugCheckParameter2, (ULONG_PTR)SourceString, v5);
        v6 = *(void **)(BugCheckParameter2 + 1568);
        if ( v6 )
          ZwSetSecurityObject(v6, 4u, CmpAdminSystemFileSecurityDescriptor);
        v7 = *(void **)(BugCheckParameter2 + 1576);
        if ( v7 )
          ZwSetSecurityObject(v7, 4u, CmpAdminSystemFileSecurityDescriptor);
        v8 = *(void **)(BugCheckParameter2 + 1544);
        if ( v8 )
          ZwSetSecurityObject(v8, 4u, CmpAdminSystemFileSecurityDescriptor);
      }
    }
  }
  *(_DWORD *)&Destination.Length = 0x800000;
  Destination.Buffer = &v14;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Config\\RegBack\\");
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&Destination;
  ObjectAttributes.SecurityDescriptor = CmpAdminSystemFileSecurityDescriptor;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  return ZwCreateFile(
           (PHANDLE)(BugCheckParameter2 + 1560),
           0x10003u,
           &ObjectAttributes,
           &IoStatusBlock,
           0LL,
           0x80u,
           0,
           3u,
           0xC808u,
           0LL,
           0);
}
