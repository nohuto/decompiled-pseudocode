/*
 * XREFs of MiGetAggregateWorkingSetSize @ 0x1405B2D58
 * Callers:
 *     MmLogSystemShareablePfnInfo @ 0x140978990 (MmLogSystemShareablePfnInfo.c)
 * Callees:
 *     MiGetAggregationVm @ 0x1405B2D80 (MiGetAggregationVm.c)
 */

__int64 __fastcall MiGetAggregateWorkingSetSize(__int64 a1)
{
  __int64 AggregationVm; // rax
  __int64 v2; // rdx

  AggregationVm = MiGetAggregationVm(a1, *(_QWORD *)(a1 + 144));
  if ( AggregationVm )
    return *(_QWORD *)(AggregationVm + 8);
  return v2;
}
