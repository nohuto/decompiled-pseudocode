/*
 * XREFs of MiIncrementVmFaultCount @ 0x14052B040
 * Callers:
 *     MiAllocateWsle @ 0x1402A3CA0 (MiAllocateWsle.c)
 * Callees:
 *     MiGetAggregationVm @ 0x14054AD70 (MiGetAggregationVm.c)
 */

_DWORD *__fastcall MiIncrementVmFaultCount(__int64 a1, int a2)
{
  _DWORD *result; // rax
  unsigned int v3; // edx

  *(_DWORD *)(a1 + 4) += a2;
  result = (_DWORD *)MiGetAggregationVm();
  if ( result )
    *result += v3;
  __addgsdword(0x2E90u, v3);
  return result;
}
