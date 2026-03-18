/*
 * XREFs of ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800BDEAC
 * Callers:
 *     ?RecordTransformAndColorSpace@CFlipExSwapchainStatistics@@UEAA_NAEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180017A50 (-RecordTransformAndColorSpace@CFlipExSwapchainStatistics@@UEAA_NAEBVCMILMatrix@@W4DXGI_COLOR_SPA.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180019CE4 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_N_N@Z @ 0x18001CD84 (-Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18004B760 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?CheckTransformAllowsOcclusion@COcclusionContext@@AEBAJAEBVCMILMatrix@@PEA_N@Z @ 0x18004EFBC (-CheckTransformAllowsOcclusion@COcclusionContext@@AEBAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800619C4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180072F50 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180075FA0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?UsePixelSnapping@CVisual@@AEBA_NAEBVCMILMatrix@@@Z @ 0x1800774EC (-UsePixelSnapping@CVisual@@AEBA_NAEBVCMILMatrix@@@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180083230 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18008A2F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008B360 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180096E60 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x180097A44 (-GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x18009B9A0 (-BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009EE90 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800A08F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800B5EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800B6D58 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7D48 (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801828F4 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18008CFA0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

char __fastcall CMILMatrix::Is2DAxisAlignedPreserving<1>(__int64 a1)
{
  char v1; // dl
  float *v2; // r10

  if ( (!CMILMatrix::Is2DAffine<1>(a1, 1)
     || COERCE_FLOAT(COERCE_UNSIGNED_INT(v2[1] - 0.0) & _xmm) >= 0.000081380211
     || COERCE_FLOAT(COERCE_UNSIGNED_INT(v2[4] - 0.0) & _xmm) >= 0.000081380211)
    && (COERCE_FLOAT(COERCE_UNSIGNED_INT(*v2 - 0.0) & _xmm) >= 0.000081380211
     || COERCE_FLOAT(COERCE_UNSIGNED_INT(v2[5] - 0.0) & _xmm) >= 0.000081380211) )
  {
    return 0;
  }
  return v1;
}
