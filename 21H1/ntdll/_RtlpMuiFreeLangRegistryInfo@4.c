/*
 * XREFs of _RtlpMuiFreeLangRegistryInfo@4 @ 0x4B36ADA0
 * Callers:
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 *     _RtlGetUILanguageInfo@20 @ 0x4B352940 (_RtlGetUILanguageInfo@20.c)
 *     _RtlUpdateProcessRegistryInfo@0 @ 0x4B3530B9 (_RtlUpdateProcessRegistryInfo@0.c)
 *     _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0 (_RtlpSetPreferredUILanguages@12.c)
 * Callees:
 *     _RtlpMuiRegFreeRegistryInfo@8 @ 0x4B2ACEB0 (_RtlpMuiRegFreeRegistryInfo@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

int __stdcall RtlpMuiFreeLangRegistryInfo(int a1)
{
  int v2; // esi

  if ( !a1 )
    return -1073741811;
  v2 = RtlpMuiRegFreeRegistryInfo(a1, 4095);
  RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, a1);
  return v2;
}
