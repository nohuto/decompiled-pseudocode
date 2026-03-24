/*
 * XREFs of MiSplitBitmapPages @ 0x1402B40F0
 * Callers:
 *     MiExpandPtes @ 0x1402B3298 (MiExpandPtes.c)
 *     MiExtendDynamicBitMap @ 0x1403C984C (MiExtendDynamicBitMap.c)
 *     MiSplitMirrorBitMap @ 0x1407776D0 (MiSplitMirrorBitMap.c)
 *     MiSplitPfnBitMaps @ 0x1407B9774 (MiSplitPfnBitMaps.c)
 *     MiMarkRetpolineBits @ 0x1408D0CB4 (MiMarkRetpolineBits.c)
 *     MiInitializeDriverImages @ 0x140A4E6F4 (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x140A68218 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x14039DE40 (MiMakeZeroedPageTables.c)
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
