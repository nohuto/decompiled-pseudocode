/*
 * XREFs of ?AddDirtyRegion@CRenderTargetBitmap@@UEAAXAEBVCRegion@@@Z @ 0x18019F57C
 * Callers:
 *     ?AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z @ 0x1800ED4B0 (-AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXAEBVCRegion@@@Z @ 0x1800F0920 (-AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXAEBVCRegion@@@Z @ 0x1800F0A80 (-AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::AddDirtyRegion(CRenderTargetBitmap *this, const struct CRegion *a2)
{
  CD2DBitmapCache::AddInvalidRegion((CRenderTargetBitmap *)((char *)this - 240), a2);
}
