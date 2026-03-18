/*
 * XREFs of MmAllocatePagesForMdlEx @ 0x1402630A0
 * Callers:
 *     EtwpAllocateTraceBuffer @ 0x140261A20 (EtwpAllocateTraceBuffer.c)
 *     PopGenerateMdl @ 0x14038DE68 (PopGenerateMdl.c)
 *     PopGenerateScratchMdl @ 0x140394AB4 (PopGenerateScratchMdl.c)
 *     BgpFwAllocateMemory @ 0x1403AA2B8 (BgpFwAllocateMemory.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x1403B2614 (HalpAllocateCommonBufferDmaThin.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403DCA14 (PpmHeteroInitializeHgsSupport.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x140511BD0 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140514A70 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1405164D0 (HalpAllocateCommonBufferDmarThin.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1405F7240 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     DifMmAllocatePagesForMdlExWrapper @ 0x1406169F0 (DifMmAllocatePagesForMdlExWrapper.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x140940CB0 (IoReserveKsrPersistentMemoryEx.c)
 *     ResFwGetContext @ 0x140AAB320 (ResFwGetContext.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140264F60 (MmAllocatePartitionNodePagesForMdlEx.c)
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
                 *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 138LL),
                 Flags,
                 0LL);
}
