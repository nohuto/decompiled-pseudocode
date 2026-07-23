/*
 * XREFs of MiAssembleLargePagePfnList @ 0x14055E060
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x14055DC9C (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x14030ADE0 (MiUpdateLargePageBitMap.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6AD8 (MiGetPfnPageSizeIndex.c)
 */

unsigned __int64 __fastcall MiAssembleLargePagePfnList(__int64 a1, _QWORD *a2)
{
  unsigned int PfnPageSizeIndex; // eax
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 result; // rax

  PfnPageSizeIndex = MiGetPfnPageSizeIndex((__int64)a2);
  v5 = PfnPageSizeIndex;
  v6 = MiLargePageSizes[PfnPageSizeIndex];
  if ( v6 >= 0x200 && PfnPageSizeIndex > 1 )
    MiUpdateLargePageBitMap(
      *(_QWORD *)(qword_140C4E688 + 8 * ((a2[5] >> 39) & 0x3FFLL)),
      ((__int64)(a2 + 0xB000000000LL) / 48) & 0xFFFFFFFFFFFFFE00uLL,
      (((__int64)(a2 + 0xB000000000LL) / 48 + v6 + 511) & 0xFFFFFFFFFFFFFE00uLL)
    - (((__int64)(a2 + 0xB000000000LL) / 48) & 0xFFFFFFFFFFFFFE00uLL),
      0,
      0);
  result = v6;
  *a2 = *(_QWORD *)(a1 + 8 * v5);
  *(_QWORD *)(a1 + 8 * v5) = a2;
  return result;
}
