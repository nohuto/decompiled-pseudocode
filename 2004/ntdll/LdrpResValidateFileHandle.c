/*
 * XREFs of LdrpResValidateFileHandle @ 0x1800E4BBC
 * Callers:
 *     LdrResSearchResource @ 0x180048B30 (LdrResSearchResource.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtQueryInformationFile @ 0x18009D030 (NtQueryInformationFile.c)
 */

__int64 __fastcall LdrpResValidateFileHandle(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  else
    return NtQueryInformationFile();
}
