/*
 * XREFs of ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18005C274
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18005B470 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x180059634 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PE.c)
 */

__int64 __fastcall CRenderData::DrawImageResource_FillMode(
        CRenderData *a1,
        const struct CVisualTree **a2,
        struct CDrawListEntryBuilder *a3,
        struct CImageSource *a4,
        struct D2D_RECT_F *a5,
        float a6)
{
  struct D2D_RECT_F v7; // [rsp+40h] [rbp-18h] BYREF

  v7 = *a5;
  return CRenderData::DrawImageResource_FillMode(a1, a2, a3, a4, 0LL, &v7, a6);
}
