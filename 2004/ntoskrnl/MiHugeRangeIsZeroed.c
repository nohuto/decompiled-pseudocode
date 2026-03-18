/*
 * XREFs of MiHugeRangeIsZeroed @ 0x14052DEA8
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1408D7378 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiHugeRangeIsZeroed(int a1)
{
  return (*(_DWORD *)(qword_140C4E470 + 8 * (*(_QWORD *)&a1 & 0x3FFFFLL)) & 0x3FFFFLL) != 1;
}
