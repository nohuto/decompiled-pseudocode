/*
 * XREFs of _RtlSparseArrayElementAllocated@8 @ 0x4B37E3A6
 * Callers:
 *     _RtlpHpVaMgrCtxFree@12 @ 0x4B37AC12 (_RtlpHpVaMgrCtxFree@12.c)
 *     _RtlpHpVaMgrCtxQuery@12 @ 0x4B37AD9C (_RtlpHpVaMgrCtxQuery@12.c)
 *     _RtlpHpVaMgrRangeFind@16 @ 0x4B37B145 (_RtlpHpVaMgrRangeFind@16.c)
 * Callees:
 *     _RtlCSparseBitmapFindBitSetCapped@12 @ 0x4B37E029 (_RtlCSparseBitmapFindBitSetCapped@12.c)
 */

int __fastcall RtlSparseArrayElementAllocated(int a1, int a2)
{
  if ( RtlCSparseBitmapFindBitSetCapped(a1 + 8, 8 * (a2 << *(_DWORD *)(a1 + 4)), 8 << *(_DWORD *)(a1 + 4)) == -1 )
    return 0;
  else
    return *(_DWORD *)(a1 + 12) + (a2 << *(_DWORD *)(a1 + 4));
}
