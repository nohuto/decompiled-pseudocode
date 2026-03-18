/*
 * XREFs of ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800D9574
 * Callers:
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@A@EAAXXZ @ 0x18010B210 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@A@EAAXXZ.c)
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@FA@EAAXXZ @ 0x18010B230 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@FA@EAAXXZ.c)
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@HA@EAAXXZ @ 0x18010B250 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@HA@EAAXXZ.c)
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@JA@EAAXXZ @ 0x18010B5F0 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@JA@EAAXXZ.c)
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@FI@EAAXXZ @ 0x18010BA70 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@FI@EAAXXZ.c)
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@HI@EAAXXZ @ 0x18010BA90 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@HI@EAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x1802A3AFC (-MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x1802A4B74 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x1802A60CC (-MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x1800D95E8 (-InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z.c)
 */

void __fastcall CBitmapRealization::MarkFullDirty(CBitmapRealization *this)
{
  CD2DBitmapCache *v1; // rbx

  v1 = (CBitmapRealization *)((char *)this - 376);
  CBitmapRealization::InvalidateDecodeBitmap((CBitmapRealization *)((char *)this - 376), 0);
  CD2DBitmapCache::MarkFullInvalid(v1);
}
