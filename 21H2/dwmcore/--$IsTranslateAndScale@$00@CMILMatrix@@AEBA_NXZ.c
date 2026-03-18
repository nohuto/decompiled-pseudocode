/*
 * XREFs of ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AD824
 * Callers:
 *     ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x180007D58 (-DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@0W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N@Z @ 0x180099090 (-PushCpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@0W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatr.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009CC10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?IsCompatibleOutputScaling@COverlayContext@@AEAA_NAEBVCMILMatrix@@@Z @ 0x1800B9C44 (-IsCompatibleOutputScaling@COverlayContext@@AEAA_NAEBVCMILMatrix@@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800D10DC (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x18020142C (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802A6358 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800ACAC4 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AE6D8 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 */

char __fastcall CMILMatrix::IsTranslateAndScale<1>(__int64 a1)
{
  char v2; // al
  char v3; // di
  bool v4; // dl
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = (char)(16 * *(_BYTE *)(a1 + 65)) >> 6;
  if ( v2 )
  {
    v3 = 1;
    v4 = v2 == 1;
  }
  else
  {
    v3 = 1;
    v4 = CMILMatrix::IsAffine<1>(a1, 0)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - 0.0) & _xmm) < 0.000081380211;
    *(_BYTE *)(a1 + 65) &= 0xF3u;
    *(_BYTE *)(a1 + 65) |= (-4 - 8 * v4) & 0xC;
  }
  if ( !v4
    || !CMILMatrix::ProducesUniformZ<1>(a1)
    || !(unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a1, v5, v6, v7) )
  {
    return 0;
  }
  return v3;
}
