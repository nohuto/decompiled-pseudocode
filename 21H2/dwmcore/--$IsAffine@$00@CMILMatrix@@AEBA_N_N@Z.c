/*
 * XREFs of ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590
 * Callers:
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUHomogeneousPoint2D@@I@Z @ 0x1800091A4 (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUHomogeneousPoint2D@@I@Z.c)
 *     ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x18000AD5C (-Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1800102BC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003CF50 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18006C130 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBVCShape@@PEBVCMILMatrix@@2W4Enum@CpuClippingScopeMode@@@Z @ 0x180095830 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBVCShape@@PEBVCMILMatrix@@2W4Enum.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1800961B0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180098620 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@0W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N@Z @ 0x180099090 (-PushCpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@0W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatr.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009CC10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009DEF0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A2C90 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x1800A6DC0 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800ACA80 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800ACAC4 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800ACB5C (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AD4A4 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AD824 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800CA470 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800D10DC (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800D2A70 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x1800E44FC (-TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18018CBA8 (_anonymous_namespace_--DecomposeMatrix.c)
 *     TryFillRenderState @ 0x1801A86B8 (TryFillRenderState.c)
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x1801AF98C (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18020F3C0 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x1802609F0 (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180261004 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z @ 0x180261134 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z.c)
 *     ?TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z @ 0x1802612A8 (-TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsAffine<1>(__int64 a1, char a2)
{
  char v3; // al
  char v4; // r8
  bool v6; // dl

  v3 = (char)(4 * *(_BYTE *)(a1 + 65)) >> 6;
  if ( v3 )
  {
    v4 = 1;
    if ( v3 != 1 )
      return 0;
    if ( !a2 )
      return COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) < 0.000081380211;
    return v4;
  }
  else
  {
    v6 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                      - 1.0) & _xmm) < 0.000081380211;
    *(_BYTE *)(a1 + 65) ^= (*(_BYTE *)(a1 + 65) ^ (-16 - 32 * v6)) & 0x30;
    if ( !a2
      && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
    {
      return 0;
    }
    return v6;
  }
}
