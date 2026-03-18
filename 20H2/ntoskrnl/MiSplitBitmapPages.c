/*
 * XREFs of MiSplitBitmapPages @ 0x140320B3C
 * Callers:
 *     MiExpandPtes @ 0x1402531D4 (MiExpandPtes.c)
 *     MiExtendDynamicBitMap @ 0x1403C8CAC (MiExtendDynamicBitMap.c)
 *     MiSplitMirrorBitMap @ 0x140772D00 (MiSplitMirrorBitMap.c)
 *     MiSplitPfnBitMaps @ 0x1407B4B14 (MiSplitPfnBitMaps.c)
 *     MiMarkRetpolineBits @ 0x1408D34F4 (MiMarkRetpolineBits.c)
 *     MiInitializeDriverImages @ 0x140A4D154 (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x140A6ACA8 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x14024EC1C (MiMakeZeroedPageTablesEx.c)
 */

__int64 __fastcall MiSplitBitmapPages(int a1, unsigned __int64 a2, __int64 a3)
{
  int v3; // r9d
  unsigned int v5; // r8d

  v3 = 9;
  if ( a1 != 13 )
    v3 = a1;
  v5 = 544;
  if ( ((v3 - 5) & 0xFFFFFFFB) != 0 )
  {
    if ( (unsigned int)(v3 - 14) > 1 && v3 != 8 && KeGetCurrentIrql() <= 1u )
      v5 = 545;
  }
  else
  {
    v5 = 560;
  }
  return MiMakeZeroedPageTablesEx(
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a2 + ((unsigned __int64)(a3 - 1) >> 3)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           v5,
           v3,
           0);
}
