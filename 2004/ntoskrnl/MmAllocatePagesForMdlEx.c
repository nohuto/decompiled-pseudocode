/*
 * XREFs of MmAllocatePagesForMdlEx @ 0x140313330
 * Callers:
 *     EtwpAllocateTraceBuffer @ 0x1402FF6F0 (EtwpAllocateTraceBuffer.c)
 *     PopGenerateMdl @ 0x140385968 (PopGenerateMdl.c)
 *     PopGenerateScratchMdl @ 0x140385B30 (PopGenerateScratchMdl.c)
 *     BgpFwAllocateMemory @ 0x1403997F4 (BgpFwAllocateMemory.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403CA624 (PpmHeteroInitializeHgsSupport.c)
 *     HalpAllocateCommonBufferThin @ 0x1404C63C0 (HalpAllocateCommonBufferThin.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140594030 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     IoReserveKsrPersistentMemory @ 0x140898F00 (IoReserveKsrPersistentMemory.c)
 *     ResFwGetContext @ 0x1409EE088 (ResFwGetContext.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140313410 (MmAllocatePartitionNodePagesForMdlEx.c)
 */

PMDL __stdcall MmAllocatePagesForMdlEx(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T TotalBytes,
        MEMORY_CACHING_TYPE CacheType,
        ULONG Flags)
{
  return (PMDL)MmAllocatePartitionNodePagesForMdlEx(
                 LowAddress.LowPart,
                 HighAddress.LowPart,
                 SkipBytes.LowPart,
                 TotalBytes,
                 CacheType,
                 *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL),
                 Flags,
                 0LL);
}
