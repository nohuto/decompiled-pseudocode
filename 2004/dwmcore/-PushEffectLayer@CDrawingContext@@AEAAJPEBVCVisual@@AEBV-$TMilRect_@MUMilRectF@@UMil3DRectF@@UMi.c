/*
 * XREFs of ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x180010AFC
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18006AEC0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 * Callees:
 *     ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x1800109A0 (-Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVC.c)
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x180010DE0 (-IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z.c)
 *     ?RoundOffLayerSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180010E2C (-RoundOffLayerSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180010F0C (-Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVis.c)
 *     ?GetLayerPointAndSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPointAndSizeF@@@Z @ 0x180011240 (-GetLayerPointAndSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPo.c)
 *     ??_ECTreeEffectLayer@@UEAAPEAXI@Z @ 0x18001D7D0 (--_ECTreeEffectLayer@@UEAAPEAXI@Z.c)
 *     ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x180021050 (--_ECFilterEffectLayer@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x180046418 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x180066574 (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PushEffectLayer(
        struct IDeviceTarget **this,
        struct CVisual *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct CFilterEffect *a6,
        char *a7)
{
  CFilterEffectLayer *v9; // r15
  struct CLayer *v10; // rsi
  char v11; // r13
  __int128 *v12; // rax
  float *v13; // r10
  float v14; // xmm3_4
  __int128 v15; // xmm0
  int v16; // eax
  float v17; // xmm4_4
  int v18; // eax
  __m128 v19; // xmm1
  float v20; // xmm0_4
  int v21; // eax
  __m128 v22; // xmm3
  __m128 v23; // xmm0
  unsigned int v24; // ecx
  __m128i v25; // xmm0
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // ebx
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // ecx
  __m128 v34; // xmm2
  __m128 v35; // rt1
  __m128 v36; // xmm2
  __m128 v37; // rt1
  int v38; // eax
  int v39; // r9d
  int v40; // eax
  unsigned int v41; // ecx
  int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // [rsp+20h] [rbp-71h]
  float v45; // [rsp+40h] [rbp-51h]
  float v46; // [rsp+40h] [rbp-51h]
  struct CLayer *v47; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v48[4]; // [rsp+50h] [rbp-41h] BYREF
  CFilterEffectLayer *v49[2]; // [rsp+60h] [rbp-31h] BYREF
  __int64 v50; // [rsp+70h] [rbp-21h]
  char *v51; // [rsp+78h] [rbp-19h]
  float v52[2]; // [rsp+80h] [rbp-11h] BYREF
  struct CVisual *v53; // [rsp+88h] [rbp-9h]

  v50 = a5;
  v9 = 0LL;
  v10 = 0LL;
  v51 = a7;
  v49[0] = 0LL;
  v47 = 0LL;
  v11 = 0;
  v12 = (__int128 *)CTreeEffectLayer::RoundOffLayerSize(v52, a3);
  v14 = *v13;
  v15 = *v12;
  LODWORD(v12) = *(_DWORD *)v13 & 0x7FFFFFFF;
  *(_OWORD *)v48 = v15;
  if ( (unsigned int)v12 > 0x497FFFF0 )
  {
    v34 = 0LL;
    v34.m128_f32[0] = (float)(int)v14 - v14;
    v35.m128_f32[0] = FLOAT_N0_5;
    v16 = (int)v14 - _mm_cmple_ss(v34, v35).m128_u32[0];
  }
  else
  {
    v45 = v14 + 6291456.25;
    v16 = (int)(LODWORD(v45) << 10) >> 11;
  }
  v17 = v13[1];
  v52[0] = (float)v16;
  if ( (LODWORD(v17) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v36 = 0LL;
    v36.m128_f32[0] = (float)(int)v17 - v17;
    v37.m128_f32[0] = FLOAT_N0_5;
    v18 = (int)v17 - _mm_cmple_ss(v36, v37).m128_u32[0];
  }
  else
  {
    v46 = v17 + 6291456.25;
    v18 = (int)(LODWORD(v46) << 10) >> 11;
  }
  v19.m128_f32[0] = v13[2] - v14;
  v20 = (float)v18;
  v21 = (int)v19.m128_f32[0];
  v52[1] = v20;
  v22 = 0LL;
  v23 = 0LL;
  v23.m128_f32[0] = (float)(int)v19.m128_f32[0];
  v23.m128_i32[0] = _mm_cmplt_ss(v23, v19).m128_u32[0];
  v19.m128_f32[0] = v13[3] - v17;
  *(float *)&v53 = (float)(v21 - v23.m128_i32[0]);
  v22.m128_f32[0] = (float)(int)v19.m128_f32[0];
  *((float *)&v53 + 1) = (float)(int)((int)v19.m128_f32[0] - _mm_cmplt_ss(v22, v19).m128_u32[0]);
  if ( (int)v48[2] <= 0 || (int)v48[3] <= 0 )
  {
    LODWORD(v52[0]) = 7;
    v53 = a2;
    v11 = 1;
    v42 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(this + 47, v52);
    v28 = v42;
    if ( v42 >= 0 )
      goto LABEL_14;
    MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0xDD5u, 0LL);
    goto LABEL_38;
  }
  if ( !a6 )
    goto LABEL_10;
  if ( (*(unsigned __int8 (__fastcall **)(struct CFilterEffect *, __int64))(*(_QWORD *)a6 + 56LL))(a6, 59LL) )
  {
    if ( !CDrawingContext::IsSurfaceSizeValid((CDrawingContext *)this, v48[2], v48[3]) )
    {
      LODWORD(v52[0]) = 7;
      v53 = a2;
      v38 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(this + 47, v52);
      v28 = v38;
      if ( v38 >= 0 )
        goto LABEL_14;
      v44 = 3551;
      goto LABEL_26;
    }
    v30 = CFilterEffectLayer::Create(
            this[4],
            (const struct MilPointAndSizeL *)v48,
            a6,
            a2,
            (const struct MilPointAndSizeF *)v52,
            v49);
    v28 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xDEAu, 0LL);
      v9 = v49[0];
    }
    else
    {
      v9 = v49[0];
      v32 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v49[0], 1, 1);
      v28 = v32;
      if ( v32 >= 0 )
        goto LABEL_14;
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0xDF0u, 0LL);
    }
LABEL_38:
    if ( !v9 )
      return v28;
    CFilterEffectLayer::`vector deleting destructor'(v9, 1u);
    goto LABEL_15;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CFilterEffect *, __int64))(*(_QWORD *)a6 + 56LL))(a6, 55LL) )
  {
    v28 = -2147024809;
    v39 = -2147024809;
    v44 = 3618;
    goto LABEL_28;
  }
LABEL_10:
  v25 = _mm_srli_si128(*(__m128i *)CTreeEffectLayer::GetLayerPointAndSize(v49, a6, v48, v52), 8);
  if ( !CDrawingContext::IsSurfaceSizeValid((CDrawingContext *)this, _mm_cvtsi128_si32(v25), v25.m128i_u32[1]) )
  {
    LODWORD(v52[0]) = 7;
    v53 = a2;
    v38 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(this + 47, v52);
    v28 = v38;
    if ( v38 >= 0 )
      goto LABEL_14;
    v44 = 3584;
LABEL_26:
    v39 = v38;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v39, v44, 0LL);
    return v28;
  }
  if ( (int)CTreeEffectLayer::Create(this[4], v48, a6, a2, v52, v50, &v47) < 0 )
  {
    LODWORD(v52[0]) = 7;
    v53 = a2;
    v40 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(this + 47, v52);
    v28 = v40;
    if ( v40 >= 0 )
    {
      v10 = v47;
      v28 = 0;
      goto LABEL_14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0xE0Fu, 0LL);
    v10 = v47;
  }
  else
  {
    v10 = v47;
    v26 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v47, 1, 1);
    v28 = v26;
    if ( v26 >= 0 )
    {
      v10 = 0LL;
LABEL_14:
      *v51 = v11;
      goto LABEL_15;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xE18u, 0LL);
  }
LABEL_15:
  if ( v10 )
    CTreeEffectLayer::`vector deleting destructor'(v10, 1u);
  return v28;
}
