/*
 * XREFs of ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18019F2B8
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180045CD0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800091A4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180019D44 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003A358 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z @ 0x18003BF38 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003BF94 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18003C064 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18003C5C4 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003E144 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180047970 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180049364 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180049AF8 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18004C5B8 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1800500A0 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180053280 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800539F4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180056600 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180056938 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x18005712C (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800574D0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18005811C (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180058404 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800828C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18008DB00 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C1710 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x1800C1838 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800C3328 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C456C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800CB03C (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800D2324 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800E5E34 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     memcpy_s_0 @ 0x18019FF94 (memcpy_s_0.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1801AEF38 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x18021E6E4 (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
        CDrawingContext **this,
        const struct CBrushDrawListGenerator::GenerateDrawListProperties *a2,
        struct CSurfaceDrawListBrush **a3)
{
  CDrawingContext *v5; // rcx
  void (__fastcall ***v7)(_QWORD, __int64 *); // rcx
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
  CDrawingContext *v21; // rbx
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
  CDrawingContext *v48; // rcx
  __m128 v49; // xmm3
  __m128 v50; // xmm0
  __m128 v51; // xmm1
  float v52; // xmm7_4
  float v53; // xmm6_4
  unsigned int *v54; // rcx
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
  __int64 v73; // rcx
  struct D2D_MATRIX_3X2_F *v74; // r9
  CSurfaceDrawListBrush *v75; // r8
  __int64 v76; // r11
  unsigned __int64 v77; // xmm1_8
  unsigned int v78; // r8d
  CDrawListEntry *v79; // rcx
  __int64 v81; // [rsp+28h] [rbp-E0h]
  __int128 v82; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_MATRIX_3X2_F v83; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v84; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v85; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v86[4]; // [rsp+78h] [rbp-90h] BYREF
  __int16 v87; // [rsp+B8h] [rbp-50h]
  _OWORD v88[4]; // [rsp+C8h] [rbp-40h] BYREF
  int v89; // [rsp+108h] [rbp+0h]
  _OWORD v90[4]; // [rsp+118h] [rbp+10h] BYREF
  int v91; // [rsp+158h] [rbp+50h]
  struct D2D_RECT_F v92; // [rsp+168h] [rbp+60h] BYREF
  struct D2D_RECT_F v93; // [rsp+178h] [rbp+70h] BYREF
  unsigned __int64 v94; // [rsp+188h] [rbp+80h]
  struct D2D_RECT_F v95; // [rsp+198h] [rbp+90h] BYREF
  struct CDrawListEntry **v96[288]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 Destination; // [rsp+AA8h] [rbp+9A0h] BYREF
  __int64 v98; // [rsp+AB8h] [rbp+9B0h] BYREF
  int v99; // [rsp+AC0h] [rbp+9B8h]
  __int64 v100; // [rsp+AC4h] [rbp+9BCh]
  int v101; // [rsp+ACCh] [rbp+9C4h]
  char v102; // [rsp+AD0h] [rbp+9C8h]

  v5 = *this;
  v92 = (struct D2D_RECT_F)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v85 = 0LL;
  v89 = 0;
  CDrawingContext::GetWorldTransform(v5, (struct CMILMatrix *)v88);
  v7 = (void (__fastcall ***)(_QWORD, __int64 *))(*((_QWORD *)*this + 4)
                                                + 8LL
                                                + *(int *)(*(_QWORD *)(*((_QWORD *)*this + 4) + 8LL) + 16LL));
  (**v7)(v7, &v84);
  v8 = *((unsigned int *)this + 18);
  v9 = (float)(int)v84;
  v10 = (float)SHIDWORD(v84);
  memcpy_s_0(&Destination, v11, this + 5, 8 * v8);
  if ( *(_QWORD *)a2 )
  {
    *((_QWORD *)&Destination + v8) = *(_QWORD *)a2;
    LODWORD(v8) = v8 + 1;
  }
  if ( !(_DWORD)v8 )
  {
LABEL_11:
    v95 = v92;
    v91 = v89;
    v90[0] = v88[0];
    v90[1] = v88[1];
    v90[2] = v88[2];
    v90[3] = v88[3];
    if ( CMILMatrix::Invert((CMILMatrix *)v90, v12, v13) )
    {
      v21 = *this;
      CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)*this + 24));
      Bounds = CVisual::GetBounds(CurrentVisual, *((_QWORD *)v21 + 741), v23, v24);
      v26 = *(_DWORD *)(Bounds + 20);
      v27 = *(_DWORD *)(Bounds + 16);
      v93.left = 0.0;
      v93.top = 0.0;
      v94 = __PAIR64__(v26, v27);
      v93.right = v9;
      v93.bottom = v10;
      CMILMatrix::Transform3DBoundsHelper<1>((__int64)v90, &v93.left, (__m128 *)&v93);
      left = v92.left;
      v9 = v93.right - v93.left;
      v10 = v93.bottom - v93.top;
      if ( v93.left > v92.left )
      {
        v92.left = v93.left;
        left = v93.left;
      }
      top = v92.top;
      if ( v93.top > v92.top )
      {
        v92.top = v93.top;
        top = v93.top;
      }
      right = v92.right;
      if ( v92.right > v93.right )
      {
        v92.right = v93.right;
        right = v93.right;
      }
      bottom = v92.bottom;
      if ( v92.bottom > v93.bottom )
      {
        v92.bottom = v93.bottom;
        bottom = v93.bottom;
      }
      if ( right <= left || bottom <= top )
        v92 = (struct D2D_RECT_F)0LL;
    }
    v32 = (const struct CVisualTree **)*this;
    v98 = 0LL;
    Destination = 0LL;
    LOBYTE(v99) = 0;
    BYTE4(v100) = 0;
    CpuClip = CDrawingContext::GetCpuClip(v32, v20, (struct CCpuClip *)&Destination);
    v16 = CpuClip;
    if ( CpuClip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, CpuClip, 0x310u, 0LL);
    }
    else
    {
      if ( !(_QWORD)Destination && !v98 )
        goto LABEL_39;
      v35 = CCpuClip::ResolveClip((CCpuClip *)&Destination, (const struct CShape **)&v82);
      v16 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x315u, 0LL);
      }
      else
      {
        v93 = 0LL;
        v37 = (*(__int64 (__fastcall **)(_QWORD, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v82 + 32LL))(v82, &v93, 0LL);
        v16 = v37;
        if ( v37 >= 0 )
        {
          v39 = v92.left;
          if ( v93.left > v92.left )
          {
            v92.left = v93.left;
            v39 = v93.left;
          }
          v40 = v92.top;
          if ( v93.top > v92.top )
          {
            v92.top = v93.top;
            v40 = v93.top;
          }
          v41 = v92.right;
          if ( v92.right > v93.right )
          {
            v92.right = v93.right;
            v41 = v93.right;
          }
          v42 = v92.bottom;
          if ( v92.bottom > v93.bottom )
          {
            v92.bottom = v93.bottom;
            v42 = v93.bottom;
          }
          if ( v41 <= v39 || v42 <= v40 )
            v92 = (struct D2D_RECT_F)0LL;
LABEL_39:
          CShapePtr::Release((CShapePtr *)&v98);
          if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v92.left) )
          {
            *a3 = 0LL;
            goto LABEL_91;
          }
          CMILMatrix::Get2DScaleDimensionsWithPerspective((__int64)v88);
          v45 = *((_DWORD *)this + 18) == 1;
          m11 = *(float *)&FLOAT_1_0;
          dx = *(float *)&FLOAT_1_0;
          LODWORD(v83.m11) = (_DWORD)FLOAT_1_0;
          LODWORD(v83.dx) = (_DWORD)FLOAT_1_0;
          if ( v45 )
          {
            v48 = this[5];
            if ( v48 )
            {
              D2DMatrixHelper::GetScaleDimensions((CDrawingContext *)((char *)v48 + 8), &v83, &v83.dx, v44);
              m11 = v83.m11;
              dx = v83.dx;
            }
          }
          v49 = 0LL;
          v50 = 0LL;
          v51.m128_f32[0] = (float)(v93.left / fmaxf(1.0, m11 * v93.left)) * (float)(v92.right - v92.left);
          v50.m128_f32[0] = (float)(int)v51.m128_f32[0];
          LODWORD(v93.left) = _mm_cmplt_ss(v50, v51).m128_u32[0];
          v52 = (float)((int)v51.m128_f32[0] - LODWORD(v93.left));
          v93.left = v52;
          v51.m128_f32[0] = (float)(*(float *)&v82 / fmaxf(1.0, dx * *(float *)&v82)) * (float)(v92.bottom - v92.top);
          v49.m128_f32[0] = (float)(int)v51.m128_f32[0];
          LODWORD(v82) = _mm_cmplt_ss(v49, v51).m128_u32[0];
          v53 = (float)((int)v51.m128_f32[0] - v82);
          v93.top = v53;
          if ( v52 > v9 )
          {
            v52 = v9;
            v93.left = v9;
          }
          if ( v53 > v10 )
          {
            v53 = v10;
            v93.top = v10;
          }
          v54 = (unsigned int *)*this;
          *(_QWORD *)&v95.left = "DWM Drawlist Brush intermediate";
          LODWORD(v95.right) = 31;
          LOBYTE(v81) = 1;
          v55 = v52 / (float)(v92.right - v92.left);
          v56 = v53 / (float)(v92.bottom - v92.top);
          v57 = CDrawingContext::PushOffScreenRenderingLayer(
                  (CDrawingContext *)v54,
                  (__int64)&v95,
                  &v93.left,
                  v54[16],
                  v81,
                  &v85);
          v16 = v57;
          if ( v57 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x364u, 0LL);
            goto LABEL_91;
          }
          v86[1] = _xmm;
          v86[0] = _xmm;
          v86[2] = _xmm;
          v86[3] = _xmm;
          v87 = 32085;
          CMILMatrix::Translate(
            (CMILMatrix *)v86,
            COERCE_FLOAT(LODWORD(v92.left) ^ _xmm),
            COERCE_FLOAT(LODWORD(v92.top) ^ _xmm));
          CMILMatrix::Scale((CMILMatrix *)v86, v55, v56, 1.0);
          v59 = CDrawingContext::PushTransformInternal(*this, 0LL, (const struct CMILMatrix *)v86, 0, 1);
          v16 = v59;
          if ( v59 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, 0x36Du, 0LL);
            goto LABEL_85;
          }
          CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v96);
          DrawList = CBrushDrawListGenerator::GenerateDrawList(
                       (CBrushDrawListGenerator *)this,
                       a2,
                       (struct CDrawListEntryBuilder *)v96);
          v16 = DrawList;
          if ( DrawList < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, DrawList, 0x371u, 0LL);
            goto LABEL_83;
          }
          *(_QWORD *)&v82 = 0LL;
          v63 = CDrawListCache::Create((struct CDrawListCache **)&v82);
          v16 = v63;
          if ( v63 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, v63, 0x374u, 0LL);
            v79 = (CDrawListEntry *)v82;
            if ( !(_QWORD)v82 )
              goto LABEL_83;
          }
          else
          {
            v65 = (CDrawListEntry *)v82;
            CDrawListCache::Update((CDrawListCache *)v82, *this, v96);
            v66 = CDrawListCache::Render((__int64)v65, *this, (float *)v86, 1.0);
            v16 = v66;
            if ( v66 >= 0 )
            {
              CDrawingContext::PopTransformInternal(*this, 1);
              v68 = CDrawingContext::PopLayer(*this);
              v16 = v68;
              if ( v68 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v68, 0x383u, 0LL);
                if ( v65 )
                  CDrawListEntry::Release(v65);
                CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v96);
              }
              else
              {
                if ( v65 )
                  CDrawListEntry::Release(v65);
                CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v96);
                *(_QWORD *)&v82 = 0LL;
                v100 = 0LL;
                v101 = 0;
                v98 = 0LL;
                v99 = 0;
                v102 = 0;
                Destination = 0LL;
                if ( v85 )
                  v70 = (struct IBitmapRealization *)(v85 + *(int *)(*(_QWORD *)(v85 + 8) + 16LL) + 8LL);
                else
                  v70 = 0LL;
                v71 = CDrawListBitmap::Initialize((CDrawListBitmap *)&Destination, v70, *this);
                v16 = v71;
                if ( v71 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, v71, 0x392u, 0LL);
                }
                else
                {
                  CDrawListBitmap::GetSize((CDrawListBitmap *)&Destination, &v84);
                  v95.left = 0.0;
                  v95.top = 0.0;
                  *(_QWORD *)&v93.right = 0LL;
                  LOBYTE(v94) = 1;
                  *(_QWORD *)&v93.left = &v82;
                  LOWORD(v83.m11) = SamplerMode::k_ClampClampLinear;
                  v95.right = (float)(int)v84;
                  v95.bottom = (float)SHIDWORD(v84);
                  BYTE2(v83._11) = 1;
                  v16 = CSurfaceDrawListBrush::CreateWithContentRect(
                          (CDrawListBitmap *)&Destination,
                          (__int16 *)&v83,
                          &v95.left,
                          (__int64 *)&v93.right);
                  if ( (_BYTE)v94 )
                  {
                    v73 = *(_QWORD *)&v93.left;
                    v75 = **(CSurfaceDrawListBrush ***)&v93.left;
                    **(_QWORD **)&v93.left = *(_QWORD *)&v93.right;
                    if ( v75 )
                      CSurfaceDrawListBrush::`vector deleting destructor'(v75, 1, (unsigned int)v75);
                  }
                  if ( v16 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, v16, 0x39Bu, 0LL);
                  }
                  else
                  {
                    v95 = v92;
                    D2DMatrixHelper::ComputeRectangleTransform((const struct D2D_RECT_F *)(v82 + 32), &v95, &v93, v74);
                    v76 = v82;
                    v77 = v94;
                    *(struct D2D_RECT_F *)(v82 + 8) = v93;
                    *(_QWORD *)(v76 + 24) = v77;
                    *a3 = (struct CSurfaceDrawListBrush *)v82;
                    *(_QWORD *)&v82 = 0LL;
                  }
                }
                wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&Destination + 8);
                wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&Destination);
                if ( (_QWORD)v82 )
                  CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v82, 1, v78);
              }
              goto LABEL_91;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0x37Cu, 0LL);
            if ( !v65 )
              goto LABEL_83;
            v79 = v65;
          }
          CDrawListEntry::Release(v79);
LABEL_83:
          CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v96);
          CDrawingContext::PopTransformInternal(*this, 1);
LABEL_85:
          CDrawingContext::PopLayer(*this);
          goto LABEL_91;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x318u, 0LL);
      }
    }
    CShapePtr::Release((CShapePtr *)&v98);
    goto LABEL_91;
  }
  v14 = *((_DWORD *)a2 + 4);
  *(_QWORD *)&v93.left = &v82;
  *(_QWORD *)&v95.left = (unsigned int)v8;
  *(_QWORD *)&v82 = 0LL;
  *(_QWORD *)&v95.right = &Destination;
  *(_QWORD *)&v93.right = 0LL;
  LOBYTE(v94) = 1;
  v16 = CBrushDrawListGenerator::ComputeBrushClamp(
          (__int64 *)&v95,
          v14,
          (__int64)a2 + 20,
          (struct CRectanglesShape **)&v93.right);
  if ( (_BYTE)v94 )
  {
    v15 = *(_QWORD *)&v93.right;
    v17 = **(__int64 (__fastcall *****)(_QWORD, __int64))&v93.left;
    **(_QWORD **)&v93.left = *(_QWORD *)&v93.right;
    if ( v17 )
      std::default_delete<CShape>::operator()(v15, v17);
  }
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v16, 0x2E9u, 0LL);
  }
  else
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v82 + 32LL))(v82, &v92, 0LL);
    v16 = v18;
    if ( v18 >= 0 )
    {
      v12 = v82;
      if ( (_QWORD)v82 )
        std::default_delete<CShape>::operator()(v19, (__int64 (__fastcall ***)(_QWORD, __int64))v82);
      goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x2EBu, 0LL);
  }
  if ( (_QWORD)v82 )
    std::default_delete<CShape>::operator()(v43, (__int64 (__fastcall ***)(_QWORD, __int64))v82);
LABEL_91:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v85);
  return (unsigned int)v16;
}
