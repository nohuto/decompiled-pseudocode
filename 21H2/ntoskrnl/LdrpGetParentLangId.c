/*
 * XREFs of LdrpGetParentLangId @ 0x140227A8C
 * Callers:
 *     LdrResFallbackLangList @ 0x1405ED51C (LdrResFallbackLangList.c)
 *     LdrpSearchResourceSection_U @ 0x1405EDB54 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     DownLevelLangIDToLanguageName @ 0x140227AFC (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x1403A8368 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     DownLevelGetParentLanguageName @ 0x1405BE458 (DownLevelGetParentLanguageName.c)
 */

__int64 __fastcall LdrpGetParentLangId(__int64 a1, _WORD *a2)
{
  __int16 v2; // bx
  _BYTE v5[176]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE v6[176]; // [rsp+D0h] [rbp-C8h] BYREF

  v2 = 0;
  if ( !a2 || !(unsigned int)DownLevelLangIDToLanguageName(a1, v5, 85LL) )
    return 3221225485LL;
  if ( (int)DownLevelGetParentLanguageName(v5, v6) >= 2 )
    v2 = DownLevelLanguageNameToLangID(v6, 2LL);
  *a2 = v2;
  return 0LL;
}
