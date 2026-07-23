/*
 * XREFs of RtlpMuiRegFreeLanguageList @ 0x1800207AC
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     InitializeTEBUserLangList @ 0x180038670 (InitializeTEBUserLangList.c)
 *     LdrpMergeLangFallbackLists @ 0x18003A52C (LdrpMergeLangFallbackLists.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18003C2D4 (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x18003EBF0 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18003EC40 (RtlSetThreadPreferredUILanguages.c)
 *     RtlCleanUpTEBLangLists @ 0x18006ECC0 (RtlCleanUpTEBLangLists.c)
 *     RtlpFreeTebLanguageList @ 0x18006ED8C (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006F1A0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpQueryDefaultUILanguage @ 0x180075640 (RtlpQueryDefaultUILanguage.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180075EA0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18007BFB0 (RtlGetUserPreferredUILanguages.c)
 *     RtlpUpdateTEBLanguage @ 0x18007C810 (RtlpUpdateTEBLanguage.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180089680 (RtlSetProcessPreferredUILanguages.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x1800EF1C0 (RtlRestoreThreadPreferredUILanguages.c)
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
