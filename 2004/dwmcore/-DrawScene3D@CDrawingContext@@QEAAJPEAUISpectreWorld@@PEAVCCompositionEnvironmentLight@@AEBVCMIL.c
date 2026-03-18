/*
 * XREFs of ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x180177978
 * Callers:
 *     ?Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020A7FC (-Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x18002361C (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180036874 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800374C0 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003A358 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ @ 0x18003A818 (--1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003BF94 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18003C064 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18003CA70 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18003CAA0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003CC84 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003D2B4 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180046238 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180047970 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?IsCloseRealOne@@YA_NMM@Z @ 0x180047998 (-IsCloseRealOne@@YA_NMM@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800574D0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800666A0 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006BEB0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007B89C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18007BD08 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007FD98 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180080058 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z @ 0x180082818 (-Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800828C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180082C58 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18008DB00 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18009B990 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x1800D7EE8 (-IsCloseRealZero@@YA_NMM@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800DCBCC (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     sqrtf_0 @ 0x1800EECEB (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180163F3C (-terminate@details@gsl@@YAXXZ.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x18016A420 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAUISpectreLightNode@@V?$allocator@PEAUISpectreLightNode@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180175DB0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@PEAUISpectreLightNode@@V-$allocator@PEAUIS.c)
 *     _lambda_2c23dc335d575e6068a59f43383614b1_::operator() @ 0x18017601C (_lambda_2c23dc335d575e6068a59f43383614b1_--operator().c)
 *     ?DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_NH@Z @ 0x18017659C (-DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUMilRectF@.c)
 *     ?Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@PEAPEAV1@@Z @ 0x1801A03EC (-Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@.c)
 *     ?UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z @ 0x1801F5CE0 (-UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z.c)
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
  gsl::details *v15; // rax
  unsigned int v16; // ebx
  struct ISpectreRenderer *SpectreRenderer; // r14
  int v18; // eax
  __int64 v19; // rcx
  float _44; // xmm2_4
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm6_4
  struct D2D_VECTOR_3F *v24; // rax
  float v25; // xmm8_4
  void (__fastcall *v26)(struct ISpectreRenderer *, struct _LUID *); // rax
  float v27; // xmm0_4
  float v28; // xmm8_4
  int v29; // eax
  float v30; // xmm6_4
  int v31; // eax
  __int64 v32; // rcx
  unsigned int D3DMatrix; // eax
  int v34; // r9d
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rdi
  CD3DDevice *v40; // rbx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  CDrawListEntry *v44; // rcx
  CDeviceManager *v45; // rcx
  int ExistingDevice; // eax
  __int64 v47; // rcx
  float v48; // xmm6_4
  float v49; // xmm7_4
  CD3DDevice *v50; // rbx
  __m128 v51; // xmm2
  CD3DDevice *v52; // rcx
  int v53; // eax
  __m128 v54; // xmm1
  __m128 v55; // xmm0
  int v56; // eax
  __int64 v57; // rcx
  struct IRenderTargetBitmap *v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rsi
  char *v61; // rcx
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 (__fastcall *v65)(struct ISpectreRenderer *); // rax
  __int64 *v66; // rax
  __int64 *v67; // r14
  char v68; // r12
  unsigned __int64 v69; // r9
  char *v70; // r14
  _BYTE *v71; // rdx
  unsigned __int64 v72; // rcx
  size_t v73; // rsi
  unsigned __int64 v74; // r12
  __int64 v75; // r14
  void (__fastcall *v76)(__int64, __int64); // rsi
  __int64 v77; // rax
  void (__fastcall *v78)(__int64 *, __int64); // rsi
  __int64 v79; // rax
  __int64 v80; // rax
  struct _D3DMATRIX *v81; // rax
  __int64 v82; // r9
  __int64 (__fastcall *v83)(void (__fastcall ***)(_QWORD), struct ISpectreWorld *, struct _D3DMATRIX *, __int64, int); // r10
  int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rcx
  int v88; // eax
  __int64 v89; // rcx
  int v90; // eax
  __int64 v91; // rcx
  int v92; // eax
  __int64 v93; // rcx
  CD3DDevice *v94; // rcx
  int v96; // [rsp+28h] [rbp-E0h]
  char v97; // [rsp+48h] [rbp-C0h]
  struct IRenderTargetBitmap *v98; // [rsp+50h] [rbp-B8h] BYREF
  CD3DDevice *v99; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v100; // [rsp+60h] [rbp-A8h]
  struct D2D_VECTOR_3F v101; // [rsp+68h] [rbp-A0h] BYREF
  struct _LUID v102; // [rsp+78h] [rbp-90h] BYREF
  struct _D3DMATRIX v103; // [rsp+88h] [rbp-80h] BYREF
  int v104; // [rsp+C8h] [rbp-40h]
  _QWORD v105[2]; // [rsp+D8h] [rbp-30h] BYREF
  char v106; // [rsp+E8h] [rbp-20h]
  void *v107[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v108; // [rsp+100h] [rbp-8h]
  float v109; // [rsp+108h] [rbp+0h] BYREF
  float v110; // [rsp+10Ch] [rbp+4h]
  float v111; // [rsp+110h] [rbp+8h]
  struct D2D_VECTOR_3F v112; // [rsp+118h] [rbp+10h] BYREF
  float v113; // [rsp+124h] [rbp+1Ch]
  __int128 v114; // [rsp+128h] [rbp+20h] BYREF
  struct D2D_RECT_F v115; // [rsp+138h] [rbp+30h] BYREF
  float v116; // [rsp+148h] [rbp+40h] BYREF
  float v117; // [rsp+14Ch] [rbp+44h]
  float v118; // [rsp+150h] [rbp+48h]
  float v119; // [rsp+158h] [rbp+50h] BYREF
  float v120; // [rsp+15Ch] [rbp+54h]
  float v121; // [rsp+160h] [rbp+58h]
  gsl::details *v122[2]; // [rsp+168h] [rbp+60h] BYREF
  int v123; // [rsp+178h] [rbp+70h]
  int v124; // [rsp+17Ch] [rbp+74h]
  unsigned int v125; // [rsp+180h] [rbp+78h]
  _QWORD v126[3]; // [rsp+188h] [rbp+80h] BYREF
  float v127[6]; // [rsp+1A0h] [rbp+98h] BYREF
  _D3DMATRIX v128; // [rsp+1B8h] [rbp+B0h] BYREF
  int v129; // [rsp+1F8h] [rbp+F0h]

  v5 = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 24));
  if ( *((_QWORD *)CurrentVisual + 78) > *(_QWORD *)(*((_QWORD *)CurrentVisual + 2) + 160LL) )
  {
    dword_180345274 |= 4u;
    *(_BYTE *)(**((_QWORD **)g_pComposition + 43) + 141LL) = 1;
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 408));
    v11 = *(_OWORD *)a4;
    v12 = *((_OWORD *)a4 + 1);
    v104 = *((_DWORD *)a4 + 16);
    *(_OWORD *)&v103._11 = v11;
    v13 = *((_OWORD *)a4 + 2);
    *(_OWORD *)&v103._21 = v12;
    v14 = *((_OWORD *)a4 + 3);
    *(_OWORD *)&v103._31 = v13;
    *(_OWORD *)&v103._41 = v14;
    CMILMatrix::Multiply((CMILMatrix *)&v103, TopByReference);
    *(_QWORD *)&v101.x = a3;
    v122[1] = (gsl::details *)v126;
    v15 = (gsl::details *)v126;
    v126[0] = a3;
    v122[0] = (gsl::details *)v126;
    v125 = 1;
    v123 = 3;
    v124 = 3;
    v16 = 0;
    while ( 1 )
    {
      CCompositionLight::UpdateSceneLightInfo(*((CCompositionLight **)v15 + v16++), this);
      if ( v16 >= v125 )
        break;
      v15 = v122[0];
    }
    SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(*((CSceneResourceManager **)g_pComposition + 19));
    if ( !SpectreRenderer )
      goto LABEL_79;
    (*(void (__fastcall **)(struct ISpectreWorld *, float *, float *))(*(_QWORD *)a2 + 48LL))(a2, &v119, &v116);
    v108 = 0LL;
    v127[0] = v119;
    v127[4] = v121;
    v127[1] = v120;
    v127[3] = v117;
    v127[2] = v116;
    *(_OWORD *)v107 = 0LL;
    v127[5] = v118;
    CMILMatrix::Transform3DBoundsHelper<1>((__int64)&v103, v127, (__m128 *)v107);
    v18 = CDrawingContext::PushGpuClipRectInternal((__int64)this, 0LL, (float *)v107, 1, 0);
    v5 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x3D8u, 0LL);
      goto LABEL_79;
    }
    _44 = v103._44;
    if ( IsCloseRealZero(v103._44, 0.000081380211) || IsCloseRealOne(_44, 0.000081380211) )
    {
      v21 = *(float *)&FLOAT_1_0;
      v22 = *(float *)&FLOAT_1_0;
    }
    else
    {
      v21 = *(float *)&FLOAT_1_0;
      v22 = 1.0 / _44;
    }
    v109 = v103._41 * v22;
    v110 = v103._42 * v22;
    v23 = v103._43 * v22;
    v101.x = fmaxf(COERCE_FLOAT(LODWORD(v116) & _xmm), COERCE_FLOAT(LODWORD(v119) & _xmm));
    v101.y = fmaxf(COERCE_FLOAT(LODWORD(v117) & _xmm), COERCE_FLOAT(LODWORD(v120) & _xmm));
    v101.z = fmaxf(COERCE_FLOAT(LODWORD(v118) & _xmm), COERCE_FLOAT(LODWORD(v121) & _xmm));
    v24 = CMILMatrix::Transform3DVector((CMILMatrix *)&v103, &v112, &v101);
    v25 = sqrtf_0(
            (float)((float)((float)(v22 * v24->x) * (float)(v22 * v24->x))
                  + (float)((float)(v22 * v24->y) * (float)(v22 * v24->y)))
          + (float)((float)(v22 * v24->z) * (float)(v22 * v24->z)))
        + v21;
    v26 = *(void (__fastcall **)(struct ISpectreRenderer *, struct _LUID *))(*(_QWORD *)SpectreRenderer + 24LL);
    v27 = v25 + v25;
    v28 = v25 * 4.0;
    v111 = v27 + v23;
    v26(SpectreRenderer, &v102);
    if ( CCommonRegistryData::Scene::EnableDrawToBackbuffer
      && v102.LowPart == *((_DWORD *)this + 14)
      && v102.HighPart == *((_DWORD *)this + 15)
      && !*((_DWORD *)this + 70) )
    {
      v29 = *((_DWORD *)this + 808);
      if ( v29 )
        v30 = *(float *)(*((_QWORD *)this + 406) + 4LL * (unsigned int)(v29 - 1));
      else
        v30 = v21;
      v97 = 0;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v30 - v21) & _xmm) >= 0.0000011920929 )
      {
        v115 = 0LL;
        CDrawingContext::GetClipBoundsWorld((__int64)this);
        v31 = CDrawingContext::PushD2DLayer(this, 0LL, &v115, 0LL, 0LL, v30, 0, 0);
        v5 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x419u, 0LL);
          goto LABEL_30;
        }
        v97 = 1;
      }
      v99 = 0LL;
      if ( !v122[0] && v125 )
      {
        gsl::details::terminate(0LL);
        JUMPOUT(0x180178526LL);
      }
      *(gsl::details **)&v115.right = v122[0];
      *(_QWORD *)&v115.left = v125;
      D3DMatrix = (unsigned int)CMILMatrix::GetD3DMatrix(&v103, &v128);
      v35 = CSpectreCallbackRenderer::Create(
              (_DWORD)a2,
              D3DMatrix,
              (unsigned int)&v109,
              v34,
              LODWORD(v28),
              (__int64)&v115,
              (__int64)&v99);
      v5 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x424u, 0LL);
      }
      else
      {
        v37 = CDrawingContext::ApplyRenderStateInternal(this, 0);
        v5 = v37;
        if ( v37 >= 0 )
        {
          v39 = *((_QWORD *)this + 5);
          CD2DContext::FlushDrawList((CD2DContext *)(v39 + 16));
          v40 = v99;
          v41 = CD2DContext::DrawCustomCallbackRendererInternal((CD2DContext *)(v39 + 16), v99);
          v5 = v41;
          if ( v41 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x427u, 0LL);
          if ( !v40 )
            goto LABEL_30;
          v44 = (CD3DDevice *)((char *)v40 + 8);
          goto LABEL_29;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x426u, 0LL);
      }
      if ( v99 )
      {
        v44 = (CD3DDevice *)((char *)v99 + 8);
LABEL_29:
        CDrawListEntry::Release(v44);
      }
LABEL_30:
      if ( v97 )
        CDrawingContext::PopLayer(this);
      goto LABEL_68;
    }
    v114 = 0LL;
    CDrawingContext::GetClipBoundsWorld((__int64)this);
    v99 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v99);
    ExistingDevice = CDeviceManager::GetExistingDevice(v45, v102, &v99);
    v5 = ExistingDevice;
    if ( ExistingDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, ExistingDevice, 0x431u, 0LL);
      v94 = v99;
      if ( !v99 )
        goto LABEL_68;
      goto LABEL_67;
    }
    v48 = *((float *)&v114 + 2) - *(float *)&v114;
    v49 = *((float *)&v114 + 3) - *((float *)&v114 + 1);
    v50 = v99;
    *(_QWORD *)&v115.left = 0LL;
    v51 = 0LL;
    LODWORD(v108) = 0;
    v52 = v99;
    v115.right = *((float *)&v114 + 2) - *(float *)&v114;
    v115.bottom = *((float *)&v114 + 3) - *((float *)&v114 + 1);
    LODWORD(v112.x) = 87;
    v53 = (int)(float)((float)(*((float *)&v114 + 2) - *(float *)&v114) - 0.0);
    *(_QWORD *)&v112.y = 1LL;
    BYTE4(v108) = 0;
    LODWORD(v100) = 12;
    v54.m128_f32[0] = (float)(*((float *)&v114 + 2) - *(float *)&v114) - 0.0;
    v55 = 0LL;
    v55.m128_f32[0] = (float)v53;
    LODWORD(v98) = _mm_cmplt_ss(v55, v54).m128_u32[0];
    v55.m128_f32[0] = (float)(*((float *)&v114 + 3) - *((float *)&v114 + 1)) - 0.0;
    LODWORD(v101.x) = v53 - (_DWORD)v98;
    v51.m128_f32[0] = (float)(int)v55.m128_f32[0];
    LODWORD(v98) = _mm_cmplt_ss(v51, v55).m128_u32[0];
    LODWORD(v101.y) = (int)v55.m128_f32[0] - (_DWORD)v98;
    v107[0] = *((void **)v99 + 117);
    v107[1] = (void *)DisplayId::None;
    v99 = (CD3DDevice *)"DWM DwmScene";
    v98 = 0LL;
    v56 = CD3DDevice::CreateRenderTargetBitmap(
            v52,
            (const struct CResourceTag *)&v99,
            (const struct D2D_SIZE_U *)&v101,
            (const struct PixelFormatInfo *)&v112,
            (struct RenderTargetInfo *)v107,
            3,
            &v98);
    v5 = v56;
    if ( v56 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0x44Du, 0LL);
      goto LABEL_66;
    }
    v58 = v98;
    v99 = 0LL;
    v59 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v98 + 64LL))(v98);
    v60 = v59 + *(int *)(*(_QWORD *)(v59 + 8) + 4LL);
    if ( v99 )
    {
      v61 = (char *)v99 + *(int *)(*((_QWORD *)v99 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v61 + 16LL))(v61);
    }
    v62 = (**(__int64 (__fastcall ***)(__int64, GUID *, CD3DDevice **))(v60 + 8))(
            v60 + 8,
            &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f,
            &v99);
    v5 = v62;
    if ( v62 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v62, 0x452u, 0LL);
LABEL_73:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v99);
LABEL_66:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v98);
      v94 = v50;
LABEL_67:
      CD3DDevice::Release(v94);
LABEL_68:
      CDrawingContext::PopGpuClipRectInternal(this, 0, v43);
LABEL_79:
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v122);
      return v5;
    }
    CMILMatrix::Translate((CMILMatrix *)&v103, COERCE_FLOAT(v114 ^ _xmm), COERCE_FLOAT(DWORD1(v114) ^ _xmm));
    v64 = *(_QWORD *)SpectreRenderer;
    v109 = v109 - *(float *)&v114;
    v65 = *(__int64 (__fastcall **)(struct ISpectreRenderer *))(v64 + 40);
    v110 = v110 - *((float *)&v114 + 1);
    v66 = (__int64 *)v65(SpectreRenderer);
    v108 = 0LL;
    v67 = v66;
    *(_QWORD *)&v101.x = v66;
    *(_OWORD *)v107 = 0LL;
    (*(void (__fastcall **)(__int64 *))*v66)(v66);
    v105[0] = v67;
    v68 = 1;
    v105[1] = v107;
    v106 = 1;
    if ( !v125 || (v129 = 0, !CMILMatrix::SetToInverse((CMILMatrix *)&v128, (const struct CMILMatrix *)&v103)) )
    {
LABEL_56:
      (*(void (__fastcall **)(__int64 *, float *))(*v67 + 8))(v67, &v109);
      v78 = *(void (__fastcall **)(__int64 *, __int64))(*v67 + 16);
      v79 = (**(__int64 (__fastcall ***)(CD3DDevice *))v99)(v99);
      v78(v67, v79);
      v112.x = 0.0;
      v112.y = 0.0;
      v80 = *v67;
      v112.z = v48;
      v113 = v49;
      (*(void (__fastcall **)(__int64 *, struct D2D_VECTOR_3F *))(v80 + 24))(v67, &v112);
      v81 = CMILMatrix::GetD3DMatrix(&v103, &v128);
      LOBYTE(v96) = v68;
      LOBYTE(v82) = 1;
      v84 = v83((void (__fastcall ***)(_QWORD))v67, a2, v81, v82, v96);
      v5 = v84;
      if ( v84 >= 0 )
      {
        lambda_2c23dc335d575e6068a59f43383614b1_::operator()(v105);
        if ( v107[0] )
        {
          std::_Deallocate<16,0>(v107[0], (v108 - (unsigned __int64)v107[0]) & 0xFFFFFFFFFFFFFFF8uLL);
          v108 = 0LL;
          *(_OWORD *)v107 = 0LL;
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v99);
        if ( g_LockAndReadSceneOffscreenTexture )
        {
          v86 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v58 + 64LL))(v58);
          v87 = *(int *)(*(_QWORD *)(v86 + 8) + 16LL) + v86 + 8;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v87 + 24LL))(
            v87,
            -(__int64)(this != 0LL) & ((unsigned __int64)this + 24));
        }
        v88 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
        v5 = v88;
        if ( v88 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v89, 0LL, 0, v88, 0x492u, 0LL);
        }
        else
        {
          v99 = 0LL;
          v90 = CDrawingContext::CDisableCPUClipScope::Enter((CDrawingContext::CDisableCPUClipScope *)&v99, this);
          v5 = v90;
          if ( v90 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v91, 0LL, 0, v90, 0x49Cu, 0LL);
          }
          else
          {
            v92 = CDrawingContext::DrawBitmapRealization(
                    this,
                    (struct IRenderTargetBitmap *)((char *)v58 + *(int *)(*((_QWORD *)v58 + 1) + 16LL) + 8),
                    &v115.left,
                    (float *)&v114,
                    0,
                    0);
            v5 = v92;
            if ( v92 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v93, 0LL, 0, v92, 0x4A1u, 0LL);
          }
          CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope((CDrawingContext::CDisableCPUClipScope *)&v99);
          CDrawingContext::PopTransformInternal(this, 1);
        }
        goto LABEL_66;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v85, 0LL, 0, v84, 0x487u, 0LL);
      lambda_2c23dc335d575e6068a59f43383614b1_::operator()(v105);
      if ( v107[0] )
      {
        std::_Deallocate<16,0>(v107[0], (v108 - (unsigned __int64)v107[0]) & 0xFFFFFFFFFFFFFFF8uLL);
        v108 = 0LL;
        *(_OWORD *)v107 = 0LL;
      }
      goto LABEL_73;
    }
    v70 = (char *)v107[1];
    v71 = v107[0];
    v72 = ((char *)v107[1] - (char *)v107[0]) >> 3;
    if ( v69 < v72 )
    {
      v70 = (char *)v107[0] + 8 * v69;
LABEL_50:
      v107[1] = v70;
      goto LABEL_51;
    }
    if ( v69 > v72 )
    {
      if ( (unsigned int)v69 <= (unsigned __int64)((signed __int64)(v108 - (unsigned __int64)v107[0]) >> 3) )
      {
        v73 = 8 * ((unsigned int)v69 - v72);
        memset_0(v107[1], 0, v73);
        v71 = v107[0];
        v70 += v73;
        goto LABEL_50;
      }
      std::vector<ISpectreLightNode *>::_Resize_reallocate<std::_Value_init_tag>((__int64)v107, (unsigned int)v69);
      v71 = v107[0];
      v70 = (char *)v107[1];
    }
LABEL_51:
    v74 = 0LL;
    if ( (v70 - v71) >> 3 )
    {
      do
      {
        if ( (*(int (__fastcall **)(_QWORD, _D3DMATRIX *, _BYTE *))(**((_QWORD **)v122[0] + (unsigned int)v74) + 288LL))(
               *((_QWORD *)v122[0] + (unsigned int)v74),
               &v128,
               &v71[8 * v74]) >= 0 )
        {
          v75 = *((_QWORD *)v107[0] + v74);
          v76 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v75 + 24LL);
          v77 = (*(__int64 (__fastcall **)(struct ISpectreWorld *))(*(_QWORD *)a2 + 40LL))(a2);
          v76(v75, v77);
        }
        ++v74;
        v71 = v107[0];
      }
      while ( v74 < ((char *)v107[1] - (char *)v107[0]) >> 3 );
    }
    v67 = *(__int64 **)&v101.x;
    v68 = 0;
    goto LABEL_56;
  }
  return v5;
}
