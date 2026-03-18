/*
 * XREFs of LdrpGetParentLangId @ 0x140362A1C
 * Callers:
 *     LdrResFallbackLangList @ 0x140658DC0 (LdrResFallbackLangList.c)
 *     LdrpSearchResourceSection_U @ 0x140712CF4 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     DownLevelLangIDToLanguageName @ 0x140362A8C (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x1403B3F1C (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     DownLevelGetParentLanguageName @ 0x1405B8C78 (DownLevelGetParentLanguageName.c)
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
