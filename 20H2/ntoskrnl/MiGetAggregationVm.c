/*
 * XREFs of MiGetAggregationVm @ 0x14054E740
 * Callers:
 *     MiIncrementVmFaultCount @ 0x14052EA10 (MiIncrementVmFaultCount.c)
 *     MiGetAggregateWorkingSetSize @ 0x14054E718 (MiGetAggregateWorkingSetSize.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetAggregationVm(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    return &dword_140C4F680;
  else
    return 0LL;
}
