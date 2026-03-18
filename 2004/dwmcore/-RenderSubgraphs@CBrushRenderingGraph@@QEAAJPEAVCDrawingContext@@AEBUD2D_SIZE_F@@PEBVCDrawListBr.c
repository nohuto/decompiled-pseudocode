/*
 * XREFs of ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18004A72C
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800087A0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180049EB0 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800058CC (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x180007D7C (-GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA-AVMatrix3x3@@I@Z.c)
 *     ??$?4VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x18001D5E0 (--$-4VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapRealization@@Uerr_r.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18001DF44 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAUEffectInput@@@Z @ 0x18003AA30 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18003B0CC (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z @ 0x18003BF38 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003E144 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x18004718C (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ?CheckIfDisposed@CBrushRenderingGraph@@AEBAXXZ @ 0x1800478FC (-CheckIfDisposed@CBrushRenderingGraph@@AEBAXXZ.c)
 *     ??0EffectStage@@QEAA@XZ @ 0x18004791C (--0EffectStage@@QEAA@XZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180047970 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18004833C (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?IsWindowBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x18004873C (-IsWindowBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z.c)
 *     ?IsBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x1800488C4 (-IsBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z.c)
 *     ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x180048904 (-GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z.c)
 *     ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x180048E58 (-reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z.c)
 *     ?CleanupEffectStage@CBrushRenderingGraph@@AEAAXPEAUEffectStage@@@Z @ 0x180048E90 (-CleanupEffectStage@CBrushRenderingGraph@@AEAAXPEAUEffectStage@@@Z.c)
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x180049034 (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$vec.c)
 *     ??$emplace_back@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAAEAUEffectInput@@$$QEA$$T@Z @ 0x1800490FC (--$emplace_back@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAAEAUEffect.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180049A88 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??1EffectInput@@QEAA@XZ @ 0x18004C400 (--1EffectInput@@QEAA@XZ.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x18004C428 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18007FC60 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z @ 0x1800B8128 (-IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800BDA00 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C1710 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UEffectInput@@@std@@@std@@YAXPEAUEffectInput@@0AEAV?$allocator@UEffectInput@@@0@@Z @ 0x1800C4CD0 (--$_Destroy_range@V-$allocator@UEffectInput@@@std@@@std@@YAXPEAUEffectInput@@0AEAV-$allocator@UE.c)
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x1800C63CC (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z.c)
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x1800C64AC (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 *     ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x1800CEDE4 (-HasSubtreeSurface@CVisual@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800E5E34 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
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
  unsigned __int64 v12; // r12
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
  __int128 *v47; // rdx
  __int64 v48; // r14
  char DoesBackdropInputContributeToSubgraph; // di
  FLOAT width; // xmm0_4
  FLOAT v51; // xmm1_4
  int BackdropImageFromRenderTarget; // eax
  __int64 v53; // rcx
  unsigned int v54; // ecx
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rcx
  unsigned __int64 v59; // rdx
  __int64 v60; // rdx
  FLOAT v61; // xmm1_4
  __int128 v62; // xmm0
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rdx
  int v66; // eax
  __int64 v67; // rcx
  struct EffectInput *v68; // rcx
  float v69; // xmm1_4
  _DWORD *DestToTexSpaceTransform; // rax
  int v71; // eax
  __int64 v72; // rcx
  unsigned int v73; // [rsp+20h] [rbp-E0h]
  bool v74; // [rsp+40h] [rbp-C0h] BYREF
  char v75; // [rsp+41h] [rbp-BFh]
  unsigned int v76; // [rsp+44h] [rbp-BCh]
  unsigned int v77; // [rsp+48h] [rbp-B8h]
  __int64 v78; // [rsp+50h] [rbp-B0h] BYREF
  struct EffectInput *v79; // [rsp+58h] [rbp-A8h]
  __int64 v80[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v81; // [rsp+70h] [rbp-90h]
  struct IBitmapRealization *v82; // [rsp+78h] [rbp-88h] BYREF
  __int64 v83[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v84; // [rsp+90h] [rbp-70h]
  CVisual *CurrentVisual; // [rsp+98h] [rbp-68h]
  __int128 v86; // [rsp+A0h] [rbp-60h]
  struct D2D_SIZE_F *v87; // [rsp+B0h] [rbp-50h]
  struct CDrawListCache *v88; // [rsp+B8h] [rbp-48h]
  _DWORD v89[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v90; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v91; // [rsp+D8h] [rbp-28h]
  _BYTE v92[64]; // [rsp+E0h] [rbp-20h] BYREF
  int v93; // [rsp+120h] [rbp+20h]
  int v94[10]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v95; // [rsp+158h] [rbp+58h] BYREF
  __int64 v96; // [rsp+168h] [rbp+68h] BYREF
  FLOAT v97; // [rsp+170h] [rbp+70h]
  FLOAT v98; // [rsp+174h] [rbp+74h]
  struct CDrawListBrush *v99[2]; // [rsp+178h] [rbp+78h] BYREF
  struct _GUID v100; // [rsp+188h] [rbp+88h] BYREF
  __int128 v101; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v102; // [rsp+1B0h] [rbp+B0h]
  int v103; // [rsp+1B8h] [rbp+B8h]
  __int64 v104; // [rsp+1BCh] [rbp+BCh]
  int v105; // [rsp+1C4h] [rbp+C4h]
  char v106; // [rsp+1C8h] [rbp+C8h]
  __int128 v107; // [rsp+1E8h] [rbp+E8h]
  __int128 v108; // [rsp+220h] [rbp+120h] BYREF
  __int64 v109; // [rsp+230h] [rbp+130h]
  int v110; // [rsp+238h] [rbp+138h]
  __int64 v111; // [rsp+23Ch] [rbp+13Ch]
  int v112; // [rsp+244h] [rbp+144h]
  char v113; // [rsp+248h] [rbp+148h]
  __int128 v114; // [rsp+268h] [rbp+168h]
  unsigned int v115; // [rsp+2A0h] [rbp+1A0h] BYREF
  unsigned int v116; // [rsp+2A4h] [rbp+1A4h]
  _BYTE v117[512]; // [rsp+2A8h] [rbp+1A8h] BYREF
  char v118; // [rsp+4A8h] [rbp+3A8h] BYREF

  v5 = a3;
  v88 = a5;
  v99[0] = a4;
  v87 = a3;
  CBrushRenderingGraph::CheckIfDisposed(this);
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  v82 = 0LL;
  EffectStage::EffectStage((EffectStage *)&v115);
  v103 = 0;
  v104 = 0LL;
  v105 = 0;
  v101 = 0LL;
  v100 = 0LL;
  v102 = 0LL;
  v107 = 0LL;
  v106 = 0;
  EffectInput::Reset((struct EffectInput *)&v101);
  v110 = 0;
  v111 = 0LL;
  v108 = 0LL;
  v112 = 0;
  v109 = 0LL;
  v114 = 0LL;
  v113 = 0;
  EffectInput::Reset((struct EffectInput *)&v108);
  v93 = 0;
  CDrawingContext::GetWorldTransform(a2, (struct CMILMatrix *)v92);
  v11 = *((_DWORD *)this + 42);
  v12 = *((unsigned int *)this + 10);
  *(_QWORD *)&v95 = 0LL;
  *(_OWORD *)v83 = 0LL;
  v84 = 0LL;
  height = v5->height;
  *(_OWORD *)v80 = 0LL;
  v81 = 0LL;
  DWORD2(v95) = LODWORD(v5->width);
  *((FLOAT *)&v95 + 3) = height;
  v77 = v12;
  v76 = v11 - 1;
  CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 24));
  v14 = *((_DWORD *)a2 + 808);
  if ( v14 )
    v15 = *(float *)(*((_QWORD *)a2 + 406) + 4LL * (unsigned int)(v14 - 1));
  else
    v15 = *(float *)&FLOAT_1_0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - 1.0) & _xmm) >= 0.0000011920929
    || (v16 = *((_DWORD *)a2 + 70) <= 1u, v75 = 1, !v16) )
  {
    v75 = 0;
  }
  v79 = 0LL;
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
                &v74) )
          break;
      }
      if ( ++v8 >= (unsigned int)v12 )
        goto LABEL_9;
    }
LABEL_63:
    v22 = v80[0];
    goto LABEL_29;
  }
LABEL_9:
  v19 = CurrentVisual;
  if ( CVisual::HasSubtreeSurface(CurrentVisual) )
    v79 = *(struct EffectInput **)((*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v19 + 240LL))(v19) + 8);
  if ( *((_BYTE *)this + 196) )
  {
    if ( (**((_DWORD **)v19 + 28) & 0x200000) != 0
      && (v64 = *((_QWORD *)CVisual::GetWindowBackgroundTreatmentInternal(v19) + 46)) != 0 )
    {
      EffectInput::operator=((__int64)&v101, v64);
    }
    else
    {
      v48 = v76;
      v74 = 0;
      DoesBackdropInputContributeToSubgraph = CBrushRenderingGraph::DoesBackdropInputContributeToSubgraph(
                                                this,
                                                v76,
                                                &v74);
      if ( v74
        && v75
        && CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(*(_QWORD *)(*((_QWORD *)this + 18)
                                                                                           + 8 * v48)
                                                                               + 8LL)) )
      {
        v10 = -2003304441;
        MilInstrumentationCheckHR_MaybeFailFast(v72, &dword_1802D9DE0, 2u, -2003304441, 0x33Eu, 0LL);
        goto LABEL_63;
      }
      width = v5->width;
      v51 = v5->height;
      v96 = 0LL;
      v97 = width;
      v98 = v51;
      BackdropImageFromRenderTarget = CDrawingContext::GetBackdropImageFromRenderTarget(
                                        (struct IDeviceTarget **)a2,
                                        (float *)&v96,
                                        DoesBackdropInputContributeToSubgraph,
                                        (__int64)&v101);
      v10 = BackdropImageFromRenderTarget;
      if ( BackdropImageFromRenderTarget < 0 )
      {
        v73 = 843;
LABEL_82:
        MilInstrumentationCheckHR_MaybeFailFast(v53, &dword_1802D9DE0, 2u, BackdropImageFromRenderTarget, v73, 0LL);
        goto LABEL_63;
      }
    }
  }
  if ( *((_BYTE *)this + 198) )
  {
    BackdropImageFromRenderTarget = CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
                                      (const struct IDeviceTarget **)a2,
                                      v5,
                                      (struct EffectInput *)&v108);
    v10 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
    {
      v73 = 850;
      goto LABEL_82;
    }
  }
  std::vector<EffectInput>::reserve((__int64)v80, v12);
  v20 = 0;
  if ( v77 )
  {
    v21 = 0LL;
    v96 = 0LL;
    while ( 1 )
    {
      std::vector<EffectInput>::emplace_back<std::nullptr_t>((__int64)v80);
      v22 = v80[0];
      v23 = v80[0] + v21;
      EffectInput::Reset((struct EffectInput *)v23);
      if ( CBrushRenderingGraph::IsBackdropInput(this, v20) )
      {
        v47 = &v101;
      }
      else
      {
        if ( !CBrushRenderingGraph::IsWindowBackdropInput(this, v20) )
        {
          v24 = v79;
          if ( !v79 || CBrushRenderingGraph::GetNamedInput(this, v20) )
          {
            *(_DWORD *)(v23 + 72) = v20;
          }
          else
          {
            if ( !v9 )
            {
              v65 = *((_QWORD *)v24 + 1);
              v78 = 0LL;
              wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v78, v65);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v78 + 8LL))(v78, 1LL);
              wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=<IRenderTargetBitmap,wil::err_returncode_policy,void>(
                (__int64 *)&v82,
                &v78);
              wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v78);
              v9 = v82;
            }
            v66 = CDrawListBitmap::Initialize((CDrawListBitmap *)v23, v9, a2);
            v10 = v66;
            if ( v66 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v67, &dword_1802D9DE0, 2u, v66, 0x376u, 0LL);
              goto LABEL_29;
            }
            *(_QWORD *)&v86 = 0LL;
            v68 = v79;
            *(_BYTE *)(v23 + 68) = 1;
            *(_BYTE *)(v23 + 124) = 1;
            v69 = (float)*((int *)v68 + 7);
            *((float *)&v86 + 2) = (float)*((int *)v68 + 6);
            *((float *)&v86 + 3) = v69;
            *(_OWORD *)(v23 + 108) = v86;
            DestToTexSpaceTransform = CTreeEffectLayer::GetDestToTexSpaceTransform((__int64)v68, v94, v20);
            *(_OWORD *)(v23 + 72) = *(_OWORD *)DestToTexSpaceTransform;
            *(_OWORD *)(v23 + 88) = *((_OWORD *)DestToTexSpaceTransform + 1);
            *(_DWORD *)(v23 + 104) = DestToTexSpaceTransform[8];
          }
          goto LABEL_19;
        }
        v47 = &v108;
      }
      EffectInput::operator=(v23, (__int64)v47);
LABEL_19:
      ++v20;
      v21 = v96 + 128;
      v96 += 128LL;
      if ( v20 >= v77 )
      {
        v5 = v87;
        goto LABEL_21;
      }
    }
  }
  v22 = v80[0];
LABEL_21:
  v25 = v5->height;
  v91 = 0LL;
  *(FLOAT *)&v89[1] = v25;
  v90 = 0LL;
  v89[0] = LODWORD(v5->width);
  CMILMatrix::Get2DScaleDimensionsWithPerspective(v92, &v90, (char *)&v90 + 4, &v95);
  v26 = v76;
  std::vector<EffectInput>::reserve((__int64)v83, v76);
  v27 = 0;
  if ( !v26 )
  {
LABEL_22:
    v116 = 0;
    v28 = 0;
    v115 = v26;
    v29 = v26;
    while ( v28 < *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 8 * v29) + 60LL) )
    {
      EffectStageInput = CBrushRenderingGraph::GetEffectStageInput(
                           this,
                           a2,
                           v5,
                           v26,
                           v28,
                           v80,
                           v83,
                           (struct EffectInput *)&v117[128 * (unsigned __int64)v28]);
      v10 = EffectStageInput;
      if ( EffectStageInput < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v31, &dword_1802D9DE0, 2u, EffectStageInput, 0x406u, 0LL);
        goto LABEL_29;
      }
      ++v116;
      v26 = v76;
      ++v28;
    }
    v32 = v88;
    updated = CBrushRenderingGraph::UpdateDrawListCache(this, a2, v5, v99[0], (struct EffectStage *)&v115, v88);
    v10 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v18, &dword_1802D9DE0, 2u, updated, 0x40Fu, 0LL);
    }
    else if ( *((_BYTE *)this + 196) )
    {
      v61 = v5->height;
      *(_QWORD *)&v95 = 0LL;
      *(_OWORD *)v99 = 0LL;
      DWORD2(v95) = LODWORD(v5->width);
      *((FLOAT *)&v95 + 3) = v61;
      CDrawingContext::CalcWorldSpaceClippedBounds(a2, &v95, v99);
      v62 = *(_OWORD *)v99;
      v63 = *((_QWORD *)CurrentVisual + 2);
      v95 = *(_OWORD *)v99;
      v18 = *(CBrushRenderingGraph **)(v63 + 456);
      *((_QWORD *)v32 + 10) = v18;
      *((_OWORD *)v32 + 4) = v62;
    }
    goto LABEL_29;
  }
  v38 = 0LL;
  v39 = 0LL;
  v78 = 0LL;
  v96 = 0LL;
  while ( 1 )
  {
    std::vector<EffectInput>::emplace_back<std::nullptr_t>((__int64)v83);
    v40 = (struct EffectInput *)(v83[0] + v39);
    v79 = v40;
    EffectInput::Reset(v40);
    *((_BYTE *)v40 + 68) = 1;
    v41 = *(_QWORD *)(v38 + *((_QWORD *)this + 18));
    v116 = 0;
    v115 = v27;
    if ( !CRenderingTechnique::IsExternallyImplementedSubgraph((CRenderingTechnique *)v41, &v100) )
      break;
    if ( CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(v41 + 8)) )
      goto LABEL_60;
    v42 = CBrushRenderingGraph::GetEffectStageInput(this, a2, v5, v27, 0, v80, v83, (struct EffectInput *)v117);
    v10 = v42;
    if ( v42 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v43, &dword_1802D9DE0, 2u, v42, 0x3B3u, 0LL);
      goto LABEL_29;
    }
    v116 = 1;
    if ( v117[69] )
    {
LABEL_60:
      v46 = v78;
      v58 = *(_QWORD *)(v78 + *((_QWORD *)this + 18));
      v59 = (unsigned __int64)*(unsigned int *)(v58 + 68) << 7;
      if ( *(_BYTE *)(v58 + 72) )
        v60 = v83[0] + v59;
      else
        v60 = v22 + v59;
      EffectInput::operator=((__int64)v79, v60);
      goto LABEL_44;
    }
    v44 = CBrushRenderingGraph::RenderExternalEffect(
            this,
            a2,
            &v100,
            (const struct EffectStage *)&v115,
            (__m128 *)v89,
            v79);
    v10 = v44;
    if ( v44 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v45, &dword_1802D9DE0, 2u, v44, 0x3BCu, 0LL);
      goto LABEL_29;
    }
LABEL_43:
    v46 = v78;
LABEL_44:
    CBrushRenderingGraph::CleanupEffectStage(v45, (struct EffectStage *)&v115);
    v38 = v46 + 8;
    v39 = v96 + 128;
    v78 = v38;
    ++v27;
    v96 += 128LL;
    if ( v27 >= v76 )
    {
      v26 = v76;
      goto LABEL_22;
    }
  }
  v54 = v116;
  v55 = 0LL;
  v77 = 0;
  if ( !*(_DWORD *)(v41 + 60) )
  {
LABEL_56:
    if ( v117[125]
      && v54 == 1
      && v117[68]
      && CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(v41 + 8)) )
    {
      goto LABEL_60;
    }
    v71 = CBrushRenderingGraph::RenderInternalEffect(this, a2, (struct EffectStage *)&v115, (__m128 *)v89, v40);
    v10 = v71;
    if ( v71 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v45, &dword_1802D9DE0, 2u, v71, 0x3E3u, 0LL);
      goto LABEL_29;
    }
    goto LABEL_43;
  }
  while ( 1 )
  {
    v56 = CBrushRenderingGraph::GetEffectStageInput(
            this,
            a2,
            v5,
            v27,
            v54,
            v80,
            v83,
            (struct EffectInput *)&v117[128 * v55]);
    v10 = v56;
    if ( v56 < 0 )
      break;
    v54 = v116 + 1;
    v55 = v77 + 1;
    ++v116;
    v77 = v55;
    if ( (unsigned int)v55 >= *(_DWORD *)(v41 + 60) )
    {
      v40 = v79;
      goto LABEL_56;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v57, &dword_1802D9DE0, 2u, v56, 0x3D0u, 0LL);
LABEL_29:
  CBrushRenderingGraph::CleanupEffectStage(v18, (struct EffectStage *)&v115);
  if ( v22 )
  {
    std::_Destroy_range<std::allocator<EffectInput>>(v22, v80[1]);
    std::_Deallocate<16,0>(v22, (v81 - v22) & 0xFFFFFFFFFFFFFF80uLL);
  }
  v34 = v83[0];
  if ( v83[0] )
  {
    std::_Destroy_range<std::allocator<EffectInput>>(v83[0], v83[1]);
    std::_Deallocate<16,0>(v34, (v84 - v34) & 0xFFFFFFFFFFFFFF80uLL);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v108 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v108);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v101 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v101);
  v35 = 4LL;
  v36 = (EffectInput *)&v118;
  do
  {
    v36 = (EffectInput *)((char *)v36 - 128);
    EffectInput::~EffectInput(v36);
    --v35;
  }
  while ( v35 );
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v82);
  return v10;
}
