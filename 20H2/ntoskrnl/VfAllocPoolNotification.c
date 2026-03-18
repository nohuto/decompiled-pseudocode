/*
 * XREFs of VfAllocPoolNotification @ 0x1409E2FC4
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1409D75E0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierMmAllocateContiguousMemory @ 0x1409E8DF0 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1409E8EE0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1409E9000 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1409E9120 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateMappingAddress @ 0x1409E9220 (VerifierMmAllocateMappingAddress.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1409E9280 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x1409E93A0 (VerifierMmAllocateNonCachedMemory.c)
 *     VerifierMmAllocatePagesForMdl @ 0x1409E9420 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x1409E9510 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmCreateMdl @ 0x1409E96F0 (VerifierMmCreateMdl.c)
 *     VerifierMmMapIoSpace @ 0x1409E99A0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x1409E9B10 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409E9BF0 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     ViPoolLogStackTrace @ 0x1409E33A8 (ViPoolLogStackTrace.c)
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
