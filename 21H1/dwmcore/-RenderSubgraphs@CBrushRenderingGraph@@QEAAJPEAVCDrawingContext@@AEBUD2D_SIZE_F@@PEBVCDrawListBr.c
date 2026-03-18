/*
 * XREFs of ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18006DE6C
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000FC10 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18003A6C0 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180004FF0 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x18000EE8C (-GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA-AVMatrix3x3@@I@Z.c)
 *     ??$?4VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x18001E2D0 (--$-4VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapRealization@@Uerr_r.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18001E8EC (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18002FC70 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAUEffectInput@@@Z @ 0x1800303C0 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180033304 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x1800343CC (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x180036970 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ??1EffectInput@@QEAA@XZ @ 0x180045C40 (--1EffectInput@@QEAA@XZ.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x180045C68 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800469E8 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?IsWindowBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x18006DB94 (-IsWindowBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z.c)
 *     ??$emplace_back@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAAEAUEffectInput@@$$QEA$$T@Z @ 0x18006DE20 (--$emplace_back@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAAEAUEffect.c)
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x18006E808 (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$vec.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x18006E8D0 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?CleanupEffectStage@CBrushRenderingGraph@@AEAAXPEAUEffectStage@@@Z @ 0x18006EA14 (-CleanupEffectStage@CBrushRenderingGraph@@AEAAXPEAUEffectStage@@@Z.c)
 *     ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x18006EA80 (-reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z.c)
 *     ?IsBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x18006EAB8 (-IsBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z.c)
 *     ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x18006EAF8 (-GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006EC40 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ??0EffectStage@@QEAA@XZ @ 0x18006EC68 (--0EffectStage@@QEAA@XZ.c)
 *     ?CheckIfDisposed@CBrushRenderingGraph@@AEBAXXZ @ 0x18006ECB8 (-CheckIfDisposed@CBrushRenderingGraph@@AEBAXXZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006F028 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x18006F150 (-HasSubtreeSurface@CVisual@@QEBA_NXZ.c)
 *     ?IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z @ 0x18006FFB8 (-IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z.c)
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x180070028 (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x180070894 (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180070974 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z @ 0x1800717E0 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800B3F24 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UEffectInput@@@std@@@std@@YAXPEAUEffectInput@@0AEAV?$allocator@UEffectInput@@@0@@Z @ 0x1800BE900 (--$_Destroy_range@V-$allocator@UEffectInput@@@std@@@std@@YAXPEAUEffectInput@@0AEAV-$allocator@UE.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderSubgraphs(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        const struct CDrawListBrush *a4,
        struct CDrawListCache *a5)
{
  struct D2D_SIZE_F *v5; // r15
  unsigned int v8; // r14d
  struct IBitmapRealization *v9; // rbx
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // r12
  FLOAT height; // xmm0_4
  int v14; // eax
  float v15; // xmm1_4
  bool v16; // cc
  struct CBrush *NamedInput; // rax
  CBrushRenderingGraph *v18; // rcx
  CVisual *v19; // rdi
  unsigned int v20; // r12d
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // r15
  struct EffectInput *v24; // rdi
  FLOAT v25; // xmm1_4
  unsigned int v26; // edi
  unsigned int v27; // r12d
  unsigned int v28; // ebx
  __int64 v29; // r12
  int EffectStageInput; // eax
  __int64 v31; // rcx
  struct CDrawListCache *v32; // rbx
  int updated; // eax
  __int64 v34; // rbx
  __int64 v35; // rbx
  EffectInput *v36; // rsi
  __int64 v38; // rbx
  __int64 v39; // rdi
  struct EffectInput *v40; // rdi
  __int64 v41; // rbx
  int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  CBrushRenderingGraph *v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // r14
  char DoesBackdropInputContributeToSubgraph; // di
  FLOAT width; // xmm0_4
  FLOAT v50; // xmm1_4
  int BackdropImageFromRenderTarget; // eax
  __int64 v52; // rcx
  int v53; // ecx
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rcx
  FLOAT v57; // xmm1_4
  __int128 v58; // xmm0
  __int64 v59; // rax
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // rcx
  struct EffectInput *v63; // rcx
  float v64; // xmm1_4
  _DWORD *DestToTexSpaceTransform; // rax
  int v66; // eax
  __int64 v67; // rcx
  unsigned int v68; // [rsp+20h] [rbp-E0h]
  bool v69; // [rsp+40h] [rbp-C0h] BYREF
  char v70; // [rsp+41h] [rbp-BFh]
  unsigned int v71; // [rsp+44h] [rbp-BCh]
  unsigned int v72; // [rsp+48h] [rbp-B8h]
  __int64 v73; // [rsp+50h] [rbp-B0h] BYREF
  struct EffectInput *v74; // [rsp+58h] [rbp-A8h]
  __int64 v75[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v76; // [rsp+70h] [rbp-90h]
  struct IBitmapRealization *v77; // [rsp+78h] [rbp-88h] BYREF
  __int64 v78[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v79; // [rsp+90h] [rbp-70h]
  CVisual *CurrentVisual; // [rsp+98h] [rbp-68h]
  __int128 v81; // [rsp+A0h] [rbp-60h]
  struct D2D_SIZE_F *v82; // [rsp+B0h] [rbp-50h]
  struct CDrawListCache *v83; // [rsp+B8h] [rbp-48h]
  _DWORD v84[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v85; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v86; // [rsp+D8h] [rbp-28h]
  _BYTE v87[64]; // [rsp+E0h] [rbp-20h] BYREF
  int v88; // [rsp+120h] [rbp+20h]
  int v89[10]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v90; // [rsp+158h] [rbp+58h] BYREF
  __int64 v91; // [rsp+168h] [rbp+68h] BYREF
  FLOAT v92; // [rsp+170h] [rbp+70h]
  FLOAT v93; // [rsp+174h] [rbp+74h]
  struct CDrawListBrush *v94[2]; // [rsp+178h] [rbp+78h] BYREF
  struct _GUID v95; // [rsp+188h] [rbp+88h] BYREF
  __int128 v96; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v97; // [rsp+1B0h] [rbp+B0h]
  int v98; // [rsp+1B8h] [rbp+B8h]
  __int64 v99; // [rsp+1BCh] [rbp+BCh]
  int v100; // [rsp+1C4h] [rbp+C4h]
  char v101; // [rsp+1C8h] [rbp+C8h]
  __int128 v102; // [rsp+1E8h] [rbp+E8h]
  __int128 v103; // [rsp+220h] [rbp+120h] BYREF
  __int64 v104; // [rsp+230h] [rbp+130h]
  int v105; // [rsp+238h] [rbp+138h]
  __int64 v106; // [rsp+23Ch] [rbp+13Ch]
  int v107; // [rsp+244h] [rbp+144h]
  char v108; // [rsp+248h] [rbp+148h]
  __int128 v109; // [rsp+268h] [rbp+168h]
  unsigned int v110; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v111; // [rsp+2A4h] [rbp+1A4h]
  _BYTE v112[512]; // [rsp+2A8h] [rbp+1A8h] BYREF
  char v113; // [rsp+4A8h] [rbp+3A8h] BYREF

  v5 = a3;
  v83 = a5;
  v94[0] = a4;
  v82 = a3;
  CBrushRenderingGraph::CheckIfDisposed(this);
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  v77 = 0LL;
  EffectStage::EffectStage((EffectStage *)&v110);
  v98 = 0;
  v99 = 0LL;
  v100 = 0;
  v96 = 0LL;
  v95 = 0LL;
  v97 = 0LL;
  v102 = 0LL;
  v101 = 0;
  EffectInput::Reset((struct EffectInput *)&v96);
  v105 = 0;
  v106 = 0LL;
  v103 = 0LL;
  v107 = 0;
  v104 = 0LL;
  v109 = 0LL;
  v108 = 0;
  EffectInput::Reset((struct EffectInput *)&v103);
  v88 = 0;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 408), (struct CMILMatrix *)v87);
  v11 = *((_DWORD *)this + 42);
  v12 = *((unsigned int *)this + 10);
  *(_QWORD *)&v90 = 0LL;
  *(_OWORD *)v78 = 0LL;
  v79 = 0LL;
  height = v5->height;
  *(_OWORD *)v75 = 0LL;
  v76 = 0LL;
  DWORD2(v90) = LODWORD(v5->width);
  *((FLOAT *)&v90 + 3) = height;
  v72 = v12;
  v71 = v11 - 1;
  CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 24));
  v14 = *((_DWORD *)a2 + 808);
  if ( v14 )
    v15 = *(float *)(*((_QWORD *)a2 + 406) + 4LL * (unsigned int)(v14 - 1));
  else
    v15 = *(float *)&FLOAT_1_0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - 1.0) & _xmm) >= 0.0000011920929
    || (v16 = *((_DWORD *)a2 + 70) <= 1u, v70 = 1, !v16) )
  {
    v70 = 0;
  }
  v74 = 0LL;
  if ( (_DWORD)v12 )
  {
    while ( 1 )
    {
      NamedInput = CBrushRenderingGraph::GetNamedInput(this, v8);
      if ( NamedInput )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(struct CBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)NamedInput + 288LL))(
                NamedInput,
                a2,
                &v69) )
          break;
      }
      if ( ++v8 >= (unsigned int)v12 )
        goto LABEL_9;
    }
LABEL_60:
    v22 = v75[0];
    goto LABEL_29;
  }
LABEL_9:
  v19 = CurrentVisual;
  if ( CVisual::HasSubtreeSurface(CurrentVisual) )
    v74 = *(struct EffectInput **)((*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v19 + 232LL))(v19) + 8);
  if ( *((_BYTE *)this + 196) )
  {
    if ( (**((_DWORD **)v19 + 28) & 0x200000) != 0
      && *((_QWORD *)CVisual::GetWindowBackgroundTreatmentInternal(v19) + 46) )
    {
      EffectInput::operator=(&v96);
    }
    else
    {
      v47 = v71;
      v69 = 0;
      DoesBackdropInputContributeToSubgraph = CBrushRenderingGraph::DoesBackdropInputContributeToSubgraph(
                                                this,
                                                v71,
                                                &v69);
      if ( v69
        && v70
        && CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(*(_QWORD *)(*((_QWORD *)this + 18)
                                                                                           + 8 * v47)
                                                                               + 8LL)) )
      {
        v10 = -2003304441;
        MilInstrumentationCheckHR_MaybeFailFast(v67, &dword_1802DCD60, 2u, -2003304441, 0x33Eu, 0LL);
        goto LABEL_60;
      }
      width = v5->width;
      v50 = v5->height;
      v91 = 0LL;
      v92 = width;
      v93 = v50;
      BackdropImageFromRenderTarget = CDrawingContext::GetBackdropImageFromRenderTarget(
                                        (struct IDeviceTarget **)a2,
                                        (float *)&v91,
                                        DoesBackdropInputContributeToSubgraph,
                                        (__int64)&v96);
      v10 = BackdropImageFromRenderTarget;
      if ( BackdropImageFromRenderTarget < 0 )
      {
        v68 = 843;
LABEL_78:
        MilInstrumentationCheckHR_MaybeFailFast(v52, &dword_1802DCD60, 2u, BackdropImageFromRenderTarget, v68, 0LL);
        goto LABEL_60;
      }
    }
  }
  if ( *((_BYTE *)this + 198) )
  {
    BackdropImageFromRenderTarget = CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
                                      (const struct IDeviceTarget **)a2,
                                      v5,
                                      (struct EffectInput *)&v103);
    v10 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
    {
      v68 = 850;
      goto LABEL_78;
    }
  }
  std::vector<EffectInput>::reserve(v75, v12);
  v20 = 0;
  if ( v72 )
  {
    v21 = 0LL;
    v91 = 0LL;
    do
    {
      std::vector<EffectInput>::emplace_back<std::nullptr_t>((__int64)v75);
      v22 = v75[0];
      v23 = v75[0] + v21;
      EffectInput::Reset((struct EffectInput *)v23);
      if ( CBrushRenderingGraph::IsBackdropInput(this, v20) || CBrushRenderingGraph::IsWindowBackdropInput(this, v20) )
      {
        EffectInput::operator=(v23);
      }
      else
      {
        v24 = v74;
        if ( !v74 || CBrushRenderingGraph::GetNamedInput(this, v20) )
        {
          *(_DWORD *)(v23 + 72) = v20;
        }
        else
        {
          if ( !v9 )
          {
            v60 = *((_QWORD *)v24 + 1);
            v73 = 0LL;
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v73, v60);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v73 + 8LL))(v73, 1LL);
            wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=<IRenderTargetBitmap,wil::err_returncode_policy,void>(
              (__int64 *)&v77,
              &v73);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v73);
            v9 = v77;
          }
          v61 = CDrawListBitmap::Initialize((CDrawListBitmap *)v23, v9, a2);
          v10 = v61;
          if ( v61 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v62, &dword_1802DCD60, 2u, v61, 0x376u, 0LL);
            goto LABEL_29;
          }
          *(_QWORD *)&v81 = 0LL;
          v63 = v74;
          *(_BYTE *)(v23 + 68) = 1;
          *(_BYTE *)(v23 + 124) = 1;
          v64 = (float)*((int *)v63 + 7);
          *((float *)&v81 + 2) = (float)*((int *)v63 + 6);
          *((float *)&v81 + 3) = v64;
          *(_OWORD *)(v23 + 108) = v81;
          DestToTexSpaceTransform = CTreeEffectLayer::GetDestToTexSpaceTransform((__int64)v63, v89, v20);
          *(_OWORD *)(v23 + 72) = *(_OWORD *)DestToTexSpaceTransform;
          *(_OWORD *)(v23 + 88) = *((_OWORD *)DestToTexSpaceTransform + 1);
          *(_DWORD *)(v23 + 104) = DestToTexSpaceTransform[8];
        }
      }
      ++v20;
      v21 = v91 + 128;
      v91 += 128LL;
    }
    while ( v20 < v72 );
    v5 = v82;
  }
  else
  {
    v22 = v75[0];
  }
  v25 = v5->height;
  v86 = 0LL;
  *(FLOAT *)&v84[1] = v25;
  v85 = 0LL;
  v84[0] = LODWORD(v5->width);
  CMILMatrix::Get2DScaleDimensionsWithPerspective(v87, &v85, (char *)&v85 + 4, &v90);
  v26 = v71;
  std::vector<EffectInput>::reserve(v78, v71);
  v27 = 0;
  if ( !v26 )
  {
LABEL_22:
    v111 = 0;
    v28 = 0;
    v110 = v26;
    v29 = v26;
    while ( v28 < *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 8 * v29) + 60LL) )
    {
      EffectStageInput = CBrushRenderingGraph::GetEffectStageInput(
                           (int)this,
                           (int)a2,
                           (int)v5,
                           v26,
                           v28,
                           (__int64)v75,
                           (__int64)v78,
                           &v112[128 * (unsigned __int64)v28]);
      v10 = EffectStageInput;
      if ( EffectStageInput < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v31, &dword_1802DCD60, 2u, EffectStageInput, 0x406u, 0LL);
        goto LABEL_29;
      }
      ++v111;
      v26 = v71;
      ++v28;
    }
    v32 = v83;
    updated = CBrushRenderingGraph::UpdateDrawListCache(this, a2, v5, v94[0], (struct EffectStage *)&v110, v83);
    v10 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v18, &dword_1802DCD60, 2u, updated, 0x40Fu, 0LL);
    }
    else if ( *((_BYTE *)this + 196) )
    {
      v57 = v5->height;
      *(_QWORD *)&v90 = 0LL;
      *(_OWORD *)v94 = 0LL;
      DWORD2(v90) = LODWORD(v5->width);
      *((FLOAT *)&v90 + 3) = v57;
      CDrawingContext::CalcWorldSpaceClippedBounds((__int64)a2, (__int64)&v90, (__int64)v94);
      v58 = *(_OWORD *)v94;
      v59 = *((_QWORD *)CurrentVisual + 2);
      v90 = *(_OWORD *)v94;
      v18 = *(CBrushRenderingGraph **)(v59 + 456);
      *((_QWORD *)v32 + 10) = v18;
      *((_OWORD *)v32 + 4) = v58;
    }
    goto LABEL_29;
  }
  v38 = 0LL;
  v39 = 0LL;
  v73 = 0LL;
  v91 = 0LL;
  while ( 1 )
  {
    std::vector<EffectInput>::emplace_back<std::nullptr_t>((__int64)v78);
    v40 = (struct EffectInput *)(v78[0] + v39);
    v74 = v40;
    EffectInput::Reset(v40);
    *((_BYTE *)v40 + 68) = 1;
    v41 = *(_QWORD *)(v38 + *((_QWORD *)this + 18));
    v111 = 0;
    v110 = v27;
    if ( !CRenderingTechnique::IsExternallyImplementedSubgraph((CRenderingTechnique *)v41, &v95) )
      break;
    if ( CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(v41 + 8)) )
      goto LABEL_59;
    v42 = CBrushRenderingGraph::GetEffectStageInput(
            (int)this,
            (int)a2,
            (int)v5,
            v27,
            0,
            (__int64)v75,
            (__int64)v78,
            v112);
    v10 = v42;
    if ( v42 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v43, &dword_1802DCD60, 2u, v42, 0x3B3u, 0LL);
      goto LABEL_29;
    }
    v111 = 1;
    if ( v112[69] )
    {
LABEL_59:
      v46 = v73;
      EffectInput::operator=(v74);
      goto LABEL_44;
    }
    v44 = CBrushRenderingGraph::RenderExternalEffect(
            this,
            a2,
            &v95,
            (const struct EffectStage *)&v110,
            (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v84,
            v74);
    v10 = v44;
    if ( v44 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v45, &dword_1802DCD60, 2u, v44, 0x3BCu, 0LL);
      goto LABEL_29;
    }
LABEL_43:
    v46 = v73;
LABEL_44:
    CBrushRenderingGraph::CleanupEffectStage(v45, (struct EffectStage *)&v110);
    v38 = v46 + 8;
    v39 = v91 + 128;
    v73 = v38;
    ++v27;
    v91 += 128LL;
    if ( v27 >= v71 )
    {
      v26 = v71;
      goto LABEL_22;
    }
  }
  v53 = v111;
  v54 = 0LL;
  v72 = 0;
  if ( !*(_DWORD *)(v41 + 60) )
  {
LABEL_55:
    if ( v112[125]
      && v53 == 1
      && v112[68]
      && CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(v41 + 8)) )
    {
      goto LABEL_59;
    }
    v66 = CBrushRenderingGraph::RenderInternalEffect(this, a2, (struct EffectStage *)&v110, (__m128 *)v84, v40);
    v10 = v66;
    if ( v66 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v45, &dword_1802DCD60, 2u, v66, 0x3E3u, 0LL);
      goto LABEL_29;
    }
    goto LABEL_43;
  }
  while ( 1 )
  {
    v55 = CBrushRenderingGraph::GetEffectStageInput(
            (int)this,
            (int)a2,
            (int)v5,
            v27,
            v53,
            (__int64)v75,
            (__int64)v78,
            &v112[128 * v54]);
    v10 = v55;
    if ( v55 < 0 )
      break;
    v53 = v111 + 1;
    v54 = v72 + 1;
    ++v111;
    v72 = v54;
    if ( (unsigned int)v54 >= *(_DWORD *)(v41 + 60) )
    {
      v40 = v74;
      goto LABEL_55;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v56, &dword_1802DCD60, 2u, v55, 0x3D0u, 0LL);
LABEL_29:
  CBrushRenderingGraph::CleanupEffectStage(v18, (struct EffectStage *)&v110);
  if ( v22 )
  {
    std::_Destroy_range<std::allocator<EffectInput>>(v22, v75[1]);
    std::_Deallocate<16,0>(v22, (v76 - v22) & 0xFFFFFFFFFFFFFF80uLL);
  }
  v34 = v78[0];
  if ( v78[0] )
  {
    std::_Destroy_range<std::allocator<EffectInput>>(v78[0], v78[1]);
    std::_Deallocate<16,0>(v34, (v79 - v34) & 0xFFFFFFFFFFFFFF80uLL);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v103 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v103);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v96 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v96);
  v35 = 4LL;
  v36 = (EffectInput *)&v113;
  do
  {
    v36 = (EffectInput *)((char *)v36 - 128);
    EffectInput::~EffectInput(v36);
    --v35;
  }
  while ( v35 );
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v77);
  return v10;
}
