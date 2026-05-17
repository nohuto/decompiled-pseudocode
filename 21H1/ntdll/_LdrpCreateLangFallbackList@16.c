/*
 * XREFs of _LdrpCreateLangFallbackList@16 @ 0x4B2D2D36
 * Callers:
 *     _RtlGetUserPreferredUILanguages@20 @ 0x4B2AA700 (_RtlGetUserPreferredUILanguages@20.c)
 *     _LdrpMergeLangFallbackLists@36 @ 0x4B2D4925 (_LdrpMergeLangFallbackLists@36.c)
 *     _RtlpFilterandReplaceConsoleLanguages@20 @ 0x4B2D62B9 (_RtlpFilterandReplaceConsoleLanguages@20.c)
 *     _RtlSetThreadPreferredUILanguages@12 @ 0x4B2D64B0 (_RtlSetThreadPreferredUILanguages@12.c)
 *     _RtlGetSystemPreferredUILanguages@20 @ 0x4B352400 (_RtlGetSystemPreferredUILanguages@20.c)
 * Callees:
 *     _RtlpMuiRegCreateLanguageList@12 @ 0x4B2D3232 (_RtlpMuiRegCreateLanguageList@12.c)
 */

int __fastcall LdrpCreateLangFallbackList(_DWORD *a1, int a2, int a3, char a4)
{
  int LanguageList; // eax

  if ( !a2 || !a1 )
    return -1073741811;
  LanguageList = RtlpMuiRegCreateLanguageList(a2);
  *a1 = LanguageList;
  return LanguageList != 0 ? 0 : -1073741801;
}
