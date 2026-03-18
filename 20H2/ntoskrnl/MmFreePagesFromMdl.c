/*
 * XREFs of MmFreePagesFromMdl @ 0x14032E320
 * Callers:
 *     sub_1403E9990 @ 0x1403E9990 (sub_1403E9990.c)
 *     MmFreeSecureKernelPages @ 0x140551C34 (MmFreeSecureKernelPages.c)
 *     PopFreeHiberContext @ 0x140773150 (PopFreeHiberContext.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140867180 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140867468 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140867754 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140867858 (HalpDmaGrowScatterMapBuffers.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140899C84 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14089A340 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14089AA50 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpWriteDumpFile @ 0x14089B5B0 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14089B8D0 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     MmAllocateNonCachedMemory @ 0x1408C8F30 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x1408C9120 (MmFreeNonCachedMemory.c)
 *     ResFwFreeContext @ 0x1409F407C (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x14034E438 (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList);
}
