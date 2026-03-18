/*
 * XREFs of ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18009F37C
 * Callers:
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180007BA0 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180008190 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180008640 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180014AB0 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800630E0 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18009F1E0 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800C1574 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x1800C1A64 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M@Z @ 0x1800C293C (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_1800C293C.c)
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800C5300 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800C7A90 (-DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEB.c)
 *     ?GetBrushParameters@CClipBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801B7420 (-GetBrushParameters@CClipBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C39B0 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801D1D70 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801E6F40 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801F2430 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802093A0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18025ED4C (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180008B94 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 */

__int64 __fastcall CBrushDrawListGenerator::AttachInput(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 (__fastcall ****v5)(_QWORD, __int64); // r9
  __int64 result; // rax
  __int64 (__fastcall ***v7)(_QWORD, __int64); // rax
  __int64 (__fastcall ***v8)(_QWORD, __int64); // rdx

  v5 = (__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 8 * (a2 + 5LL));
  if ( v5 != a3 )
  {
    v7 = (__int64 (__fastcall ***)(_QWORD, __int64))*a3;
    *a3 = 0LL;
    v8 = *v5;
    *v5 = v7;
    if ( v8 )
      std::default_delete<CShape>::operator()(a1, v8);
  }
  result = *(unsigned int *)(a1 + 72);
  if ( (unsigned int)result <= a2 + 1 )
    result = a2 + 1;
  *(_DWORD *)(a1 + 72) = result;
  return result;
}
