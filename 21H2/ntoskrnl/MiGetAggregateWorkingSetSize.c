/*
 * XREFs of MiGetAggregateWorkingSetSize @ 0x140550428
 * Callers:
 *     MmLogSystemShareablePfnInfo @ 0x1408D1950 (MmLogSystemShareablePfnInfo.c)
 * Callees:
 *     MiGetAggregationVm @ 0x140550450 (MiGetAggregationVm.c)
 */

__int64 __fastcall MiGetAggregateWorkingSetSize(__int64 a1)
{
  __int64 AggregationVm; // rax
  __int64 v2; // rdx

  AggregationVm = MiGetAggregationVm(a1, *(_QWORD *)(a1 + 136));
  if ( AggregationVm )
    return *(_QWORD *)(AggregationVm + 8);
  return v2;
}
