/*
 * XREFs of ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801B0F54
 * Callers:
 *     ?Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180252F44 (-Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180015658 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003CF50 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x1800799E8 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18007E708 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007FAC8 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008AF20 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180096690 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18009759C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A2C90 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BAB68 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800BB1E8 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800D53DC (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800D5448 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x1800D6444 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D8514 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _o_sqrtf_0 @ 0x18010197C (_o_sqrtf_0.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAUISpectreLightNode@@V?$allocator@PEAUISpectreLightNode@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801AF16C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@PEAUISpectreLightNode@@V-$allocator@PEAUIS.c)
 *     _lambda_2c23dc335d575e6068a59f43383614b1_::operator() @ 0x1801AF470 (_lambda_2c23dc335d575e6068a59f43383614b1_--operator().c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_NHM@Z @ 0x1801AFC58 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUMilRectF@.c)
 *     ?Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@PEAPEAV1@@Z @ 0x1801E6810 (-Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@.c)
 *     ?UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z @ 0x180200D5C (-UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?GetD2D1Matrix4x4@CMILMatrix@@QEBA?AUD2D_MATRIX_4X4_F@@XZ @ 0x1802605C0 (-GetD2D1Matrix4x4@CMILMatrix@@QEBA-AUD2D_MATRIX_4X4_F@@XZ.c)
 */

