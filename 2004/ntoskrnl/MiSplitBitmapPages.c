/*
 * XREFs of MiSplitBitmapPages @ 0x14033E8EC
 * Callers:
 *     MiExpandPtes @ 0x14033D84C (MiExpandPtes.c)
 *     MiExtendDynamicBitMap @ 0x1403C621C (MiExtendDynamicBitMap.c)
 *     MiSplitMirrorBitMap @ 0x1407646F0 (MiSplitMirrorBitMap.c)
 *     MiSplitPfnBitMaps @ 0x1407A59C4 (MiSplitPfnBitMaps.c)
 *     MiMarkRetpolineBits @ 0x1408CD6B4 (MiMarkRetpolineBits.c)
 *     MiInitializeDriverImages @ 0x140A46EB8 (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x140A639D8 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x1402509D0 (MiMakeZeroedPageTablesEx.c)
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
