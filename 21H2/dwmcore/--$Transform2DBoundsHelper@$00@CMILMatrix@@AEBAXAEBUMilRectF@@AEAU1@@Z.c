/*
 * XREFs of ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE2E0
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008D06C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800978F0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009CC10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A2C90 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x1800B1268 (-GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z.c)
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B5C00 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@PE.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800D842C (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?DrawBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@@Z @ 0x1800E2A80 (-DrawBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@@Z.c)
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E2B78 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801B2258 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?TryEnableHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B86B0 (-TryEnableHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV-$TMilRect.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1801D8EC0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801DA300 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180203780 (-CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180203DE0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILM.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18020F3C0 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180222AD0 (-CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AE.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180222DB0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x180223308 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180244F00 (-CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXA.c)
 * Callees:
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AE6D8 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUMilPoint2F@@$0?0@gsl@@@Z @ 0x1800AE7CC (--$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@R.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x1800AE858 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

float *__fastcall CMILMatrix::Transform2DBoundsHelper<1>(__int64 a1, __int64 a2, float *a3, __int64 a4)
{
  char v4; // bp
  char v5; // si
  char v6; // al
  __int64 v8; // rdi
  __int64 v9; // r11
  float *result; // rax
  unsigned int v11; // edx
  unsigned int i; // ecx
  float *v13; // r11
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  _QWORD v18[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v19[32]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = (char)(4 * *(_BYTE *)(a1 + 64)) >> 6;
  v8 = a2;
  v9 = a1;
  if ( v6 )
  {
    LOBYTE(a2) = v6 == 1;
  }
  else
  {
    LOBYTE(a2) = (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a1, a2, a3, a4)
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v9 - 1.0) & _xmm) < 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v9 + 20) - 1.0) & _xmm) < 0.000081380211;
    *(_BYTE *)(v9 + 64) &= 0xCFu;
    *(_BYTE *)(v9 + 64) |= (-16 - 32 * a2) & 0x30;
  }
  if ( (_BYTE)a2 )
  {
    *a3 = *(float *)v8 + *(float *)(v9 + 48);
    a3[1] = *(float *)(v8 + 4) + *(float *)(v9 + 52);
    a3[2] = *(float *)(v8 + 8) + *(float *)(v9 + 48);
    a3[3] = *(float *)(v8 + 12) + *(float *)(v9 + 52);
LABEL_5:
    v5 = 1;
    goto LABEL_6;
  }
  if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v9, a2, a3, a4) )
  {
    CMILMatrix::Transform2DRectToPerspective(
      (CMILMatrix *)v13,
      (const struct MilRectF *)v8,
      (struct MilPoint2F *const)v19);
    result = (float *)v19;
    v11 = 8;
    goto LABEL_7;
  }
  *a3 = (float)(*v13 * *(float *)v8) + v13[12];
  a3[1] = (float)(*(float *)(v8 + 4) * v13[5]) + v13[13];
  a3[2] = (float)(*(float *)(v8 + 8) * *v13) + v13[12];
  a3[3] = (float)(*(float *)(v8 + 12) * v13[5]) + v13[13];
  if ( *v13 > 0.0 && v13[5] > 0.0 )
    goto LABEL_5;
LABEL_6:
  result = a3;
  v11 = 4;
  v4 = 1;
LABEL_7:
  for ( i = 0; i < v11; ++i )
    ++result;
  if ( !v5 )
  {
    if ( v4 )
    {
      v14 = *a3;
      v15 = a3[2];
      if ( *a3 > v15 )
      {
        *a3 = v15;
        a3[2] = v14;
      }
      v16 = a3[1];
      v17 = a3[3];
      if ( v16 > v17 )
      {
        a3[1] = v17;
        a3[3] = v16;
      }
    }
    else
    {
      v18[0] = 4LL;
      v18[1] = v19;
      return (float *)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<MilPoint2F>(
                        a3,
                        v18);
    }
  }
  return result;
}
