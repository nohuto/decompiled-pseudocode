/*
 * XREFs of CmpInitBackupHive @ 0x14087148C
 * Callers:
 *     CmpLoadHiveThread @ 0x14079EF50 (CmpLoadHiveThread.c)
 *     CmpFlushBackupHive @ 0x1408710A0 (CmpFlushBackupHive.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwCreateFile @ 0x1403FB020 (ZwCreateFile.c)
 *     RtlAppendStringToString @ 0x14076DD80 (RtlAppendStringToString.c)
 */

NTSTATUS __fastcall CmpInitBackupHive(__int64 a1, const WCHAR *a2)
{
  STRING Destination; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  char v9; // [rsp+C0h] [rbp-40h] BYREF

  *(_QWORD *)&Destination.Length = 0x800000LL;
  Destination.Buffer = &v9;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Config\\RegBack\\");
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlInitUnicodeString(&DestinationString, a2);
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&Destination;
  ObjectAttributes.SecurityDescriptor = CmpAdminSystemFileSecurityDescriptor;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  return ZwCreateFile(
           (PHANDLE)(a1 + 1560),
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
