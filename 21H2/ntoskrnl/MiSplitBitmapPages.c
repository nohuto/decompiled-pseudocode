/*
 * XREFs of MiSplitBitmapPages @ 0x140246420
 * Callers:
 *     MiExpandPtes @ 0x14026A818 (MiExpandPtes.c)
 *     MiExtendDynamicBitMap @ 0x1403D8D00 (MiExtendDynamicBitMap.c)
 *     MiSplitMirrorBitMap @ 0x1407FD710 (MiSplitMirrorBitMap.c)
 *     MiSplitPfnBitMaps @ 0x14082AFE0 (MiSplitPfnBitMaps.c)
 *     MiMarkRetpolineBits @ 0x140970C6C (MiMarkRetpolineBits.c)
 *     MiInitializeDriverImages @ 0x140B05E40 (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x140B1D5F4 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x14026DC5C (MiMakeZeroedPageTablesEx.c)
 */

__int64 __fastcall MiSplitBitmapPages(int a1, unsigned __int64 a2, __int64 a3)
{
  int v3; // r9d
  int v5; // r8d

  v3 = 9;
  if ( a1 != 13 )
    v3 = a1;
  v5 = 544;
  if ( ((v3 - 5) & 0xFFFFFFFB) != 0 )
  {
    if ( (unsigned int)(v3 - 14) > 2 && v3 != 8 && KeGetCurrentIrql() <= 1u )
      v5 = 545;
  }
  else
  {
    v5 = 560;
  }
  return MiMakeZeroedPageTablesEx(
           (unsigned int)(a2 >> 9) & 0xFFFFFFF8,
           (unsigned int)((a2 + ((unsigned __int64)(a3 - 1) >> 3)) >> 9) & 0xFFFFFFF8,
           v5,
           v3,
           0);
}
