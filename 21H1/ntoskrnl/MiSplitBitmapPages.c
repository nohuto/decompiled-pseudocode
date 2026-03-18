/*
 * XREFs of MiSplitBitmapPages @ 0x140301DA4
 * Callers:
 *     MiExpandPtes @ 0x140300D04 (MiExpandPtes.c)
 *     MiExtendDynamicBitMap @ 0x1403C52AC (MiExtendDynamicBitMap.c)
 *     MiSplitMirrorBitMap @ 0x14075F530 (MiSplitMirrorBitMap.c)
 *     MiSplitPfnBitMaps @ 0x1407A3174 (MiSplitPfnBitMaps.c)
 *     MiMarkRetpolineBits @ 0x1408CC364 (MiMarkRetpolineBits.c)
 *     MiInitializeDriverImages @ 0x140A4165C (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x140A607E8 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x1402A9A00 (MiMakeZeroedPageTablesEx.c)
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
