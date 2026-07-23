/*
 * XREFs of MmFreePagesFromMdl @ 0x14024E380
 * Callers:
 *     sub_1403EA470 @ 0x1403EA470 (sub_1403EA470.c)
 *     MmFreeSecureKernelPages @ 0x140553944 (MmFreeSecureKernelPages.c)
 *     PopFreeHiberContext @ 0x14077717C (PopFreeHiberContext.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864EF0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1408651D8 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x1408654C4 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x1408655C8 (HalpDmaGrowScatterMapBuffers.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x1408973B4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140897A70 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140898180 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpWriteDumpFile @ 0x140898CE0 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x140899000 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     MmAllocateNonCachedMemory @ 0x1408C6850 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x1408C6A40 (MmFreeNonCachedMemory.c)
 *     ResFwFreeContext @ 0x1409F207C (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x14030A23C (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList);
}
