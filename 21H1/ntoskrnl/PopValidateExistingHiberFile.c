/*
 * XREFs of PopValidateExistingHiberFile @ 0x14077D104
 * Callers:
 *     PopCreateHiberFile @ 0x14077BCF0 (PopCreateHiberFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1403F2550 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1403F2810 (ZwSetInformationFile.c)
 */

NTSTATUS __fastcall PopValidateExistingHiberFile(HANDLE FileHandle, _QWORD *a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-9h] BYREF
  __int128 FileInformation; // [rsp+48h] [rbp+7h] BYREF
  __int64 v7; // [rsp+58h] [rbp+17h]
  _OWORD v8[2]; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v9; // [rsp+80h] [rbp+3Fh]

  v7 = 0LL;
  FileInformation = 0LL;
  IoStatusBlock = 0LL;
  result = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  if ( result >= 0 )
  {
    if ( BYTE5(v7) || (__int64)FileInformation < *a2 || (unsigned int)v7 > 1 )
      result = -1073741823;
    if ( result >= 0 )
    {
      v9 = 8198LL;
      memset(v8, 0, sizeof(v8));
      result = ZwSetInformationFile(FileHandle, &IoStatusBlock, v8, 0x28u, FileBasicInformation);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
