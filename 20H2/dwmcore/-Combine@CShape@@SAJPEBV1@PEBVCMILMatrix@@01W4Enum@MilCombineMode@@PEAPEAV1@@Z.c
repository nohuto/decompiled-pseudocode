/*
 * XREFs of ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180072EDC
 * Callers:
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x180062DD0 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180072CD0 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180075FA0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180080D20 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800A08F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800EAA70 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x1800EB31C (-RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x18019D308 (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801B7E90 (-GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801C34D0 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z @ 0x1801F8AE0 (-AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F8C94 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F9140 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z @ 0x18025AA18 (-ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180072F50 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18025AAF0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CShape::Combine(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v14; // eax
  __int64 v15; // rcx

  v9 = CShape::TryOptimizedCombinePaths(a1, 0LL);
  v12 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v9, 0x170u, 0LL);
  }
  else if ( !*a6 )
  {
    v14 = CShape::D2DCombine(a1, v10, a3, a4, a5, a6);
    v12 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x17Bu, 0LL);
  }
  return v12;
}
