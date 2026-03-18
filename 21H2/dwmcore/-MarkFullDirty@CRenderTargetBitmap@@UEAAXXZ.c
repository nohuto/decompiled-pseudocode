/*
 * XREFs of ?MarkFullDirty@CRenderTargetBitmap@@UEAAXXZ @ 0x18028E4F0
 * Callers:
 *     ?MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXXZ @ 0x18010BE30 (-MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXXZ.c)
 *     ?MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXXZ @ 0x18010CAD0 (-MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXXZ.c)
 *     ?MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAXXZ @ 0x18010CFD0 (-MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAXXZ.c)
 *     ?MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXXZ @ 0x18010D310 (-MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::MarkFullDirty(CRenderTargetBitmap *this)
{
  CD2DBitmapCache::MarkFullInvalid((CRenderTargetBitmap *)((char *)this - 240));
}
