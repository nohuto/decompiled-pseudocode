/*
 * XREFs of ?MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x18026386C
 * Callers:
 *     ?MarkFullDirty@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXXZ @ 0x1800F3480 (-MarkFullDirty@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXXZ.c)
 *     ?AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x180262B7C (-AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x1800C721C (-InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::MarkFullDirty(CDxHandleYUVBitmapRealization *this)
{
  CBitmapRealization::InvalidateDecodeBitmap((CDxHandleYUVBitmapRealization *)((char *)this - 432), 0);
  CBitmapRealization::MarkFullDirty((CDxHandleYUVBitmapRealization *)((char *)this - 88));
}
