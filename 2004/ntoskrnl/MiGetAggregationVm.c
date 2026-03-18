/*
 * XREFs of MiGetAggregationVm @ 0x14054AD70
 * Callers:
 *     MiIncrementVmFaultCount @ 0x14052B040 (MiIncrementVmFaultCount.c)
 *     MiGetAggregateWorkingSetSize @ 0x14054AD48 (MiGetAggregateWorkingSetSize.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetAggregationVm(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    return &dword_140C4F600;
  else
    return 0LL;
}
