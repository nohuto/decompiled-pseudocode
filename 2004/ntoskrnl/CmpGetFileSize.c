/*
 * XREFs of CmpGetFileSize @ 0x1406396C4
 * Callers:
 *     CmpInitializeActualFileSizes @ 0x1406395AC (CmpInitializeActualFileSizes.c)
 *     CmpLoadHiveThread @ 0x140786B20 (CmpLoadHiveThread.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1403F37E0 (ZwQueryInformationFile.c)
 */

NTSTATUS __fastcall CmpGetFileSize(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  __int128 FileInformation; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]

  v6 = 0LL;
  FileInformation = 0LL;
  IoStatusBlock = 0LL;
  result = ZwQueryInformationFile(a1, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  if ( result >= 0 )
  {
    *a2 = *((_QWORD *)&FileInformation + 1);
    return 0;
  }
  return result;
}