__int64 __fastcall CDrawingContext::DrawScene3D(
        CDrawingContext *this,
        struct ISpectreWorld *a2,
        struct CCompositionEnvironmentLight *a3,
        const struct CMILMatrix *a4)
{
  unsigned int v8; // esi
  __int64 v9; // rax
  const struct CMILMatrix *TopByReference; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  unsigned int v18; // ebx
  struct ISpectreRenderer *SpectreRenderer; // r14
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rcx
  float v23; // xmm7_4
  struct D2D_VECTOR_3F *v24; // rax
  float v25; // xmm0_4
  __int64 v26; // rax
  int v27; // eax
  float v28; // xmm7_4
  char v29; // r14
  int v30; // eax
  __int64 v31; // rcx
  void *v32; // rbx
  gsl::details *v33; // rcx
  unsigned int D2D1Matrix4x4; // eax
  __int64 v35; // r8
  int v36; // r9d
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rdi
  struct CD3DDevice *v42; // rbx
  int v43; // eax
  __int64 v44; // rcx
  volatile signed __int32 *v45; // rcx
  CDeviceManager *v46; // rcx
  int ExistingDevice; // eax
  __int64 v48; // rcx
  float v49; // xmm7_4
  __m128 v50; // xmm2
  float v51; // xmm8_4
  CD3DDevice *v52; // rbx
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
  __int64 v65; // rax
  __int64 v66; // r14
  __int64 v67; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v68; // r8
  char v69; // r12
  char *v70; // r14
  _BYTE *v71; // rdx
  unsigned __int64 v72; // rcx
  size_t v73; // rsi
  unsigned __int64 v74; // r12
  __int64 v75; // r14
  void (__fastcall *v76)(__int64, __int64); // rsi
  __int64 v77; // rax
  void (__fastcall *v78)(__int64, __int64); // rsi
  __int64 v79; // rax
  __int64 v80; // rax
  struct D2D_MATRIX_4X4_F *v81; // rax
  __int64 v82; // r9
  __int64 (__fastcall *v83)(__int64, struct ISpectreWorld *, struct D2D_MATRIX_4X4_F *, __int64, int); // r11
  int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rcx
  int v88; // eax
  __int64 v89; // rcx
  int v90; // eax
  __int64 v91; // rcx
  CD3DDevice *v92; // rcx
  int v94; // [rsp+28h] [rbp-E0h]
  struct IRenderTargetBitmap *v95; // [rsp+48h] [rbp-C0h] BYREF
  struct CD3DDevice *v96; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v97; // [rsp+58h] [rbp-B0h]
  struct D2D_VECTOR_3F v98; // [rsp+60h] [rbp-A8h] BYREF
  struct _LUID v99[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v100; // [rsp+88h] [rbp-80h]
  __int128 v101; // [rsp+98h] [rbp-70h]
  __int128 v102; // [rsp+A8h] [rbp-60h]
  int v103; // [rsp+B8h] [rbp-50h]
  _QWORD v104[2]; // [rsp+C8h] [rbp-40h] BYREF
  char v105; // [rsp+D8h] [rbp-30h]
  void *v106[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v107; // [rsp+F0h] [rbp-18h]
  __int128 v108; // [rsp+F8h] [rbp-10h] BYREF
  float v109; // [rsp+108h] [rbp+0h] BYREF
  float v110; // [rsp+10Ch] [rbp+4h]
  float v111; // [rsp+110h] [rbp+8h]
  struct D2D_VECTOR_3F v112; // [rsp+118h] [rbp+10h] BYREF
  float v113; // [rsp+124h] [rbp+1Ch]
  __int128 v114; // [rsp+128h] [rbp+20h] BYREF
  float v115; // [rsp+138h] [rbp+30h] BYREF
  float v116; // [rsp+13Ch] [rbp+34h]
  float v117; // [rsp+140h] [rbp+38h]
  float v118; // [rsp+148h] [rbp+40h] BYREF
  float v119; // [rsp+14Ch] [rbp+44h]
  float v120; // [rsp+150h] [rbp+48h]
  void *v121[2]; // [rsp+158h] [rbp+50h] BYREF
  int v122; // [rsp+168h] [rbp+60h]
  int v123; // [rsp+16Ch] [rbp+64h]
  unsigned int v124; // [rsp+170h] [rbp+68h]
  _QWORD v125[3]; // [rsp+178h] [rbp+70h] BYREF
  float v126[6]; // [rsp+190h] [rbp+88h] BYREF
  struct D2D_MATRIX_4X4_F v127; // [rsp+1A8h] [rbp+A0h] BYREF
  int v128; // [rsp+1E8h] [rbp+E0h]

  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
  if ( *(_QWORD *)(v9 + 736) > *(_QWORD *)(*(_QWORD *)(v9 + 16) + 296LL) )
  {
    dword_1803D3144 |= 4u;
    *(_BYTE *)(**((_QWORD **)g_pComposition + 61) + 157LL) = 1;
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 368));
    v11 = *(_OWORD *)a4;
    v12 = *((_OWORD *)a4 + 1);
    v103 = *((_DWORD *)a4 + 16);
    *(_OWORD *)&v99[1].LowPart = v11;
    v13 = *((_OWORD *)a4 + 2);
    v100 = v12;
    v14 = *((_OWORD *)a4 + 3);
    v101 = v13;
    v102 = v14;
    CMILMatrix::Multiply((CMILMatrix *)&v99[1], TopByReference, v15, v16);
    v125[0] = a3;
    v121[1] = v125;
    v17 = v125;
    v121[0] = v125;
    v122 = 3;
    v124 = 1;
    v123 = 3;
    v18 = 0;
    while ( 1 )
    {
      CCompositionLight::UpdateSceneLightInfo((CCompositionLight *)v17[v18++], this);
      if ( v18 >= v124 )
        break;
      v17 = v121[0];
    }
    SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(*((CSceneResourceManager **)g_pComposition + 36));
    if ( !SpectreRenderer )
      goto LABEL_79;
    (*(void (__fastcall **)(struct ISpectreWorld *, float *, float *))(*(_QWORD *)a2 + 48LL))(a2, &v118, &v115);
    v107 = 0LL;
    v126[0] = v118;
    v126[4] = v120;
    v126[1] = v119;
    v126[3] = v116;
    v126[2] = v115;
    *(_OWORD *)v106 = 0LL;
    v126[5] = v117;
    CMILMatrix::Transform3DBoundsHelper<1>((__int64)&v99[1], v126, (float *)v106, v20);
    v21 = CDrawingContext::PushGpuClipRectInternal((__int64)this, 0LL, (__int64)v106, D2D1_ANTIALIAS_MODE_ALIASED, 0);
    v8 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0x3ECu);
      goto LABEL_79;
    }
    if ( COERCE_FLOAT(HIDWORD(v102) & _xmm) < 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v102 + 3) - 1.0) & _xmm) < 0.000081380211 )
    {
      v23 = *(float *)&FLOAT_1_0;
    }
    else
    {
      v23 = 1.0 / *((float *)&v102 + 3);
    }
    v110 = *((float *)&v102 + 1) * v23;
    v109 = *(float *)&v102 * v23;
    v98.x = fmaxf(COERCE_FLOAT(LODWORD(v115) & _xmm), COERCE_FLOAT(LODWORD(v118) & _xmm));
    v98.y = fmaxf(COERCE_FLOAT(LODWORD(v116) & _xmm), COERCE_FLOAT(LODWORD(v119) & _xmm));
    v98.z = fmaxf(COERCE_FLOAT(LODWORD(v117) & _xmm), COERCE_FLOAT(LODWORD(v120) & _xmm));
    v24 = CMILMatrix::Transform3DVector((CMILMatrix *)&v99[1], &v112, &v98);
    v25 = o_sqrtf_0(
            (float)((float)((float)(v23 * v24->y) * (float)(v23 * v24->y))
                  + (float)((float)(v23 * v24->x) * (float)(v23 * v24->x)))
          + (float)((float)(v23 * v24->z) * (float)(v23 * v24->z)));
    v26 = *(_QWORD *)SpectreRenderer;
    v111 = (float)((float)(v25 + 1.0) + (float)(v25 + 1.0)) + (float)(*((float *)&v102 + 2) * v23);
    (*(void (__fastcall **)(struct ISpectreRenderer *, struct _LUID *))(v26 + 24))(SpectreRenderer, v99);
    if ( CCommonRegistryData::Scene::EnableDrawToBackbuffer
      && v99[0].LowPart == *((_DWORD *)this + 14)
      && v99[0].HighPart == *((_DWORD *)this + 15)
      && !*((_DWORD *)this + 77) )
    {
      v27 = *((_DWORD *)this + 776);
      if ( v27 )
        v28 = *(float *)(*((_QWORD *)this + 390) + 4LL * (unsigned int)(v27 - 1));
      else
        v28 = *(float *)&FLOAT_1_0;
      v29 = 0;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v28 - 1.0) & _xmm) < 0.0000011920929 )
      {
LABEL_21:
        v32 = v121[0];
        v96 = 0LL;
        gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v108, v124);
        if ( (_QWORD)v108 == -1LL || !v32 && (_QWORD)v108 )
        {
          gsl::details::terminate(v33);
          __debugbreak();
        }
        D2D1Matrix4x4 = (unsigned int)CMILMatrix::GetD2D1Matrix4x4((CMILMatrix *)&v99[1], &v127);
        *(_QWORD *)&v108 = v35;
        *((_QWORD *)&v108 + 1) = v32;
        v37 = CSpectreCallbackRenderer::Create(
                (_DWORD)a2,
                D2D1Matrix4x4,
                (unsigned int)&v109,
                v36,
                (float)(v25 + 1.0) * 4.0,
                (__int64)&v108,
                (__int64)&v96);
        v8 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0LL, v37, 0x438u);
        }
        else
        {
          v39 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 112LL))((char *)this + 16);
          v8 = v39;
          if ( v39 >= 0 )
          {
            v41 = *((_QWORD *)this + 5);
            CD2DContext::FlushDrawList((CD2DContext *)(v41 + 16));
            v42 = v96;
            v43 = CD2DContext::DrawCustomCallbackRendererInternal((CD2DContext *)(v41 + 16), v96);
            v8 = v43;
            if ( v43 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0LL, v43, 0x43Bu);
            if ( !v42 )
              goto LABEL_31;
            v45 = (volatile signed __int32 *)((char *)v42 + 8);
            goto LABEL_30;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0LL, v39, 0x43Au);
        }
        if ( !v96 )
        {
LABEL_31:
          if ( v29 )
            CDrawingContext::PopLayer(this);
          goto LABEL_69;
        }
        v45 = (volatile signed __int32 *)((char *)v96 + 8);
