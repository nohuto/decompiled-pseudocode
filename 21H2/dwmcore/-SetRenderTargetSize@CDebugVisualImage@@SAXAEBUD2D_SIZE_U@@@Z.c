/*
 * XREFs of ?SetRenderTargetSize@CDebugVisualImage@@SAXAEBUD2D_SIZE_U@@@Z @ 0x180086E0C
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     <none>
 */

void __fastcall CDebugVisualImage::SetRenderTargetSize(const struct D2D_SIZE_U *a1)
{
  if ( a1->width > (unsigned int)CDebugVisualImage::s_renderTargetSize
    && a1->height > HIDWORD(CDebugVisualImage::s_renderTargetSize) )
  {
    CDebugVisualImage::s_renderTargetSize = (CDisplayManager *)*a1;
  }
}
