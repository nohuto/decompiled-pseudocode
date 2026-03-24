/*
 * XREFs of MmFreePagesFromMdl @ 0x1402D0000
 * Callers:
 *     sub_1403EA300 @ 0x1403EA300 (sub_1403EA300.c)
 *     MmFreeSecureKernelPages @ 0x140553704 (MmFreeSecureKernelPages.c)
 *     PopFreeHiberContext @ 0x140776FBC (PopFreeHiberContext.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864D90 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140865078 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140865364 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140865468 (HalpDmaGrowScatterMapBuffers.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140897254 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140897910 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140898020 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpWriteDumpFile @ 0x140898B80 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x140898EA0 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     MmAllocateNonCachedMemory @ 0x1408C66F0 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x1408C68E0 (MmFreeNonCachedMemory.c)
 *     ResFwFreeContext @ 0x1409F107C (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1402FF4EC (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList);
}
