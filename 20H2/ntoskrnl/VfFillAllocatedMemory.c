/*
 * XREFs of VfFillAllocatedMemory @ 0x1409E3004
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1409D75E0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierMmAllocateContiguousMemory @ 0x1409E8DF0 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1409E8EE0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1409E9000 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1409E9120 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x1409E93A0 (VerifierMmAllocateNonCachedMemory.c)
 *     VfFillAllocatePagesForMdl @ 0x1409EA4E8 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     memset @ 0x140411300 (memset.c)
 */

void *__fastcall VfFillAllocatedMemory(void *a1, size_t a2)
{
  unsigned __int8 LowPart; // al
  void *result; // rax

  LowPart = KeQueryPerformanceCounter(0LL).LowPart;
  if ( a2 >= 0x100 )
    a2 = 256LL;
  if ( a2 != 256 )
    return memset(a1, LowPart | 1u, a2);
  result = (void *)(((((LowPart | 1LL) << 8) | LowPart | 1LL) << 16) | ((LowPart | 1LL) << 8) | LowPart | 1LL | ((((((LowPart | 1LL) << 8) | LowPart | 1LL) << 16) | ((LowPart | 1LL) << 8) | LowPart | 1LL) << 32));
  memset64(a1, (unsigned __int64)result, 0x20uLL);
  return result;
}
