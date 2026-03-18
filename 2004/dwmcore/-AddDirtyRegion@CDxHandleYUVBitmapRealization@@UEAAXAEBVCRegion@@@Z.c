/*
 * XREFs of ?AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x18026395C
 * Callers:
 *     ?AddDirtyRegion@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z @ 0x1800F3680 (-AddDirtyRegion@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CDxHandleYUVBitmapRealization::AddDirtyRegion(
        CDxHandleYUVBitmapRealization *this,
        const struct CRegion *a2)
{
  CDxHandleYUVBitmapRealization::MarkFullDirty(this);
}
