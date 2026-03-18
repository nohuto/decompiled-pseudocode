/*
 * XREFs of MiHugeRangeIsZeroed @ 0x14052D858
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1408D6028 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiHugeRangeIsZeroed(int a1)
{
  return (*(_DWORD *)(qword_140C4E5B0 + 8 * (*(_QWORD *)&a1 & 0x3FFFFLL)) & 0x3FFFFLL) != 1;
}
