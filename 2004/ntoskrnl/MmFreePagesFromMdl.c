/*
 * XREFs of MmFreePagesFromMdl @ 0x14035D760
 * Callers:
 *     sub_1403E6D00 @ 0x1403E6D00 (sub_1403E6D00.c)
 *     MmFreeSecureKernelPages @ 0x14054E264 (MmFreeSecureKernelPages.c)
 *     PopFreeHiberContext @ 0x140767A78 (PopFreeHiberContext.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140861760 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140861A48 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140861D34 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140861E38 (HalpDmaGrowScatterMapBuffers.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140893FD4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140894690 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140894DA0 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpWriteDumpFile @ 0x140895900 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x140895C20 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     MmAllocateNonCachedMemory @ 0x1408C30F0 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x1408C32E0 (MmFreeNonCachedMemory.c)
 *     ResFwFreeContext @ 0x1409EE224 (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140317C94 (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  __int64 v1; // r8

  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList, 0, v1);
}
