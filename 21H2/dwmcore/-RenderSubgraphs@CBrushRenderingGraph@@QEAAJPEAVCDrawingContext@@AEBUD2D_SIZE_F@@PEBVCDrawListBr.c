/*
 * XREFs of ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18005464C
 * Callers:
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180053D70 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180233EB0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800099AC (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180053510 (-RenderExternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180053AAC (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?IsBlurredWallpaperBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z @ 0x180054274 (-IsBlurredWallpaperBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x180054EB8 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ?GetEffectStageInput@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x180054EEC (-GetEffectStageInput@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$vec.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180054FB4 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?CleanupEffectStage@CBrushRenderingGraph@@IEAAXPEAUEffectStage@@@Z @ 0x180055104 (-CleanupEffectStage@CBrushRenderingGraph@@IEAAXPEAUEffectStage@@@Z.c)
 *     ??0EffectStage@@QEAA@XZ @ 0x18005517C (--0EffectStage@@QEAA@XZ.c)
 *     ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x1800551CC (-reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z.c)
 *     ?IsBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z @ 0x180055214 (-IsBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z.c)
 *     ?CheckIfDisposed@CBrushRenderingGraph@@IEBAXXZ @ 0x180055274 (-CheckIfDisposed@CBrushRenderingGraph@@IEBAXXZ.c)
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x1800553C8 (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 *     ?IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z @ 0x180055428 (-IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z.c)
 *     ?IsWindowBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z @ 0x180055460 (-IsWindowBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z.c)
 *     ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x1800554AC (-GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800554DC (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x180055680 (-HasSubtreeSurface@CVisual@@QEBA_NXZ.c)
 *     ?GenerateEffectInput@CBackdropVisualImage@@QEAA?AUEffectInput@@XZ @ 0x180055710 (-GenerateEffectInput@CBackdropVisualImage@@QEAA-AUEffectInput@@XZ.c)
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@IEBA_NIPEA_N@Z @ 0x180058AC0 (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@IEBA_NIPEA_N@Z.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x18005D034 (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x180086E30 (-UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x18008D4A8 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x18008D714 (-GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18008E708 (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800BCC70 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x1800BCD2C (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ??1EffectInput@@QEAA@XZ @ 0x1800D0FD0 (--1EffectInput@@QEAA@XZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800D4DD0 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UEffectInput@@@std@@@std@@YAXPEAUEffectInput@@QEAU1@AEAV?$allocator@UEffectInput@@@0@@Z @ 0x1800D73F8 (--$_Destroy_range@V-$allocator@UEffectInput@@@std@@@std@@YAXPEAUEffectInput@@QEAU1@AEAV-$allocat.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800DD36C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ @ 0x1800E109C (-CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801B2258 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?GetTransparentBlackEffectInput@CDrawingContext@@QEBA?AUEffectInput@@AEBUD2D_SIZE_F@@@Z @ 0x1801B2C3C (-GetTransparentBlackEffectInput@CDrawingContext@@QEBA-AUEffectInput@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x1801D9590 (-GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA-AVMatrix3x3@@I@Z.c)
 *     ??$?4VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x180252038 (--$-4VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapRealization@@Uerr_r.c)
 *     ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x180252078 (--$_Emplace_reallocate@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAPEA.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1802524EC (-RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderSubgraphs(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        const struct CDrawListBrush *a4,
        struct CDrawListCache *a5)
{
  struct D2D_SIZE_F *v5; // r13
  struct CDrawingContext *v6; // r12
  struct IBitmapRealization *v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // eax
  FLOAT height; // xmm0_4
  __int64 v12; // rax
  CVisual *v13; // rdi
  int v14; // eax
  float v15; // xmm1_4
  char v16; // r15
  char v17; // al
  __int64 v18; // rdi
  CVisual *v19; // rax
  CBackdropVisualImage *BackdropVisualImage; // rax
  CBackdropVisualImage *v21; // r15
  __int64 v22; // rcx
  __int64 EffectInput; // rax
  int v24; // edi
  int v25; // r13d
  unsigned int v26; // edi
  unsigned int v27; // r15d
  __int64 v28; // rdi
  __int64 v29; // r14
  __int64 v30; // r12
  __int64 v31; // r13
  struct D2D_SIZE_F *v32; // rdi
  FLOAT v33; // xmm1_4
  unsigned int v34; // r15d
  unsigned int v35; // r13d
  __int64 v36; // rdi
  char *v37; // rbx
  __int64 v38; // rax
  struct EffectInput *v39; // rbx
  __int64 v40; // r15
  int BlurredWallpaperEffectInput; // eax
  CBrushRenderingGraph *v42; // rcx
  const struct _GUID *v43; // r8
  unsigned int v44; // edi
  unsigned int v45; // ebx
  __int64 v46; // rbx
  __int64 v47; // rbx
  __int64 v48; // rbx
  EffectInput *v49; // rsi
  __int128 *v51; // rdx
  unsigned int v52; // edx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rdx
  unsigned int v58; // ecx
  const char **DebugString; // rax
  __int64 v60; // rdi
  __int64 v61; // rax
  void **v62; // rdi
  void **v63; // rax
  __int64 v64; // rdx
  CDrawListBitmap *v65; // rax
  float v66; // xmm1_4
  __int64 DestToTexSpaceTransform; // rax
  unsigned int v68; // [rsp+20h] [rbp-E0h]
  bool v69; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v70; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v71; // [rsp+50h] [rbp-B0h]
  struct D2D_SIZE_F *v72; // [rsp+58h] [rbp-A8h]
  unsigned int v73; // [rsp+60h] [rbp-A0h]
  const struct CVisualTreePath *v74; // [rsp+68h] [rbp-98h] BYREF
  __int64 v75[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v76; // [rsp+80h] [rbp-80h]
  __int64 v77[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v78; // [rsp+98h] [rbp-68h]
  _BYTE v79[24]; // [rsp+A0h] [rbp-60h] BYREF
  struct IBitmapRealization *v80; // [rsp+B8h] [rbp-48h] BYREF
  void *v81; // [rsp+C0h] [rbp-40h] BYREF
  CVisual *v82; // [rsp+C8h] [rbp-38h]
  struct CDrawingContext *v83; // [rsp+D0h] [rbp-30h]
  struct CDrawListCache *v84; // [rsp+D8h] [rbp-28h]
  struct CDrawListBrush *v85; // [rsp+E0h] [rbp-20h]
  char v86[8]; // [rsp+E8h] [rbp-18h] BYREF
  char v87[32]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v88[64]; // [rsp+110h] [rbp+10h] BYREF
  int v89; // [rsp+150h] [rbp+50h]
  int v90; // [rsp+160h] [rbp+60h]
  int v91; // [rsp+164h] [rbp+64h]
  FLOAT width; // [rsp+168h] [rbp+68h]
  FLOAT v93; // [rsp+16Ch] [rbp+6Ch]
  struct _GUID v94; // [rsp+170h] [rbp+70h] BYREF
  __int128 v95; // [rsp+180h] [rbp+80h] BYREF
  char v96; // [rsp+190h] [rbp+90h]
  __int128 v97; // [rsp+1B0h] [rbp+B0h]
  char v98; // [rsp+1E7h] [rbp+E7h]
  __int128 v99; // [rsp+1F0h] [rbp+F0h] BYREF
  char v100; // [rsp+200h] [rbp+100h]
  __int128 v101; // [rsp+220h] [rbp+120h]
  __int128 v102; // [rsp+260h] [rbp+160h] BYREF
  char v103; // [rsp+270h] [rbp+170h]
  __int128 v104; // [rsp+290h] [rbp+190h]
  unsigned int v105; // [rsp+2D0h] [rbp+1D0h] BYREF
  unsigned int v106; // [rsp+2D4h] [rbp+1D4h]
  _QWORD v107[5]; // [rsp+2D8h] [rbp+1D8h] BYREF
  char v108; // [rsp+304h] [rbp+204h]
  char v109; // [rsp+305h] [rbp+205h]
  char v110; // [rsp+33Dh] [rbp+23Dh]
  char v111; // [rsp+478h] [rbp+378h] BYREF
  char v112[8]; // [rsp+480h] [rbp+380h] BYREF
  char v113[104]; // [rsp+488h] [rbp+388h] BYREF
  char v114[8]; // [rsp+4F0h] [rbp+3F0h] BYREF
  char v115[104]; // [rsp+4F8h] [rbp+3F8h] BYREF

  v5 = a3;
  v84 = a5;
  v6 = a2;
  v85 = a4;
  v72 = a3;
  v83 = a2;
  CBrushRenderingGraph::CheckIfDisposed(this);
  v8 = 0LL;
  v80 = 0LL;
  EffectStage::EffectStage((EffectStage *)&v105);
  v96 = 0;
  v94 = 0LL;
  v95 = 0LL;
  v97 = 0LL;
  EffectInput::Reset((struct EffectInput *)&v95);
  v103 = 0;
  v102 = 0LL;
  v104 = 0LL;
  EffectInput::Reset((struct EffectInput *)&v102);
  v100 = 0;
  v99 = 0LL;
  v101 = 0LL;
  EffectInput::Reset((struct EffectInput *)&v99);
  v89 = 0;
  CMatrixStack::Top((struct CDrawingContext *)((char *)v6 + 368), (struct CMILMatrix *)v88);
  v9 = *((_DWORD *)this + 10);
  v90 = 0;
  v91 = 0;
  v71 = v9;
  v10 = *((_DWORD *)this + 42) - 1;
  v76 = 0LL;
  *(_OWORD *)v75 = 0LL;
  v73 = v10;
  height = v5->height;
  v12 = *((_QWORD *)v6 + 3);
  *(_OWORD *)v77 = 0LL;
  v78 = 0LL;
  width = v5->width;
  v93 = height;
  v13 = (CVisual *)(*(__int64 (__fastcall **)(__int64))(v12 + 32))((__int64)v6 + 24);
  v14 = *((_DWORD *)v6 + 776);
  if ( v14 )
    v15 = *(float *)(*((_QWORD *)v6 + 390) + 4LL * (unsigned int)(v14 - 1));
  else
    v15 = *(float *)&FLOAT_1_0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - 1.0) & _xmm) >= 0.0000011920929 || (v16 = 1, *((_DWORD *)v6 + 77) > 1u) )
    v16 = 0;
  v70 = 0LL;
  if ( CVisual::HasSubtreeSurface(v13) )
    v70 = *(_QWORD *)((*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v13 + 216LL))(v13) + 8);
  if ( *((_QWORD *)this + 26) )
  {
    if ( (**((_DWORD **)v13 + 29) & 0x200000) != 0
      && (v57 = *((_QWORD *)CVisual::GetWindowBackgroundTreatmentInternal(v13) + 39)) != 0 )
    {
      EffectInput::operator=(&v95, v57);
      v17 = 1;
      v98 = 1;
    }
    else
    {
      v17 = v98;
    }
    if ( !v17 )
    {
      v18 = v73;
      v69 = 0;
      CBrushRenderingGraph::DoesBackdropInputContributeToSubgraph(this, v73, &v69);
      if ( v69
        && v16
        && CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(*(_QWORD *)(*((_QWORD *)this + 18)
                                                                                           + 8 * v18)
                                                                               + 8LL)) )
      {
        v44 = -2003304441;
        MilInstrumentationCheckHR_MaybeFailFast(
          v58,
          &`CBitmapRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          -2003304441,
          0x29Fu,
          0LL);
        goto LABEL_50;
      }
      v19 = (CVisual *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v6 + 3) + 32LL))((__int64)v6 + 24);
      v74 = (const struct CVisualTreePath *)*((_QWORD *)v6 + 994);
      v82 = v19;
      BackdropVisualImage = CVisual::GetBackdropVisualImage(v19, v74);
      v21 = BackdropVisualImage;
      if ( BackdropVisualImage && CBackdropVisualImage::CanUseAsEffectInput(BackdropVisualImage) )
      {
        EffectInput = CBackdropVisualImage::GenerateEffectInput(v22, v114);
        v24 = 0;
        v25 = 1;
      }
      else
      {
        EffectInput = CDrawingContext::GetTransparentBlackEffectInput(v6, v112, v5);
        v25 = 0;
        v24 = 2;
      }
      EffectInput::operator=(&v95, EffectInput);
      if ( v24 )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v113);
        wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v112);
      }
      if ( v25 )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v115);
        wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v114);
      }
      if ( dword_1803D0F60 )
      {
        if ( v21 )
        {
          if ( !CBackdropVisualImage::CanUseAsEffectInput(v21) )
          {
            v62 = (void **)DwmDbg::DbgString::DbgString(
                             (DwmDbg::DbgString *)v79,
                             "CBrushRenderingGraph::RenderSubgraphs");
            v63 = (void **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v81, "BVI-FallbackToTransparentBlack");
            CBackdropVisualImage::LogEtwEvent((__int64)v21, v63, v62);
          }
        }
        else
        {
          DebugString = (const char **)CVisualTreePath::GetDebugString(v74, &v81);
          v60 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v74, "bviPath=[%s]", *DebugString);
          v61 = DwmDbg::DbgString::DbgString(
                  (DwmDbg::DbgString *)v79,
                  "BrushRenderingGraph-FallbackToTransparentBlack-NoBVI");
          DwmDbg::Backdrops::LogBrushEtwEvent(v61, v82, v60);
          if ( v81 )
            DefaultHeap::Free(v81);
        }
      }
      v5 = v72;
    }
  }
  if ( *((_BYTE *)this + 197) )
  {
    BlurredWallpaperEffectInput = CDrawingContext::GetBlurredWallpaperEffectInput(v6, v5, (struct EffectInput *)&v102);
    v44 = BlurredWallpaperEffectInput;
    if ( BlurredWallpaperEffectInput < 0 )
    {
      v68 = 707;
      goto LABEL_103;
    }
  }
  if ( *((_BYTE *)this + 198) )
  {
    BlurredWallpaperEffectInput = CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
                                    v6,
                                    v5,
                                    (struct EffectInput *)&v99);
    v44 = BlurredWallpaperEffectInput;
    if ( BlurredWallpaperEffectInput < 0 )
    {
      v68 = 713;
      goto LABEL_103;
    }
  }
  v26 = v71;
  std::vector<EffectInput>::reserve(v77, v71);
  v27 = 0;
  if ( v26 )
  {
    v28 = v77[1];
    v29 = 0LL;
    v30 = v70;
    while ( 1 )
    {
      if ( v28 == v78 )
      {
        std::vector<EffectInput>::_Emplace_reallocate<std::nullptr_t>(v77, v28);
        v28 = v77[1];
      }
      else
      {
        *(_QWORD *)v28 = 0LL;
        *(_QWORD *)(v28 + 8) = 0LL;
        *(_BYTE *)(v28 + 16) = 0;
        *(_OWORD *)(v28 + 48) = 0LL;
        v28 += 104LL;
        v77[1] = v28;
      }
      v31 = v29 + v77[0];
      EffectInput::Reset((struct EffectInput *)(v29 + v77[0]));
      if ( CBrushRenderingGraph::IsBackdropInput(this, v27) )
      {
        v51 = &v95;
      }
      else if ( CBrushRenderingGraph::IsWindowBackdropInput(this, v27) )
      {
        v51 = &v99;
      }
      else
      {
        if ( !CBrushRenderingGraph::IsBlurredWallpaperBackdropInput(this, v27) )
        {
          if ( !v30 || CBrushRenderingGraph::GetNamedInput(this, v27) )
          {
            *(_DWORD *)(v31 + 48) = v27;
          }
          else
          {
            if ( !v8 )
            {
              v64 = *(_QWORD *)(v30 + 8);
              v70 = 0LL;
              wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v70, v64);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v70 + 8LL))(v70, 1LL);
              wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=<IRenderTargetBitmap,wil::err_returncode_policy,void>(
                &v80,
                &v70);
              wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v70);
              v8 = v80;
            }
            v65 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v86, v8);
            CDrawListBitmap::operator=(v31, v65);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v87);
            wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v86);
            *(_DWORD *)v79 = 0;
            *(_DWORD *)&v79[4] = 0;
            *(_BYTE *)(v31 + 44) = 1;
            v66 = (float)*(int *)(v30 + 28);
            *(float *)&v79[8] = (float)*(int *)(v30 + 24);
            *(float *)&v79[12] = v66;
            *(_OWORD *)(v31 + 84) = *(_OWORD *)v79;
            DestToTexSpaceTransform = CTreeEffectLayer::GetDestToTexSpaceTransform(v30, v86, v27);
            *(_OWORD *)(v31 + 48) = *(_OWORD *)DestToTexSpaceTransform;
            *(_OWORD *)(v31 + 64) = *(_OWORD *)(DestToTexSpaceTransform + 16);
            *(_DWORD *)(v31 + 80) = *(_DWORD *)(DestToTexSpaceTransform + 32);
            *(_BYTE *)(v31 + 100) = 0;
          }
          goto LABEL_32;
        }
        v51 = &v102;
      }
      EffectInput::operator=(v31, v51);
LABEL_32:
      ++v27;
      v29 += 104LL;
      if ( v27 >= v71 )
      {
        v6 = v83;
        break;
      }
    }
  }
  v32 = v72;
  *(_OWORD *)&v79[8] = 0LL;
  v33 = v72->height;
  *(FLOAT *)v79 = v72->width;
  *(FLOAT *)&v79[4] = v33;
  CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)v88, (float *)&v79[8], (float *)&v79[12]);
  v34 = v73;
  std::vector<EffectInput>::reserve(v75, v73);
  v35 = 0;
  if ( !v34 )
  {
LABEL_45:
    v106 = 0;
    v45 = 0;
    v105 = v34;
    while ( v45 < *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 8LL * v34) + 60LL) )
    {
      BlurredWallpaperEffectInput = CBrushRenderingGraph::GetEffectStageInput(
                                      this,
                                      v6,
                                      v32,
                                      v34,
                                      v45,
                                      (__int64)v77,
                                      (__int64)v75,
                                      (struct EffectInput *)&v107[13 * v45]);
      v44 = BlurredWallpaperEffectInput;
      if ( BlurredWallpaperEffectInput < 0 )
      {
        v68 = 898;
        goto LABEL_103;
      }
      ++v106;
      v32 = v72;
      ++v45;
    }
    BlurredWallpaperEffectInput = CBrushRenderingGraph::UpdateDrawListCache(
                                    this,
                                    v6,
                                    v85,
                                    (struct EffectStage *)&v105,
                                    v84);
    v44 = BlurredWallpaperEffectInput;
    if ( BlurredWallpaperEffectInput >= 0 )
      goto LABEL_50;
    v68 = 906;
    goto LABEL_103;
  }
  v36 = 0LL;
  v37 = 0LL;
  v70 = 0LL;
  v74 = 0LL;
  while ( 1 )
  {
    v38 = v75[1];
    if ( v75[1] == v76 )
    {
      std::vector<EffectInput>::_Emplace_reallocate<std::nullptr_t>(v75, v75[1]);
    }
    else
    {
      *(_QWORD *)v75[1] = 0LL;
      *(_QWORD *)(v38 + 8) = 0LL;
      v75[1] += 104LL;
      *(_BYTE *)(v38 + 16) = 0;
      *(_OWORD *)(v38 + 48) = 0LL;
    }
    v39 = (struct EffectInput *)&v37[v75[0]];
    EffectInput::Reset(v39);
    *((_BYTE *)v39 + 44) = 1;
    *((_BYTE *)v39 + 100) = 1;
    v40 = *(_QWORD *)(v36 + *((_QWORD *)this + 18));
    v106 = 0;
    v105 = v35;
    if ( !CRenderingTechnique::IsExternallyImplementedSubgraph((CRenderingTechnique *)v40, &v94) )
      break;
    if ( CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(v40 + 8)) )
      goto LABEL_66;
    BlurredWallpaperEffectInput = CBrushRenderingGraph::GetEffectStageInput(
                                    this,
                                    v6,
                                    v72,
                                    v35,
                                    0,
                                    (__int64)v77,
                                    (__int64)v75,
                                    (struct EffectInput *)v107);
    v44 = BlurredWallpaperEffectInput;
    if ( BlurredWallpaperEffectInput < 0 )
    {
      v68 = 815;
      goto LABEL_103;
    }
    v106 = 1;
    if ( v109 )
    {
LABEL_66:
      v54 = *(_QWORD *)(*((_QWORD *)this + 18) + v70);
      v55 = 104LL * *(unsigned int *)(v54 + 68);
      if ( *(_BYTE *)(v54 + 72) )
        v56 = v75[0] + v55;
      else
        v56 = v77[0] + v55;
      EffectInput::operator=(v39, v56);
      goto LABEL_43;
    }
    BlurredWallpaperEffectInput = CBrushRenderingGraph::RenderExternalEffect(
                                    this,
                                    v6,
                                    v43,
                                    (const struct EffectStage *)&v105,
                                    (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v79,
                                    v39);
    v44 = BlurredWallpaperEffectInput;
    if ( BlurredWallpaperEffectInput < 0 )
    {
      v68 = 824;
      goto LABEL_103;
    }
LABEL_43:
    CBrushRenderingGraph::CleanupEffectStage(v42, (struct EffectStage *)&v105);
    ++v35;
    v70 += 8LL;
    v37 = (char *)v74 + 104;
    v34 = v73;
    v74 = (const struct CVisualTreePath *)((char *)v74 + 104);
    if ( v35 >= v73 )
    {
      v32 = v72;
      goto LABEL_45;
    }
    v36 = v70;
  }
  v52 = v106;
  v53 = 0LL;
  v71 = 0;
  if ( !*(_DWORD *)(v40 + 60) )
  {
LABEL_62:
    if ( v52 == 1 && v108 && v110 && CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(v40 + 8)) )
      goto LABEL_66;
    BlurredWallpaperEffectInput = CBrushRenderingGraph::RenderInternalEffect(
                                    this,
                                    v6,
                                    (struct EffectStage *)&v105,
                                    (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v79,
                                    v39);
    v44 = BlurredWallpaperEffectInput;
    if ( BlurredWallpaperEffectInput < 0 )
    {
      v68 = 863;
      goto LABEL_103;
    }
    goto LABEL_43;
  }
  while ( 1 )
  {
    BlurredWallpaperEffectInput = CBrushRenderingGraph::GetEffectStageInput(
                                    this,
                                    v6,
                                    v72,
                                    v35,
                                    v52,
                                    (__int64)v77,
                                    (__int64)v75,
                                    (struct EffectInput *)&v107[13 * v53]);
    v44 = BlurredWallpaperEffectInput;
    if ( BlurredWallpaperEffectInput < 0 )
      break;
    v52 = v106 + 1;
    v53 = v71 + 1;
    ++v106;
    v71 = v53;
    if ( (unsigned int)v53 >= *(_DWORD *)(v40 + 60) )
      goto LABEL_62;
  }
  v68 = 844;
LABEL_103:
  MilInstrumentationCheckHR_MaybeFailFast(
    (unsigned int)v42,
    &`CBitmapRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    BlurredWallpaperEffectInput,
    v68,
    0LL);
LABEL_50:
  CBrushRenderingGraph::CleanupEffectStage(v42, (struct EffectStage *)&v105);
  v46 = v77[0];
  if ( v77[0] )
  {
    std::_Destroy_range<std::allocator<EffectInput>>(v77[0], v77[1]);
    std::_Deallocate<16,0>(v46, 8 * ((v78 - v46) >> 3));
  }
  v47 = v75[0];
  if ( v75[0] )
  {
    std::_Destroy_range<std::allocator<EffectInput>>(v75[0], v75[1]);
    std::_Deallocate<16,0>(v47, 8 * ((v76 - v47) >> 3));
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v99 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v99);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v102 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v102);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v95 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v95);
  v48 = 4LL;
  v49 = (EffectInput *)&v111;
  do
  {
    v49 = (EffectInput *)((char *)v49 - 104);
    EffectInput::~EffectInput(v49);
    --v48;
  }
  while ( v48 );
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v80);
  return v44;
}
