/*
 * XREFs of MiIncrementVmFaultCount @ 0x140530750
 * Callers:
 *     MiAllocateWsle @ 0x1402B65C0 (MiAllocateWsle.c)
 * Callees:
 *     MiGetAggregationVm @ 0x140550450 (MiGetAggregationVm.c)
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
