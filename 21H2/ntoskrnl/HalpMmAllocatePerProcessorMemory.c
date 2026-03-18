/*
 * XREFs of HalpMmAllocatePerProcessorMemory @ 0x1403BB634
 * Callers:
 *     HalpTimerInitializeProfiling @ 0x1403BB340 (HalpTimerInitializeProfiling.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140AF89EC (HalpInitializePmcCounterSetInfo.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403BF104 (HalpMmAllocateMemoryInternal.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall HalpMmAllocatePerProcessorMemory(int a1)
{
  unsigned int v1; // edi
  void *MemoryInternal; // rax
  void *v3; // rbx

  v1 = HalQueryMaximumProcessorCount() * a1;
  MemoryInternal = (void *)HalpMmAllocateMemoryInternal(v1, 1LL);
  v3 = MemoryInternal;
  if ( MemoryInternal )
    memset(MemoryInternal, 0, v1);
  return v3;
}
