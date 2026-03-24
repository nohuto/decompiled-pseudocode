/*
 * XREFs of ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x180190B88
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180004D18 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x180005F94 (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000D480 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x180021A08 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18003F0A8 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x1800407D8 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18006A9DC (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18007A71C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x1800BA878 (-IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C930C (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CB404 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801771A8 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUMilRectF@@$0-0@gsl@@AEBU_D3D.c)
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x180177808 (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ?InitializeShadowEffect@CTreeEffectLayer@@IEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180190904 (-InitializeShadowEffect@CTreeEffectLayer@@IEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x180210F24 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderShadow(
        CTreeEffectLayer *this,
        const struct D2D_POINT_2F *a2,
        const struct D2D_SIZE_F *a3,
        float a4,
        float a5,
        struct CDrawingContext *a6,
        struct CDropShadow *a7,
        struct IRenderTargetBitmap *a8)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  float v12; // xmm2_4
  float v13; // xmm3_4
  __m128i v14; // xmm1
  FLOAT v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  FLOAT v18; // xmm0_4
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // esi
  int v22; // eax
  CTreeEffectLayer *v23; // rcx
  float v24; // xmm10_4
  __int64 v25; // r14
  __int64 v26; // rdi
  CTreeEffectLayer *v27; // rcx
  float v28; // xmm6_4
  float v29; // xmm7_4
  struct ID2D1Effect *v30; // rdi
  float v31; // xmm9_4
  float v32; // xmm9_4
  __int64 (__fastcall *v33)(__int64, GUID *, __int64 *); // rbx
  __int64 v34; // rbx
  ID2D1Effect *v35; // rbx
  __int128 v36; // xmm0
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  FLOAT v41; // eax
  CLayerVisual *v42; // rcx
  struct D2D_VECTOR_3F *v43; // rax
  __int64 v44; // xmm0_8
  float y; // xmm10_4
  float x; // xmm11_4
  float v47; // xmm13_4
  float v48; // xmm12_4
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 TopByReference; // rax
  float v53; // xmm1_4
  struct ID2D1Effect *v54; // r8
  __int64 v55; // rax
  __int64 (__fastcall *v56)(__int64, __int64, struct ID2D1Effect **); // rax
  __int64 (__fastcall *v57)(__int64, GUID *, __int64 *); // rdi
  __int64 v58; // rdi
  struct ID2D1Effect *v59; // rdi
  CTreeEffectLayer *v60; // rcx
  unsigned int v61; // [rsp+28h] [rbp-E0h]
  bool v62[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v63; // [rsp+40h] [rbp-C8h] BYREF
  struct ID2D1Effect *v64[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v65; // [rsp+58h] [rbp-B0h] BYREF
  struct ID2D1Effect *v66; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1Effect *v67; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v68[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v69; // [rsp+88h] [rbp-80h]
  __int128 v70; // [rsp+98h] [rbp-70h]
  __int128 v71; // [rsp+A8h] [rbp-60h]
  __int16 v72; // [rsp+B8h] [rbp-50h]
  _OWORD v73[4]; // [rsp+C8h] [rbp-40h] BYREF
  __int16 v74; // [rsp+108h] [rbp+0h]
  struct D2D_VECTOR_3F v75; // [rsp+118h] [rbp+10h] BYREF
  float v76; // [rsp+124h] [rbp+1Ch]
  struct D2D_RECT_F v77; // [rsp+128h] [rbp+20h] BYREF
  struct D2D_MATRIX_3X2_F v78; // [rsp+138h] [rbp+30h] BYREF
  struct D2D_MATRIX_3X2_F v79; // [rsp+150h] [rbp+48h] BYREF
  __int128 v80; // [rsp+168h] [rbp+60h] BYREF

  if ( !a8 )
    return 0LL;
  if ( g_LockAndReadLayer )
  {
    v10 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *, const struct D2D_POINT_2F *, const struct D2D_SIZE_F *))(*(_QWORD *)a8 + 64LL))(
            a8,
            a2,
            a3);
    v11 = *(int *)(*(_QWORD *)(v10 + 8) + 16LL) + v10 + 8;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 24LL))(
      v11,
      ((unsigned __int64)a6 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a6 >> 64));
  }
  v12 = *((float *)this + 70);
  v13 = *((float *)this + 58);
  *(_QWORD *)&v78.m[2][0] = 0LL;
  *(_OWORD *)&v78.m11 = _xmm;
  v63 = 0LL;
  v69 = _xmm;
  *(_OWORD *)&v68[1] = _xmm;
  v71 = _xmm;
  v70 = _xmm;
  v73[1] = _xmm;
  v73[0] = _xmm;
  v73[3] = _xmm;
  v14 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
  v73[2] = _xmm;
  v68[0] = 0LL;
  v67 = 0LL;
  v66 = 0LL;
  v72 = 32085;
  v80 = 0LL;
  v74 = 32085;
  v15 = v13 - _mm_cvtepi32_ps(v14).m128_f32[0];
  v14.m128i_i32[0] = *((_DWORD *)this + 57);
  v16 = (float)*((int *)this + 4);
  v62[0] = 0;
  v65 = 0LL;
  v77.top = v15;
  *(float *)v14.m128i_i32 = *(float *)v14.m128i_i32 - v16;
  v17 = (float)*((int *)this + 6);
  LODWORD(v77.left) = v14.m128i_i32[0];
  v18 = (float)(v17 / v12) + *(float *)v14.m128i_i32;
  *(float *)v14.m128i_i32 = (float)*((int *)this + 7);
  v77.right = v18;
  v77.bottom = (float)(*(float *)v14.m128i_i32 / v12) + v15;
  v19 = CDrawingContext::PushGpuClipRectInternal((__int64)a6, 0LL, (float *)this + 66, 1, 0);
  v21 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x383u, 0LL);
    goto LABEL_51;
  }
  v22 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *, __int64 *, _QWORD))(*(_QWORD *)a8 + 72LL))(
          a8,
          &v65,
          0LL);
  v21 = v22;
  if ( v22 < 0 )
  {
    v61 = 902;
    goto LABEL_48;
  }
  v24 = *((float *)a7 + 24);
  v25 = (*((_QWORD *)a6 + 5) + 16LL) & -(__int64)(*((_QWORD *)a6 + 5) != 0LL);
  if ( !CLayerVisual::GetFlatteningToLocalSpace(*((CLayerVisual **)this + 32)) )
    CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest(
      (CTreeEffectLayer *)((char *)this + 128),
      (struct CMILMatrix *)&v68[1],
      (struct CMILMatrix *)v73,
      v62);
  v22 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v25 + 232LL))(
          v25,
          &CLSID_D2D12DAffineTransform,
          &v63);
  v21 = v22;
  if ( v22 < 0 )
  {
    v61 = 928;
    goto LABEL_48;
  }
  v26 = v63;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v63 + 80) + 8LL))(*(_QWORD *)(v63 + 80));
  v28 = *(float *)&v68[1];
  v29 = *((float *)&v69 + 1);
  v30 = *(struct ID2D1Effect **)(v26 + 80);
  v67 = v30;
  if ( *(float *)&v68[1] <= *((float *)&v69 + 1) )
  {
    v31 = *(float *)&v68[1];
    v78.m22 = *(float *)&v68[1] / *((float *)&v69 + 1);
    v78.dy = 0.0 - (float)((float)(*(float *)&v68[1] / *((float *)&v69 + 1)) * 0.0);
  }
  else
  {
    v31 = *((float *)&v69 + 1);
    v78.m11 = *((float *)&v69 + 1) / *(float *)&v68[1];
    v78.dx = 0.0 - (float)((float)(*((float *)&v69 + 1) / *(float *)&v68[1]) * 0.0);
  }
  v32 = v31 * v24;
  v22 = CTreeEffectLayer::InitializeShadowEffect(v27, v30, &v78);
  v21 = v22;
  if ( v22 < 0 )
  {
    v61 = 943;
    goto LABEL_48;
  }
  (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v30 + 112LL))(v30, 0LL, v65, 1LL);
  v33 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v25 + 232LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v63);
  v22 = v33(v25, &CLSID_D2D1Shadow, &v63);
  v21 = v22;
  if ( v22 < 0 )
  {
    v61 = 947;
    goto LABEL_48;
  }
  v34 = v63;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v63 + 80) + 8LL))(*(_QWORD *)(v63 + 80));
  v35 = *(ID2D1Effect **)(v34 + 80);
  v36 = *((_OWORD *)a7 + 5);
  v68[0] = (__int64)v35;
  v80 = v36;
  *(float *)v64 = v32 / 3.0;
  v37 = (*(__int64 (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, struct ID2D1Effect **, int))(*(_QWORD *)v35 + 72LL))(
          v35,
          0LL,
          0LL,
          v64,
          4);
  v21 = v37;
  if ( v37 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x3B9u, 0LL);
  }
  else
  {
    v39 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v35 + 72LL))(
            v35,
            1LL,
            0LL,
            &v80,
            16);
    v21 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x3BCu, 0LL);
    }
    else
    {
      LODWORD(v64[0]) = 0;
      v22 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, struct ID2D1Effect **, int))(*(_QWORD *)v35 + 72LL))(
              v35,
              2LL,
              0LL,
              v64,
              4);
      v21 = v22;
      if ( v22 < 0 )
      {
        v61 = 959;
        goto LABEL_48;
      }
      v41 = *((float *)a7 + 28);
      v42 = (CLayerVisual *)*((_QWORD *)this + 32);
      *(_QWORD *)&v75.x = *((_QWORD *)a7 + 13);
      v75.z = v41;
      if ( !CLayerVisual::GetFlatteningToLocalSpace(v42) )
      {
        v43 = CMILMatrix::Transform3DVector((CTreeEffectLayer *)((char *)this + 128), (struct D2D_VECTOR_3F *)v64, &v75);
        v44 = *(_QWORD *)&v43->x;
        *(FLOAT *)&v43 = v43->z;
        *(_QWORD *)&v75.x = v44;
        LODWORD(v75.z) = (_DWORD)v43;
      }
      y = v75.y;
      x = v75.x;
      v47 = (float)*((int *)this + 5);
      v48 = (float)*((int *)this + 4);
      v75.y = (float)((float)(v75.y + v77.top) - v32) + v47;
      v75.x = (float)((float)(v75.x + v77.left) - v32) + v48;
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(&v77.left, v32, v32);
      if ( *((_DWORD *)g_pComposition + 240) )
      {
        if ( !CComposition::IsOverdrawHeatMapEnabled(g_pComposition) )
          goto LABEL_49;
        if ( (*(_BYTE *)(CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v50) + 20) & 9) == 0 )
          goto LABEL_49;
        v75.y = (float)(y + v77.top) + v47;
        v75.x = (float)(x + v77.left) + v48;
        v76 = (float)(v77.bottom - v77.top) + v75.y;
        v75.z = (float)(v77.right - v77.left) + v75.x;
        TopByReference = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v51);
        v64[0] = (struct ID2D1Effect *)1;
        v64[1] = (struct ID2D1Effect *)&v75;
        v22 = CDrawingContext::FillRectanglesWithSolidColor(a6, (__int64)v64, TopByReference + 4);
        v21 = v22;
        if ( v22 >= 0 )
          goto LABEL_49;
        v61 = 996;
        goto LABEL_48;
      }
      v53 = *((float *)this + 70);
      if ( v53 < 0.99999881 )
      {
        v55 = *(_QWORD *)v25;
        v79.m21 = 0.0;
        v56 = *(__int64 (__fastcall **)(__int64, __int64, struct ID2D1Effect **))(v55 + 200);
        v79.dy = 0.0;
        v64[0] = 0LL;
        *(_QWORD *)&v79.m11 = COERCE_UNSIGNED_INT(1.0 / v53);
        *(_QWORD *)&v79.m[1][1] = *(_QWORD *)&v79.m11;
        v22 = v56(v25, 7LL, v64);
        v21 = v22;
        if ( v22 < 0 )
        {
          v61 = 1014;
          goto LABEL_48;
        }
        v22 = CTreeEffectLayer::InitializeShadowEffect(v23, v64[0], &v79);
        v21 = v22;
        if ( v22 < 0 )
        {
          v61 = 1016;
          goto LABEL_48;
        }
        ID2D1Effect::SetInputEffect(v64[0], 0, v30);
        v54 = v64[0];
      }
      else
      {
        v54 = v30;
      }
      ID2D1Effect::SetInputEffect(v35, 0, v54);
      *(_QWORD *)&v78.m[0][1] = 0LL;
      if ( v28 <= v29 )
      {
        v78.dx = 0.0;
        v78.m11 = 1.0;
        v78.m22 = v29 / v28;
        v78.dy = 0.0 - (float)((float)(v29 / v28) * 0.0);
      }
      else
      {
        v78.m22 = 1.0;
        v78.m11 = v28 / v29;
        *(_QWORD *)&v78.m[2][0] = COERCE_UNSIGNED_INT(0.0 - (float)((float)(v28 / v29) * 0.0));
      }
      v57 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v25 + 232LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v63);
      v22 = v57(v25, &CLSID_D2D12DAffineTransform, &v63);
      v21 = v22;
      if ( v22 < 0 )
      {
        v61 = 1038;
        goto LABEL_48;
      }
      v58 = v63;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v63 + 80) + 8LL))(*(_QWORD *)(v63 + 80));
      v59 = *(struct ID2D1Effect **)(v58 + 80);
      v66 = v59;
      v22 = CTreeEffectLayer::InitializeShadowEffect(v60, v59, &v78);
      v21 = v22;
      if ( v22 < 0 )
      {
        v61 = 1041;
        goto LABEL_48;
      }
      ID2D1Effect::SetInputEffect(v59, 0, v35);
      v22 = CDrawingContext::FillEffect(a6, v35, &v77, (const struct D2D_POINT_2F *)&v75, 0);
      v21 = v22;
      if ( v22 < 0 )
      {
        v61 = 1050;
LABEL_48:
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v23, 0LL, 0, v22, v61, 0LL);
      }
    }
  }
LABEL_49:
  CDrawingContext::PopGpuClipRectInternal(a6, 0, v49);
LABEL_51:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v65);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)&v66);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)&v67);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(v68);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v63);
  return v21;
}
