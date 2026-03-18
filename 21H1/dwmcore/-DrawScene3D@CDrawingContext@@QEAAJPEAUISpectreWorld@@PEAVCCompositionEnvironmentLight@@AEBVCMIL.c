/*
 * XREFs of ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18017A588
 * Callers:
 *     ?Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020D1BC (-Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x180022CF4 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z @ 0x18002AF64 (-Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18002B000 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18002F524 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18002F788 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002F7B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18002FB48 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ @ 0x1800301A8 (--1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180031BE4 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180032370 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800323A0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800329A8 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18003A090 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18005A300 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18005C3D0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18006A93C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18006ADA8 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006EC40 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18006F1A4 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18007183C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18007190C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008F6EC (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18008F790 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800CE830 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800DB84C (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     sqrtf_0 @ 0x1800EBD3B (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x18016CF80 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAUISpectreLightNode@@V?$allocator@PEAUISpectreLightNode@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180178940 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@PEAUISpectreLightNode@@V-$allocator@PEAUIS.c)
 *     _lambda_2c23dc335d575e6068a59f43383614b1_::operator() @ 0x180178C2C (_lambda_2c23dc335d575e6068a59f43383614b1_--operator().c)
 *     ?DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_NH@Z @ 0x1801791AC (-DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUMilRectF@.c)
 *     ?Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@PEAPEAV1@@Z @ 0x1801A2F8C (-Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@.c)
 *     ?UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z @ 0x1801F86A0 (-UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawScene3D(
        CDrawingContext *this,
        struct ISpectreWorld *a2,
        struct CCompositionEnvironmentLight *a3,
        const struct CMILMatrix *a4)
{
  unsigned int v5; // esi
  struct CVisual *CurrentVisual; // rax
  const struct CMILMatrix *TopByReference; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _QWORD *v15; // rax
  unsigned int v16; // ebx
  struct ISpectreRenderer *SpectreRenderer; // r14
  int v18; // eax
  __int64 v19; // rcx
  float v20; // xmm8_4
  float v21; // xmm6_4
  struct D2D_VECTOR_3F *v22; // rax
  float v23; // xmm8_4
  void (__fastcall *v24)(struct ISpectreRenderer *, struct _LUID *); // rax
  float v25; // xmm0_4
  float v26; // xmm8_4
  int v27; // eax
  float v28; // xmm6_4
  int v29; // eax
  __int64 v30; // rcx
  unsigned int D3DMatrix; // eax
  int v32; // r9d
  int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rdi
  CD3DDevice *v38; // rbx
  int v39; // eax
  __int64 v40; // rcx
  CDrawListEntry *v41; // rcx
  CDeviceManager *v42; // rcx
  int ExistingDevice; // eax
  __int64 v44; // rcx
  float v45; // xmm6_4
  float v46; // xmm7_4
  CD3DDevice *v47; // rbx
  __m128 v48; // xmm2
  CD3DDevice *v49; // rcx
  int v50; // eax
  __m128 v51; // xmm1
  __m128 v52; // xmm0
  int v53; // eax
  __int64 v54; // rcx
  struct IRenderTargetBitmap *v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rsi
  char *v58; // rcx
  int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 (__fastcall *v62)(struct ISpectreRenderer *); // rax
  __int64 *v63; // rax
  __int64 *v64; // r14
  char v65; // r12
  unsigned __int64 v66; // r9
  char *v67; // r14
  _BYTE *v68; // rdx
  unsigned __int64 v69; // rcx
  size_t v70; // rsi
  unsigned __int64 v71; // r12
  __int64 v72; // r14
  void (__fastcall *v73)(__int64, __int64); // rsi
  __int64 v74; // rax
  void (__fastcall *v75)(__int64 *, __int64); // rsi
  __int64 v76; // rax
  __int64 v77; // rax
  struct _D3DMATRIX *v78; // rax
  __int64 v79; // r9
  __int64 (__fastcall *v80)(__int64 *, struct ISpectreWorld *, struct _D3DMATRIX *, __int64, int); // r10
  int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rcx
  int v85; // eax
  __int64 v86; // rcx
  int v87; // eax
  __int64 v88; // rcx
  int v89; // eax
  __int64 v90; // rcx
  CD3DDevice *v91; // rcx
  int v93; // [rsp+28h] [rbp-E0h]
  char v94; // [rsp+48h] [rbp-C0h]
  struct IRenderTargetBitmap *v95; // [rsp+50h] [rbp-B8h] BYREF
  CD3DDevice *v96; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v97; // [rsp+60h] [rbp-A8h]
  struct D2D_VECTOR_3F v98; // [rsp+68h] [rbp-A0h] BYREF
  struct _LUID v99; // [rsp+78h] [rbp-90h] BYREF
  struct _D3DMATRIX v100; // [rsp+88h] [rbp-80h] BYREF
  int v101; // [rsp+C8h] [rbp-40h]
  _QWORD v102[2]; // [rsp+D8h] [rbp-30h] BYREF
  char v103; // [rsp+E8h] [rbp-20h]
  void *v104[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v105; // [rsp+100h] [rbp-8h]
  float v106; // [rsp+108h] [rbp+0h] BYREF
  float v107; // [rsp+10Ch] [rbp+4h]
  float v108; // [rsp+110h] [rbp+8h]
  struct D2D_VECTOR_3F v109; // [rsp+118h] [rbp+10h] BYREF
  float v110; // [rsp+124h] [rbp+1Ch]
  __int128 v111; // [rsp+128h] [rbp+20h] BYREF
  struct D2D_RECT_F v112; // [rsp+138h] [rbp+30h] BYREF
  int v113; // [rsp+148h] [rbp+40h] BYREF
  int v114; // [rsp+14Ch] [rbp+44h]
  int v115; // [rsp+150h] [rbp+48h]
  int v116; // [rsp+158h] [rbp+50h] BYREF
  int v117; // [rsp+15Ch] [rbp+54h]
  int v118; // [rsp+160h] [rbp+58h]
  _QWORD v119[2]; // [rsp+168h] [rbp+60h] BYREF
  int v120; // [rsp+178h] [rbp+70h]
  int v121; // [rsp+17Ch] [rbp+74h]
  unsigned int v122; // [rsp+180h] [rbp+78h]
  _QWORD v123[3]; // [rsp+188h] [rbp+80h] BYREF
  _DWORD v124[6]; // [rsp+1A0h] [rbp+98h] BYREF
  _D3DMATRIX v125; // [rsp+1B8h] [rbp+B0h] BYREF
  int v126; // [rsp+1F8h] [rbp+F0h]

  v5 = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 24));
  if ( *((_QWORD *)CurrentVisual + 78) > *(_QWORD *)(*((_QWORD *)CurrentVisual + 2) + 160LL) )
  {
    dword_180349274 |= 4u;
    *(_BYTE *)(**((_QWORD **)g_pComposition + 43) + 141LL) = 1;
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 408));
    v11 = *(_OWORD *)a4;
    v12 = *((_OWORD *)a4 + 1);
    v101 = *((_DWORD *)a4 + 16);
    *(_OWORD *)&v100._11 = v11;
    v13 = *((_OWORD *)a4 + 2);
    *(_OWORD *)&v100._21 = v12;
    v14 = *((_OWORD *)a4 + 3);
    *(_OWORD *)&v100._31 = v13;
    *(_OWORD *)&v100._41 = v14;
    CMILMatrix::Multiply((CMILMatrix *)&v100, TopByReference);
    *(_QWORD *)&v98.x = a3;
    v119[1] = v123;
    v15 = v123;
    v123[0] = a3;
    v119[0] = v123;
    v122 = 1;
    v120 = 3;
    v121 = 3;
    v16 = 0;
    while ( 1 )
    {
      CCompositionLight::UpdateSceneLightInfo((CCompositionLight *)v15[v16++], this);
      if ( v16 >= v122 )
        break;
      v15 = (_QWORD *)v119[0];
    }
    SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(*((CSceneResourceManager **)g_pComposition + 19));
    if ( !SpectreRenderer )
      goto LABEL_80;
    (*(void (__fastcall **)(struct ISpectreWorld *, int *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v116, &v113);
    v105 = 0LL;
    v124[0] = v116;
    v124[4] = v118;
    v124[1] = v117;
    v124[3] = v114;
    v124[2] = v113;
    *(_OWORD *)v104 = 0LL;
    v124[5] = v115;
    CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)&v100, (__int64)v124, (__m128 *)v104);
    v18 = CDrawingContext::PushGpuClipRectInternal((__int64)this, 0LL, (float *)v104, 1, 0);
    v5 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x3D8u, 0LL);
      goto LABEL_80;
    }
    if ( COERCE_FLOAT(LODWORD(v100._44) & _xmm) < 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v100._44 - 1.0) & _xmm) < 0.000081380211 )
    {
      v20 = *(float *)&FLOAT_1_0;
    }
    else
    {
      v20 = 1.0 / v100._44;
    }
    v106 = v100._41 * v20;
    v107 = v100._42 * v20;
    v21 = v100._43 * v20;
    v98.x = fmaxf(COERCE_FLOAT(v113 & _xmm), COERCE_FLOAT(v116 & _xmm));
    v98.y = fmaxf(COERCE_FLOAT(v114 & _xmm), COERCE_FLOAT(v117 & _xmm));
    v98.z = fmaxf(COERCE_FLOAT(v115 & _xmm), COERCE_FLOAT(v118 & _xmm));
    v22 = CMILMatrix::Transform3DVector((CMILMatrix *)&v100, &v109, &v98);
    v23 = sqrtf_0(
            (float)((float)((float)(v20 * v22->x) * (float)(v20 * v22->x))
                  + (float)((float)(v20 * v22->y) * (float)(v20 * v22->y)))
          + (float)((float)(v20 * v22->z) * (float)(v20 * v22->z)))
        + 1.0;
    v24 = *(void (__fastcall **)(struct ISpectreRenderer *, struct _LUID *))(*(_QWORD *)SpectreRenderer + 24LL);
    v25 = v23 + v23;
    v26 = v23 * 4.0;
    v108 = v25 + v21;
    v24(SpectreRenderer, &v99);
    if ( CCommonRegistryData::Scene::EnableDrawToBackbuffer
      && v99.LowPart == *((_DWORD *)this + 14)
      && v99.HighPart == *((_DWORD *)this + 15)
      && !*((_DWORD *)this + 70) )
    {
      v27 = *((_DWORD *)this + 808);
      if ( v27 )
        v28 = *(float *)(*((_QWORD *)this + 406) + 4LL * (unsigned int)(v27 - 1));
      else
        v28 = *(float *)&FLOAT_1_0;
      v94 = 0;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v28 - 1.0) & _xmm) >= 0.0000011920929 )
      {
        v112 = 0LL;
        CDrawingContext::GetClipBoundsWorld((__int64)this, (__int64)&v112);
        v29 = CDrawingContext::PushD2DLayer(this, 0LL, &v112, 0LL, 0LL, v28, 0, 0);
        v5 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x419u, 0LL);
          goto LABEL_32;
        }
        v94 = 1;
      }
      v96 = 0LL;
      if ( !v119[0] && v122 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      *(_QWORD *)&v112.right = v119[0];
      *(_QWORD *)&v112.left = v122;
      D3DMatrix = (unsigned int)CMILMatrix::GetD3DMatrix(&v100, &v125);
      v33 = CSpectreCallbackRenderer::Create(
              (_DWORD)a2,
              D3DMatrix,
              (unsigned int)&v106,
              v32,
              LODWORD(v26),
              (__int64)&v112,
              (__int64)&v96);
      v5 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x424u, 0LL);
      }
      else
      {
        v35 = CDrawingContext::ApplyRenderStateInternal(this, 0);
        v5 = v35;
        if ( v35 >= 0 )
        {
          v37 = *((_QWORD *)this + 5);
          CD2DContext::FlushDrawList((CD2DContext *)(v37 + 16));
          v38 = v96;
          v39 = CD2DContext::DrawCustomCallbackRendererInternal((CD2DContext *)(v37 + 16), v96);
          v5 = v39;
          if ( v39 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x427u, 0LL);
          if ( !v38 )
            goto LABEL_32;
          v41 = (CD3DDevice *)((char *)v38 + 8);
          goto LABEL_31;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x426u, 0LL);
      }
      if ( !v96 )
      {
LABEL_32:
        if ( v94 )
          CDrawingContext::PopLayer(this);
        goto LABEL_69;
      }
      v41 = (CD3DDevice *)((char *)v96 + 8);
LABEL_31:
      CDrawListEntry::Release(v41);
      goto LABEL_32;
    }
    v111 = 0LL;
    CDrawingContext::GetClipBoundsWorld((__int64)this, (__int64)&v111);
    v96 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v96);
    ExistingDevice = CDeviceManager::GetExistingDevice(v42, v99, &v96);
    v5 = ExistingDevice;
    if ( ExistingDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, ExistingDevice, 0x431u, 0LL);
      v91 = v96;
      if ( !v96 )
        goto LABEL_69;
      goto LABEL_68;
    }
    v45 = *((float *)&v111 + 2) - *(float *)&v111;
    v46 = *((float *)&v111 + 3) - *((float *)&v111 + 1);
    v47 = v96;
    *(_QWORD *)&v112.left = 0LL;
    v48 = 0LL;
    LODWORD(v105) = 0;
    v49 = v96;
    v112.right = *((float *)&v111 + 2) - *(float *)&v111;
    v112.bottom = *((float *)&v111 + 3) - *((float *)&v111 + 1);
    LODWORD(v109.x) = 87;
    v50 = (int)(float)((float)(*((float *)&v111 + 2) - *(float *)&v111) - 0.0);
    *(_QWORD *)&v109.y = 1LL;
    BYTE4(v105) = 0;
    LODWORD(v97) = 12;
    v51.m128_f32[0] = (float)(*((float *)&v111 + 2) - *(float *)&v111) - 0.0;
    v52 = 0LL;
    v52.m128_f32[0] = (float)v50;
    LODWORD(v95) = _mm_cmplt_ss(v52, v51).m128_u32[0];
    v52.m128_f32[0] = (float)(*((float *)&v111 + 3) - *((float *)&v111 + 1)) - 0.0;
    LODWORD(v98.x) = v50 - (_DWORD)v95;
    v48.m128_f32[0] = (float)(int)v52.m128_f32[0];
    LODWORD(v95) = _mm_cmplt_ss(v48, v52).m128_u32[0];
    LODWORD(v98.y) = (int)v52.m128_f32[0] - (_DWORD)v95;
    v104[0] = *((void **)v96 + 117);
    v104[1] = (void *)DisplayId::None;
    v96 = (CD3DDevice *)"DWM DwmScene";
    v95 = 0LL;
    v53 = CD3DDevice::CreateRenderTargetBitmap(
            v49,
            (const struct CResourceTag *)&v96,
            (const struct D2D_SIZE_U *)&v98,
            (const struct PixelFormatInfo *)&v109,
            (struct RenderTargetInfo *)v104,
            3,
            &v95);
    v5 = v53;
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x44Du, 0LL);
      goto LABEL_67;
    }
    v55 = v95;
    v96 = 0LL;
    v56 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v95 + 64LL))(v95);
    v57 = v56 + *(int *)(*(_QWORD *)(v56 + 8) + 4LL);
    if ( v96 )
    {
      v58 = (char *)v96 + *(int *)(*((_QWORD *)v96 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v58 + 16LL))(v58);
    }
    v59 = (**(__int64 (__fastcall ***)(__int64, GUID *, CD3DDevice **))(v57 + 8))(
            v57 + 8,
            &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f,
            &v96);
    v5 = v59;
    if ( v59 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, 0x452u, 0LL);
LABEL_74:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v96);
LABEL_67:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v95);
      v91 = v47;
LABEL_68:
      CD3DDevice::Release(v91);
LABEL_69:
      CDrawingContext::PopGpuClipRectInternal(this, 0);
LABEL_80:
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v119);
      return v5;
    }
    CMILMatrix::Translate((CMILMatrix *)&v100, COERCE_FLOAT(v111 ^ _xmm), COERCE_FLOAT(DWORD1(v111) ^ _xmm));
    v61 = *(_QWORD *)SpectreRenderer;
    v106 = v106 - *(float *)&v111;
    v62 = *(__int64 (__fastcall **)(struct ISpectreRenderer *))(v61 + 40);
    v107 = v107 - *((float *)&v111 + 1);
    v63 = (__int64 *)v62(SpectreRenderer);
    v105 = 0LL;
    v64 = v63;
    *(_QWORD *)&v98.x = v63;
    *(_OWORD *)v104 = 0LL;
    (*(void (__fastcall **)(__int64 *))*v63)(v63);
    v102[0] = v64;
    v65 = 1;
    v102[1] = v104;
    v103 = 1;
    if ( !v122 || (v126 = 0, !CMILMatrix::SetToInverse((__m128 *)&v125, (const struct CMILMatrix *)&v100)) )
    {
LABEL_57:
      (*(void (__fastcall **)(__int64 *, float *))(*v64 + 8))(v64, &v106);
      v75 = *(void (__fastcall **)(__int64 *, __int64))(*v64 + 16);
      v76 = (**(__int64 (__fastcall ***)(CD3DDevice *))v96)(v96);
      v75(v64, v76);
      v109.x = 0.0;
      v109.y = 0.0;
      v77 = *v64;
      v109.z = v45;
      v110 = v46;
      (*(void (__fastcall **)(__int64 *, struct D2D_VECTOR_3F *))(v77 + 24))(v64, &v109);
      v78 = CMILMatrix::GetD3DMatrix(&v100, &v125);
      LOBYTE(v93) = v65;
      LOBYTE(v79) = 1;
      v81 = v80(v64, a2, v78, v79, v93);
      v5 = v81;
      if ( v81 >= 0 )
      {
        lambda_2c23dc335d575e6068a59f43383614b1_::operator()(v102);
        if ( v104[0] )
        {
          std::_Deallocate<16,0>(v104[0], (v105 - (unsigned __int64)v104[0]) & 0xFFFFFFFFFFFFFFF8uLL);
          v105 = 0LL;
          *(_OWORD *)v104 = 0LL;
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v96);
        if ( g_LockAndReadSceneOffscreenTexture )
        {
          v83 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v55 + 64LL))(v55);
          v84 = *(int *)(*(_QWORD *)(v83 + 8) + 16LL) + v83 + 8;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v84 + 24LL))(
            v84,
            -(__int64)(this != 0LL) & ((unsigned __int64)this + 24));
        }
        v85 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
        v5 = v85;
        if ( v85 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v86, 0LL, 0, v85, 0x492u, 0LL);
        }
        else
        {
          v96 = 0LL;
          v87 = CDrawingContext::CDisableCPUClipScope::Enter((CDrawingContext::CDisableCPUClipScope *)&v96, this);
          v5 = v87;
          if ( v87 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v88, 0LL, 0, v87, 0x49Cu, 0LL);
          }
          else
          {
            v89 = CDrawingContext::DrawBitmapRealization(
                    this,
                    (struct IRenderTargetBitmap *)((char *)v55 + *(int *)(*((_QWORD *)v55 + 1) + 16LL) + 8),
                    &v112.left,
                    (float *)&v111,
                    0,
                    0);
            v5 = v89;
            if ( v89 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v90, 0LL, 0, v89, 0x4A1u, 0LL);
          }
          CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope((CDrawingContext::CDisableCPUClipScope *)&v96);
          CDrawingContext::PopTransformInternal(this, 1);
        }
        goto LABEL_67;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v82, 0LL, 0, v81, 0x487u, 0LL);
      lambda_2c23dc335d575e6068a59f43383614b1_::operator()(v102);
      if ( v104[0] )
      {
        std::_Deallocate<16,0>(v104[0], (v105 - (unsigned __int64)v104[0]) & 0xFFFFFFFFFFFFFFF8uLL);
        v105 = 0LL;
        *(_OWORD *)v104 = 0LL;
      }
      goto LABEL_74;
    }
    v67 = (char *)v104[1];
    v68 = v104[0];
    v69 = ((char *)v104[1] - (char *)v104[0]) >> 3;
    if ( v66 < v69 )
    {
      v67 = (char *)v104[0] + 8 * v66;
LABEL_51:
      v104[1] = v67;
      goto LABEL_52;
    }
    if ( v66 > v69 )
    {
      if ( (unsigned int)v66 <= (unsigned __int64)((signed __int64)(v105 - (unsigned __int64)v104[0]) >> 3) )
      {
        v70 = 8 * ((unsigned int)v66 - v69);
        memset_0(v104[1], 0, v70);
        v68 = v104[0];
        v67 += v70;
        goto LABEL_51;
      }
      std::vector<ISpectreLightNode *>::_Resize_reallocate<std::_Value_init_tag>((__int64)v104, (unsigned int)v66);
      v68 = v104[0];
      v67 = (char *)v104[1];
    }
LABEL_52:
    v71 = 0LL;
    if ( (v67 - v68) >> 3 )
    {
      do
      {
        if ( (*(int (__fastcall **)(_QWORD, _D3DMATRIX *, _BYTE *))(**(_QWORD **)(v119[0] + 8LL * (unsigned int)v71)
                                                                  + 288LL))(
               *(_QWORD *)(v119[0] + 8LL * (unsigned int)v71),
               &v125,
               &v68[8 * v71]) >= 0 )
        {
          v72 = *((_QWORD *)v104[0] + v71);
          v73 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v72 + 24LL);
          v74 = (*(__int64 (__fastcall **)(struct ISpectreWorld *))(*(_QWORD *)a2 + 40LL))(a2);
          v73(v72, v74);
        }
        ++v71;
        v68 = v104[0];
      }
      while ( v71 < ((char *)v104[1] - (char *)v104[0]) >> 3 );
    }
    v64 = *(__int64 **)&v98.x;
    v65 = 0;
    goto LABEL_57;
  }
  return v5;
}
