/*
 * XREFs of HalpMmAllocatePerProcessorMemory @ 0x1403AEB94
 * Callers:
 *     HalpTimerInitializeProfiling @ 0x1403AE8A0 (HalpTimerInitializeProfiling.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140A45C40 (HalpInitializePmcCounterSetInfo.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14037B0B0 (HalQueryMaximumProcessorCount.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403BA8B8 (HalpMmAllocateMemoryInternal.c)
 *     memset @ 0x140411300 (memset.c)
 */

void *__fastcall HalpMmAllocatePerProcessorMemory(__int64 a1)
{
  unsigned int v1; // edi
  void *MemoryInternal; // rax
  void *v3; // rbx

  v1 = HalQueryMaximumProcessorCount(a1) * a1;
  MemoryInternal = (void *)HalpMmAllocateMemoryInternal(v1, 1LL);
  v3 = MemoryInternal;
  if ( MemoryInternal )
    memset(MemoryInternal, 0, v1);
  return v3;
}
