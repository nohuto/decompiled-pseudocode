/*
 * XREFs of EmonFreeCounter @ 0x1403BB328
 * Callers:
 *     EmonInitializeProfiling @ 0x1409A15F0 (EmonInitializeProfiling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EmonFreeCounter(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = EmonCounterStatus + 16LL * EmonNumberCounters * KeGetPcr()->Prcb.Number;
  result = 2LL * a1;
  *(_DWORD *)(v1 + 8 * result + 4) = 0;
  *(_DWORD *)(v1 + 8 * result) = 3;
  return result;
}
