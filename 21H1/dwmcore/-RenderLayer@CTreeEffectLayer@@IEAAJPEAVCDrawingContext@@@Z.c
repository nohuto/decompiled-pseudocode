/*
 * XREFs of ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000DCA8
 * Callers:
 *     ?RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x18000DC20 (-RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x18000D150 (-IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z.c)
 *     ?RenderEffect@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000E158 (-RenderEffect@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilR.c)
 *     ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingContext@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x18000E368 (-GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingCont.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x18000EDA4 (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x18000EDD4 (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D910 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18002F524 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002F7B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18002FB48 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x18004F0CC (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18007059C (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18007183C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18007190C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A6070 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1800B4D78 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x180194878 (-RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@.c)
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x1801949A8 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x1801C3090 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801D5F38 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801D6298 (-GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderLayer(CTreeEffectLayer *this, struct CDrawingContext *a2)
{
  CLayerVisual *v3; // rcx
  int v5; // r15d
  CDropShadow *v6; // rax
  float height; // xmm9_4
  float width; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm8_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // esi
  float v22; // xmm2_4
  __m128i v23; // xmm1
  FLOAT v24; // xmm0_4
  FLOAT v25; // xmm0_4
  __m128i v26; // xmm1
  float v27; // xmm2_4
  struct CBrush *MaskForLayerVisualNoRef; // r12
  CLayerVisual *v29; // rbx
  __int128 *v30; // rdx
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int64 v35; // r9
  int v36; // eax
  unsigned int v37; // ecx
  char v38; // bl
  int v39; // eax
  unsigned int v40; // ecx
  int v41; // eax
  unsigned int v42; // ecx
  CVisual *v43; // rcx
  __int64 v44; // rax
  struct CBrush *v45; // rcx
  int v46; // eax
  unsigned int v47; // ecx
  float v48; // xmm6_4
  float v49; // xmm7_4
  CLayerVisual *v50; // rcx
  int v51; // eax
  unsigned int v52; // ecx
  char *v53; // rcx
  int v54; // eax
  unsigned int v55; // ecx
  __m128i v56; // xmm4
  FLOAT v57; // xmm5_4
  float v58; // xmm2_4
  float v59; // xmm1_4
  int v60; // eax
  unsigned int v61; // ecx
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  int v66; // eax
  unsigned int v67; // ecx
  struct IRenderTargetBitmap *v68; // rbx
  int v69; // eax
  unsigned int v70; // ecx
  float v71; // xmm9_4
  float v72; // xmm6_4
  float v73; // xmm7_4
  CLayerVisual *v74; // rcx
  float v75; // xmm8_4
  int v76; // eax
  unsigned int v77; // ecx
  float v78; // xmm0_4
  float v79; // xmm0_4
  float v80; // xmm0_4
  float v81; // xmm0_4
  float v82; // xmm2_4
  float v83; // xmm1_4
  bool AutomaticBoundsExpansion; // al
  struct D2D_SIZE_F *v85; // rdx
  int v86; // eax
  unsigned int v87; // ecx
  int v88; // eax
  unsigned int v89; // ecx
  int v90; // eax
  unsigned int v91; // ecx
  int v92; // [rsp+28h] [rbp-E0h]
  struct IRenderTargetBitmap *v93; // [rsp+60h] [rbp-A8h] BYREF
  struct D2D_POINT_2F v94; // [rsp+68h] [rbp-A0h] BYREF
  struct D2D_SIZE_F v95[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v96; // [rsp+88h] [rbp-80h]
  __int128 v97; // [rsp+98h] [rbp-70h]
  __int128 v98; // [rsp+A8h] [rbp-60h]
  int v99; // [rsp+B8h] [rbp-50h]
  __int128 v100; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v101; // [rsp+D8h] [rbp-30h]
  __int128 v102; // [rsp+E8h] [rbp-20h]
  __int128 v103; // [rsp+F8h] [rbp-10h]
  __int16 v104; // [rsp+108h] [rbp+0h]
  _OWORD v105[4]; // [rsp+118h] [rbp+10h] BYREF
  int v106; // [rsp+158h] [rbp+50h]
  struct D2D_SIZE_F v107; // [rsp+168h] [rbp+60h] BYREF
  float v108; // [rsp+170h] [rbp+68h]
  float v109; // [rsp+174h] [rbp+6Ch]
  __int128 v110; // [rsp+178h] [rbp+70h] BYREF
  struct D2D_SIZE_F v111; // [rsp+188h] [rbp+80h] BYREF
  float v112; // [rsp+190h] [rbp+88h]
  float v113; // [rsp+194h] [rbp+8Ch]
  __int128 v114; // [rsp+198h] [rbp+90h] BYREF
  struct D2D_POINT_2F v115[2]; // [rsp+1A8h] [rbp+A0h] BYREF

  v3 = (CLayerVisual *)*((_QWORD *)this + 32);
  v99 = 0;
  v5 = 0;
  if ( !v3 || (v6 = (CDropShadow *)*((_QWORD *)v3 + 77), (v95[0] = (struct D2D_SIZE_F)v6) == 0LL) )
  {
    height = *((float *)this + 58);
    v9 = height + *((float *)this + 60);
    v107.width = *((FLOAT *)this + 57);
    width = v107.width;
    v10 = v107.width + *((float *)this + 59);
    v107.height = height;
    v109 = v9;
    v108 = v10;
    if ( CLayerVisual::GetFlatteningToLocalSpace(v3) )
    {
      CMILMatrix::Transform2DBoundsHelper<1>((char *)this + 128, &v107, &v107);
      v9 = v109;
      v10 = v108;
      height = v107.height;
      width = v107.width;
    }
    v11 = *((float *)this + 66);
    if ( v11 > width )
    {
      v107.width = *((FLOAT *)this + 66);
      width = v11;
    }
    v12 = *((float *)this + 67);
    if ( v12 > height )
    {
      v107.height = *((FLOAT *)this + 67);
      height = v12;
    }
    v13 = *((float *)this + 68);
    if ( v10 > v13 )
    {
      v108 = *((float *)this + 68);
      v10 = v13;
    }
    v14 = *((float *)this + 69);
    if ( v9 > v14 )
    {
      v109 = *((float *)this + 69);
      v9 = v14;
    }
    if ( v10 <= width || v9 <= height )
    {
      v109 = 0.0;
      v108 = 0.0;
      v107.height = 0.0;
      v107.width = 0.0;
    }
    v15 = *((float *)this + 70);
    v16 = *((float *)this + 50);
    v17 = *((float *)this + 49);
    v94.x = 0.0;
    v94.y = 0.0;
    v106 = 0;
    CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
      this,
      v17,
      v16,
      v15,
      v15,
      &v94,
      a2,
      (struct CMILMatrix *)v105,
      v95);
    v18 = CTreeEffectLayer::RenderEffect(this, a2, (struct CMILMatrix *)v105, (__int64)v95);
    v20 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x215u, 0LL);
LABEL_17:
    if ( !v5 )
      return v20;
    goto LABEL_62;
  }
  v22 = *((float *)this + 58);
  v23 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v24 = (float)*((int *)this + 6);
  v93 = 0LL;
  v107.width = v24;
  v25 = (float)*((int *)this + 4);
  LODWORD(v107.height) = _mm_cvtepi32_ps(v23).m128_u32[0];
  v26 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
  v94.x = v25;
  LODWORD(v114) = *((_DWORD *)this + 57);
  *(_QWORD *)((char *)&v114 + 4) = __PAIR64__(*(float *)&v114 + *((float *)this + 59), LODWORD(v22));
  v27 = v22 + *((float *)this + 60);
  LODWORD(v94.y) = _mm_cvtepi32_ps(v26).m128_u32[0];
  *((float *)&v114 + 3) = v27;
  MaskForLayerVisualNoRef = CDropShadow::GetMaskForLayerVisualNoRef(v6);
  if ( MaskForLayerVisualNoRef )
  {
    v29 = (CLayerVisual *)*((_QWORD *)this + 32);
    v110 = 0LL;
    *(_OWORD *)&v115[0].x = 0LL;
    if ( CLayerVisual::GetFlatteningToLocalSpace(v29) )
    {
      v30 = &v100;
      v100 = _xmm;
      v104 = 32085;
      v101 = _xmm;
      v102 = _xmm;
      v103 = _xmm;
    }
    else
    {
      v31 = *((_OWORD *)this + 8);
      v30 = v105;
      v32 = *((_OWORD *)this + 9);
      v106 = *((_DWORD *)this + 48);
      v105[0] = v31;
      v33 = *((_OWORD *)this + 10);
      v105[1] = v32;
      v34 = *((_OWORD *)this + 11);
      v105[2] = v33;
      v105[3] = v34;
    }
    CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(
      (_DWORD)v29,
      (_DWORD)v30,
      (_DWORD)this + 212,
      (unsigned int)&v110,
      (__int64)v115);
    v94 = (struct D2D_POINT_2F)v110;
    v107.width = *((float *)&v110 + 2) - *(float *)&v110;
    v107.height = *((float *)&v110 + 3) - *((float *)&v110 + 1);
  }
  if ( CDrawingContext::IsSurfaceSizeValid(a2) )
  {
    v35 = *((unsigned int *)a2 + 16);
    *(_QWORD *)&v110 = "DWM Tree Effect Shadow intermediate";
    DWORD2(v110) = 35;
    LOBYTE(v92) = 1;
    if ( (int)CDrawingContext::PushOffScreenRenderingLayer(a2, &v110, &v107, v35, v92, &v93) >= 0 )
    {
LABEL_29:
      v38 = 1;
      goto LABEL_35;
    }
    *((_QWORD *)&v110 + 1) = *((_QWORD *)this + 32);
    LODWORD(v110) = 7;
    v36 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)a2 + 376, &v110);
    v20 = v36;
    if ( v36 >= 0 )
    {
      Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(&v93);
      goto LABEL_29;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x12Eu, 0LL);
LABEL_32:
    Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(&v93);
    return v20;
  }
  *((_QWORD *)&v110 + 1) = *((_QWORD *)this + 32);
  LODWORD(v110) = 7;
  v39 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)a2 + 376, &v110);
  v20 = v39;
  if ( v39 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x138u, 0LL);
    goto LABEL_32;
  }
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(&v93);
  v38 = 0;
LABEL_35:
  v41 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
  v20 = v41;
  if ( v41 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x13Eu, 0LL);
    Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(&v93);
    goto LABEL_64;
  }
  v43 = (CVisual *)*((_QWORD *)this + 32);
  v5 = 1;
  if ( MaskForLayerVisualNoRef )
  {
    if ( !CVisual::GetEffectiveSize(v43, (float *)&v111, (float *)v115) )
      goto LABEL_50;
    v44 = *((_QWORD *)MaskForLayerVisualNoRef + 7);
    v114 = 0LL;
    v111.height = v115[0].x;
    v45 = (struct CBrush *)((char *)MaskForLayerVisualNoRef + *(int *)(v44 + 8) + 56);
    v46 = (**(__int64 (__fastcall ***)(struct CBrush *, struct D2D_SIZE_F *, __int128 *))v45)(v45, &v111, &v114);
    v20 = v46;
    if ( v46 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x14Eu, 0LL);
    }
    else
    {
      v48 = *(float *)&v114;
      v49 = *((float *)&v114 + 1);
      v50 = (CLayerVisual *)*((_QWORD *)this + 32);
      v110 = v114;
      v115[0].x = *((float *)&v114 + 2) - *(float *)&v114;
      v115[0].y = *((float *)&v114 + 3) - *((float *)&v114 + 1);
      if ( !CLayerVisual::GetFlatteningToLocalSpace(v50) )
      {
        CMILMatrix::Transform2DBoundsHelper<1>((char *)this + 128, &v114, &v110);
        v49 = *((float *)&v110 + 1);
        v48 = *(float *)&v110;
      }
      v100 = _xmm;
      v101 = _xmm;
      v102 = _xmm;
      v103 = _xmm;
      v104 = 32085;
      CMILMatrix::Translate((CMILMatrix *)&v100, v48 - v94.x, v49 - v94.y);
      v51 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v100, 0, 1);
      v20 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x162u, 0LL);
      }
      else
      {
        v5 = 2;
        v53 = (char *)MaskForLayerVisualNoRef + *(int *)(*((_QWORD *)MaskForLayerVisualNoRef + 7) + 8LL) + 56;
        v54 = (*(__int64 (__fastcall **)(char *, struct CDrawingContext *, struct D2D_POINT_2F *, _QWORD))(*(_QWORD *)v53 + 16LL))(
                v53,
                a2,
                v115,
                0LL);
        v20 = v54;
        if ( v54 >= 0 )
        {
          CDrawingContext::PopTransformInternal(a2, 1);
          goto LABEL_50;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x167u, 0LL);
      }
    }
LABEL_46:
    Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(&v93);
    goto LABEL_63;
  }
  v110 = 0LL;
  CLayerVisual::GetUpdatedDropShadowBounds(v43, &v114, &v110);
  v56 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
  v57 = (float)*((int *)this + 5);
  v104 = 32085;
  v115[0].y = v57;
  v115[0].x = _mm_cvtepi32_ps(v56).m128_f32[0];
  *((float *)&v114 + 1) = *((float *)&v110 + 1) + COERCE_FLOAT(LODWORD(v57) ^ _xmm);
  *(float *)&v114 = COERCE_FLOAT(LODWORD(v115[0].x) ^ _xmm) + *(float *)&v110;
  v58 = *((float *)this + 50) - v57;
  *((float *)&v114 + 3) = *((float *)&v110 + 3) + COERCE_FLOAT(LODWORD(v57) ^ _xmm);
  v101 = _xmm;
  v103 = _xmm;
  v59 = *((float *)this + 49);
  *((float *)&v114 + 2) = *((float *)&v110 + 2) + COERCE_FLOAT(LODWORD(v115[0].x) ^ _xmm);
  v100 = _xmm;
  v102 = _xmm;
  CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
    this,
    v59 - v115[0].x,
    v58,
    1.0,
    1.0,
    v115,
    a2,
    (struct CMILMatrix *)&v100,
    &v111);
  v60 = CTreeEffectLayer::RenderEffect(this, a2, (struct CMILMatrix *)&v100, (__int64)&v111);
  v20 = v60;
  if ( v60 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, v60, 0x18Du, 0LL);
    goto LABEL_46;
  }
LABEL_50:
  CDrawingContext::PopTransformInternal(a2, 1);
  CDrawingContext::PopLayer(a2);
  if ( CLayerVisual::GetFlatteningToLocalSpace(*((CLayerVisual **)this + 32)) )
  {
    v62 = *((_OWORD *)this + 8);
    v63 = *((_OWORD *)this + 9);
    v99 = *((_DWORD *)this + 48);
    *(_OWORD *)&v95[1].width = v62;
    v64 = *((_OWORD *)this + 10);
    v96 = v63;
    v65 = *((_OWORD *)this + 11);
  }
  else
  {
    *(_OWORD *)&v95[1].width = _xmm;
    v64 = _xmm;
    v96 = _xmm;
    v65 = _xmm;
    LOWORD(v99) = 32085;
  }
  v98 = v65;
  v97 = v64;
  v66 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v95[1], 0, 1);
  v20 = v66;
  if ( v66 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0x1A2u, 0LL);
    goto LABEL_32;
  }
  v68 = v93;
  v5 = 1;
  v69 = CTreeEffectLayer::RenderShadow(this, &v94, &v107, 1.0, 1.0, a2, *(struct CDropShadow **)v95, v93);
  v20 = v69;
  if ( v69 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, v69, 0x1AEu, 0LL);
  }
  else
  {
    *(_OWORD *)&v95[1].width = _xmm;
    v96 = _xmm;
    v97 = _xmm;
    v98 = _xmm;
    LOWORD(v99) = 32085;
    if ( MaskForLayerVisualNoRef )
    {
      v71 = *((float *)this + 58);
      v72 = *((float *)this + 57);
      v73 = v71 + *((float *)this + 60);
      v74 = (CLayerVisual *)*((_QWORD *)this + 32);
      v75 = v72 + *((float *)this + 59);
      v111.width = v72;
      v111.height = v71;
      v113 = v73;
      v112 = v75;
      if ( !CLayerVisual::GetFlatteningToLocalSpace(v74) )
      {
LABEL_66:
        v78 = *((float *)this + 66);
        if ( v78 > v72 )
        {
          v111.width = *((FLOAT *)this + 66);
          v72 = v78;
        }
        v79 = *((float *)this + 67);
        if ( v79 > v71 )
        {
          v111.height = *((FLOAT *)this + 67);
          v71 = v79;
        }
        v80 = *((float *)this + 68);
        if ( v75 > v80 )
        {
          v112 = *((float *)this + 68);
          v75 = v80;
        }
        v81 = *((float *)this + 69);
        if ( v73 > v81 )
        {
          v113 = *((float *)this + 69);
          v73 = v81;
        }
        if ( v75 <= v72 || v73 <= v71 )
        {
          v113 = 0.0;
          v112 = 0.0;
          v111.height = 0.0;
          v111.width = 0.0;
        }
        v82 = *((float *)this + 50);
        v83 = *((float *)this + 49);
        v115[0].x = 0.0;
        v115[0].y = 0.0;
        CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
          this,
          v83,
          v82,
          1.0,
          1.0,
          v115,
          a2,
          (struct CMILMatrix *)&v95[1],
          v95);
        AutomaticBoundsExpansion = CLayerVisual::GetAutomaticBoundsExpansion(*((CLayerVisual **)this + 32));
        v85 = &v107;
        if ( !AutomaticBoundsExpansion )
          v85 = v95;
        v86 = CTreeEffectLayer::RenderEffect(this, a2, (struct CMILMatrix *)&v95[1], (__int64)v85);
        v20 = v86;
        if ( v86 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v87, 0LL, 0, v86, 0x1DEu, 0LL);
        goto LABEL_82;
      }
      CMILMatrix::Transform2DBoundsHelper<1>((char *)this + 128, &v111, &v111);
      CMILMatrix::Translate((CMILMatrix *)&v95[1], (float)*((int *)this + 4), (float)*((int *)this + 5));
      CMILMatrix::Multiply((CMILMatrix *)&v95[1], (CTreeEffectLayer *)((char *)this + 128));
      v76 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v95[1], 0, 1);
      v20 = v76;
      if ( v76 >= 0 )
      {
        v73 = v113;
        v5 = 2;
        v75 = v112;
        v71 = v111.height;
        v72 = v111.width;
        goto LABEL_66;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, v76, 0x1CAu, 0LL);
    }
    else
    {
      CMILMatrix::Translate((CMILMatrix *)&v95[1], (float)*((int *)this + 4), (float)*((int *)this + 5));
      if ( CLayerVisual::GetFlatteningToLocalSpace(*((CLayerVisual **)this + 32)) )
        CMILMatrix::Multiply((CMILMatrix *)&v95[1], (CTreeEffectLayer *)((char *)this + 128));
      v88 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v95[1], 0, 1);
      v20 = v88;
      if ( v88 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v89, 0LL, 0, v88, 0x1EFu, 0LL);
      }
      else
      {
        v5 = 2;
        v90 = CTreeEffectLayer::RenderMask(this, &v107, a2, v68);
        v20 = v90;
        if ( v90 >= 0 )
        {
          CDrawingContext::PopTransformInternal(a2, 1);
          v5 = 1;
LABEL_82:
          Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(&v93);
          goto LABEL_17;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v91, 0LL, 0, v90, 0x1F2u, 0LL);
      }
    }
  }
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(&v93);
LABEL_62:
  v38 = 0;
  do
  {
LABEL_63:
    CDrawingContext::PopTransformInternal(a2, 1);
    --v5;
  }
  while ( v5 );
LABEL_64:
  if ( v38 )
    CDrawingContext::PopLayer(a2);
  return v20;
}
