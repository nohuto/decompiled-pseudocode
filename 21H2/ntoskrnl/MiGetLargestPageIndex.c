/*
 * XREFs of MiGetLargestPageIndex @ 0x1402486D0
 * Callers:
 *     MiMapUserLargePages @ 0x14055E970 (MiMapUserLargePages.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408C558C (MiAddPhysicalMemoryChunks.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D1400 (MiQueryMemoryPhysicalContiguity.c)
 *     MmBuildLargePages @ 0x1408D7834 (MmBuildLargePages.c)
 *     MiFindLargePageMemory @ 0x1408DA244 (MiFindLargePageMemory.c)
 *     MmManagePartitionCreateLargePages @ 0x1408DBA34 (MmManagePartitionCreateLargePages.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiGetLargestPageIndex()
{
  return (KeFeatureBits & 0x2000000000LL) == 0;
}
