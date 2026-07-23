/*
 * XREFs of MiGetAggregationVm @ 0x140550450
 * Callers:
 *     MiIncrementVmFaultCount @ 0x140530750 (MiIncrementVmFaultCount.c)
 *     MiGetAggregateWorkingSetSize @ 0x140550428 (MiGetAggregateWorkingSetSize.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetAggregationVm(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    return &dword_140C4F840;
  else
    return 0LL;
}
