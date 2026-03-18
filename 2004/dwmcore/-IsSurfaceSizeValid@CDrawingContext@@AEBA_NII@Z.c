/*
 * XREFs of ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x180010DE0
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180006B98 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x180010AFC (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 * Callees:
 *     ?GetMaxTextureSize@CDrawingContext@@QEBAI_N@Z @ 0x180010E0C (-GetMaxTextureSize@CDrawingContext@@QEBAI_N@Z.c)
 */

bool __fastcall CDrawingContext::IsSurfaceSizeValid(CDrawingContext *this)
{
  unsigned int MaxTextureSize; // eax
  unsigned int v2; // r8d
  unsigned int v3; // r9d

  MaxTextureSize = CDrawingContext::GetMaxTextureSize(this, 0);
  return v3 <= MaxTextureSize && v2 <= MaxTextureSize;
}
