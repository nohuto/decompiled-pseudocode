/*
 * XREFs of RtlpMuiFreeLangRegistryInfo @ 0x180070030
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18006FD40 (RtlUpdateProcessRegistryInfo.c)
 *     RtlGetUILanguageInfo @ 0x1800EF0E0 (RtlGetUILanguageInfo.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F1270 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800702D0 (RtlpMuiRegFreeRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiFreeLangRegistryInfo(__int64 a1)
{
  unsigned int v2; // ebx

  if ( !a1 )
    return 3221225485LL;
  v2 = RtlpMuiRegFreeRegistryInfo(a1, 4095LL);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return v2;
}
