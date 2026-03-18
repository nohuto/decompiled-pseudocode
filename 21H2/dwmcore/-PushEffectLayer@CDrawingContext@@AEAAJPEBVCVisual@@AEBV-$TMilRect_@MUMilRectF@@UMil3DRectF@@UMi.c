/*
 * XREFs of ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1801B3660
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180098498 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18008B404 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800BA748 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x1801AF550 (--_ECFilterEffectLayer@@UEAAPEAXI@Z.c)
 *     ??_ECTreeEffectLayer@@UEAAPEAXI@Z @ 0x1801AF650 (--_ECTreeEffectLayer@@UEAAPEAXI@Z.c)
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x1801B2D14 (-IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z.c)
 *     ?Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1801D9250 (-Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVis.c)
 *     ?GetLayerPointAndSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPointAndSizeF@@@Z @ 0x1801D99FC (-GetLayerPointAndSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPo.c)
 *     ?RoundOffLayerSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801DBAE0 (-RoundOffLayerSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x1801DBD80 (-Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVC.c)
 */

__int64 __fastcall CDrawingContext::PushEffectLayer(
        CDrawingContext *this,
        struct CVisual *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct CFilterEffect *a6,
        char *a7)
{
  CFilterEffectLayer *v9; // r15
  CTreeEffectLayer *v10; // rsi
  char v11; // r13
  __int128 *v12; // rax
  float *v13; // r10
  float v14; // xmm3_4
  __int128 v15; // xmm0
  int v16; // eax
  __m128 v17; // xmm2
  __m128 v18; // rt1
  float v19; // xmm4_4
  int v20; // eax
  __m128 v21; // xmm2
  __m128 v22; // rt1
  __m128 v23; // xmm1
  float v24; // xmm0_4
  int v25; // eax
  __m128 v26; // xmm3
  __m128 v27; // xmm0
  int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // ebx
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  unsigned int v43; // [rsp+20h] [rbp-71h]
  float v44; // [rsp+40h] [rbp-51h]
  float v45; // [rsp+40h] [rbp-51h]
  CTreeEffectLayer *v46; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v47[4]; // [rsp+50h] [rbp-41h] BYREF
  CFilterEffectLayer *v48[2]; // [rsp+60h] [rbp-31h] BYREF
  __int64 v49; // [rsp+70h] [rbp-21h]
  char *v50; // [rsp+78h] [rbp-19h]
  __int128 v51; // [rsp+80h] [rbp-11h] BYREF

  v49 = a5;
  v9 = 0LL;
  v10 = 0LL;
  v50 = a7;
  v48[0] = 0LL;
  v46 = 0LL;
  v11 = 0;
  v12 = (__int128 *)CTreeEffectLayer::RoundOffLayerSize(&v51, a3);
  v14 = *v13;
  v15 = *v12;
  LODWORD(v12) = *(_DWORD *)v13 & 0x7FFFFFFF;
  *(_OWORD *)v47 = v15;
  if ( (unsigned int)v12 > 0x497FFFF0 )
  {
    v17 = 0LL;
    v17.m128_f32[0] = (float)(int)v14 - v14;
    v18.m128_f32[0] = FLOAT_N0_5;
    v16 = (int)v14 - _mm_cmple_ss(v17, v18).m128_u32[0];
  }
  else
  {
    v44 = v14 + 6291456.25;
    v16 = (int)(LODWORD(v44) << 10) >> 11;
  }
  v19 = v13[1];
  *(float *)&v51 = (float)v16;
  if ( (LODWORD(v19) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v21 = 0LL;
    v21.m128_f32[0] = (float)(int)v19 - v19;
    v22.m128_f32[0] = FLOAT_N0_5;
    v20 = (int)v19 - _mm_cmple_ss(v21, v22).m128_u32[0];
  }
  else
  {
    v45 = v19 + 6291456.25;
    v20 = (int)(LODWORD(v45) << 10) >> 11;
  }
  v23.m128_f32[0] = v13[2] - v14;
  v24 = (float)v20;
  v25 = (int)v23.m128_f32[0];
  *((float *)&v51 + 1) = v24;
  v26 = 0LL;
  v27 = 0LL;
  v27.m128_f32[0] = (float)(int)v23.m128_f32[0];
  v27.m128_i32[0] = _mm_cmplt_ss(v27, v23).m128_u32[0];
  v23.m128_f32[0] = v13[3] - v19;
  *((float *)&v51 + 2) = (float)(v25 - v27.m128_i32[0]);
  v26.m128_f32[0] = (float)(int)v23.m128_f32[0];
  *((float *)&v51 + 3) = (float)(int)((int)v23.m128_f32[0] - _mm_cmplt_ss(v26, v23).m128_u32[0]);
  if ( (int)v47[2] <= 0 || (int)v47[3] <= 0 )
  {
    LODWORD(v51) = 7;
    *((_QWORD *)&v51 + 1) = a2;
    v11 = 1;
    v40 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)this + 84, &v51);
    v30 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0LL, v40, 0xE72u);
      goto LABEL_35;
    }
    goto LABEL_33;
  }
  if ( !a6 )
  {
LABEL_22:
    _mm_srli_si128(*(__m128i *)CTreeEffectLayer::GetLayerPointAndSize(v48, a6, v47, &v51), 8);
    if ( CDrawingContext::IsSurfaceSizeValid(this) )
    {
      if ( (int)CTreeEffectLayer::Create(
                  *((_QWORD *)this + 4),
                  (unsigned int)v47,
                  (_DWORD)a6,
                  (_DWORD)a2,
                  (__int64)&v51,
                  v49,
                  (__int64)&v46) >= 0 )
      {
        v10 = v46;
        v38 = CDrawingContext::PushLayer(this, a2, v46, 1, 1);
        v30 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0LL, v38, 0xEB5u);
          goto LABEL_37;
        }
        v10 = 0LL;
      }
      else
      {
        LODWORD(v51) = 7;
        *((_QWORD *)&v51 + 1) = a2;
        v36 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)this + 84, &v51);
        v30 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0LL, v36, 0xEACu);
          v10 = v46;
          goto LABEL_37;
        }
        v10 = v46;
        v30 = 0;
      }
    }
    else
    {
      LODWORD(v51) = 7;
      *((_QWORD *)&v51 + 1) = a2;
      v28 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)this + 84, &v51);
      v30 = v28;
      if ( v28 < 0 )
      {
        v43 = 3741;
        goto LABEL_14;
      }
    }
    goto LABEL_33;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CFilterEffect *, __int64))(*(_QWORD *)a6 + 56LL))(a6, 59LL) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct CFilterEffect *, __int64))(*(_QWORD *)a6 + 56LL))(a6, 55LL) )
    {
      v30 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0LL, -2147024809, 0xEBFu);
      return v30;
    }
    goto LABEL_22;
  }
  if ( !CDrawingContext::IsSurfaceSizeValid(this) )
  {
    LODWORD(v51) = 7;
    *((_QWORD *)&v51 + 1) = a2;
    v28 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)this + 84, &v51);
    v30 = v28;
    if ( v28 < 0 )
    {
      v43 = 3708;
LABEL_14:
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0LL, v28, v43);
      return v30;
    }
    goto LABEL_33;
  }
  v31 = CFilterEffectLayer::Create(
          *((struct IDeviceTarget **)this + 4),
          (const struct MilPointAndSizeL *)v47,
          a6,
          a2,
          (const struct MilPointAndSizeF *)&v51,
          v48);
  v30 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0LL, v31, 0xE87u);
    v9 = v48[0];
    goto LABEL_35;
  }
  v9 = v48[0];
  v33 = CDrawingContext::PushLayer(this, a2, v48[0], 1, 1);
  v30 = v33;
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0LL, v33, 0xE8Du);
LABEL_35:
    if ( !v9 )
      return v30;
    CFilterEffectLayer::`vector deleting destructor'(v9, 1);
    goto LABEL_37;
  }
LABEL_33:
  *v50 = v11;
LABEL_37:
  if ( v10 )
    CTreeEffectLayer::`vector deleting destructor'(v10, 1);
  return v30;
}
