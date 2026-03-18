/*
 * XREFs of ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800554DC
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18000B8E4 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18005464C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180056C40 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18005D490 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180087148 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008A870 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180098498 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801E56E8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x18020E450 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18025C060 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x1800555A8 (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800555F0 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005844C (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 */

char __fastcall CMILMatrix::Get2DScaleDimensionsWithPerspective(CMILMatrix *this, float *a2, float *a3, __int64 a4)
{
  int v9; // xmm1_4
  int v10; // xmm0_4
  int v11; // xmm1_4
  int v12; // xmm0_4
  int v13; // xmm1_4
  int v14; // xmm0_4
  int v15; // xmm1_4
  _DWORD v16[14]; // [rsp+20h] [rbp-38h] BYREF

  if ( CMILMatrix::Is2DAffineOrNaN(this, (bool)a2) )
  {
    CMILMatrix::Get2DScaleDimensions(this, a2, a3);
    return 1;
  }
  else
  {
    v9 = *((_DWORD *)this + 1);
    v16[0] = *(_DWORD *)this;
    v16[2] = *((_DWORD *)this + 3);
    v10 = *((_DWORD *)this + 5);
    v16[1] = v9;
    v11 = *((_DWORD *)this + 4);
    v16[4] = v10;
    v12 = *((_DWORD *)this + 12);
    v16[3] = v11;
    v13 = *((_DWORD *)this + 7);
    v16[6] = v12;
    v14 = *((_DWORD *)this + 15);
    v16[5] = v13;
    v15 = *((_DWORD *)this + 13);
    v16[8] = v14;
    v16[7] = v15;
    return ((__int64 (__fastcall *)(_DWORD *, float *, float *, __int64))Matrix3x3::Get2DScaleDimensionsWithPerspective)(
             v16,
             a2,
             a3,
             a4);
  }
}
