/*
 * XREFs of MmFreePagesFromMdl @ 0x14031FCB0
 * Callers:
 *     sub_1403E5EC0 @ 0x1403E5EC0 (sub_1403E5EC0.c)
 *     MmFreeSecureKernelPages @ 0x14054DC14 (MmFreeSecureKernelPages.c)
 *     PopFreeHiberContext @ 0x14075F980 (PopFreeHiberContext.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140860464 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x14086074C (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140860A38 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140860B3C (HalpDmaGrowScatterMapBuffers.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140892CB4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140893370 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140893A80 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpWriteDumpFile @ 0x1408945E0 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x140894900 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     MmAllocateNonCachedMemory @ 0x1408C1DA0 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x1408C1F90 (MmFreeNonCachedMemory.c)
 *     ResFwFreeContext @ 0x1409EE07C (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140346FD4 (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList);
}
