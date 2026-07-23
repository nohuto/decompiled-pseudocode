/*
 * XREFs of _RtlpFreeTebLanguageList@4 @ 0x4B2EBD41
 * Callers:
 *     _RtlSetThreadPreferredUILanguages2@16 @ 0x4B2D66B0 (_RtlSetThreadPreferredUILanguages2@16.c)
 *     _RtlCleanUpTEBLangLists@0 @ 0x4B2EBCA0 (_RtlCleanUpTEBLangLists@0.c)
 *     _RtlRestoreThreadPreferredUILanguages@4 @ 0x4B352D50 (_RtlRestoreThreadPreferredUILanguages@4.c)
 *     _RtlpDupTebLanguageList@4 @ 0x4B353D5C (_RtlpDupTebLanguageList@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpMuiRegFreeLanguageList@4 @ 0x4B2D32FD (_RtlpMuiRegFreeLanguageList@4.c)
 */

LOGICAL __thiscall RtlpFreeTebLanguageList(PVOID *BaseAddress)
{
  PVOID v2; // ecx
  LOGICAL result; // eax

  if ( BaseAddress )
  {
    v2 = *BaseAddress;
    if ( *BaseAddress )
      RtlpMuiRegFreeLanguageList(v2);
    if ( BaseAddress[1] )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress[1]);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
