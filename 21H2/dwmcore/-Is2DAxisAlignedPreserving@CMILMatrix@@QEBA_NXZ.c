/*
 * XREFs of ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800AE2B4
 * Callers:
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAVCVisual@@@Z @ 0x180004728 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006CA8 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x18000B320 (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18000B8E4 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?CheckTransformAllowsOcclusion@COcclusionContext@@AEBAJAEBVCMILMatrix@@PEA_N@Z @ 0x180045B14 (-CheckTransformAllowsOcclusion@COcclusionContext@@AEBAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@PEBVCRoundedRectangleShape@@AEBVCMILMatrix@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18005739C (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@PEBVCRou.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x1800636A8 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18008AB80 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?ShouldRealizeCpuClipOnGpu@CDrawingContext@@AEBA_NPEBVCShape@@AEBVCMILMatrix@@@Z @ 0x18008B19C (-ShouldRealizeCpuClipOnGpu@CDrawingContext@@AEBA_NPEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x180093FA0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180098620 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18009B4C0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800A81A0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD920 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x1800B9AA0 (-BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800ED90C (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?TryEnableHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B86B0 (-TryEnableHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV-$TMilRect.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C1768 (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1801F1140 (-AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_del.c)
 *     ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ @ 0x18026062C (-Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ.c)
 * Callees:
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AE6D8 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D1D9C (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 */

char __fastcall CMILMatrix::Is2DAxisAlignedPreserving(CMILMatrix *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r11

  if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(this, a2, a3, a4)
    || (unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(this) )
  {
    return 1;
  }
  return v5;
}
