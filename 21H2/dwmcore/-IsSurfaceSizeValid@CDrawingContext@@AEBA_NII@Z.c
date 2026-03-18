/*
 * XREFs of ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x1801B2D14
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1801B3660 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801DA300 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetMaxTextureSize@CDrawingContext@@QEBAI_N@Z @ 0x1801B2B94 (-GetMaxTextureSize@CDrawingContext@@QEBAI_N@Z.c)
 */

bool __fastcall CDrawingContext::IsSurfaceSizeValid(CDrawingContext *this)
{
  unsigned int MaxTextureSize; // eax
  unsigned int v2; // r8d
  unsigned int v3; // r9d

  MaxTextureSize = CDrawingContext::GetMaxTextureSize(this, 0);
  return v3 <= MaxTextureSize && v2 <= MaxTextureSize;
}
