/*
 * XREFs of MiGetAggregationVm @ 0x1405B2D80
 * Callers:
 *     MiIncrementVmFaultCount @ 0x140583D88 (MiIncrementVmFaultCount.c)
 *     MiGetAggregateWorkingSetSize @ 0x1405B2D58 (MiGetAggregateWorkingSetSize.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetAggregationVm(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    return &dword_140C53D80;
  else
    return 0LL;
}
