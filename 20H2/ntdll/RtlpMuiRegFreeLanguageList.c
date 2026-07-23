/*
 * XREFs of RtlpMuiRegFreeLanguageList @ 0x1800207AC
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     InitializeTEBUserLangList @ 0x180038670 (InitializeTEBUserLangList.c)
 *     LdrpMergeLangFallbackLists @ 0x18003A52C (LdrpMergeLangFallbackLists.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18003C2D4 (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x18003EC40 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18003EC90 (RtlSetThreadPreferredUILanguages.c)
 *     RtlCleanUpTEBLangLists @ 0x18006EDC0 (RtlCleanUpTEBLangLists.c)
 *     RtlpFreeTebLanguageList @ 0x18006EE8C (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006F2A0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpQueryDefaultUILanguage @ 0x180075740 (RtlpQueryDefaultUILanguage.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180075FA0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18007C0B0 (RtlGetUserPreferredUILanguages.c)
 *     RtlpUpdateTEBLanguage @ 0x18007C910 (RtlpUpdateTEBLanguage.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180089780 (RtlSetProcessPreferredUILanguages.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x1800EF6D0 (RtlRestoreThreadPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

LOGICAL __fastcall RtlpMuiRegFreeLanguageList(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( BaseAddress )
  {
    if ( (*((_BYTE *)BaseAddress + 40) & 0x40) == 0 )
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
