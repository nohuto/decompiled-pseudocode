/*
 * XREFs of ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x18026594C
 * Callers:
 *     ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z @ 0x1800F0530 (-AddDirtyRegion@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x180093B1C (-AddDirtyRegion@CBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x18019F8F8 (-AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::AddDirtyRegion(
        CDxHandleStereoBitmapRealization *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  CBitmapRealization::AddDirtyRegion((CDxHandleStereoBitmapRealization *)((char *)this - 192), a2);
  if ( *((_QWORD *)this - 21) )
    CD2DBitmapCache::AddInvalidRegion((CDxHandleStereoBitmapRealization *)((char *)this - 160), a2);
}
