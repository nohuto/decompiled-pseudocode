/*
 * XREFs of ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180070974
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18006DE6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z @ 0x180013BD8 (-SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D910 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18001EC58 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002F7B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180046338 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x1800471A8 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180049D80 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x180051568 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18007059C (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180070700 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?DetermineOutputScale@CCustomBlur@@SAMMMW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z @ 0x180071170 (-DetermineOutputScale@CCustomBlur@@SAMMMW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z.c)
 *     ?BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU6@@Z @ 0x1800711EC (-BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBL.c)
 *     ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x1800716E4 (-DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z.c)
 *     ?Reset@CCustomBlur@@QEAAXXZ @ 0x180071790 (-Reset@CCustomBlur@@QEAAXXZ.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z @ 0x1800717E0 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18007183C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18007190C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Draw@CCustomBlur@@QEAAJPEAVCDrawingContext@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180071994 (-Draw@CCustomBlur@@QEAAJPEAVCDrawingContext@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLAT.c)
 *     ?GetD2DBitmap@CDrawListBitmap@@QEBAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800719F8 (-GetD2DBitmap@CDrawListBitmap@@QEBAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?RecordContentInfo@CDrawListBitmap@@QEBAXPEAVCDrawingContext@@@Z @ 0x180071A70 (-RecordContentInfo@CDrawListBitmap@@QEBAXPEAVCDrawingContext@@@Z.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800738E0 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationIn.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800B7B20 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x1800D06B4 (-Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderExternalEffect(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct _GUID *a3,
        const struct EffectStage *a4,
        __m128 *a5,
        struct EffectInput *a6)
{
  char *v6; // r15
  CDrawListBitmap *v7; // rsi
  __m128 v9; // xmm1
  __m128 v11; // xmm0
  int D2DBitmap; // eax
  __int64 v14; // rcx
  int v15; // edi
  unsigned int *v16; // rdx
  float x_low; // xmm11_4
  float y_low; // xmm12_4
  float v19; // xmm13_4
  float v20; // xmm14_4
  float *v21; // rax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  float v24; // xmm7_4
  float v25; // xmm6_4
  enum D2D1_GAUSSIANBLUR_OPTIMIZATION v26; // r8d
  CBrushRenderingGraph *v27; // rcx
  float v28; // xmm6_4
  float v29; // xmm7_4
  float v30; // xmm8_4
  float v31; // xmm9_4
  unsigned __int8 v32; // bl
  int v33; // r9d
  int v34; // eax
  __int64 v35; // rcx
  char IsOpaque; // al
  __int64 v37; // rbx
  __int64 v38; // rdx
  const struct D2D_RECT_F *v39; // r13
  __int64 v40; // rcx
  struct CCustomBlur **v41; // r15
  CCustomBlur *v42; // r15
  int v43; // eax
  float v44; // xmm0_4
  FLOAT v45; // xmm2_4
  float v46; // xmm1_4
  const struct D2D_POINT_2F *v47; // r9
  int v48; // eax
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  int v54; // eax
  float *v55; // rax
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  float *v58; // rax
  float *v59; // rax
  __m128 v60; // xmm2
  __m128 v61; // xmm3
  int v62; // r9d
  enum D2D1_INTERPOLATION_MODE v63; // [rsp+28h] [rbp-E0h]
  unsigned int v64; // [rsp+28h] [rbp-E0h]
  enum D2D1_COMPOSITE_MODE v65; // [rsp+30h] [rbp-D8h]
  char v66; // [rsp+48h] [rbp-C0h]
  struct D2D_VECTOR_2F v67; // [rsp+50h] [rbp-B8h] BYREF
  D2D1_GAUSSIANBLUR_OPTIMIZATION v68[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v69; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1Bitmap1 *v70; // [rsp+68h] [rbp-A0h] BYREF
  struct ID2D1Image *v71[2]; // [rsp+70h] [rbp-98h] BYREF
  struct D2D_VECTOR_2F v72; // [rsp+80h] [rbp-88h]
  char *v73; // [rsp+88h] [rbp-80h]
  int v74; // [rsp+90h] [rbp-78h]
  CDrawListBitmap *v75[2]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v76; // [rsp+A8h] [rbp-60h]
  float v77; // [rsp+B8h] [rbp-50h]
  float v78; // [rsp+BCh] [rbp-4Ch]
  __int128 v79; // [rsp+C8h] [rbp-40h]
  CCustomBlur *v80; // [rsp+E0h] [rbp-28h]
  struct D2D_SIZE_F v81; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v82; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v83; // [rsp+100h] [rbp-8h]
  int v84; // [rsp+110h] [rbp+8h]
  char v85[16]; // [rsp+118h] [rbp+10h] BYREF
  __int128 v86; // [rsp+128h] [rbp+20h] BYREF
  __int128 v87; // [rsp+138h] [rbp+30h]
  __int128 v88; // [rsp+148h] [rbp+40h]
  __int128 v89; // [rsp+158h] [rbp+50h]
  int v90; // [rsp+168h] [rbp+60h]
  float v91[10]; // [rsp+178h] [rbp+70h] BYREF
  float v92; // [rsp+1A0h] [rbp+98h] BYREF
  int v93; // [rsp+1A4h] [rbp+9Ch]
  int v94; // [rsp+1A8h] [rbp+A0h]
  float v95; // [rsp+1ACh] [rbp+A4h]
  float v96; // [rsp+1B0h] [rbp+A8h]
  float v97; // [rsp+1B4h] [rbp+ACh]
  struct D2D_VECTOR_2F v98; // [rsp+1B8h] [rbp+B0h] BYREF
  int v99; // [rsp+1C0h] [rbp+B8h]
  unsigned __int32 v100; // [rsp+1C4h] [rbp+BCh]
  struct D2D_RECT_F v101; // [rsp+1C8h] [rbp+C0h] BYREF

  v6 = (char *)a4 + 8;
  v7 = a6;
  *((_QWORD *)&v76 + 1) = 0LL;
  v9 = *a5;
  v98.x = 0.0;
  v11 = a5[1];
  v98.y = 0.0;
  v99 = v9.m128_i32[0];
  *(__m128 *)v71 = v9;
  v80 = 0LL;
  v72 = (struct D2D_VECTOR_2F)v11.m128_u64[0];
  v90 = 0;
  v100 = _mm_shuffle_ps(v9, v9, 85).m128_u32[0];
  v73 = (char *)a4 + 8;
  v75[0] = a6;
  v70 = 0LL;
  v69 = 0LL;
  CDrawListBitmap::RecordContentInfo((const struct EffectStage *)((char *)a4 + 8), a2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v70);
  D2DBitmap = CDrawListBitmap::GetD2DBitmap((CDrawListBitmap *)v6, &v70);
  v15 = D2DBitmap;
  if ( D2DBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_1802DCD60, 2u, D2DBitmap, 0x20Eu, 0LL);
    goto LABEL_30;
  }
  v16 = *(unsigned int **)(*(_QWORD *)(*((_QWORD *)this + 18) + 8LL * *(unsigned int *)a4) + 8LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, D2D1_GAUSSIANBLUR_OPTIMIZATION *, D2D1_GAUSSIANBLUR_OPTIMIZATION *, char *))(**(_QWORD **)v16 + 48LL))(
    *(_QWORD *)v16,
    v16[4],
    v68,
    &v68[1],
    v85);
  CDrawListBitmap::GetSize((CDrawListBitmap *)v6, &v67);
  v93 = 0;
  v94 = 0;
  x_low = (float)SLODWORD(v67.x);
  y_low = (float)SLODWORD(v67.y);
  v92 = (float)SLODWORD(v67.x);
  v95 = (float)SLODWORD(v67.y);
  v19 = 0.0 - (float)((float)SLODWORD(v67.x) * 0.0);
  v20 = 0.0 - (float)((float)SLODWORD(v67.y) * 0.0);
  v96 = v19;
  v97 = v20;
  v21 = Matrix3x3::operator*((float *)v6 + 18, v91, &v92);
  v22 = *(_OWORD *)v21;
  v23 = *((_OWORD *)v21 + 1);
  *(float *)&v21 = v21[8];
  v82 = v22;
  v84 = (int)v21;
  v83 = v23;
  Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)&v82, (float *)&v67, &v67.y, (float *)&v98);
  v24 = v67.y * *(float *)v68;
  v81.width = v67.x * *(float *)v68;
  v81.height = v67.y * *(float *)v68;
  v25 = CCustomBlur::DetermineOutputScale(x_low, v67.x * *(float *)v68, v68[1]);
  v72 = (struct D2D_VECTOR_2F)__PAIR64__(
                                COERCE_UNSIGNED_INT(CCustomBlur::DetermineOutputScale(y_low, v24, v26)),
                                LODWORD(v25));
  if ( v6[68] && v6[125] )
  {
    CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
      (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v71,
      (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)v75);
    v28 = *(float *)&v76;
    v29 = *((float *)&v76 + 1);
    v30 = *((float *)&v76 + 3);
    v31 = *((float *)&v76 + 2);
    v67 = v72;
  }
  else
  {
    CBrushRenderingGraph::ConfigureIntermediateFromInput(
      v27,
      (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v71,
      (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)v75);
    v31 = *((float *)&v76 + 2);
    v30 = *((float *)&v76 + 3);
    v28 = *(float *)&v76 / v77;
    v29 = *((float *)&v76 + 1) / v78;
    v67.x = *((float *)&v76 + 2) / v77;
    v67.y = *((float *)&v76 + 3) / v78;
  }
  v32 = !CBrushRenderingGraph::DoesIntermediateContributeToSubgraph(this, *((_DWORD *)this + 42) - 1, *(_DWORD *)a4);
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(&v69);
  v33 = *((_DWORD *)a2 + 16);
  v98 = (struct D2D_VECTOR_2F)"DWM External Effect intermediate";
  v99 = 32;
  v34 = CDrawingContext::PushOffScreenRenderingLayer(a2, (__int64)&v98, (float *)&v75[1], v33, v32, &v69);
  v15 = v34;
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v35, &dword_1802DCD60, 2u, v34, 0x24Au, 0LL);
    v7 = v75[0];
    goto LABEL_30;
  }
  IsOpaque = CDrawListBitmap::IsOpaque((CDrawListBitmap *)v6);
  v37 = v69;
  v38 = 3LL;
  if ( !IsOpaque )
    v38 = 1LL;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v69 + 8LL))(v69, v38);
  v39 = (const struct D2D_RECT_F *)(v6 + 108);
  v7 = v75[0];
  v66 = 1;
  if ( v6[125] )
  {
    v66 = 0;
  }
  else
  {
    v93 = 0;
    v94 = 0;
    v92 = x_low;
    v95 = y_low;
    v96 = v19;
    v97 = v20;
    v55 = Matrix3x3::operator*((float *)v6 + 18, v91, &v92);
    v56 = *(_OWORD *)v55;
    v57 = *((_OWORD *)v55 + 1);
    *(float *)&v55 = v55[8];
    v82 = v56;
    v84 = (int)v55;
    v83 = v57;
    if ( !Matrix3x3::TryInvert((const struct Matrix3x3 *)&v82, (struct Matrix3x3 *)&v82) )
    {
      v43 = -2003304441;
      v15 = -2003304441;
      v64 = 626;
      goto LABEL_40;
    }
  }
  v40 = *((_QWORD *)a2 + 5);
  v15 = 0;
  v41 = (struct CCustomBlur **)(v40 + 368);
  if ( *(_QWORD *)(v40 + 368)
    || (v54 = CCustomBlur::Create(*(struct ID2D1DeviceContext **)(v40 + 256), v41), v15 = v54, v54 >= 0) )
  {
    v42 = *v41;
    v80 = v42;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v54, 0x61Au, 0LL);
    v42 = v80;
  }
  if ( v15 < 0 )
  {
    v64 = 631;
LABEL_46:
    v62 = v15;
    goto LABEL_47;
  }
  v43 = CCustomBlur::BuildEffect(v42, v70, v39, &v81, v68[1], &v67, &v98);
  v15 = v43;
  if ( v43 < 0 )
  {
    v64 = 637;
  }
  else
  {
    v44 = (float)(v39->right - v39->left) * v28;
    v45 = (float)(v39->top * v67.y) + v98.y;
    v101.left = (float)(v39->left * v67.x) + v98.x;
    v46 = v39->bottom - v39->top;
    v101.top = v45;
    v101.right = v44 + v101.left;
    v101.bottom = (float)(v46 * v29) + v45;
    if ( v66 )
    {
      HIDWORD(v71[0]) = 0;
      v71[1] = 0LL;
      v72.y = 0.0;
      v74 = 1065353216;
      *(float *)v71 = 1.0 / v67.x;
      v72.x = 1.0 / v67.y;
      *(float *)&v73 = 0.0 - (float)((float)(1.0 / v67.x) * 0.0);
      *((float *)&v73 + 1) = 0.0 - (float)((float)(1.0 / v67.y) * 0.0);
      v58 = Matrix3x3::operator*((float *)v71, v91, (float *)&v82);
      v93 = 0;
      v94 = 0;
      v92 = v31;
      v95 = v30;
      v96 = 0.0 - (float)(v31 * 0.0);
      v97 = 0.0 - (float)(v30 * 0.0);
      v59 = Matrix3x3::operator*(v58, (float *)v71, &v92);
      LODWORD(v75[1]) = 0;
      v60 = *(__m128 *)v59;
      v90 = 0;
      v61 = *(__m128 *)(v59 + 4);
      *(float *)&v59 = v59[8];
      LODWORD(v75[0]) = v60.m128_i32[0];
      HIDWORD(v75[0]) = _mm_shuffle_ps(v60, v60, 85).m128_u32[0];
      HIDWORD(v76) = _mm_shuffle_ps(v61, v61, 85).m128_u32[0];
      LODWORD(v79) = _mm_shuffle_ps(v61, v61, 170).m128_u32[0];
      LODWORD(v76) = _mm_shuffle_ps(v60, v60, 255).m128_u32[0];
      *(_QWORD *)((char *)&v76 + 4) = v61.m128_u32[0];
      v84 = (int)v59;
      HIDWORD(v79) = (_DWORD)v59;
      v87 = v76;
      HIDWORD(v75[1]) = _mm_shuffle_ps(v60, v60, 170).m128_u32[0];
      *(_QWORD *)((char *)&v79 + 4) = _mm_shuffle_ps(v61, v61, 255).m128_u32[0];
      v86 = *(_OWORD *)v75;
      v89 = v79;
      v88 = _xmm;
    }
    else
    {
      v86 = _xmm;
      v87 = _xmm;
      v88 = _xmm;
      v89 = _xmm;
      LOWORD(v90) = 32085;
    }
    v43 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v86, 0, 1);
    v15 = v43;
    if ( v43 >= 0 )
    {
      v15 = CCustomBlur::Draw(v42, a2, &v101, v47, v63, v65);
      CDrawingContext::PopTransformInternal(a2, 1);
      if ( v15 >= 0 )
      {
        v48 = CDrawingContext::PopLayer(a2);
        v15 = v48;
        if ( v48 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v49, &dword_1802DCD60, 2u, v48, 0x2A7u, 0LL);
        }
        else
        {
          v50 = CDrawListBitmap::Initialize(
                  v7,
                  (struct IBitmapRealization *)(v37 + *(int *)(*(_QWORD *)(v37 + 8) + 16LL) + 8LL),
                  a2);
          v15 = v50;
          if ( v50 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v51, &dword_1802DCD60, 2u, v50, 0x2AAu, 0LL);
          }
          else
          {
            v52 = *((_DWORD *)a4 + 18);
            if ( (v52 & 0x80u) != 0 )
            {
              *((_DWORD *)v7 + 16) |= 0x80u;
              v52 = *((_DWORD *)a4 + 18);
            }
            if ( (v52 & 2) != 0 )
            {
              *((_DWORD *)v7 + 16) |= 2u;
              v52 = *((_DWORD *)a4 + 18);
            }
            if ( (v52 & 4) != 0 )
            {
              *((_DWORD *)v7 + 16) |= 4u;
              v52 = *((_DWORD *)a4 + 18);
            }
            if ( (v52 & 0x100) != 0 )
              *((_DWORD *)v7 + 16) |= 0x100u;
          }
        }
        goto LABEL_28;
      }
      v64 = 675;
      goto LABEL_46;
    }
    v64 = 665;
  }
LABEL_40:
  v62 = v43;
LABEL_47:
  MilInstrumentationCheckHR_MaybeFailFast(v40, &dword_1802DCD60, 2u, v62, v64, 0LL);
  CDrawingContext::PopLayer(a2);
  v42 = v80;
LABEL_28:
  if ( v42 )
    CCustomBlur::Reset(v42);
LABEL_30:
  if ( v15 == -2003304441 )
    v15 = CDrawListBitmap::SetTransparent(v7, (CD3DDevice **)a2);
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(&v69);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v70);
  return (unsigned int)v15;
}
