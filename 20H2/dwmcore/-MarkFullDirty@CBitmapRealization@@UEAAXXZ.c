/*
 * XREFs of ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800C71A8
 * Callers:
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@A@EAAXXZ @ 0x1800F29B0 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@A@EAAXXZ.c)
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@FI@EAAXXZ @ 0x1800F2E10 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@FI@EAAXXZ.c)
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@HI@EAAXXZ @ 0x1800F2E20 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@HI@EAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x18026131C (-MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x180262488 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x18026386C (-MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CSectionBitmapRealization@@UEAAXXZ @ 0x180264674 (-MarkFullDirty@CSectionBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x1800C721C (-InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z.c)
 */

void __fastcall CBitmapRealization::MarkFullDirty(CBitmapRealization *this)
{
  CD2DBitmapCache *v1; // rbx

  v1 = (CBitmapRealization *)((char *)this - 344);
  CBitmapRealization::InvalidateDecodeBitmap((CBitmapRealization *)((char *)this - 344), 0);
  CD2DBitmapCache::MarkFullInvalid(v1);
}
