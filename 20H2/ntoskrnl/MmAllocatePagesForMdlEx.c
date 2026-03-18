/*
 * XREFs of MmAllocatePagesForMdlEx @ 0x140334170
 * Callers:
 *     EtwpAllocateTraceBuffer @ 0x140360E40 (EtwpAllocateTraceBuffer.c)
 *     PopGenerateMdl @ 0x140387B08 (PopGenerateMdl.c)
 *     PopGenerateScratchMdl @ 0x140387CD0 (PopGenerateScratchMdl.c)
 *     BgpFwAllocateMemory @ 0x14039BCB4 (BgpFwAllocateMemory.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403CD264 (PpmHeteroInitializeHgsSupport.c)
 *     HalpAllocateCommonBufferThin @ 0x1404C9920 (HalpAllocateCommonBufferThin.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140597AD0 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     IoReserveKsrPersistentMemory @ 0x14089EA30 (IoReserveKsrPersistentMemory.c)
 *     ResFwGetContext @ 0x1409F4298 (ResFwGetContext.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1403341D0 (MmAllocatePartitionNodePagesForMdlEx.c)
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
