/*
 * XREFs of MiGetLargestPageIndex @ 0x1402C9DE0
 * Callers:
 *     MiMapUserLargePages @ 0x14055E730 (MiMapUserLargePages.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408C542C (MiAddPhysicalMemoryChunks.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D12A0 (MiQueryMemoryPhysicalContiguity.c)
 *     MmBuildLargePages @ 0x1408D76D4 (MmBuildLargePages.c)
 *     MiFindLargePageMemory @ 0x1408DA0E4 (MiFindLargePageMemory.c)
 *     MmManagePartitionCreateLargePages @ 0x1408DB8D4 (MmManagePartitionCreateLargePages.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiGetLargestPageIndex()
{
  return (KeFeatureBits & 0x2000000000LL) == 0;
}
