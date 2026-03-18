/*
 * XREFs of HalpMmAllocatePerProcessorMemory @ 0x1403AC5A4
 * Callers:
 *     HalpTimerInitializeProfiling @ 0x1403AC2B0 (HalpTimerInitializeProfiling.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140A3F9A0 (HalpInitializePmcCounterSetInfo.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x140379380 (HalQueryMaximumProcessorCount.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403B7E18 (HalpMmAllocateMemoryInternal.c)
 *     memset @ 0x14040A280 (memset.c)
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
