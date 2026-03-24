/*
 * XREFs of MiHugeRangeIsZeroed @ 0x140533378
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1408DA978 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiHugeRangeIsZeroed(int a1)
{
  return (*(_DWORD *)(qword_140C4E670 + 8 * (*(_QWORD *)&a1 & 0x3FFFFLL)) & 0x3FFFFLL) != 1;
}
