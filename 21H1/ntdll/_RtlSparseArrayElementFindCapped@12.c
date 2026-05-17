/*
 * XREFs of _RtlSparseArrayElementFindCapped@12 @ 0x4B37E3DA
 * Callers:
 *     _RtlpHpVaMgrCtxFree@12 @ 0x4B37AC12 (_RtlpHpVaMgrCtxFree@12.c)
 * Callees:
 *     _RtlCSparseBitmapFindBitSetCapped@12 @ 0x4B37E029 (_RtlCSparseBitmapFindBitSetCapped@12.c)
 */

int __fastcall RtlSparseArrayElementFindCapped(int a1, int a2, int a3)
{
  unsigned int BitSetCapped; // eax

  BitSetCapped = RtlCSparseBitmapFindBitSetCapped(
                   a1 + 8,
                   8 * ((a2 + 1) << *(_DWORD *)(a1 + 4)) - 1,
                   8 * (a3 << *(_DWORD *)(a1 + 4)));
  if ( BitSetCapped == -1 )
    return 0;
  else
    return *(_DWORD *)(a1 + 12) + (BitSetCapped >> 3 >> *(_DWORD *)(a1 + 4) << *(_DWORD *)(a1 + 4));
}
