/*
 * XREFs of MiGetAggregationVm @ 0x140550210
 * Callers:
 *     MiIncrementVmFaultCount @ 0x140530510 (MiIncrementVmFaultCount.c)
 *     MiGetAggregateWorkingSetSize @ 0x1405501E8 (MiGetAggregateWorkingSetSize.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetAggregationVm(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    return &dword_140C4F800;
  else
    return 0LL;
}
