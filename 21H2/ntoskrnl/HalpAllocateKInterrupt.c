/*
 * XREFs of HalpAllocateKInterrupt @ 0x1403A29E8
 * Callers:
 *     HalpCreateInterrupt @ 0x1403A2834 (HalpCreateInterrupt.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char *__fastcall HalpAllocateKInterrupt(int a1, int a2)
{
  char *v2; // r10
  char *PoolWithTag; // r9
  unsigned __int64 v6; // rcx

  v2 = (char *)&HalpKInterruptHeap;
  PoolWithTag = (char *)&HalpKInterruptHeap + 288 * (unsigned int)HalpKInterruptHeapUsed;
  while ( v2 < PoolWithTag )
  {
    if ( *((_DWORD *)v2 + 24) == a1 && *((_DWORD *)v2 + 22) == a2 )
      return v2;
    v2 += 288;
  }
  v6 = HalpKInterruptPostPhaseZero;
  if ( HalpKInterruptPostPhaseZero )
  {
    while ( v6 < HalpKInterruptPostPhaseZero + 288 * (unsigned __int64)(unsigned int)HalpKInterruptPostPhaseZeroUsed )
    {
      if ( *(_DWORD *)(v6 + 96) == a1 && *(_DWORD *)(v6 + 88) == a2 )
        return (char *)v6;
      v6 += 288LL;
    }
  }
  if ( (unsigned int)HalpKInterruptHeapUsed < 0x10 )
  {
    ++HalpKInterruptHeapUsed;
  }
  else if ( HalpKInterruptPostPhaseZeroUsed >= (unsigned int)HalpKInterruptPostPhaseZeroTotal )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x206C6148u);
  }
  else
  {
    PoolWithTag = (char *)(HalpKInterruptPostPhaseZero + 288LL * (unsigned int)HalpKInterruptPostPhaseZeroUsed++);
  }
  if ( !PoolWithTag )
    HalpInterruptLastProblem = 30;
  return PoolWithTag;
}
