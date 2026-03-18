/*
 * XREFs of ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x1801DB194
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801DA300 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180004548 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUMilRectF@@$0-0@gsl@@AEBU_D3D.c)
 *     ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x18000C3F8 (-IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000FD9C (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180015658 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1800857DC (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18009759C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x1800D6444 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18017BC70 (--1-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x1801B2C00 (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ??1?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@QEAA@XZ @ 0x1801D8D70 (--1-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InitializeShadowEffect@CTreeEffectLayer@@AEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801D9B3C (-InitializeShadowEffect@CTreeEffectLayer@@AEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x1801DBC08 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x1802236A0 (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x180260344 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
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
  __int64 v23; // rcx
  float v24; // xmm10_4
  __int64 v25; // r14
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdi
  CTreeEffectLayer *v29; // rcx
  float v30; // xmm6_4
  float v31; // xmm7_4
  struct ID2D1Effect *v32; // rdi
  float v33; // xmm9_4
  float v34; // xmm9_4
  int v35; // eax
  __int64 v36; // rcx
  __int64 (__fastcall *v37)(__int64, GUID *, __int64 *); // rbx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rbx
  ID2D1Effect *v41; // rbx
  __int128 v42; // xmm0
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  FLOAT v49; // eax
  CLayerVisual *v50; // rcx
  struct D2D_VECTOR_3F *v51; // rax
  __int64 v52; // xmm0_8
  float y; // xmm10_4
  float x; // xmm11_4
  float v55; // xmm13_4
  float v56; // xmm12_4
  int v57; // r9d
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 TopByReference; // rax
  int v61; // eax
  __int64 v62; // rcx
  float v63; // xmm2_4
  __int64 v64; // rax
  int v65; // eax
  CTreeEffectLayer *v66; // rcx
  int v67; // eax
  __int64 v68; // rcx
  int v69; // r9d
  struct ID2D1Effect *v70; // r8
  __int64 (__fastcall *v71)(__int64, GUID *, __int64 *); // rdi
  int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // rdi
  struct ID2D1Effect *v75; // rdi
  CTreeEffectLayer *v76; // rcx
  int v77; // eax
  __int64 v78; // rcx
  int v79; // r9d
  int v80; // eax
  __int64 v81; // rcx
  bool v82[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v83; // [rsp+40h] [rbp-C8h] BYREF
  struct ID2D1Effect *v84[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v85; // [rsp+58h] [rbp-B0h] BYREF
  struct ID2D1Effect *v86; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1Effect *v87; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v88[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v89; // [rsp+88h] [rbp-80h]
  __int128 v90; // [rsp+98h] [rbp-70h]
  __int128 v91; // [rsp+A8h] [rbp-60h]
  char v92; // [rsp+B8h] [rbp-50h]
  char v93; // [rsp+B9h] [rbp-4Fh]
  _OWORD v94[4]; // [rsp+C8h] [rbp-40h] BYREF
  char v95; // [rsp+108h] [rbp+0h]
  char v96; // [rsp+109h] [rbp+1h]
  struct D2D_VECTOR_3F v97; // [rsp+118h] [rbp+10h] BYREF
  float v98; // [rsp+124h] [rbp+1Ch]
  struct D2D_RECT_F v99; // [rsp+128h] [rbp+20h] BYREF
  struct D2D_MATRIX_3X2_F v100; // [rsp+138h] [rbp+30h] BYREF
  struct D2D_MATRIX_3X2_F v101; // [rsp+150h] [rbp+48h] BYREF
  __int128 v102; // [rsp+168h] [rbp+60h] BYREF

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
  *(_QWORD *)&v100.m[2][0] = 0LL;
  *(_OWORD *)&v100.m11 = *(_OWORD *)&_xmm;
  v83 = 0LL;
  v89 = _xmm;
  *(_OWORD *)&v88[1] = _xmm;
  v91 = _xmm;
  v90 = _xmm;
  v94[1] = _xmm;
  v94[0] = _xmm;
  v94[3] = _xmm;
  v14 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
  v94[2] = _xmm;
  v93 = v93 & 0xC0 | 0x17;
  v88[0] = 0LL;
  v87 = 0LL;
  v102 = 0LL;
  v86 = 0LL;
  v15 = v13 - _mm_cvtepi32_ps(v14).m128_f32[0];
  v14.m128i_i32[0] = *((_DWORD *)this + 57);
  v16 = (float)*((int *)this + 4);
  v92 = 85;
  v95 = 85;
  v96 = v96 & 0xC0 | 0x17;
  v82[0] = 0;
  v99.top = v15;
  *(float *)v14.m128i_i32 = *(float *)v14.m128i_i32 - v16;
  v85 = 0LL;
  v17 = (float)*((int *)this + 6);
  LODWORD(v99.left) = v14.m128i_i32[0];
  v18 = (float)(v17 / v12) + *(float *)v14.m128i_i32;
  *(float *)v14.m128i_i32 = (float)*((int *)this + 7);
  v99.right = v18;
  v99.bottom = (float)(*(float *)v14.m128i_i32 / v12) + v15;
  v19 = CDrawingContext::PushGpuClipRectInternal((__int64)a6, 0LL, (__int64)this + 264, D2D1_ANTIALIAS_MODE_ALIASED, 0);
  v21 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v19, 0x381u);
    goto LABEL_50;
  }
  v22 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *, __int64 *, _QWORD))(*(_QWORD *)a8 + 72LL))(
          a8,
          &v85,
          0LL);
  v21 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, v22, 0x384u);
  }
  else
  {
    v24 = *((float *)a7 + 22);
    v25 = (*((_QWORD *)a6 + 5) + 16LL) & -(__int64)(*((_QWORD *)a6 + 5) != 0LL);
    if ( !CLayerVisual::GetFlatteningToLocalSpace(*((CLayerVisual **)this + 32)) )
      CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest(
        (CTreeEffectLayer *)((char *)this + 128),
        (struct CMILMatrix *)&v88[1],
        (struct CMILMatrix *)v94,
        v82);
    v26 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v25 + 216LL))(
            v25,
            &CLSID_D2D12DAffineTransform,
            &v83);
    v21 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, v26, 0x39Eu);
    }
    else
    {
      v28 = v83;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v83 + 80) + 8LL))(*(_QWORD *)(v83 + 80));
      v30 = *(float *)&v88[1];
      v31 = *((float *)&v89 + 1);
      v32 = *(struct ID2D1Effect **)(v28 + 80);
      v87 = v32;
      if ( *(float *)&v88[1] <= *((float *)&v89 + 1) )
      {
        v33 = *(float *)&v88[1];
        v100.m22 = *(float *)&v88[1] / *((float *)&v89 + 1);
        v100.dy = 0.0 - (float)((float)(*(float *)&v88[1] / *((float *)&v89 + 1)) * 0.0);
      }
      else
      {
        v33 = *((float *)&v89 + 1);
        v100.m11 = *((float *)&v89 + 1) / *(float *)&v88[1];
        v100.dx = 0.0 - (float)((float)(*((float *)&v89 + 1) / *(float *)&v88[1]) * 0.0);
      }
      v34 = v33 * v24;
      v35 = CTreeEffectLayer::InitializeShadowEffect(v29, v32, &v100);
      v21 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0LL, v35, 0x3ADu);
      }
      else
      {
        (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v32 + 112LL))(
          v32,
          0LL,
          v85,
          1LL);
        v37 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v25 + 216LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v83);
        v38 = v37(v25, &CLSID_D2D1Shadow, &v83);
        v21 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0LL, v38, 0x3B1u);
        }
        else
        {
          v40 = v83;
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v83 + 80) + 8LL))(*(_QWORD *)(v83 + 80));
          v41 = *(ID2D1Effect **)(v40 + 80);
          v88[0] = (__int64)v41;
          v42 = *(_OWORD *)((char *)a7 + 72);
          *(float *)v84 = v34 / 3.0;
          v102 = v42;
          v43 = (*(__int64 (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, struct ID2D1Effect **, int))(*(_QWORD *)v41 + 72LL))(
                  v41,
                  0LL,
                  0LL,
                  v84,
                  4);
          v21 = v43;
          if ( v43 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0LL, v43, 0x3B7u);
          }
          else
          {
            v45 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v41 + 72LL))(
                    v41,
                    1LL,
                    0LL,
                    &v102,
                    16);
            v21 = v45;
            if ( v45 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0LL, v45, 0x3BAu);
            }
            else
            {
              LODWORD(v84[0]) = 0;
              v47 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, struct ID2D1Effect **, int))(*(_QWORD *)v41 + 72LL))(
                      v41,
                      2LL,
                      0LL,
                      v84,
                      4);
              v21 = v47;
              if ( v47 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0LL, v47, 0x3BDu);
              }
              else
              {
                v49 = *((float *)a7 + 26);
                v50 = (CLayerVisual *)*((_QWORD *)this + 32);
                *(_QWORD *)&v97.x = *((_QWORD *)a7 + 12);
                v97.z = v49;
                if ( !CLayerVisual::GetFlatteningToLocalSpace(v50) )
                {
                  v51 = CMILMatrix::Transform3DVector(
                          (CTreeEffectLayer *)((char *)this + 128),
                          (struct D2D_VECTOR_3F *)v84,
                          &v97);
                  v52 = *(_QWORD *)&v51->x;
                  *(FLOAT *)&v51 = v51->z;
                  *(_QWORD *)&v97.x = v52;
                  LODWORD(v97.z) = (_DWORD)v51;
                }
                y = v97.y;
                x = v97.x;
                v55 = (float)*((int *)this + 5);
                v56 = (float)*((int *)this + 4);
                v97.y = (float)((float)(v97.y + v99.top) - v34) + v55;
                v97.x = (float)((float)(v97.x + v99.left) - v34) + v56;
                TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(&v99.left, v34, v34);
                v57 = (_DWORD)g_pComposition + 1112;
                if ( *((_DWORD *)g_pComposition + 278) )
                {
                  if ( CComposition::IsOverdrawHeatMapEnabled(g_pComposition)
                    && (*(_BYTE *)(CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v58) + 20) & 9) != 0 )
                  {
                    v97.y = (float)(y + v99.top) + v55;
                    v97.x = (float)(x + v99.left) + v56;
                    v98 = (float)(v99.bottom - v99.top) + v97.y;
                    v97.z = (float)(v99.right - v99.left) + v97.x;
                    TopByReference = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v59);
                    v84[0] = (struct ID2D1Effect *)1;
                    v84[1] = (struct ID2D1Effect *)&v97;
                    v61 = CDrawingContext::FillRectanglesWithSolidColor(a6, (__int64)v84, TopByReference + 4);
                    v21 = v61;
                    if ( v61 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0LL, v61, 0x3E2u);
                  }
                  goto LABEL_48;
                }
                v63 = *((float *)this + 70);
                if ( v63 >= 0.99999881 )
                {
                  v70 = v32;
LABEL_32:
                  ID2D1Effect::SetInputEffect(v41, 0, v70, v57);
                  *(_QWORD *)&v100.m[0][1] = 0LL;
                  if ( v30 <= v31 )
                  {
                    v100.dx = 0.0;
                    v100.m11 = 1.0;
                    v100.m22 = v31 / v30;
                    v100.dy = 0.0 - (float)((float)(v31 / v30) * 0.0);
                  }
                  else
                  {
                    v100.m22 = 1.0;
                    v100.m11 = v30 / v31;
                    *(_QWORD *)&v100.m[2][0] = COERCE_UNSIGNED_INT(0.0 - (float)((float)(v30 / v31) * 0.0));
                  }
                  v71 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v25 + 216LL);
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v83);
                  v72 = v71(v25, &CLSID_D2D12DAffineTransform, &v83);
                  v21 = v72;
                  if ( v72 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0LL, v72, 0x40Bu);
                  }
                  else
                  {
                    v74 = v83;
                    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v83 + 80) + 8LL))(*(_QWORD *)(v83 + 80));
                    v75 = *(struct ID2D1Effect **)(v74 + 80);
                    v86 = v75;
                    v77 = CTreeEffectLayer::InitializeShadowEffect(v76, v75, &v100);
                    v21 = v77;
                    if ( v77 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v78, 0LL, 0LL, v77, 0x40Eu);
                    }
                    else
                    {
                      ID2D1Effect::SetInputEffect(v75, 0, v41, v79);
                      v80 = CDrawingContext::FillEffect(a6, v41, &v99, (const struct D2D_POINT_2F *)&v97, 0);
                      v21 = v80;
                      if ( v80 < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0LL, v80, 0x417u);
                    }
                  }
                  goto LABEL_48;
                }
                *(_QWORD *)&v101.m[0][1] = 0LL;
                *(_QWORD *)&v101.m[2][0] = 0LL;
                v64 = *(_QWORD *)v25;
                v84[0] = 0LL;
                v101.m11 = 1.0 / v63;
                v101.m22 = 1.0 / v63;
                v65 = (*(__int64 (__fastcall **)(__int64, __int64, struct ID2D1Effect **))(v64 + 200))(v25, 7LL, v84);
                v21 = v65;
                if ( v65 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast((__int64)v66, 0LL, 0LL, v65, 0x3F3u);
                }
                else
                {
                  v67 = CTreeEffectLayer::InitializeShadowEffect(v66, v84[0], &v101);
                  v21 = v67;
                  if ( v67 >= 0 )
                  {
                    ID2D1Effect::SetInputEffect(v84[0], 0, v32, v69);
                    v70 = v84[0];
                    goto LABEL_32;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0LL, v67, 0x3F5u);
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_48:
  CDrawingContext::PopGpuClipRectInternal(a6, 0);
LABEL_50:
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::~ComPtr<ID2D1Bitmap1>(&v85);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::~ComPtr<ID2D1Bitmap1>((__int64 *)&v86);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::~ComPtr<ID2D1Bitmap1>((__int64 *)&v87);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::~ComPtr<ID2D1Bitmap1>(v88);
  Microsoft::WRL::ComPtr<CManipulationManager>::~ComPtr<CManipulationManager>(&v83);
  return v21;
}
