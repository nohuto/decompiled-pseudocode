/*
 * XREFs of ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801A1E48
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18006F82C (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x18001A904 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18002C8EC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18002F524 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002F7B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18002FC70 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180033304 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180036350 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18003A090 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x18003A34C (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18003AABC (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18003ADA4 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180046338 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18004AA40 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18004B1C0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18004CAFC (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180050610 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x180052DF0 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18005C3D0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006EC40 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006F028 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180070448 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18007059C (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z @ 0x1800717E0 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18007183C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18007190C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x1800A7084 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800BDC0C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800CAE90 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     memcpy_s_0 @ 0x1801A2B28 (memcpy_s_0.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1801B1898 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x1802210B4 (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
        const struct CVisualTree ***this,
        const struct CBrushDrawListGenerator::GenerateDrawListProperties *a2,
        struct CSurfaceDrawListBrush **a3)
{
  CMatrixStack *v5; // rcx
  const struct CVisualTree *v7; // rcx
  __int64 v8; // rbx
  float v9; // xmm10_4
  float v10; // xmm9_4
  rsize_t v11; // rdx
  __int64 v12; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v13; // r8
  int v14; // edx
  __int64 v15; // rcx
  int v16; // edi
  __int64 (__fastcall ***v17)(_QWORD, __int64); // rax
  int v18; // eax
  __int64 v19; // rcx
  struct CMILMatrix *v20; // rdx
  const struct CVisualTree **v21; // rbx
  struct CVisual *CurrentVisual; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 Bounds; // rax
  unsigned int v26; // xmm1_4
  unsigned int v27; // xmm0_4
  float left; // xmm3_4
  float top; // xmm4_4
  float right; // xmm2_4
  float bottom; // xmm0_4
  const struct CVisualTree **v32; // rcx
  int CpuClip; // eax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  float v39; // xmm0_4
  float v40; // xmm2_4
  float v41; // xmm3_4
  float v42; // xmm1_4
  __int64 v43; // rcx
  float *v44; // r9
  bool v45; // zf
  float m11; // xmm2_4
  float dx; // xmm4_4
  const struct CVisualTree **v48; // rcx
  __m128 v49; // xmm3
  __m128 v50; // xmm0
  __m128 v51; // xmm1
  float v52; // xmm7_4
  float v53; // xmm6_4
  int *v54; // rcx
  float v55; // xmm7_4
  float v56; // xmm6_4
  int v57; // eax
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rcx
  int DrawList; // eax
  __int64 v62; // rcx
  int v63; // eax
  __int64 v64; // rcx
  CDrawListEntry *v65; // rbx
  int v66; // eax
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rcx
  struct IBitmapRealization *v70; // rdx
  int v71; // eax
  __int64 v72; // rcx
  CSurfaceDrawListBrush *v73; // rcx
  unsigned int v74; // r8d
  struct D2D_MATRIX_3X2_F *v75; // r9
  __int64 v76; // r11
  unsigned __int64 v77; // xmm1_8
  unsigned int v78; // r8d
  CDrawListEntry *v79; // rcx
  __int128 v81; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_MATRIX_3X2_F v82; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v83; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v84; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v85[4]; // [rsp+78h] [rbp-90h] BYREF
  __int16 v86; // [rsp+B8h] [rbp-50h]
  _OWORD v87[4]; // [rsp+C8h] [rbp-40h] BYREF
  int v88; // [rsp+108h] [rbp+0h]
  _OWORD v89[4]; // [rsp+118h] [rbp+10h] BYREF
  int v90; // [rsp+158h] [rbp+50h]
  struct D2D_RECT_F v91; // [rsp+168h] [rbp+60h] BYREF
  struct D2D_RECT_F v92; // [rsp+178h] [rbp+70h] BYREF
  unsigned __int64 v93; // [rsp+188h] [rbp+80h]
  struct D2D_RECT_F v94; // [rsp+198h] [rbp+90h] BYREF
  struct CDrawListEntry **v95[288]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 Destination; // [rsp+AA8h] [rbp+9A0h] BYREF
  __int64 v97; // [rsp+AB8h] [rbp+9B0h] BYREF
  int v98; // [rsp+AC0h] [rbp+9B8h]
  __int64 v99; // [rsp+AC4h] [rbp+9BCh]
  int v100; // [rsp+ACCh] [rbp+9C4h]
  char v101; // [rsp+AD0h] [rbp+9C8h]

  v5 = (CMatrixStack *)(*this + 51);
  v91 = (struct D2D_RECT_F)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v84 = 0LL;
  v88 = 0;
  CMatrixStack::Top(v5, (struct CMILMatrix *)v87);
  v7 = (const struct CVisualTree *)((char *)(*this)[4] + *(int *)(*((_QWORD *)(*this)[4] + 1) + 16LL) + 8);
  (**(void (__fastcall ***)(const struct CVisualTree *, __int64 *))v7)(v7, &v83);
  v8 = *((unsigned int *)this + 18);
  v9 = (float)(int)v83;
  v10 = (float)SHIDWORD(v83);
  memcpy_s_0(&Destination, v11, this + 5, 8 * v8);
  if ( *(_QWORD *)a2 )
  {
    *((_QWORD *)&Destination + v8) = *(_QWORD *)a2;
    LODWORD(v8) = v8 + 1;
  }
  if ( !(_DWORD)v8 )
  {
LABEL_11:
    v94 = v91;
    v90 = v88;
    v89[0] = v87[0];
    v89[1] = v87[1];
    v89[2] = v87[2];
    v89[3] = v87[3];
    if ( CMILMatrix::Invert((CMILMatrix *)v89, v12, v13) )
    {
      v21 = *this;
      CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(*this + 3));
      Bounds = CVisual::GetBounds(CurrentVisual, v21[741], v23, v24);
      v26 = *(_DWORD *)(Bounds + 20);
      v27 = *(_DWORD *)(Bounds + 16);
      v92.left = 0.0;
      v92.top = 0.0;
      v93 = __PAIR64__(v26, v27);
      v92.right = v9;
      v92.bottom = v10;
      CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)v89, (__int64)&v92, (__m128 *)&v92);
      left = v91.left;
      v9 = v92.right - v92.left;
      v10 = v92.bottom - v92.top;
      if ( v92.left > v91.left )
      {
        v91.left = v92.left;
        left = v92.left;
      }
      top = v91.top;
      if ( v92.top > v91.top )
      {
        v91.top = v92.top;
        top = v92.top;
      }
      right = v91.right;
      if ( v91.right > v92.right )
      {
        v91.right = v92.right;
        right = v92.right;
      }
      bottom = v91.bottom;
      if ( v91.bottom > v92.bottom )
      {
        v91.bottom = v92.bottom;
        bottom = v92.bottom;
      }
      if ( right <= left || bottom <= top )
        v91 = (struct D2D_RECT_F)0LL;
    }
    v32 = *this;
    v97 = 0LL;
    Destination = 0LL;
    LOBYTE(v98) = 0;
    BYTE4(v99) = 0;
    CpuClip = CDrawingContext::GetCpuClip(v32, v20, (struct CCpuClip *)&Destination);
    v16 = CpuClip;
    if ( CpuClip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, CpuClip, 0x30Au, 0LL);
    }
    else
    {
      if ( !(_QWORD)Destination && !v97 )
        goto LABEL_39;
      v35 = CCpuClip::ResolveClip((CCpuClip *)&Destination, (const struct CShape **)&v81);
      v16 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x30Fu, 0LL);
      }
      else
      {
        v92 = 0LL;
        v37 = (*(__int64 (__fastcall **)(_QWORD, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v81 + 32LL))(v81, &v92, 0LL);
        v16 = v37;
        if ( v37 >= 0 )
        {
          v39 = v91.left;
          if ( v92.left > v91.left )
          {
            v91.left = v92.left;
            v39 = v92.left;
          }
          v40 = v91.top;
          if ( v92.top > v91.top )
          {
            v91.top = v92.top;
            v40 = v92.top;
          }
          v41 = v91.right;
          if ( v91.right > v92.right )
          {
            v91.right = v92.right;
            v41 = v92.right;
          }
          v42 = v91.bottom;
          if ( v91.bottom > v92.bottom )
          {
            v91.bottom = v92.bottom;
            v42 = v92.bottom;
          }
          if ( v41 <= v39 || v42 <= v40 )
            v91 = (struct D2D_RECT_F)0LL;
LABEL_39:
          CShapePtr::Release((CShapePtr *)&v97);
          if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v91.left) )
          {
            *a3 = 0LL;
            goto LABEL_91;
          }
          CMILMatrix::Get2DScaleDimensionsWithPerspective((__int64)v87);
          v45 = *((_DWORD *)this + 18) == 1;
          m11 = *(float *)&FLOAT_1_0;
          dx = *(float *)&FLOAT_1_0;
          LODWORD(v82.m11) = (_DWORD)FLOAT_1_0;
          LODWORD(v82.dx) = (_DWORD)FLOAT_1_0;
          if ( v45 )
          {
            v48 = this[5];
            if ( v48 )
            {
              D2DMatrixHelper::GetScaleDimensions((D2DMatrixHelper *)(v48 + 1), &v82, &v82.dx, v44);
              m11 = v82.m11;
              dx = v82.dx;
            }
          }
          v49 = 0LL;
          v50 = 0LL;
          v51.m128_f32[0] = (float)(v92.left / fmaxf(1.0, m11 * v92.left)) * (float)(v91.right - v91.left);
          v50.m128_f32[0] = (float)(int)v51.m128_f32[0];
          LODWORD(v92.left) = _mm_cmplt_ss(v50, v51).m128_u32[0];
          v52 = (float)((int)v51.m128_f32[0] - LODWORD(v92.left));
          v92.left = v52;
          v51.m128_f32[0] = (float)(*(float *)&v81 / fmaxf(1.0, dx * *(float *)&v81)) * (float)(v91.bottom - v91.top);
          v49.m128_f32[0] = (float)(int)v51.m128_f32[0];
          LODWORD(v81) = _mm_cmplt_ss(v49, v51).m128_u32[0];
          v53 = (float)((int)v51.m128_f32[0] - v81);
          v92.top = v53;
          if ( v52 > v9 )
          {
            v52 = v9;
            v92.left = v9;
          }
          if ( v53 > v10 )
          {
            v53 = v10;
            v92.top = v10;
          }
          v54 = (int *)*this;
          *(_QWORD *)&v94.left = "DWM Drawlist Brush intermediate";
          LODWORD(v94.right) = 31;
          v55 = v52 / (float)(v91.right - v91.left);
          v56 = v53 / (float)(v91.bottom - v91.top);
          v57 = CDrawingContext::PushOffScreenRenderingLayer(
                  (CDrawingContext *)v54,
                  (__int64)&v94,
                  &v92.left,
                  v54[16],
                  1u,
                  &v84);
          v16 = v57;
          if ( v57 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x35Eu, 0LL);
            goto LABEL_91;
          }
          v85[1] = _xmm;
          v85[0] = _xmm;
          v85[2] = _xmm;
          v85[3] = _xmm;
          v86 = 32085;
          CMILMatrix::Translate(
            (CMILMatrix *)v85,
            COERCE_FLOAT(LODWORD(v91.left) ^ _xmm),
            COERCE_FLOAT(LODWORD(v91.top) ^ _xmm));
          CMILMatrix::Scale((CMILMatrix *)v85, v55, v56, 1.0);
          v59 = CDrawingContext::PushTransformInternal(
                  (CDrawingContext *)*this,
                  0LL,
                  (const struct CMILMatrix *)v85,
                  0,
                  1);
          v16 = v59;
          if ( v59 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, 0x367u, 0LL);
            goto LABEL_85;
          }
          CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v95);
          DrawList = CBrushDrawListGenerator::GenerateDrawList(
                       (CBrushDrawListGenerator *)this,
                       a2,
                       (struct CDrawListEntryBuilder *)v95);
          v16 = DrawList;
          if ( DrawList < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, DrawList, 0x36Bu, 0LL);
            goto LABEL_83;
          }
          *(_QWORD *)&v81 = 0LL;
          v63 = CDrawListCache::Create((struct CDrawListCache **)&v81);
          v16 = v63;
          if ( v63 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, v63, 0x36Eu, 0LL);
            v79 = (CDrawListEntry *)v81;
            if ( !(_QWORD)v81 )
              goto LABEL_83;
          }
          else
          {
            v65 = (CDrawListEntry *)v81;
            CDrawListCache::Update((CDrawListCache *)v81, (struct CDrawingContext *)*this, v95);
            v66 = CDrawListCache::Render((__int64)v65, *this, (float *)v85, 1.0);
            v16 = v66;
            if ( v66 >= 0 )
            {
              CDrawingContext::PopTransformInternal((CDrawingContext *)*this, 1);
              v68 = CDrawingContext::PopLayer((CDrawingContext *)*this);
              v16 = v68;
              if ( v68 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v68, 0x37Du, 0LL);
                if ( v65 )
                  CDrawListEntry::Release(v65);
                CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v95);
              }
              else
              {
                if ( v65 )
                  CDrawListEntry::Release(v65);
                CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v95);
                *(_QWORD *)&v81 = 0LL;
                v99 = 0LL;
                v100 = 0;
                v97 = 0LL;
                v98 = 0;
                v101 = 0;
                Destination = 0LL;
                if ( v84 )
                  v70 = (struct IBitmapRealization *)(v84 + *(int *)(*(_QWORD *)(v84 + 8) + 16LL) + 8LL);
                else
                  v70 = 0LL;
                v71 = CDrawListBitmap::Initialize(
                        (CDrawListBitmap *)&Destination,
                        v70,
                        (const struct CDrawingContext *)*this);
                v16 = v71;
                if ( v71 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, v71, 0x38Cu, 0LL);
                }
                else
                {
                  CDrawListBitmap::GetSize((CDrawListBitmap *)&Destination, &v83);
                  v94.left = 0.0;
                  v94.top = 0.0;
                  *(_QWORD *)&v92.right = 0LL;
                  LOBYTE(v93) = 1;
                  *(_QWORD *)&v92.left = &v81;
                  LOWORD(v82.m11) = SamplerMode::k_ClampClampLinear;
                  v94.right = (float)(int)v83;
                  v94.bottom = (float)SHIDWORD(v83);
                  BYTE2(v82._11) = 1;
                  v16 = CSurfaceDrawListBrush::CreateWithContentRect(
                          (CDrawListBitmap *)&Destination,
                          (__int16 *)&v82,
                          &v94.left,
                          (__int64 *)&v92.right);
                  if ( (_BYTE)v93 )
                  {
                    v73 = **(CSurfaceDrawListBrush ***)&v92.left;
                    **(_QWORD **)&v92.left = *(_QWORD *)&v92.right;
                    if ( v73 )
                      CSurfaceDrawListBrush::`vector deleting destructor'(v73, 1, v74);
                  }
                  if ( v16 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast((__int64)v73, 0LL, 0, v16, 0x395u, 0LL);
                  }
                  else
                  {
                    v94 = v91;
                    D2DMatrixHelper::ComputeRectangleTransform((const struct D2D_RECT_F *)(v81 + 32), &v94, &v92, v75);
                    v76 = v81;
                    v77 = v93;
                    *(struct D2D_RECT_F *)(v81 + 8) = v92;
                    *(_QWORD *)(v76 + 24) = v77;
                    *a3 = (struct CSurfaceDrawListBrush *)v81;
                    *(_QWORD *)&v81 = 0LL;
                  }
                }
                wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&Destination + 8);
                wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&Destination);
                if ( (_QWORD)v81 )
                  CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v81, 1, v78);
              }
              goto LABEL_91;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0x376u, 0LL);
            if ( !v65 )
              goto LABEL_83;
            v79 = v65;
          }
          CDrawListEntry::Release(v79);
LABEL_83:
          CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v95);
          CDrawingContext::PopTransformInternal((CDrawingContext *)*this, 1);
LABEL_85:
          CDrawingContext::PopLayer((CDrawingContext *)*this);
          goto LABEL_91;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x312u, 0LL);
      }
    }
    CShapePtr::Release((CShapePtr *)&v97);
    goto LABEL_91;
  }
  v14 = *((_DWORD *)a2 + 4);
  *(_QWORD *)&v92.left = &v81;
  *(_QWORD *)&v94.left = (unsigned int)v8;
  *(_QWORD *)&v81 = 0LL;
  *(_QWORD *)&v94.right = &Destination;
  *(_QWORD *)&v92.right = 0LL;
  LOBYTE(v93) = 1;
  v16 = CBrushDrawListGenerator::ComputeBrushClamp((__int64 *)&v94, v14, (float *)a2 + 5, &v92.right);
  if ( (_BYTE)v93 )
  {
    v15 = *(_QWORD *)&v92.right;
    v17 = **(__int64 (__fastcall *****)(_QWORD, __int64))&v92.left;
    **(_QWORD **)&v92.left = *(_QWORD *)&v92.right;
    if ( v17 )
      std::default_delete<CShape>::operator()(v15, v17);
  }
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v16, 0x2E3u, 0LL);
  }
  else
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v81 + 32LL))(v81, &v91, 0LL);
    v16 = v18;
    if ( v18 >= 0 )
    {
      v12 = v81;
      if ( (_QWORD)v81 )
        std::default_delete<CShape>::operator()(v19, (__int64 (__fastcall ***)(_QWORD, __int64))v81);
      goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x2E5u, 0LL);
  }
  if ( (_QWORD)v81 )
    std::default_delete<CShape>::operator()(v43, (__int64 (__fastcall ***)(_QWORD, __int64))v81);
LABEL_91:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v84);
  return (unsigned int)v16;
}
