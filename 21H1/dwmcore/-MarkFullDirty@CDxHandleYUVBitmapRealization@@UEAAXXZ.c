/*
 * XREFs of ?MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x1802670BC
 * Callers:
 *     ?MarkFullDirty@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXXZ @ 0x1800F08A0 (-MarkFullDirty@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXXZ.c)
 *     ?AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802663CC (-AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x1800C132C (-InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::MarkFullDirty(CDxHandleYUVBitmapRealization *this)
{
  CBitmapRealization::InvalidateDecodeBitmap((CDxHandleYUVBitmapRealization *)((char *)this - 432), 0);
  CBitmapRealization::MarkFullDirty((CDxHandleYUVBitmapRealization *)((char *)this - 88));
}
