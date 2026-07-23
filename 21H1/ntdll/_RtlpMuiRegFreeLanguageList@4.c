/*
 * XREFs of _RtlpMuiRegFreeLanguageList@4 @ 0x4B2D32FD
 * Callers:
 *     _RtlGetUserPreferredUILanguages@20 @ 0x4B2AA700 (_RtlGetUserPreferredUILanguages@20.c)
 *     _RtlpMuiRegFreeRegistryInfo@8 @ 0x4B2ACEB0 (_RtlpMuiRegFreeRegistryInfo@8.c)
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 *     _InitializeTEBUserLangList@8 @ 0x4B2D3E35 (_InitializeTEBUserLangList@8.c)
 *     _LdrpMergeLangFallbackLists@36 @ 0x4B2D4925 (_LdrpMergeLangFallbackLists@36.c)
 *     _RtlpFilterandReplaceConsoleLanguages@20 @ 0x4B2D62B9 (_RtlpFilterandReplaceConsoleLanguages@20.c)
 *     _RtlSetThreadPreferredUILanguages@12 @ 0x4B2D64B0 (_RtlSetThreadPreferredUILanguages@12.c)
 *     _RtlSetThreadPreferredUILanguages2@16 @ 0x4B2D66B0 (_RtlSetThreadPreferredUILanguages2@16.c)
 *     _RtlpQueryDefaultUILanguage@8 @ 0x4B2E9760 (_RtlpQueryDefaultUILanguage@8.c)
 *     _RtlpUpdateTEBLanguage@12 @ 0x4B2EA9DE (_RtlpUpdateTEBLanguage@12.c)
 *     _RtlCleanUpTEBLangLists@0 @ 0x4B2EBCA0 (_RtlCleanUpTEBLangLists@0.c)
 *     _RtlpFreeTebLanguageList@4 @ 0x4B2EBD41 (_RtlpFreeTebLanguageList@4.c)
 *     _RtlGetSystemPreferredUILanguages@20 @ 0x4B352400 (_RtlGetSystemPreferredUILanguages@20.c)
 *     _RtlRestoreThreadPreferredUILanguages@4 @ 0x4B352D50 (_RtlRestoreThreadPreferredUILanguages@4.c)
 *     _RtlSetProcessPreferredUILanguages@12 @ 0x4B352E10 (_RtlSetProcessPreferredUILanguages@12.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

LOGICAL __thiscall RtlpMuiRegFreeLanguageList(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( BaseAddress )
  {
    if ( (*((_BYTE *)BaseAddress + 32) & 0x40) == 0 )
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
