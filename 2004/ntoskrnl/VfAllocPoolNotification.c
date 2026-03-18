/*
 * XREFs of VfAllocPoolNotification @ 0x1409DCFA4
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1409D15C0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierMmAllocateContiguousMemory @ 0x1409E2DD0 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1409E2EC0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1409E2FE0 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1409E3100 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateMappingAddress @ 0x1409E3200 (VerifierMmAllocateMappingAddress.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1409E3260 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x1409E3380 (VerifierMmAllocateNonCachedMemory.c)
 *     VerifierMmAllocatePagesForMdl @ 0x1409E3400 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x1409E34F0 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmCreateMdl @ 0x1409E36D0 (VerifierMmCreateMdl.c)
 *     VerifierMmMapIoSpace @ 0x1409E3980 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x1409E3AF0 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409E3BD0 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     ViPoolLogStackTrace @ 0x1409DD388 (ViPoolLogStackTrace.c)
 */

__int64 VfAllocPoolNotification()
{
  __int64 result; // rax

  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x400000) == 0
    || ((MmVerifierData & 1) != 0 || (MmVerifierData & 8) != 0)
    && (result = (unsigned int)VfFlightOptions, (VfFlightOptions & 9) != 0) )
  {
    if ( VfPoolTraces )
      return ViPoolLogStackTrace();
  }
  return result;
}
