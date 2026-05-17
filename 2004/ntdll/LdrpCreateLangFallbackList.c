/*
 * XREFs of LdrpCreateLangFallbackList @ 0x180038974
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpMergeLangFallbackLists @ 0x18003A52C (LdrpMergeLangFallbackLists.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18003C2D4 (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18003EC40 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180075EA0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18007BFB0 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x1800389BC (RtlpMuiRegCreateLanguageList.c)
 */

__int64 __fastcall LdrpCreateLangFallbackList(__int64 *a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v6; // r8
  __int64 LanguageList; // rax

  if ( !a2 || !a1 )
    return 3221225485LL;
  v6 = a2;
  LOBYTE(a2) = a4;
  LanguageList = RtlpMuiRegCreateLanguageList(a3, a2, v6);
  *a1 = LanguageList;
  return LanguageList == 0 ? 0xC0000017 : 0;
}
