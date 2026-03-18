/*
 * XREFs of MiHugeRangeIsZeroed @ 0x140531878
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1408DD1B8 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiHugeRangeIsZeroed(int a1)
{
  return (*(_DWORD *)(qword_140C4E4F0 + 8 * (*(_QWORD *)&a1 & 0x3FFFFLL)) & 0x3FFFFLL) != 1;
}
