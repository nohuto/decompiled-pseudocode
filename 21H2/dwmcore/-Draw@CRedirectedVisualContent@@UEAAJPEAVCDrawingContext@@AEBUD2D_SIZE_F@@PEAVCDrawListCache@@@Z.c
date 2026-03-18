/*
 * XREFs of ?Draw@CRedirectedVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18025B5E4
 * Callers:
 *     ?Draw@CRedirectedVisualContent@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180107DF0 (-Draw@CRedirectedVisualContent@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawL.c)
 * Callees:
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAVCVisual@@@Z @ 0x180004728 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 */

__int64 __fastcall CRedirectedVisualContent::Draw(
        struct CVisualTree **this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CDrawingContext::DrawSubVisualTree((__int64)a2, *(this - 7), (__int64)(this - 6), 0LL);
  return 0LL;
}
