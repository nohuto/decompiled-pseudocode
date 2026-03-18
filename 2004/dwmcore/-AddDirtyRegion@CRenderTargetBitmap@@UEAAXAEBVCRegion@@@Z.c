/*
 * XREFs of ?AddDirtyRegion@CRenderTargetBitmap@@UEAAXAEBVCRegion@@@Z @ 0x18019C9CC
 * Callers:
 *     ?AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z @ 0x1800F0440 (-AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXAEBVCRegion@@@Z @ 0x1800F38B0 (-AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXAEBVCRegion@@@Z @ 0x1800F3A10 (-AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::AddDirtyRegion(CRenderTargetBitmap *this, const struct CRegion *a2)
{
  CD2DBitmapCache::AddInvalidRegion((CRenderTargetBitmap *)((char *)this - 240), a2);
}
