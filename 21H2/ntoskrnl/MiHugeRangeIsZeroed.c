/*
 * XREFs of MiHugeRangeIsZeroed @ 0x140587304
 * Callers:
 *     MiReleaseMemoryRuns @ 0x14096AA38 (MiReleaseMemoryRuns.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1409811F0 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiHugeRangeIsZeroed(int a1)
{
  return (*(_DWORD *)(qword_140C52968 + 8 * (*(_QWORD *)&a1 & 0x3FFFFFLL)) & 0x3FFFFFLL) != 1;
}
