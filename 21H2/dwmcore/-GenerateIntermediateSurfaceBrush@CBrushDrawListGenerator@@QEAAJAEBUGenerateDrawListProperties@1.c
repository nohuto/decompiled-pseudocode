/*
 * XREFs of ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801E56E8
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180053F34 (-GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003CF50 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18003F1D8 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x180053CDC (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800554DC (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180056958 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x180057630 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18006286C (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18007F8E0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180087148 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180087918 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x180088480 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18008AB80 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCCpuClip@@@Z @ 0x180094BD4 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCCpuClip@@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A2C90 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800AF4F4 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AF764 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BA5D0 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x1800BCD2C (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D04C0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800D17D8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ??0CCpuClip@@QEAA@XZ @ 0x1800D361C (--0CCpuClip@@QEAA@XZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800D53DC (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800D5448 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800DD36C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180105110 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1801E5378 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     memcpy_s_0 @ 0x1801E6474 (memcpy_s_0.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
        CBrushDrawListGenerator *this,
        const struct CBrushDrawListGenerator::GenerateDrawListProperties *a2,
        struct CSurfaceDrawListBrush **a3)
{
  __int64 v4; // rcx
  int v7; // edi
  void (__fastcall ***v8)(_QWORD, __int64 *); // rcx
  __int64 v9; // rbx
  float v10; // xmm10_4
  float v11; // xmm9_4
  rsize_t v12; // rdx
  __int64 v13; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v14; // r8
  int v15; // edi
  gsl::details *v16; // rcx
  __int64 v17; // rcx
  __int64 (__fastcall ***v18)(_QWORD, __int64); // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int128 *Bounds; // rax
  int v23; // xmm1_4
  int v24; // xmm0_4
  __int64 v25; // r9
  float left; // xmm4_4
  float top; // xmm2_4
  float right; // xmm1_4
  float bottom; // xmm0_4
  int CpuClip; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm3_4
  float v39; // xmm1_4
  __int64 v40; // rcx
  float *v41; // r9
  bool v42; // zf
  float m11; // xmm2_4
  float dx; // xmm4_4
  __int64 v45; // rcx
  __m128 v46; // xmm3
  __m128 v47; // xmm0
  __m128 v48; // xmm1
  float v49; // xmm8_4
  float v50; // xmm6_4
  CDrawingContext *v51; // rbx
  float v52; // xmm8_4
  float v53; // xmm6_4
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rcx
  int DrawList; // eax
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rcx
  volatile signed __int32 *v63; // rbx
  int v64; // eax
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rcx
  struct IBitmapRealization *v68; // rdx
  CSurfaceDrawListBrush *v69; // rcx
  struct D2D_MATRIX_3X2_F *v70; // r9
  __int64 v71; // r11
  __int64 v72; // xmm1_8
  volatile signed __int32 *v73; // rcx
  __int64 v75; // [rsp+20h] [rbp-E0h]
  __int128 v76; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_MATRIX_3X2_F v77; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v78; // [rsp+58h] [rbp-A8h] BYREF
  struct D2D_RECT_F v79; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v80; // [rsp+70h] [rbp-90h]
  __int64 v81; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v82[4]; // [rsp+80h] [rbp-80h] BYREF
  char v83; // [rsp+C0h] [rbp-40h]
  char v84; // [rsp+C1h] [rbp-3Fh]
  _OWORD v85[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v86; // [rsp+110h] [rbp+10h]
  struct D2D_RECT_F v87; // [rsp+120h] [rbp+20h] BYREF
  __int128 v88; // [rsp+130h] [rbp+30h] BYREF
  int v89; // [rsp+140h] [rbp+40h]
  int v90; // [rsp+144h] [rbp+44h]
  struct D2D_RECT_F v91; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v92[4432]; // [rsp+160h] [rbp+60h] BYREF
  _OWORD Destination[4]; // [rsp+12B0h] [rbp+11B0h] BYREF
  int v94; // [rsp+12F0h] [rbp+11F0h]
  _QWORD v95[4]; // [rsp+1300h] [rbp+1200h] BYREF

  v4 = *(_QWORD *)this;
  v87 = *(struct D2D_RECT_F *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v81 = 0LL;
  v86 = 0;
  v91 = 0LL;
  v7 = 0;
  CMatrixStack::Top(v4 + 368, (__int64)v85);
  v8 = (void (__fastcall ***)(_QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)this + 32LL)
                                                + 8LL
                                                + *(int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 8LL) + 16LL));
  (**v8)(v8, &v78);
  v9 = *((unsigned int *)this + 18);
  v10 = (float)(int)v78;
  v11 = (float)SHIDWORD(v78);
  memcpy_s_0(Destination, v12, (char *)this + 40, 8 * v9);
  if ( *(_QWORD *)a2 )
  {
    *((_QWORD *)Destination + v9) = *(_QWORD *)a2;
    LODWORD(v9) = v9 + 1;
  }
  if ( !(_DWORD)v9 )
  {
LABEL_13:
    if ( *((_BYTE *)a2 + 93) )
    {
      v91 = v87;
      v94 = v86;
      Destination[0] = v85[0];
      Destination[1] = v85[1];
      Destination[2] = v85[2];
      Destination[3] = v85[3];
      if ( CMILMatrix::Invert((CMILMatrix *)Destination, v13, v14) )
      {
        v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 24LL) + 32LL))(*(_QWORD *)this + 24LL);
        Bounds = CVisual::GetBounds(v21, *(_QWORD *)(*(_QWORD *)this + 7928LL));
        v23 = *((_DWORD *)Bounds + 5);
        v24 = *((_DWORD *)Bounds + 4);
        *(_QWORD *)&v88 = 0LL;
        v89 = v24;
        v90 = v23;
        *((_QWORD *)&v88 + 1) = __PAIR64__(LODWORD(v11), LODWORD(v10));
        CMILMatrix::Transform3DBoundsHelper<1>((__int64)Destination, (float *)&v88, (float *)&v88, v25);
        left = v87.left;
        v10 = *((float *)&v88 + 2) - *(float *)&v88;
        v11 = *((float *)&v88 + 3) - *((float *)&v88 + 1);
        if ( *(float *)&v88 > v87.left )
        {
          LODWORD(v87.left) = v88;
          left = *(float *)&v88;
        }
        top = v87.top;
        if ( *((float *)&v88 + 1) > v87.top )
        {
          v87.top = *((FLOAT *)&v88 + 1);
          top = *((float *)&v88 + 1);
        }
        right = v87.right;
        if ( v87.right > *((float *)&v88 + 2) )
        {
          v87.right = *((FLOAT *)&v88 + 2);
          right = *((float *)&v88 + 2);
        }
        bottom = v87.bottom;
        if ( v87.bottom > *((float *)&v88 + 3) )
        {
          v87.bottom = *((FLOAT *)&v88 + 3);
          bottom = *((float *)&v88 + 3);
        }
        if ( right <= left || bottom <= top )
          v87 = (struct D2D_RECT_F)0LL;
      }
    }
    if ( !*((_BYTE *)a2 + 92) )
    {
LABEL_44:
      if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v87.left) )
      {
        *a3 = 0LL;
        goto LABEL_93;
      }
      CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)v85, (float *)&v88, (float *)&v76, (__int64)&v91);
      v42 = *((_DWORD *)this + 18) == 1;
      LODWORD(v77.m11) = (_DWORD)FLOAT_1_0;
      m11 = *(float *)&FLOAT_1_0;
      LODWORD(v77.dx) = (_DWORD)FLOAT_1_0;
      dx = *(float *)&FLOAT_1_0;
      if ( v42 )
      {
        v45 = *((_QWORD *)this + 5);
        if ( v45 )
        {
          D2DMatrixHelper::GetScaleDimensions((D2DMatrixHelper *)(v45 + 8), &v77, &v77.dx, v41);
          m11 = v77.m11;
          dx = v77.dx;
        }
      }
      v46 = 0LL;
      v47 = 0LL;
      v48.m128_f32[0] = (float)(*(float *)&v88 / fmaxf(1.0, m11 * *(float *)&v88)) * (float)(v87.right - v87.left);
      v47.m128_f32[0] = (float)(int)v48.m128_f32[0];
      LODWORD(v88) = _mm_cmplt_ss(v47, v48).m128_u32[0];
      v49 = (float)((int)v48.m128_f32[0] - v88);
      *(float *)&v88 = v49;
      v48.m128_f32[0] = (float)(*(float *)&v76 / fmaxf(1.0, dx * *(float *)&v76)) * (float)(v87.bottom - v87.top);
      v46.m128_f32[0] = (float)(int)v48.m128_f32[0];
      LODWORD(v76) = _mm_cmplt_ss(v46, v48).m128_u32[0];
      v50 = (float)((int)v48.m128_f32[0] - v76);
      *((float *)&v88 + 1) = v50;
      if ( v49 > v10 )
      {
        *(float *)&v88 = v10;
        v49 = v10;
      }
      if ( v50 > v11 )
      {
        v50 = v11;
        *((float *)&v88 + 1) = v11;
      }
      v51 = *(CDrawingContext **)this;
      v52 = v49 / (float)(v87.right - v87.left);
      v53 = v50 / (float)(v87.bottom - v87.top);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v81);
      v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 24LL) + 40LL))(*(_QWORD *)this + 24LL);
      LODWORD(v91.right) = 31;
      *(_QWORD *)&v91.left = "DWM Drawlist Brush intermediate";
      LODWORD(v75) = 2;
      v55 = CDrawingContext::PushOffScreenRenderingLayer(
              v51,
              (__int64)&v91,
              (float *)&v88,
              *(unsigned int *)(v54 + 8),
              v75,
              (__int64)&v81);
      v7 = v55;
      if ( v55 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0LL, v55, 0x35Bu);
        goto LABEL_93;
      }
      v82[1] = _xmm;
      v82[3] = _xmm;
      v82[0] = _xmm;
      v82[2] = _xmm;
      v83 = 85;
      v84 = v84 & 0xC0 | 0x17;
      CMILMatrix::Translate(
        (CMILMatrix *)v82,
        COERCE_FLOAT(LODWORD(v87.left) ^ _xmm),
        COERCE_FLOAT(LODWORD(v87.top) ^ _xmm));
      CMILMatrix::Scale((CMILMatrix *)v82, v52, v53, 1.0);
      v57 = CDrawingContext::PushTransformInternal(*(CDrawingContext **)this, 0LL, (const struct CMILMatrix *)v82, 0, 1);
      v7 = v57;
      if ( v57 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0LL, v57, 0x364u);
        goto LABEL_91;
      }
      CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v92);
      DrawList = CBrushDrawListGenerator::GenerateDrawList(this, (__int64)a2, (struct CDrawListEntryBuilder *)v92);
      v7 = DrawList;
      if ( DrawList < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0LL, DrawList, 0x368u);
        goto LABEL_89;
      }
      *(_QWORD *)&v76 = 0LL;
      v61 = CDrawListCache::Create((struct CDrawListCache **)&v76);
      v7 = v61;
      if ( v61 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0LL, v61, 0x36Bu);
        v73 = (volatile signed __int32 *)v76;
        if ( !(_QWORD)v76 )
          goto LABEL_89;
      }
      else
      {
        v63 = (volatile signed __int32 *)v76;
        CDrawListCache::Update(
          (CDrawListCache *)v76,
          *(struct CDrawingContext **)this,
          (struct CDrawListEntryBuilder *)v92);
        v64 = CDrawListCache::Render((__int64)v63, *(struct CDrawingContext **)this, (CMILMatrix *)v82, 1.0);
        v7 = v64;
        if ( v64 >= 0 )
        {
          CDrawingContext::PopTransformInternal(*(CDrawingContext **)this, 1);
          v66 = CDrawingContext::PopLayer(*(CDrawingContext **)this);
          v7 = v66;
          if ( v66 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0LL, v66, 0x37Au);
            if ( v63 )
              CMILRefCountBaseT<IMILRefCount>::InternalRelease(v63);
            CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v92);
          }
          else
          {
            if ( v63 )
              CMILRefCountBaseT<IMILRefCount>::InternalRelease(v63);
            CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v92);
            *(_QWORD *)&v76 = 0LL;
            if ( v81 )
              v68 = (struct IBitmapRealization *)(v81 + *(int *)(*(_QWORD *)(v81 + 8) + 16LL) + 8LL);
            else
              v68 = 0LL;
            CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v88, v68);
            CDrawListBitmap::GetSize((CDrawListBitmap *)&v88, &v78);
            v91.left = 0.0;
            v91.top = 0.0;
            *(_QWORD *)&v79.right = 0LL;
            LOBYTE(v80) = 1;
            *(_QWORD *)&v79.left = &v76;
            LOWORD(v77.m11) = SamplerMode::k_ClampClampLinear;
            v91.right = (float)(int)v78;
            v91.bottom = (float)SHIDWORD(v78);
            BYTE2(v77._11) = 1;
            v7 = CSurfaceDrawListBrush::CreateWithContentRect(
                   (CDrawListBitmap *)&v88,
                   (__int16 *)&v77,
                   &v91.left,
                   (__int64 *)&v79.right);
            if ( (_BYTE)v80 )
            {
              v69 = **(CSurfaceDrawListBrush ***)&v79.left;
              **(_QWORD **)&v79.left = *(_QWORD *)&v79.right;
              if ( v69 )
                CSurfaceDrawListBrush::`vector deleting destructor'(v69, 1);
            }
            if ( v7 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((__int64)v69, 0LL, 0LL, v7, 0x390u);
            }
            else
            {
              v91 = v87;
              D2DMatrixHelper::ComputeRectangleTransform((const struct D2D_RECT_F *)(v76 + 32), &v91, &v79, v70);
              v71 = v76;
              v72 = v80;
              *(struct D2D_RECT_F *)(v76 + 8) = v79;
              *(_QWORD *)(v71 + 24) = v72;
              *a3 = (struct CSurfaceDrawListBrush *)v76;
              *(_QWORD *)&v76 = 0LL;
            }
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v88 + 8);
            wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v88);
            if ( (_QWORD)v76 )
              CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v76, 1);
          }
          goto LABEL_93;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0LL, v64, 0x373u);
        if ( !v63 )
          goto LABEL_89;
        v73 = v63;
      }
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v73);
LABEL_89:
      CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v92);
      CDrawingContext::PopTransformInternal(*(CDrawingContext **)this, 1);
LABEL_91:
      CDrawingContext::PopLayer(*(CDrawingContext **)this);
      goto LABEL_93;
    }
    CCpuClip::CCpuClip((CCpuClip *)Destination);
    CpuClip = CDrawingContext::GetCpuClip(*(CDrawingContext **)this, (struct CCpuClip *)Destination);
    v7 = CpuClip;
    if ( CpuClip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0LL, CpuClip, 0x307u);
    }
    else
    {
      if ( !*(_QWORD *)&Destination[0] && !v95[0] )
      {
LABEL_43:
        CShapePtr::Release((CShapePtr *)v95);
        goto LABEL_44;
      }
      v32 = CCpuClip::ResolveClip((CCpuClip *)Destination, (const struct CShape **)&v76, 0LL);
      v7 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0LL, v32, 0x30Cu);
      }
      else
      {
        v88 = 0LL;
        v34 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(*(_QWORD *)v76 + 48LL))(v76, &v88, 0LL);
        v7 = v34;
        if ( v34 >= 0 )
        {
          v36 = v87.left;
          if ( *(float *)&v88 > v87.left )
          {
            LODWORD(v87.left) = v88;
            v36 = *(float *)&v88;
          }
          v37 = v87.top;
          if ( *((float *)&v88 + 1) > v87.top )
          {
            v87.top = *((FLOAT *)&v88 + 1);
            v37 = *((float *)&v88 + 1);
          }
          v38 = v87.right;
          if ( v87.right > *((float *)&v88 + 2) )
          {
            v87.right = *((FLOAT *)&v88 + 2);
            v38 = *((float *)&v88 + 2);
          }
          v39 = v87.bottom;
          if ( v87.bottom > *((float *)&v88 + 3) )
          {
            v87.bottom = *((FLOAT *)&v88 + 3);
            v39 = *((float *)&v88 + 3);
          }
          if ( v38 <= v36 || v39 <= v37 )
            v87 = (struct D2D_RECT_F)0LL;
          goto LABEL_43;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0LL, v34, 0x30Fu);
      }
    }
    CShapePtr::Release((CShapePtr *)v95);
    goto LABEL_93;
  }
  v15 = *((_DWORD *)a2 + 4);
  *(_QWORD *)&v79.left = &v76;
  *(_QWORD *)&v76 = 0LL;
  *(_QWORD *)&v79.right = 0LL;
  LOBYTE(v80) = 1;
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v88, (unsigned int)v9);
  if ( (_QWORD)v88 == -1LL )
  {
    gsl::details::terminate(v16);
    __debugbreak();
  }
  *((_QWORD *)&v88 + 1) = Destination;
  v7 = CBrushDrawListGenerator::ComputeBrushClamp((gsl::details *)&v88, v15, (float *)a2 + 5, (__int64 *)&v79.right);
  if ( (_BYTE)v80 )
  {
    v17 = *(_QWORD *)&v79.right;
    v18 = **(__int64 (__fastcall *****)(_QWORD, __int64))&v79.left;
    **(_QWORD **)&v79.left = *(_QWORD *)&v79.right;
    if ( v18 )
      std::default_delete<CShape>::operator()(v17, v18);
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v7, 0x2DCu);
  }
  else
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v76 + 48LL))(v76, &v87, 0LL);
    v7 = v19;
    if ( v19 >= 0 )
    {
      v13 = v76;
      if ( (_QWORD)v76 )
        std::default_delete<CShape>::operator()(v20, (__int64 (__fastcall ***)(_QWORD, __int64))v76);
      goto LABEL_13;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v19, 0x2DEu);
  }
  if ( (_QWORD)v76 )
    std::default_delete<CShape>::operator()(v40, (__int64 (__fastcall ***)(_QWORD, __int64))v76);
LABEL_93:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v81);
  return (unsigned int)v7;
}
