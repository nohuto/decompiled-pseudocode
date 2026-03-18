/*
 * XREFs of ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18004C688
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x180063718 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z @ 0x180009CB8 (-SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001CA10 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18001DCE4 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 *     ?DetermineOutputScale@CCustomBlur@@SAMMMW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z @ 0x18004CE84 (-DetermineOutputScale@CCustomBlur@@SAMMMW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z.c)
 *     ?BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU6@@Z @ 0x18004CF00 (-BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBL.c)
 *     ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x18004D3F8 (-DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z.c)
 *     ?Reset@CCustomBlur@@QEAAXXZ @ 0x18004D4A4 (-Reset@CCustomBlur@@QEAAXXZ.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z @ 0x18004D4F4 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18004D550 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18004D620 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Draw@CCustomBlur@@QEAAJPEAVCDrawingContext@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x18004D6A8 (-Draw@CCustomBlur@@QEAAJPEAVCDrawingContext@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLAT.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18004D70C (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004D870 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?GetD2DBitmap@CDrawListBitmap@@QEBAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18004DA04 (-GetD2DBitmap@CDrawListBitmap@@QEBAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?RecordContentInfo@CDrawListBitmap@@QEBAXPEAVCDrawingContext@@@Z @ 0x18004DA7C (-RecordContentInfo@CDrawListBitmap@@QEBAXPEAVCDrawingContext@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18004E2D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18004EB8C (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationIn.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18005F698 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180062F80 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180063658 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800A3284 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800BDF50 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7124 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x1800D8054 (-Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v14; // ecx
  int v15; // edi
  unsigned int *v16; // rdx
  float x_low; // xmm11_4
  float y_low; // xmm12_4
  float v19; // xmm13_4
  float v20; // xmm14_4
  __int64 v21; // rax
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
  bool v32; // bl
  __int64 v33; // r9
  int v34; // eax
  unsigned int v35; // ecx
  bool IsOpaque; // al
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
  unsigned int v49; // ecx
  int v50; // eax
  unsigned int v51; // ecx
  int v52; // eax
  int v54; // eax
  __int64 v55; // rax
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int64 v58; // rax
  __int64 v59; // rax
  __m128 v60; // xmm2
  __m128 v61; // xmm3
  int v62; // r9d
  int v63; // [rsp+28h] [rbp-E0h]
  enum D2D1_INTERPOLATION_MODE v64; // [rsp+28h] [rbp-E0h]
  unsigned int v65; // [rsp+28h] [rbp-E0h]
  enum D2D1_COMPOSITE_MODE v66; // [rsp+30h] [rbp-D8h]
  char v67; // [rsp+48h] [rbp-C0h]
  struct D2D_VECTOR_2F v68; // [rsp+50h] [rbp-B8h] BYREF
  D2D1_GAUSSIANBLUR_OPTIMIZATION v69[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v70; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1Bitmap1 *v71; // [rsp+68h] [rbp-A0h] BYREF
  struct ID2D1Image *v72[2]; // [rsp+70h] [rbp-98h] BYREF
  struct D2D_VECTOR_2F v73; // [rsp+80h] [rbp-88h]
  char *v74; // [rsp+88h] [rbp-80h]
  int v75; // [rsp+90h] [rbp-78h]
  CDrawListBitmap *v76[2]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v77; // [rsp+A8h] [rbp-60h]
  float v78; // [rsp+B8h] [rbp-50h]
  float v79; // [rsp+BCh] [rbp-4Ch]
  __int128 v80; // [rsp+C8h] [rbp-40h]
  CCustomBlur *v81; // [rsp+E0h] [rbp-28h]
  struct D2D_SIZE_F v82; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v83; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v84; // [rsp+100h] [rbp-8h]
  int v85; // [rsp+110h] [rbp+8h]
  char v86[16]; // [rsp+118h] [rbp+10h] BYREF
  __int128 v87; // [rsp+128h] [rbp+20h] BYREF
  __int128 v88; // [rsp+138h] [rbp+30h]
  __int128 v89; // [rsp+148h] [rbp+40h]
  __int128 v90; // [rsp+158h] [rbp+50h]
  int v91; // [rsp+168h] [rbp+60h]
  _BYTE v92[40]; // [rsp+178h] [rbp+70h] BYREF
  float v93; // [rsp+1A0h] [rbp+98h] BYREF
  int v94; // [rsp+1A4h] [rbp+9Ch]
  int v95; // [rsp+1A8h] [rbp+A0h]
  float v96; // [rsp+1ACh] [rbp+A4h]
  float v97; // [rsp+1B0h] [rbp+A8h]
  float v98; // [rsp+1B4h] [rbp+ACh]
  struct D2D_VECTOR_2F v99; // [rsp+1B8h] [rbp+B0h] BYREF
  int v100; // [rsp+1C0h] [rbp+B8h]
  unsigned __int32 v101; // [rsp+1C4h] [rbp+BCh]
  struct D2D_RECT_F v102; // [rsp+1C8h] [rbp+C0h] BYREF

  v6 = (char *)a4 + 8;
  v7 = a6;
  *((_QWORD *)&v77 + 1) = 0LL;
  v9 = *a5;
  v99.x = 0.0;
  v11 = a5[1];
  v99.y = 0.0;
  v100 = v9.m128_i32[0];
  *(__m128 *)v72 = v9;
  v81 = 0LL;
  v73 = (struct D2D_VECTOR_2F)v11.m128_u64[0];
  v91 = 0;
  v101 = _mm_shuffle_ps(v9, v9, 85).m128_u32[0];
  v74 = (char *)a4 + 8;
  v76[0] = a6;
  v71 = 0LL;
  v70 = 0LL;
  CDrawListBitmap::RecordContentInfo((const struct EffectStage *)((char *)a4 + 8), a2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v71);
  D2DBitmap = CDrawListBitmap::GetD2DBitmap((CDrawListBitmap *)v6, &v71);
  v15 = D2DBitmap;
  if ( D2DBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_1802D9038, 2u, D2DBitmap, 0x20Eu, 0LL);
    goto LABEL_30;
  }
  v16 = *(unsigned int **)(*(_QWORD *)(*((_QWORD *)this + 18) + 8LL * *(unsigned int *)a4) + 8LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, D2D1_GAUSSIANBLUR_OPTIMIZATION *, D2D1_GAUSSIANBLUR_OPTIMIZATION *, char *))(**(_QWORD **)v16 + 48LL))(
    *(_QWORD *)v16,
    v16[4],
    v69,
    &v69[1],
    v86);
  CDrawListBitmap::GetSize((CDrawListBitmap *)v6);
  v94 = 0;
  v95 = 0;
  x_low = (float)SLODWORD(v68.x);
  y_low = (float)SLODWORD(v68.y);
  v93 = (float)SLODWORD(v68.x);
  v96 = (float)SLODWORD(v68.y);
  v19 = 0.0 - (float)((float)SLODWORD(v68.x) * 0.0);
  v20 = 0.0 - (float)((float)SLODWORD(v68.y) * 0.0);
  v97 = v19;
  v98 = v20;
  v21 = Matrix3x3::operator*(v6 + 72, v92, &v93);
  v22 = *(_OWORD *)v21;
  v23 = *(_OWORD *)(v21 + 16);
  LODWORD(v21) = *(_DWORD *)(v21 + 32);
  v83 = v22;
  v85 = v21;
  v84 = v23;
  Matrix3x3::Get2DScaleDimensionsWithPerspective(&v83, &v68, &v68.y, &v99);
  v24 = v68.y * *(float *)v69;
  v82.width = v68.x * *(float *)v69;
  v82.height = v68.y * *(float *)v69;
  v25 = CCustomBlur::DetermineOutputScale(x_low, v68.x * *(float *)v69, v69[1]);
  v73 = (struct D2D_VECTOR_2F)__PAIR64__(
                                COERCE_UNSIGNED_INT(CCustomBlur::DetermineOutputScale(y_low, v24, v26)),
                                LODWORD(v25));
  if ( v6[68] && v6[125] )
  {
    CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
      (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v72,
      (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)v76);
    v28 = *(float *)&v77;
    v29 = *((float *)&v77 + 1);
    v30 = *((float *)&v77 + 3);
    v31 = *((float *)&v77 + 2);
    v68 = v73;
  }
  else
  {
    CBrushRenderingGraph::ConfigureIntermediateFromInput(
      v27,
      (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v72,
      (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)v76);
    v31 = *((float *)&v77 + 2);
    v30 = *((float *)&v77 + 3);
    v28 = *(float *)&v77 / v78;
    v29 = *((float *)&v77 + 1) / v79;
    v68.x = *((float *)&v77 + 2) / v78;
    v68.y = *((float *)&v77 + 3) / v79;
  }
  v32 = !CBrushRenderingGraph::DoesIntermediateContributeToSubgraph(this, *((_DWORD *)this + 42) - 1, *(_DWORD *)a4);
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(&v70);
  v33 = *((unsigned int *)a2 + 16);
  v99 = (struct D2D_VECTOR_2F)"DWM External Effect intermediate";
  v100 = 32;
  LOBYTE(v63) = v32;
  v34 = CDrawingContext::PushOffScreenRenderingLayer(a2, &v99, &v76[1], v33, v63, &v70);
  v15 = v34;
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v35, &dword_1802D9038, 2u, v34, 0x24Au, 0LL);
    v7 = v76[0];
    goto LABEL_30;
  }
  IsOpaque = CDrawListBitmap::IsOpaque((CDrawListBitmap *)v6);
  v37 = v70;
  v38 = 3LL;
  if ( !IsOpaque )
    v38 = 1LL;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v70 + 8LL))(v70, v38);
  v39 = (const struct D2D_RECT_F *)(v6 + 108);
  v7 = v76[0];
  v67 = 1;
  if ( v6[125] )
  {
    v67 = 0;
  }
  else
  {
    v94 = 0;
    v95 = 0;
    v93 = x_low;
    v96 = y_low;
    v97 = v19;
    v98 = v20;
    v55 = Matrix3x3::operator*(v6 + 72, v92, &v93);
    v56 = *(_OWORD *)v55;
    v57 = *(_OWORD *)(v55 + 16);
    LODWORD(v55) = *(_DWORD *)(v55 + 32);
    v83 = v56;
    v85 = v55;
    v84 = v57;
    if ( !Matrix3x3::TryInvert((const struct Matrix3x3 *)&v83, (struct Matrix3x3 *)&v83) )
    {
      v43 = -2003304441;
      v15 = -2003304441;
      v65 = 626;
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
    v81 = v42;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v54, 0x61Au, 0LL);
    v42 = v81;
  }
  if ( v15 < 0 )
  {
    v65 = 631;
LABEL_46:
    v62 = v15;
    goto LABEL_47;
  }
  v43 = CCustomBlur::BuildEffect(v42, v71, v39, &v82, v69[1], &v68, &v99);
  v15 = v43;
  if ( v43 < 0 )
  {
    v65 = 637;
  }
  else
  {
    v44 = (float)(v39->right - v39->left) * v28;
    v45 = (float)(v39->top * v68.y) + v99.y;
    v102.left = (float)(v39->left * v68.x) + v99.x;
    v46 = v39->bottom - v39->top;
    v102.top = v45;
    v102.right = v44 + v102.left;
    v102.bottom = (float)(v46 * v29) + v45;
    if ( v67 )
    {
      HIDWORD(v72[0]) = 0;
      v72[1] = 0LL;
      v73.y = 0.0;
      v75 = 1065353216;
      *(float *)v72 = 1.0 / v68.x;
      v73.x = 1.0 / v68.y;
      *(float *)&v74 = 0.0 - (float)((float)(1.0 / v68.x) * 0.0);
      *((float *)&v74 + 1) = 0.0 - (float)((float)(1.0 / v68.y) * 0.0);
      v58 = Matrix3x3::operator*(v72, v92, &v83);
      v94 = 0;
      v95 = 0;
      v93 = v31;
      v96 = v30;
      v97 = 0.0 - (float)(v31 * 0.0);
      v98 = 0.0 - (float)(v30 * 0.0);
      v59 = Matrix3x3::operator*(v58, v72, &v93);
      LODWORD(v76[1]) = 0;
      v60 = *(__m128 *)v59;
      v91 = 0;
      v61 = *(__m128 *)(v59 + 16);
      LODWORD(v59) = *(_DWORD *)(v59 + 32);
      LODWORD(v76[0]) = v60.m128_i32[0];
      HIDWORD(v76[0]) = _mm_shuffle_ps(v60, v60, 85).m128_u32[0];
      HIDWORD(v77) = _mm_shuffle_ps(v61, v61, 85).m128_u32[0];
      LODWORD(v80) = _mm_shuffle_ps(v61, v61, 170).m128_u32[0];
      LODWORD(v77) = _mm_shuffle_ps(v60, v60, 255).m128_u32[0];
      *(_QWORD *)((char *)&v77 + 4) = v61.m128_u32[0];
      v85 = v59;
      HIDWORD(v80) = v59;
      v88 = v77;
      HIDWORD(v76[1]) = _mm_shuffle_ps(v60, v60, 170).m128_u32[0];
      *(_QWORD *)((char *)&v80 + 4) = _mm_shuffle_ps(v61, v61, 255).m128_u32[0];
      v87 = *(_OWORD *)v76;
      v90 = v80;
      v89 = _xmm;
    }
    else
    {
      v87 = _xmm;
      v88 = _xmm;
      v89 = _xmm;
      v90 = _xmm;
      LOWORD(v91) = 32085;
    }
    v43 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v87, 0, 1);
    v15 = v43;
    if ( v43 >= 0 )
    {
      v15 = CCustomBlur::Draw(v42, a2, &v102, v47, v64, v66);
      CDrawingContext::PopTransformInternal(a2, 1);
      if ( v15 >= 0 )
      {
        v48 = CDrawingContext::PopLayer(a2);
        v15 = v48;
        if ( v48 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v49, &dword_1802D9038, 2u, v48, 0x2A7u, 0LL);
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
            MilInstrumentationCheckHR_MaybeFailFast(v51, &dword_1802D9038, 2u, v50, 0x2AAu, 0LL);
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
      v65 = 675;
      goto LABEL_46;
    }
    v65 = 665;
  }
LABEL_40:
  v62 = v43;
LABEL_47:
  MilInstrumentationCheckHR_MaybeFailFast(v40, &dword_1802D9038, 2u, v62, v65, 0LL);
  CDrawingContext::PopLayer(a2);
  v42 = v81;
LABEL_28:
  if ( v42 )
    CCustomBlur::Reset(v42);
LABEL_30:
  if ( v15 == -2003304441 )
    v15 = CDrawListBitmap::SetTransparent(v7, (CD3DDevice **)a2);
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(&v70);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v71);
  return (unsigned int)v15;
}
