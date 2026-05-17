/*
 * XREFs of RtlpMuiRegGrowLanguageList @ 0x1801053A0
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18003ACBC (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006EEE0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180081C90 (RtlpLoadMachineUIByPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGrowLanguageList(__int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 4) + 1 >= *(unsigned __int16 *)(a1 + 6) )
    return RtlpMuiRegResizeLanguageList();
  return a1;
}
