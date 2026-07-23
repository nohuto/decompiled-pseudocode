/*
 * XREFs of HalpPreAllocateKInterrupts @ 0x140A749EC
 * Callers:
 *     HalpInterruptInitSystem @ 0x14099C890 (HalpInterruptInitSystem.c)
 * Callees:
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403A24C4 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 HalpPreAllocateKInterrupts()
{
  int MaximumRegisteredProcessorCount; // eax
  int v1; // ebx
  unsigned int v2; // esi
  PVOID PoolWithTag; // rax
  __int64 v4; // rdi

  if ( HalpKInterruptPostPhaseZero )
    return 0LL;
  MaximumRegisteredProcessorCount = HalpQueryMaximumRegisteredProcessorCount();
  v1 = 16 * MaximumRegisteredProcessorCount;
  v2 = 4608 * MaximumRegisteredProcessorCount;
  PoolWithTag = ExAllocatePoolWithTag(
                  NonPagedPoolNx,
                  (unsigned int)(4608 * MaximumRegisteredProcessorCount),
                  0x206C6148u);
  v4 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v2);
    HalpKInterruptPostPhaseZero = v4;
    HalpKInterruptPostPhaseZeroTotal = v1;
    return 0LL;
  }
  HalpInterruptLastProblem = 30;
  return 3221225495LL;
}
