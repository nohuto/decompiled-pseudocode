/*
 * XREFs of MiSplitBitmapPages @ 0x1402322A0
 * Callers:
 *     MiExpandPtes @ 0x140231448 (MiExpandPtes.c)
 *     MiExtendDynamicBitMap @ 0x1403C99EC (MiExtendDynamicBitMap.c)
 *     MiSplitMirrorBitMap @ 0x140777890 (MiSplitMirrorBitMap.c)
 *     MiSplitPfnBitMaps @ 0x1407B9C94 (MiSplitPfnBitMaps.c)
 *     MiMarkRetpolineBits @ 0x1408D0E14 (MiMarkRetpolineBits.c)
 *     MiInitializeDriverImages @ 0x140A4F6F4 (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x140A69218 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x14039DF90 (MiMakeZeroedPageTables.c)
 */

__int64 __fastcall MiSplitBitmapPages(int a1, unsigned __int64 a2, __int64 a3)
{
  int v3; // r9d
  __int64 v5; // r8

  v3 = 9;
  if ( a1 != 13 )
    v3 = a1;
  v5 = 544LL;
  if ( ((v3 - 5) & 0xFFFFFFFB) != 0 )
  {
    if ( (unsigned int)(v3 - 14) > 1 && v3 != 8 && KeGetCurrentIrql() <= 1u )
      v5 = 545LL;
  }
  else
  {
    v5 = 560LL;
  }
  return MiMakeZeroedPageTables(
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a2 + ((unsigned __int64)(a3 - 1) >> 3)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           v5);
}
