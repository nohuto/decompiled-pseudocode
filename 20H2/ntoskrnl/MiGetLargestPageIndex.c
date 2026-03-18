/*
 * XREFs of MiGetLargestPageIndex @ 0x140328A50
 * Callers:
 *     MiMapUserLargePages @ 0x14055CC60 (MiMapUserLargePages.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408C7C6C (MiAddPhysicalMemoryChunks.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D3AE0 (MiQueryMemoryPhysicalContiguity.c)
 *     MmBuildLargePages @ 0x1408D9F14 (MmBuildLargePages.c)
 *     MiFindLargePageMemory @ 0x1408DC924 (MiFindLargePageMemory.c)
 *     MmManagePartitionCreateLargePages @ 0x1408DE114 (MmManagePartitionCreateLargePages.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiGetLargestPageIndex()
{
  return (KeFeatureBits & 0x2000000000LL) == 0;
}
