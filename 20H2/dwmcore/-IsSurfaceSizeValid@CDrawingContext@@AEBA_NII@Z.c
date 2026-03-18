/*
 * XREFs of ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x1800105A0
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180006588 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800102BC (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 * Callees:
 *     ?GetMaxTextureSize@CDrawingContext@@QEBAI_N@Z @ 0x1800105CC (-GetMaxTextureSize@CDrawingContext@@QEBAI_N@Z.c)
 */

bool __fastcall CDrawingContext::IsSurfaceSizeValid(CDrawingContext *this)
{
  unsigned int MaxTextureSize; // eax
  unsigned int v2; // r8d
  unsigned int v3; // r9d

  MaxTextureSize = CDrawingContext::GetMaxTextureSize(this, 0);
  return v3 <= MaxTextureSize && v2 <= MaxTextureSize;
}
