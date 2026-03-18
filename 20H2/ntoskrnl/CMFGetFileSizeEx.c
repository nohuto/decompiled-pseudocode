/*
 * XREFs of CMFGetFileSizeEx @ 0x14095B540
 * Callers:
 *     CMFFlushHitsFile @ 0x14095B230 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x14095BB50 (CMFSystemThreadRoutine.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1403F8390 (ZwQueryInformationFile.c)
 */

NTSTATUS __fastcall CMFGetFileSizeEx(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  __int128 FileInformation; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]

  v6 = 0LL;
  FileInformation = 0LL;
  IoStatusBlock = 0LL;
  result = ZwQueryInformationFile(a1, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  if ( (result & 0xC0000000) != 0xC0000000 )
  {
    *a2 = *((_QWORD *)&FileInformation + 1);
    return 0;
  }
  return result;
}
