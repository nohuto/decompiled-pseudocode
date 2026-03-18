/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800893A0
 * Callers:
 *     ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180088E30 (-GetUnOccludedWorldShape@CRectanglesShape@@UEBAJV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008A438 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800978F0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800A6180 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800A81A0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800A8F20 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x1800ABBF0 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD920 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x1800B6BF0 (-IntersectWithRect@CRegionShape@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800D32D4 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800D3334 (-BuildFromRectFs@CRectanglesShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800894E4 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

__int64 __fastcall DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
        __int64 a1,
        void *a2,
        unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v6; // edi
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  void *Src; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 24);
  v6 = v3 + a3;
  if ( v3 + a3 < v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0LL, -2147024362, 0xB5u);
    return 2147942934LL;
  }
  else if ( v6 > *(_DWORD *)(a1 + 20) )
  {
    Src = a2;
    v8 = DynArrayImpl<0>::Grow(a1, 16, a3, 0, (__int64)&Src);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0xC0u);
    }
    else
    {
      memcpy_0((void *)(*(_QWORD *)a1 + (unsigned int)(16 * *(_DWORD *)(a1 + 24))), Src, 16 * a3);
      *(_DWORD *)(a1 + 24) += a3;
    }
    return v10;
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)a1 + 16LL * v3), a2, 16LL * a3);
    result = 0LL;
    *(_DWORD *)(a1 + 24) = v6;
  }
  return result;
}
