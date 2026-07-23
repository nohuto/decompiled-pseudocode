/*
 * XREFs of RtlpMuiRegFreeStringPool @ 0x18006F910
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x18003F4CC (RtlpLoadLanguageConfigList.c)
 *     RtlpFreeTebLanguageList @ 0x18006EE8C (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006F2A0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpUpdateTEBLanguage @ 0x18007C910 (RtlpUpdateTEBLanguage.c)
 *     RtlpMuiRegResizeStringPool @ 0x180105CF8 (RtlpMuiRegResizeStringPool.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

LOGICAL __fastcall RtlpMuiRegFreeStringPool(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( BaseAddress )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return result;
}
