/*
 * XREFs of ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x1800373BC
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000FC10 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180015A60 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x180036970 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M@Z @ 0x1800700DC (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800A8598 (-DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEB.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C81B0 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020DBA0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18003A930 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

CBrushDrawListGenerator *__fastcall CBrushDrawListGenerator::CBrushDrawListGenerator(
        CBrushDrawListGenerator *this,
        struct CDrawingContext *a2)
{
  D2D_SIZE_F v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = (D2D_SIZE_F)_mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  CBrushDrawListGenerator::CBrushDrawListGenerator(this, a2, &v4);
  return this;
}
