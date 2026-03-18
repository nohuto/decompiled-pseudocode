/*
 * XREFs of MiGetAggregationVm @ 0x14054A720
 * Callers:
 *     MiIncrementVmFaultCount @ 0x14052A9F0 (MiIncrementVmFaultCount.c)
 *     MiGetAggregateWorkingSetSize @ 0x14054A6F8 (MiGetAggregateWorkingSetSize.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetAggregationVm(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    return &dword_140C4F740;
  else
    return 0LL;
}
