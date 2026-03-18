/*
 * XREFs of ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A6070
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x18000C3C0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILM.c)
 *     ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18000C600 (-CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000DCA8 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18000DF50 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18000EAC0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800236F0 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800469E8 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180048ABC (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x180049320 (-GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180060B20 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007D8D0 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@W4.c)
 *     ?DrawBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@@Z @ 0x1800C3D30 (-DrawBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@@Z.c)
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C3E08 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1801D5C78 (-CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AE.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801D5F38 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1801F8ED0 (-CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXA.c)
 * Callees:
 *     ??$IsTranslateAndScaleFor2DInput@$00@CMILMatrix@@AEBA_NXZ @ 0x1800A6324 (--$IsTranslateAndScaleFor2DInput@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUMilPoint2F@@$0?0@gsl@@@Z @ 0x1800A63E0 (--$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@R.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x1800A6474 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

float *__fastcall CMILMatrix::Transform2DBoundsHelper<1>(__int64 a1, float *a2, float *a3)
{
  char v4; // si
  char v5; // r8
  char v6; // di
  char v8; // al
  bool v9; // dl
  float *result; // rax
  unsigned int v11; // edx
  unsigned int i; // ecx
  float *v13; // r10
  __int64 v14; // r11
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  _QWORD v19[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v20[32]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  v5 = *(_BYTE *)(a1 + 64);
  v6 = 0;
  v8 = (char)(4 * v5) >> 6;
  if ( v8 )
  {
    v9 = v8 == 1;
  }
  else
  {
    v9 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - 1.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 4) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 12) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 16) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 20) - 1.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 28) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 60) - 1.0) & _xmm) < 0.000081380211;
    *(_BYTE *)(a1 + 64) = v5 ^ (v5 ^ (-16 - 32 * v9)) & 0x30;
    if ( !v9 )
      goto LABEL_21;
    *(_BYTE *)(a1 + 65) &= ~2u;
    *(_BYTE *)(a1 + 65) |= 0x3Du;
  }
  if ( v9 )
  {
    *a3 = *a2 + *(float *)(a1 + 48);
    a3[1] = a2[1] + *(float *)(a1 + 52);
    a3[2] = a2[2] + *(float *)(a1 + 48);
    a3[3] = a2[3] + *(float *)(a1 + 52);
LABEL_5:
    v6 = 1;
    goto LABEL_6;
  }
LABEL_21:
  if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScaleFor2DInput<1>(a1) )
  {
    CMILMatrix::Transform2DRectToPerspective(
      (CMILMatrix *)v13,
      (const struct MilRectF *)v14,
      (struct MilPoint2F *const)v20);
    result = (float *)v20;
    v11 = 8;
    goto LABEL_7;
  }
  *a3 = (float)(*(float *)v14 * *v13) + v13[12];
  a3[1] = (float)(*(float *)(v14 + 4) * v13[5]) + v13[13];
  a3[2] = (float)(*(float *)(v14 + 8) * *v13) + v13[12];
  a3[3] = (float)(*(float *)(v14 + 12) * v13[5]) + v13[13];
  if ( *v13 > 0.0 && v13[5] > 0.0 )
    goto LABEL_5;
LABEL_6:
  result = a3;
  v11 = 4;
  v4 = 1;
LABEL_7:
  for ( i = 0; i < v11; ++i )
    ++result;
  if ( !v6 )
  {
    if ( v4 )
    {
      v15 = *a3;
      v16 = a3[2];
      if ( *a3 > v16 )
      {
        *a3 = v16;
        a3[2] = v15;
      }
      v17 = a3[1];
      v18 = a3[3];
      if ( v17 > v18 )
      {
        a3[1] = v18;
        a3[3] = v17;
      }
    }
    else
    {
      v19[0] = 4LL;
      v19[1] = v20;
      return (float *)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<MilPoint2F>(
                        a3,
                        v19);
    }
  }
  return result;
}
