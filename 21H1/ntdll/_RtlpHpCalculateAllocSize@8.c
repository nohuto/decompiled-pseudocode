/*
 * XREFs of _RtlpHpCalculateAllocSize@8 @ 0x4B378261
 * Callers:
 *     _RtlpHpAllocateHeap@16 @ 0x4B37803E (_RtlpHpAllocateHeap@16.c)
 *     _RtlpHpComputeSizeInfo@20 @ 0x4B3782D4 (_RtlpHpComputeSizeInfo@20.c)
 *     _RtlpHpReallocComputeSizes@20 @ 0x4B3797A5 (_RtlpHpReallocComputeSizes@20.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpCalculateAllocSize(unsigned int a1, int a2)
{
  if ( (a2 & 0x10000000) != 0 )
    a1 += 8;
  if ( (a2 & 0x20000F08) != 0 )
    a1 = ((a1 + 7) & 0xFFFFFFF8) + 8;
  if ( !a1 )
    return 1;
  return a1;
}
