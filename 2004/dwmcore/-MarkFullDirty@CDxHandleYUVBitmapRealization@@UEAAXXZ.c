/*
 * XREFs of ?MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x18026464C
 * Callers:
 *     ?MarkFullDirty@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXXZ @ 0x1800F3830 (-MarkFullDirty@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXXZ.c)
 *     ?AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x18026395C (-AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x1800C7D2C (-InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::MarkFullDirty(CDxHandleYUVBitmapRealization *this)
{
  CBitmapRealization::InvalidateDecodeBitmap((CDxHandleYUVBitmapRealization *)((char *)this - 432), 0);
  CBitmapRealization::MarkFullDirty((CDxHandleYUVBitmapRealization *)((char *)this - 88));
}