LABEL_30:
        CMILRefCountBaseT<IMILRefCount>::InternalRelease(v45);
        goto LABEL_31;
      }
      v108 = 0LL;
      CDrawingContext::GetClipBoundsWorld((__int64)this);
      v30 = CDrawingContext::PushD2DLayer(this, 0LL, &v108, 0LL, 0LL, v28, 0, 0);
      v8 = v30;
      if ( v30 >= 0 )
      {
        v29 = 1;
        goto LABEL_21;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0LL, v30, 0x42Du);
LABEL_69:
      CDrawingContext::PopGpuClipRectInternal(this, 0);
LABEL_79:
      DynArrayImpl<1>::~DynArrayImpl<1>(v121);
      return v8;
    }
    v114 = 0LL;
    CDrawingContext::GetClipBoundsWorld((__int64)this);
    v96 = 0LL;
    ExistingDevice = CDeviceManager::GetExistingDevice(v46, v99[0], &v96);
    v8 = ExistingDevice;
    if ( ExistingDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0LL, ExistingDevice, 0x445u);
      v92 = v96;
      if ( !v96 )
        goto LABEL_69;
      goto LABEL_68;
    }
    v49 = *((float *)&v114 + 2) - *(float *)&v114;
    v50 = 0LL;
    v51 = *((float *)&v114 + 3) - *((float *)&v114 + 1);
    v52 = v96;
    *(_QWORD *)&v108 = 0LL;
    LODWORD(v107) = 0;
    *((float *)&v108 + 2) = *((float *)&v114 + 2) - *(float *)&v114;
    *((float *)&v108 + 3) = *((float *)&v114 + 3) - *((float *)&v114 + 1);
    LODWORD(v112.x) = 87;
    v53 = (int)(float)((float)(*((float *)&v114 + 2) - *(float *)&v114) - 0.0);
    *(_QWORD *)&v112.y = 1LL;
    BYTE4(v107) = 0;
    v54.m128_f32[0] = (float)(*((float *)&v114 + 2) - *(float *)&v114) - 0.0;
    v55 = 0LL;
    v55.m128_f32[0] = (float)v53;
    LODWORD(v95) = _mm_cmplt_ss(v55, v54).m128_u32[0];
    v55.m128_f32[0] = (float)(*((float *)&v114 + 3) - *((float *)&v114 + 1)) - 0.0;
    LODWORD(v98.x) = v53 - (_DWORD)v95;
    v50.m128_f32[0] = (float)(int)v55.m128_f32[0];
    LODWORD(v95) = _mm_cmplt_ss(v50, v55).m128_u32[0];
    LODWORD(v98.y) = (int)v55.m128_f32[0] - (_DWORD)v95;
    v106[0] = *((void **)v96 + 112);
    v106[1] = (void *)DisplayId::None;
    v95 = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v95);
    LODWORD(v97) = 12;
    v96 = (struct CD3DDevice *)"DWM DwmScene";
    v56 = CD3DDevice::CreateRenderTargetBitmap(
            v52,
            (const struct CResourceTag *)&v96,
            (const struct D2D_SIZE_U *)&v98,
            (const struct PixelFormatInfo *)&v112,
            (struct RenderTargetInfo *)v106,
            3,
            &v95);
    v8 = v56;
    if ( v56 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0LL, v56, 0x461u);
      goto LABEL_67;
    }
    v58 = v95;
    v96 = 0LL;
    v59 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v95 + 64LL))(v95);
    v60 = v59 + *(int *)(*(_QWORD *)(v59 + 8) + 4LL);
    if ( v96 )
    {
      v61 = (char *)v96 + *(int *)(*((_QWORD *)v96 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v61 + 16LL))(v61);
    }
    v62 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct CD3DDevice **))(v60 + 8))(
            v60 + 8,
            &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f,
            &v96);
    v8 = v62;
    if ( v62 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0LL, v62, 0x466u);
