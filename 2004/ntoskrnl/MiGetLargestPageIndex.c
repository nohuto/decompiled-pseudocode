/*
 * XREFs of MiGetLargestPageIndex @ 0x140315FF4
 * Callers:
 *     MiMapUserLargePages @ 0x140559290 (MiMapUserLargePages.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408C1E2C (MiAddPhysicalMemoryChunks.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408CDCA0 (MiQueryMemoryPhysicalContiguity.c)
 *     MmBuildLargePages @ 0x1408D40D4 (MmBuildLargePages.c)
 *     MiFindLargePageMemory @ 0x1408D6AE4 (MiFindLargePageMemory.c)
 *     MmManagePartitionCreateLargePages @ 0x1408D82D4 (MmManagePartitionCreateLargePages.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiGetLargestPageIndex()
{
  return (KeFeatureBits & 0x2000000000LL) == 0;
}
