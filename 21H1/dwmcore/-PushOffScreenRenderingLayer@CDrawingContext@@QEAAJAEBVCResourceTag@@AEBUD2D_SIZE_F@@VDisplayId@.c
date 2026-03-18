/*
 * XREFs of ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18007059C
 * Callers:
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x1800048EC (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@AEBUD2D_POINT_2F@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000B668 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18000D628 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000D7B0 (-GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000DCA8 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18001E8EC (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180021040 (-GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180070974 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801A1E48 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020DBA0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18026A2C0 (-GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIDeviceTarget@@AEBUMilPointAndSizeL@@VDisplayId@@W4Enum@CacheMode@@PEAPEAV1@@Z @ 0x18003174C (-Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIDeviceTarget@@AEBUMilPointAndSizeL@@.c)
 *     ??_ECOffScreenRenderingLayer@@UEAAPEAXI@Z @ 0x180031890 (--_ECOffScreenRenderingLayer@@UEAAPEAXI@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18006F384 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PushOffScreenRenderingLayer(
        CDrawingContext *a1,
        __int64 a2,
        float *a3,
        int a4,
        unsigned __int8 a5,
        _QWORD *a6)
{
  float v6; // xmm0_4
  COffScreenRenderingLayer *v7; // rdi
  float v10; // xmm3_4
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __m128 v22; // xmm2
  __m128 v23; // xmm2
  COffScreenRenderingLayer *v24; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v25[6]; // [rsp+38h] [rbp-18h] BYREF
  float v26; // [rsp+70h] [rbp+20h]
  float v27; // [rsp+70h] [rbp+20h]

  v6 = *a3;
  v7 = 0LL;
  v24 = 0LL;
  if ( v6 <= 0.0 || (v10 = a3[1], v10 <= 0.0) )
  {
    v16 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0x594u, 0LL);
  }
  else
  {
    v25[0] = 0;
    v25[1] = 0;
    if ( (LODWORD(v6) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v22 = 0LL;
      v22.m128_f32[0] = (float)(int)v6 - v6;
      v11 = (int)v6 - _mm_cmple_ss(v22, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      v26 = v6 + 6291456.25;
      v11 = (int)(LODWORD(v26) << 10) >> 11;
    }
    v25[2] = v11;
    if ( (LODWORD(v10) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v23 = 0LL;
      v23.m128_f32[0] = (float)(int)v10 - v10;
      v12 = (int)v10 - _mm_cmple_ss(v23, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      v27 = v10 + 6291456.25;
      v12 = (int)(LODWORD(v27) << 10) >> 11;
    }
    v13 = *((_QWORD *)a1 + 4);
    v25[3] = v12;
    v14 = COffScreenRenderingLayer::Create(a2, v13, (const struct MilPointAndSizeL *)v25, a4, 2 * (a5 ^ 1u) + 1, &v24);
    v16 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x590u, 0LL);
      v7 = v24;
    }
    else
    {
      v7 = v24;
      v17 = CDrawingContext::PushLayer(a1, 0LL, v24, 1, 1);
      v16 = v17;
      if ( v17 >= 0 )
      {
        v19 = *((_QWORD *)v7 + 1);
        *a6 = v19;
        if ( v19 )
        {
          v20 = v19 + 8 + *(int *)(*(_QWORD *)(v19 + 8) + 4LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
        }
        return v16;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x598u, 0LL);
    }
  }
  if ( v7 )
    COffScreenRenderingLayer::`vector deleting destructor'(v7, 1);
  return v16;
}