LABEL_73:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v96);
LABEL_67:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v95);
      v92 = v52;
LABEL_68:
      CD3DDevice::Release(v92);
      goto LABEL_69;
    }
    CMILMatrix::Translate((CMILMatrix *)&v99[1], COERCE_FLOAT(v114 ^ _xmm), COERCE_FLOAT(DWORD1(v114) ^ _xmm));
    v64 = *(_QWORD *)SpectreRenderer;
    v109 = v109 - *(float *)&v114;
    v110 = v110 - *((float *)&v114 + 1);
    v65 = (*(__int64 (__fastcall **)(struct ISpectreRenderer *))(v64 + 40))(SpectreRenderer);
    v107 = 0LL;
    *(_OWORD *)v106 = 0LL;
    v66 = v65;
    *(_QWORD *)&v98.x = v65;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 8LL))(v65);
    v104[1] = v106;
    v69 = 1;
    v104[0] = v66;
    v105 = 1;
    if ( !v124
      || (*(_OWORD *)&v127._11 = *(_OWORD *)&v99[1].LowPart,
          *(_OWORD *)&v127.m[1][0] = v100,
          *(_OWORD *)&v127.m[2][0] = v101,
          *(_OWORD *)&v127.m[3][0] = v102,
          v128 = v103,
          !CMILMatrix::Invert((CMILMatrix *)&v127, v67, v68)) )
    {
LABEL_58:
      (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v66 + 16LL))(v66, &v109);
      v78 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v66 + 24LL);
      v79 = (**(__int64 (__fastcall ***)(struct CD3DDevice *))v96)(v96);
      v78(v66, v79);
      v112.x = 0.0;
      v112.y = 0.0;
      v80 = *(_QWORD *)v66;
      v112.z = v49;
      v113 = v51;
      (*(void (__fastcall **)(__int64, struct D2D_VECTOR_3F *))(v80 + 32))(v66, &v112);
      v81 = CMILMatrix::GetD2D1Matrix4x4((CMILMatrix *)&v99[1], &v127);
      LOBYTE(v94) = v69;
      LOBYTE(v82) = 1;
      v84 = v83(v66, a2, v81, v82, v94);
      v8 = v84;
      if ( v84 >= 0 )
      {
        lambda_2c23dc335d575e6068a59f43383614b1_::operator()(v104);
        if ( v106[0] )
        {
          std::_Deallocate<16,0>(v106[0], (v107 - (unsigned __int64)v106[0]) & 0xFFFFFFFFFFFFFFF8uLL);
          v107 = 0LL;
          *(_OWORD *)v106 = 0LL;
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v96);
        if ( g_LockAndReadSceneOffscreenTexture )
        {
          v86 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v58 + 64LL))(v58);
          v87 = *(int *)(*(_QWORD *)(v86 + 8) + 16LL) + v86 + 8;
          (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v87 + 24LL))(v87, (char *)this + 24);
        }
        v88 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
        v8 = v88;
        if ( v88 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v89, 0LL, 0LL, v88, 0x4A6u);
        }
        else
        {
          v90 = CDrawingContext::DrawBitmapRealization(
                  (__int64)this,
                  (__int64)v58 + *(int *)(*((_QWORD *)v58 + 1) + 16LL) + 8,
                  (float *)&v108,
                  (float *)&v114,
                  0,
                  0,
                  (int)FLOAT_1_0);
          v8 = v90;
          if ( v90 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v91, 0LL, 0LL, v90, 0x4AFu);
          CDrawingContext::PopTransformInternal(this, 1);
        }
        goto LABEL_67;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v85, 0LL, 0LL, v84, 0x49Bu);
      lambda_2c23dc335d575e6068a59f43383614b1_::operator()(v104);
      if ( v106[0] )
      {
        std::_Deallocate<16,0>(v106[0], (v107 - (unsigned __int64)v106[0]) & 0xFFFFFFFFFFFFFFF8uLL);
        v107 = 0LL;
        *(_OWORD *)v106 = 0LL;
      }
      goto LABEL_73;
    }
    v70 = (char *)v106[1];
    v71 = v106[0];
    v72 = ((char *)v106[1] - (char *)v106[0]) >> 3;
    if ( v124 < v72 )
    {
      v70 = (char *)v106[0] + 8 * v124;
LABEL_52:
      v106[1] = v70;
      goto LABEL_53;
    }
    if ( v124 > v72 )
    {
      if ( v124 <= (unsigned __int64)((signed __int64)(v107 - (unsigned __int64)v106[0]) >> 3) )
      {
        v73 = 8 * (v124 - v72);
        memset_0(v106[1], 0, v73);
        v71 = v106[0];
        v70 += v73;
        goto LABEL_52;
      }
      std::vector<ISpectreLightNode *>::_Resize_reallocate<std::_Value_init_tag>((__int64)v106, v124);
      v71 = v106[0];
      v70 = (char *)v106[1];
    }
LABEL_53:
    v74 = 0LL;
    if ( (v70 - v71) >> 3 )
    {
      do
      {
        if ( (*(int (__fastcall **)(_QWORD, struct D2D_MATRIX_4X4_F *, _BYTE *))(**((_QWORD **)v121[0]
                                                                                  + (unsigned int)v74)
                                                                               + 272LL))(
               *((_QWORD *)v121[0] + (unsigned int)v74),
               &v127,
               &v71[8 * v74]) >= 0 )
        {
          v75 = *((_QWORD *)v106[0] + v74);
          v76 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v75 + 24LL);
          v77 = (*(__int64 (__fastcall **)(struct ISpectreWorld *))(*(_QWORD *)a2 + 40LL))(a2);
          v76(v75, v77);
        }
        ++v74;
        v71 = v106[0];
      }
      while ( v74 < ((char *)v106[1] - (char *)v106[0]) >> 3 );
    }
    v66 = *(_QWORD *)&v98.x;
    v69 = 0;
    goto LABEL_58;
  }
  return v8;
}
