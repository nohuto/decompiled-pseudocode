/*
 * XREFs of MiGetLargestPageIndex @ 0x140345334
 * Callers:
 *     MiMapUserLargePages @ 0x140558C40 (MiMapUserLargePages.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408C0ADC (MiAddPhysicalMemoryChunks.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408CC950 (MiQueryMemoryPhysicalContiguity.c)
 *     MmBuildLargePages @ 0x1408D2D84 (MmBuildLargePages.c)
 *     MiFindLargePageMemory @ 0x1408D5794 (MiFindLargePageMemory.c)
 *     MmManagePartitionCreateLargePages @ 0x1408D6F84 (MmManagePartitionCreateLargePages.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiGetLargestPageIndex()
{
  return (KeFeatureBits & 0x2000000000LL) == 0;
}
