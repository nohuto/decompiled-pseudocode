/*
 * XREFs of ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800C7CB8
 * Callers:
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@A@EAAXXZ @ 0x1800F2D60 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@A@EAAXXZ.c)
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@FI@EAAXXZ @ 0x1800F31C0 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@FI@EAAXXZ.c)
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@HI@EAAXXZ @ 0x1800F31D0 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@HI@EAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x1802620FC (-MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x180263268 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x18026464C (-MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CSectionBitmapRealization@@UEAAXXZ @ 0x180265454 (-MarkFullDirty@CSectionBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x1800C7D2C (-InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z.c)
 */

void __fastcall CBitmapRealization::MarkFullDirty(CBitmapRealization *this)
{
  CD2DBitmapCache *v1; // rbx

  v1 = (CBitmapRealization *)((char *)this - 344);
  CBitmapRealization::InvalidateDecodeBitmap((CBitmapRealization *)((char *)this - 344), 0);
  CD2DBitmapCache::MarkFullInvalid(v1);
}
