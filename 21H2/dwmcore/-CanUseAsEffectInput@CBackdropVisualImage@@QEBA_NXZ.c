/*
 * XREFs of ?CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ @ 0x1800E109C
 * Callers:
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000959C (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180053AAC (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18005464C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008D06C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 * Callees:
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x180086C90 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 */

char __fastcall CBackdropVisualImage::CanUseAsEffectInput(CBackdropVisualImage *this)
{
  bool IsValid; // al
  __int64 v2; // rcx
  char v3; // dl

  IsValid = CBackdropVisualImage::IsValid(this);
  v3 = 0;
  if ( IsValid )
    return *(_BYTE *)(v2 + 1952) != 0;
  return v3;
}
