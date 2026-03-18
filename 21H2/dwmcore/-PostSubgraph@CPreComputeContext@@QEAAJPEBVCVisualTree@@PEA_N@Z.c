/*
 * XREFs of ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090300
 * Callers:
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x18008FDF0 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@M$01$01$09@@QEAA_NPEAM@Z @ 0x180004C70 (-Pop@-$CWatermarkStack@M$01$01$09@@QEAA_NPEAM@Z.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x18000A124 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z @ 0x180012D84 (-GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x180012DCC (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x180014384 (-Pop@CLightStack@@QEAAJXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180045E68 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x18004C0DC (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004D434 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x180089BBC (-GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x18008DC78 (-EndPreCompute@CVisualTree@@QEAAXJ@Z.c)
 *     ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x18008DD94 (-CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ.c)
 *     ?clear_region@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18008E1F0 (-clear_region@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeContext.c)
 *     ?AddLocalBoundsToSubTreesDirtyRegion@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18008E330 (-AddLocalBoundsToSubTreesDirtyRegion@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x180092FA0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x1800B73B8 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualTree@@_N@Z.c)
 *     ?UnionUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800CA048 (-UnionUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x1800D49D8 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualT.c)
 *     ??0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z @ 0x1800D4F10 (--0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z.c)
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x1800D4F5C (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x1800D59F0 (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?GetTopLevelWindow@CVisual@@QEBA_KXZ @ 0x1800F4254 (-GetTopLevelWindow@CVisual@@QEBA_KXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     IsNotifyInputSinkParentedPresent @ 0x180101E5C (IsNotifyInputSinkParentedPresent.c)
 *     IsNotifyInputSinkTransformChangedPresent @ 0x180101EB0 (IsNotifyInputSinkTransformChangedPresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x18019418C (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilDepthMode@@@Z @ 0x1801941A4 (-Pop@-$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilDepthMode@@@Z.c)
 *     ?pop_back@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180194288 (-pop_back@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeContext@CPr.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x1801B4D10 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x1801B506C (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801B50FC (-PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801B51BC (-PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z @ 0x1801B67FC (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z.c)
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x1801DE910 (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 */

__int64 __fastcall CPreComputeContext::PostSubgraph(CPreComputeContext *this, const struct CVisualTree *a2, bool *a3)
{
  struct CVisual *v3; // rdi
  ULONGLONG v4; // r9
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v8; // rax
  const struct CVisualTree *v9; // r13
  char v11; // al
  ULONGLONG v12; // r15
  _DWORD *v13; // r9
  __int64 v14; // r8
  char v15; // al
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // r14
  __int64 v20; // r15
  char v21; // al
  const struct CVisualTree *v22; // r13
  struct _LIST_ENTRY *v23; // rdi
  _DWORD *v24; // r8
  __int64 v25; // rbx
  __int64 v26; // rdi
  const struct CVisual *v27; // r14
  _DWORD *v28; // r8
  CBspPreComputeHelper *v29; // r15
  CVisualTree *v30; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  _BYTE *v34; // rdx
  __int64 v35; // rcx
  _QWORD **v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rdx
  __int64 v39; // rcx
  _DWORD *v40; // r8
  unsigned __int8 v41; // dl
  __int64 v42; // rcx
  __int64 v43; // rax
  char v44; // r10
  unsigned int v45; // edx
  int v46; // eax
  __int64 v47; // rcx
  unsigned int v48; // edi
  _DWORD *v49; // r8
  bool v50; // r14
  int v51; // eax
  unsigned int v52; // ebx
  int v53; // eax
  __int64 v54; // rax
  _BYTE *v55; // rdx
  __int64 v56; // rcx
  _QWORD *v57; // rax
  _QWORD *v58; // rbx
  int v59; // eax
  __int64 v60; // rax
  _BYTE *v61; // rdx
  __int64 v62; // rcx
  __int64 *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int128 v67; // xmm0
  __int64 v68; // rax
  unsigned int v69; // edx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  _BYTE *v73; // rdx
  __int64 v74; // rcx
  __int64 *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  _BYTE *v79; // rdx
  __int64 v80; // rcx
  __int64 *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  int v84; // eax
  unsigned int v85; // ebx
  int v86; // ecx
  int v87; // eax
  unsigned int v88; // ebx
  struct CEffect *EffectInternal; // rbx
  int v90; // eax
  unsigned int v91; // ebx
  int v92; // eax
  unsigned int v93; // ebx
  struct _EVENT_DATA_DESCRIPTOR *v94; // r14
  unsigned int Ptr; // r13d
  unsigned int i; // r15d
  __int64 v97; // rcx
  int v98; // eax
  _QWORD *v99; // rdx
  int v100; // eax
  unsigned int v101; // edi
  __int64 v102; // rcx
  _BYTE *v103; // rdx
  unsigned int v104; // eax
  _QWORD **v105; // rax
  const struct CVisual *TransformParent; // rax
  __int64 v107; // rbx
  __int64 v108; // r15
  _BYTE *LightAtNoRef; // rax
  int v110; // eax
  __int64 v111; // rcx
  unsigned int v112; // edi
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  CVisualTreePath *v115; // rbx
  DwmDbg::DbgString *v116; // rax
  _BYTE *v117; // rcx
  __int64 v118; // rax
  int v119; // eax
  unsigned int v120; // ebx
  bool HasEffects; // r13
  int v122; // eax
  __int64 v123; // rcx
  int v124; // r15d
  __int64 v125; // r8
  __int64 v126; // r8
  struct CBspNode *v127; // rdx
  int v128; // eax
  __int64 v129; // rcx
  __int64 v130; // r8
  int v131; // eax
  __int64 v132; // rcx
  bool v133; // [rsp+30h] [rbp-E8h]
  struct _LIST_ENTRY *v134; // [rsp+38h] [rbp-E0h]
  CBspPreComputeHelper *v135; // [rsp+40h] [rbp-D8h]
  _BYTE v136[72]; // [rsp+50h] [rbp-C8h] BYREF
  struct CVisualTree *v137[2]; // [rsp+A0h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v138; // [rsp+B0h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v139; // [rsp+C0h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  v3 = 0LL;
  v4 = *((_QWORD *)this + 234);
  v5 = *((_QWORD *)this + 1) - 448LL;
  v6 = *((_QWORD *)this + 233);
  v8 = *(_QWORD *)a2;
  v9 = a2;
  v135 = (CBspPreComputeHelper *)v5;
  v137[0] = a2;
  v139.Ptr = v4;
  v134 = 0LL;
  v133 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v8 + 184))(a2) )
  {
    v134 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v9 + 184LL))(v9) )
    {
      v134 = (struct _LIST_ENTRY *)(v6 + 336);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v6);
      if ( TreeDataListHead )
      {
        Flink = TreeDataListHead->Flink;
        if ( TreeDataListHead->Flink != TreeDataListHead )
        {
          while ( (const struct CVisualTree *)Flink[2].Flink != v9 )
          {
            Flink = Flink->Flink;
            if ( Flink == TreeDataListHead )
              goto LABEL_4;
          }
          v134 = Flink - 24;
        }
      }
    }
  }
LABEL_4:
  *a3 = 1;
  if ( *(_BYTE *)(v5 + 445) )
  {
    detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::pop_back(this);
    return 0LL;
  }
  if ( (unsigned int)((__int64)(*(_QWORD *)(v6 + 288) - *(_QWORD *)(v6 + 280)) >> 4)
    || (unsigned int)((__int64)(*(_QWORD *)(v6 + 312) - *(_QWORD *)(v6 + 304)) >> 4) )
  {
    v138.Ptr = 0x100000000LL;
    v94 = &v138;
    do
    {
      Ptr = v94->Ptr;
      for ( i = 0; i < (unsigned int)CVisual::GetLightsCount((_QWORD *)v6, Ptr); ++i )
      {
        LightAtNoRef = (_BYTE *)CVisual::GetLightAtNoRef(v97, i, Ptr);
        if ( LightAtNoRef[170] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, struct CVisualTree *, __int64))(*(_QWORD *)LightAtNoRef
                                                                                         + 240LL))(
                 LightAtNoRef,
                 v137[0],
                 v6) )
          {
            v110 = CLightStack::Pop((CPreComputeContext *)((char *)this + 1496));
            v112 = v110;
            if ( v110 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v111, 0LL, 0LL, v110, 0x69u);
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x483,
                (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                (const char *)v112);
              return v112;
            }
          }
        }
      }
      v94 = (struct _EVENT_DATA_DESCRIPTOR *)((char *)v94 + 4);
      v3 = 0LL;
    }
    while ( v94 != (struct _EVENT_DATA_DESCRIPTOR *)&v138.Size );
    v9 = v137[0];
  }
  v11 = *(_BYTE *)(v6 + 96);
  if ( (v11 & 1) != 0 )
  {
    v49 = *(_DWORD **)(v6 + 232);
    v50 = 0;
    v133 = 1;
    if ( (*v49 & 0x1000000) == 0 )
    {
LABEL_77:
      v51 = CVisual::ConvertInnerToOuterBounds((CVisual *)v6, v9, v3, v50);
      v52 = v51;
      if ( v51 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4A2,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
          (const char *)(unsigned int)v51);
        return v52;
      }
      *(_BYTE *)(v6 + 96) &= ~1u;
      v11 = *(_BYTE *)(v6 + 96);
      v3 = 0LL;
      goto LABEL_8;
    }
    v102 = (unsigned int)v49[1];
    v103 = v49 + 2;
    v104 = 0;
    if ( (_DWORD)v102 )
    {
      while ( *v103 != 8 )
      {
        ++v104;
        ++v103;
        if ( v104 >= (unsigned int)v102 )
          goto LABEL_186;
      }
    }
    else
    {
LABEL_186:
      if ( v104 >= (unsigned int)v102 )
      {
        v105 = 0LL;
        goto LABEL_166;
      }
    }
    v105 = (_QWORD **)((char *)v49 + v102 + 8LL * v104 - (((_BYTE)v102 + 15) & 7) + 15);
LABEL_166:
    if ( *v105 && (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v105 + 184LL))(**v105) )
    {
      TransformParent = CVisual::GetTransformParent((CVisual *)v6, v9, 0LL);
      v107 = *(_QWORD *)this;
      v3 = TransformParent;
      v108 = *((_QWORD *)this + 1);
      while ( v107 != v108 )
      {
        if ( v3 != CVisual::GetTransformParent((CVisual *)v6, *(const struct CVisualTree **)(v107 + 432), 0LL) )
        {
          v50 = 1;
          goto LABEL_77;
        }
        v107 += 448LL;
      }
    }
    goto LABEL_77;
  }
LABEL_8:
  if ( (v11 & 0x10) == 0 )
    goto LABEL_9;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 256LL))(v6) )
    *(_DWORD *)(v6 + 96) |= 0x100u;
  if ( (**(_DWORD **)(v6 + 232) & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal((CVisual *)v6);
    if ( !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
            EffectInternal,
            186LL) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
              EffectInternal,
              56LL) )
        goto LABEL_63;
      EffectInternal = (struct CEffect *)*((_QWORD *)EffectInternal + 11);
    }
    if ( EffectInternal )
      *(_DWORD *)(v6 + 96) |= 0x200u;
  }
LABEL_63:
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 328LL))(v6) )
    *(_DWORD *)(v6 + 96) |= 0x400u;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 336LL))(v6) )
    *(_DWORD *)(v6 + 96) |= 0x800u;
  v39 = *(_QWORD *)(v6 + 256);
  if ( v39
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 56LL))(v39, 15LL)
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 256) + 304LL))(*(_QWORD *)(v6 + 256)) )
  {
    *(_DWORD *)(v6 + 96) |= 0x1000u;
  }
  v40 = *(_DWORD **)(v6 + 232);
  if ( (*v40 & 0x800000) == 0 )
    goto LABEL_69;
  v78 = (unsigned int)v40[1];
  v79 = v40 + 2;
  v80 = 0LL;
  if ( (_DWORD)v78 )
  {
    while ( *v79 != 9 )
    {
      v80 = (unsigned int)(v80 + 1);
      ++v79;
      if ( (unsigned int)v80 >= (unsigned int)v78 )
        goto LABEL_177;
    }
  }
  else
  {
LABEL_177:
    if ( (unsigned int)v80 >= (unsigned int)v78 )
    {
      v81 = 0LL;
      goto LABEL_124;
    }
  }
  v81 = (__int64 *)((char *)v40 + 8 * v80 - (((_BYTE)v78 + 15) & 7) + v78 + 15);
LABEL_124:
  v82 = *v81;
  if ( v82 )
  {
    v83 = *(_QWORD *)(v82 + 104);
    if ( v83 )
    {
      if ( *(_QWORD *)(v83 + 64) )
        *(_DWORD *)(v6 + 96) |= 0x2000u;
    }
  }
LABEL_69:
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 288LL))(v6) )
    *(_DWORD *)(v6 + 96) |= 0x8000u;
LABEL_9:
  v12 = v139.Ptr;
  if ( v139.Ptr )
  {
    v13 = *(_DWORD **)(v6 + 232);
    v14 = 0LL;
    if ( (*v13 & 0x800000) == 0 )
    {
LABEL_11:
      v15 = *(_BYTE *)(v6 + 102);
      v16 = v14 != 0 ? 0x40 : 0;
      if ( (v15 & 0x20) != 0 )
        v16 = 64;
      if ( (v15 & 0x40) != 0 )
        v16 |= 0x100u;
      v17 = *(_DWORD *)(v139.Ptr + 96) | (v16 << 8) | *(_DWORD *)(v6 + 96) & 0x1FF00;
      *(_DWORD *)(v139.Ptr + 96) = v17;
      if ( (v17 & 1) != 0 )
        TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v12 + 172);
      goto LABEL_17;
    }
    v72 = (unsigned int)v13[1];
    v73 = v13 + 2;
    v74 = 0LL;
    if ( (_DWORD)v72 )
    {
      while ( *v73 != 9 )
      {
        v74 = (unsigned int)(v74 + 1);
        ++v73;
        if ( (unsigned int)v74 >= (unsigned int)v72 )
          goto LABEL_180;
      }
    }
    else
    {
LABEL_180:
      if ( (unsigned int)v74 >= (unsigned int)v72 )
      {
        v75 = 0LL;
        goto LABEL_118;
      }
    }
    v75 = (__int64 *)((char *)v13 + 8 * v74 - (((_BYTE)v72 + 15) & 7) + v72 + 15);
LABEL_118:
    v76 = *v75;
    if ( v76 )
    {
      v77 = *(_QWORD *)(v76 + 104);
      if ( v77 )
        v14 = *(_QWORD *)(v77 + 64);
    }
    goto LABEL_11;
  }
LABEL_17:
  if ( (*(_BYTE *)(v6 + 272) & 4) != 0 )
  {
    v92 = CPreComputeContext::ProcessPostSubgraphWindowBackdropInput(this, (struct CVisual *)v6);
    v93 = v92;
    if ( v92 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4FD,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
        (const char *)(unsigned int)v92);
      return v93;
    }
  }
  v18 = *(_QWORD *)this;
  v19 = *((_QWORD *)this + 1);
  while ( v18 != v19 )
  {
    v20 = *(_QWORD *)(v18 + 432);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 184LL))(v20) )
    {
      v3 = (struct CVisual *)(v6 + 336);
      goto LABEL_22;
    }
    v32 = *(_QWORD *)(v6 + 232);
    if ( *(int *)v32 < 0 )
    {
      v33 = *(unsigned int *)(v32 + 4);
      v34 = (_BYTE *)(v32 + 8);
      v35 = 0LL;
      if ( (_DWORD)v33 )
      {
        while ( *v34 != 1 )
        {
          v35 = (unsigned int)(v35 + 1);
          ++v34;
          if ( (unsigned int)v35 >= (unsigned int)v33 )
            goto LABEL_83;
        }
LABEL_55:
        v36 = (_QWORD **)(v33 + 15 + v32 + 8 * v35 - (((_BYTE)v33 + 15) & 7));
      }
      else
      {
LABEL_83:
        if ( (unsigned int)v35 < (unsigned int)v33 )
          goto LABEL_55;
        v36 = 0LL;
      }
      v37 = *v36;
      if ( v37 )
      {
        v38 = (_QWORD *)*v37;
        if ( (_QWORD *)*v37 != v37 )
        {
          while ( v38[4] != v20 )
          {
            v38 = (_QWORD *)*v38;
            if ( v38 == v37 )
              goto LABEL_22;
          }
          v3 = (struct CVisual *)(v38 - 48);
        }
      }
    }
LABEL_22:
    if ( *((_BYTE *)v3 + 8) )
    {
      v53 = *(_DWORD *)(v18 + 360);
      if ( v53 )
        *(_DWORD *)(v18 + 360) = v53 - 1;
      *((_BYTE *)v3 + 8) = 0;
    }
    if ( *((_BYTE *)v3 + 9) )
    {
      v59 = *(_DWORD *)(v18 + 392);
      if ( v59 )
        *(_DWORD *)(v18 + 392) = v59 - 1;
      *((_BYTE *)v3 + 9) = 0;
    }
    v18 += 448LL;
    v3 = 0LL;
  }
  v21 = *(_BYTE *)(v6 + 100);
  v22 = v137[0];
  if ( (v21 & 8) != 0 )
  {
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((char *)this + 1432);
    v21 = *(_BYTE *)(v6 + 100);
  }
  if ( (v21 & 4) != 0 )
  {
    CWatermarkStack<float,2,2,10>::Pop((_DWORD *)this + 350);
    v21 = *(_BYTE *)(v6 + 100);
  }
  if ( (v21 & 0x10) != 0 )
  {
    v86 = *((_DWORD *)this + 366);
    if ( v86 )
    {
      *((_DWORD *)this + 366) = v86 - 1;
      v21 = *(_BYTE *)(v6 + 100);
    }
  }
  if ( (v21 & 0x20) != 0 )
    *((_BYTE *)this + 1936) = *((_BYTE *)this + 1936) == 0;
  if ( (*(_BYTE *)(v6 + 272) & 1) != 0 )
  {
    v87 = CPreComputeContext::ProcessPostSubgraphBackdropInput(this, (struct CVisual *)v6, v22, v133);
    v88 = v87;
    if ( v87 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52F,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
        (const char *)(unsigned int)v87);
      return v88;
    }
  }
  if ( (**(_DWORD **)(v6 + 232) & 0x200000) != 0 )
  {
    v90 = CPreComputeContext::ProcessPostSubgraphWindowBackgroundTreatment(this, (struct CVisual *)v6, v22, v133);
    v91 = v90;
    if ( v90 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x536,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
        (const char *)(unsigned int)v90);
      return v91;
    }
  }
  if ( (*(_BYTE *)(v6 + 96) & 4) != 0 )
  {
    --*(_DWORD *)(*((_QWORD *)v135 + 53) + 4400LL);
    v84 = CPreComputeContext::AddLocalBoundsToSubTreesDirtyRegion(this, (struct CVisual *)v6, 0);
    v85 = v84;
    if ( v84 >= 0 )
    {
      if ( dword_1803D0F60 && (*(int *)(v6 + 264) > 0 || *(int *)(v6 + 268) > 0) )
      {
        DwmDbg::DbgString::DbgString((char **)v137, &byte_18032C47F);
        v115 = CVisualTreePath::CVisualTreePath((CVisualTreePath *)v136, v22);
        v116 = DwmDbg::DbgString::DbgString((char **)&v138, "PreCompute-AddedDirtyRectInPostSubgraph");
        DwmDbg::Backdrops::LogTreeWalkEtwEvent(v116, v6, v22, v115);
        v117 = *(_BYTE **)v136;
        v118 = (__int64)(*(_QWORD *)&v136[8] - *(_QWORD *)v136) >> 4;
        if ( v118 )
          *(_QWORD *)&v136[8] += -16 * v118;
        *(_QWORD *)v136 = 0LL;
        if ( v117 == &v136[24] )
          v117 = 0LL;
        DefaultHeap::Free(v117);
      }
      goto LABEL_35;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
      (const char *)(unsigned int)v84);
    return v85;
  }
LABEL_35:
  v23 = v134;
  if ( !v134 )
  {
LABEL_39:
    if ( CPreComputeContext::s_depthSortingEnabled )
    {
      v119 = CDepthSortingPreComputeHelper::PreComputePostSubgraph(
               (CPreComputeContext *)((char *)this + 1832),
               v22,
               (struct CVisual *)v6,
               (struct CVisual *)v139.Ptr);
      v120 = v119;
      if ( v119 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x586,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
          (const char *)(unsigned int)v119);
        return v120;
      }
    }
    v25 = *(_QWORD *)this;
    v26 = *((_QWORD *)this + 1);
    while ( v25 != v26 )
    {
      if ( v6 == *(_QWORD *)(*(_QWORD *)(v25 + 432) + 64LL) )
        v27 = 0LL;
      else
        v27 = *(const struct CVisual **)(v6 + 88);
      if ( *(_DWORD *)(v25 + 96) && (v27 && *((_DWORD *)v27 + 27) == 1 || CVisual::IsPreserve3DRoot((CVisual *)v6, v27)) )
      {
        HasEffects = CVisual::IsSimple3DRootOrHasEffects((CVisual *)v6, v27);
        v122 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(
                 (CBspPreComputeHelper *)v25,
                 (struct CVisual *)v6,
                 HasEffects);
        v124 = v122;
        if ( v122 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v123, 0LL, 0LL, v122, 0x180u);
          goto LABEL_239;
        }
        if ( CVisual::IsPreserve3DRoot((CVisual *)v6, v27) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            McGenEventWrite_EventWriteTransfer(
              Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_P3D_BUILDING_BSPTREE_Stop,
              v125,
              1u,
              &v139);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              McGenEventWrite_EventWriteTransfer(
                Microsoft_Windows_Dwm_Core_Provider_Context,
                &EVTDESC_P3D_BUILDING_POLYGONLIST_Start,
                v126,
                1u,
                (PEVENT_DATA_DESCRIPTOR)v137);
          }
          *(_OWORD *)&v136[28] = 1uLL;
          *(_QWORD *)&v136[48] = 0LL;
          *(_DWORD *)&v136[56] = 0;
          memset(&v136[4], 0, 20);
          *(_QWORD *)&v136[64] = v6;
          v127 = *(struct CBspNode **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference(v25);
          if ( v127 )
          {
            v128 = CBspPolygonListBuilder::BuildPolygonList((CBspPolygonListBuilder *)v136, v127);
            v124 = v128;
            if ( v128 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v129, 0LL, 0LL, v128, 0x18Du);
              goto LABEL_225;
            }
          }
          CBspPreComputeHelper::PopStacksForBspRootVisual((CBspPreComputeHelper *)v25, v127);
          if ( *(_DWORD *)(v25 + 96) )
          {
            if ( HasEffects )
            {
              v131 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(
                       (CBspPreComputeHelper *)v25,
                       (struct CVisual *)v6,
                       1);
              v124 = v131;
              if ( v131 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v132, 0LL, 0LL, v131, 0x195u);
LABEL_225:
                DefaultHeap::Free(*(void **)&v136[48]);
LABEL_239:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x58C,
                  (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                  (const char *)(unsigned int)v124);
                return (unsigned int)v124;
              }
            }
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McGenEventWrite_EventWriteTransfer(
              Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_P3D_BUILDING_POLYGONLIST_Stop,
              v130,
              1u,
              &v138);
          DefaultHeap::Free(*(void **)&v136[48]);
        }
        if ( v27 && *((_DWORD *)v27 + 27) == 1 )
          CBspPreComputeHelper::PopStacksForBspChildVisual((CBspPreComputeHelper *)v25, (const struct CVisual *)v6);
        if ( v124 < 0 )
          goto LABEL_239;
      }
      v25 += 448LL;
    }
    if ( *(char *)(v6 + 104) < 0 )
      CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Pop((char *)this + 1368);
    v28 = *(_DWORD **)(v6 + 232);
    if ( (*v28 & 0x400000) == 0 )
      goto LABEL_49;
    v54 = (unsigned int)v28[1];
    v55 = v28 + 2;
    v56 = 0LL;
    if ( (_DWORD)v54 )
    {
      while ( *v55 != 10 )
      {
        v56 = (unsigned int)(v56 + 1);
        ++v55;
        if ( (unsigned int)v56 >= (unsigned int)v54 )
          goto LABEL_148;
      }
    }
    else
    {
LABEL_148:
      if ( (unsigned int)v56 >= (unsigned int)v54 )
      {
        v57 = 0LL;
LABEL_91:
        v58 = (_QWORD *)*v57;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v57 + 56LL))(*v57, 186LL) )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v58 + 56LL))(v58, 56LL) )
          {
LABEL_49:
            v29 = v135;
LABEL_50:
            *(_BYTE *)(v6 + 100) &= 0xC1u;
            *(_BYTE *)(v6 + 96) = 0;
            v30 = (CVisualTree *)*((_QWORD *)v29 + 54);
            if ( *((_QWORD *)v30 + 8) == v6 )
            {
              CVisualTree::EndPreCompute(v30, 0);
              CBspPreComputeHelper::CleanupAfterWalking(v29);
              if ( *((_BYTE *)v29 + 444) )
              {
                CThreadContext::UnregisterGraphWalkRoot();
                *((_BYTE *)v29 + 444) = 0;
              }
              detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::clear_region(
                (__int64 *)this,
                0x6DB6DB6DB6DB6DB7LL * ((*((_QWORD *)this + 1) - *(_QWORD *)this - 448LL) >> 6),
                1LL);
            }
            return 0LL;
          }
          v58 = (_QWORD *)v58[11];
        }
        v29 = v135;
        if ( v58 )
          --*((_DWORD *)v135 + 110);
        goto LABEL_50;
      }
    }
    v57 = (_QWORD *)((char *)v28 + 8 * v56 - (((_BYTE)v54 + 15) & 7) + v54 + 15);
    goto LABEL_91;
  }
  if ( *(char *)(v6 + 100) >= 0
    || (v41 = *(_BYTE *)(v6 + 101), ((v41 ^ (unsigned __int8)((unsigned int)(*(int *)(v6 + 96) >> 8) >> 5)) & 1) == 0) )
  {
LABEL_37:
    v24 = *(_DWORD **)(v6 + 232);
    if ( (*v24 & 0x800000) == 0 )
    {
LABEL_38:
      *(_BYTE *)(v6 + 100) &= ~0x40u;
      goto LABEL_39;
    }
    v60 = (unsigned int)v24[1];
    v61 = v24 + 2;
    v62 = 0LL;
    if ( (_DWORD)v60 )
    {
      while ( *v61 != 9 )
      {
        v62 = (unsigned int)(v62 + 1);
        ++v61;
        if ( (unsigned int)v62 >= (unsigned int)v60 )
          goto LABEL_183;
      }
    }
    else
    {
LABEL_183:
      if ( (unsigned int)v62 >= (unsigned int)v60 )
      {
        v63 = 0LL;
LABEL_103:
        v64 = *v63;
        if ( !v64 )
          goto LABEL_38;
        v65 = *(_QWORD *)(v64 + 104);
        if ( !v65 )
          goto LABEL_38;
        v66 = *(_QWORD *)(v65 + 64);
        if ( !v66 )
          goto LABEL_38;
        if ( ((*(_BYTE *)(v6 + 100) & 0x40) != 0 || *((_BYTE *)this + 1936))
          && (unsigned __int8)IsNotifyInputSinkParentedPresent(v65) )
        {
          v98 = *((_DWORD *)this + 366);
          v99 = 0LL;
          if ( v98 )
            v99 = (_QWORD *)(*((_QWORD *)this + 185) + 8LL * (unsigned int)(v98 - 1));
          NotifyInputSinkParented(v66, *v99);
        }
        if ( (*(_BYTE *)(v6 + 100) & 0x40) == 0 )
        {
          v65 = (__int64)v23[18].Flink[1].Flink;
          if ( v23[17].Flink != *(struct _LIST_ENTRY **)(v65 + 496) )
            goto LABEL_38;
        }
        v67 = *(_OWORD *)&v23[19].Blink;
        v68 = *((unsigned int *)this + 456);
        *(_QWORD *)v136 = v66;
        *(_OWORD *)&v136[8] = v67;
        v69 = v68 + 1;
        *(struct _LIST_ENTRY *)&v136[24] = *(struct _LIST_ENTRY *)((char *)v23 + 328);
        *(struct _LIST_ENTRY *)&v136[40] = *(struct _LIST_ENTRY *)((char *)v23 + 344);
        *(struct _LIST_ENTRY *)&v136[56] = *(struct _LIST_ENTRY *)((char *)v23 + 360);
        if ( (int)v68 + 1 < (unsigned int)v68 )
        {
          v101 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0LL, -2147024362, 0xB5u);
        }
        else
        {
          if ( v69 <= *((_DWORD *)this + 455) )
          {
            v70 = 9 * v68;
            v71 = *((_QWORD *)this + 225);
            *(_OWORD *)(v71 + 8 * v70) = *(_OWORD *)v136;
            *(_OWORD *)(v71 + 8 * v70 + 16) = *(_OWORD *)&v136[16];
            *(_OWORD *)(v71 + 8 * v70 + 32) = *(_OWORD *)&v136[32];
            *(_OWORD *)(v71 + 8 * v70 + 48) = *(_OWORD *)&v136[48];
            *(_QWORD *)(v71 + 8 * v70 + 64) = *(_QWORD *)&v136[64];
            *((_DWORD *)this + 456) = v69;
            goto LABEL_113;
          }
          v100 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 1800, 72LL, 1LL, v136);
          v101 = v100;
          if ( v100 >= 0 )
          {
LABEL_113:
            if ( (unsigned __int8)IsNotifyInputSinkTransformChangedPresent(v70) )
              NotifyInputSinkTransformChanged(v66, &v136[8]);
            goto LABEL_38;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0LL, v100, 0xC0u);
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x573,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
          (const char *)v101);
        return v101;
      }
    }
    v63 = (__int64 *)((char *)v24 + 8 * v62 - (((_BYTE)v60 + 15) & 7) + v60 + 15);
    goto LABEL_103;
  }
  *(_BYTE *)(v6 + 101) = v41 ^ (v41 ^ (*(_DWORD *)(v6 + 96) >> 13)) & 1;
  v137[0] = (struct CVisualTree *)CVisual::GetTopLevelWindow((CVisual *)v6);
  v43 = *((unsigned int *)this + 448);
  LODWORD(v137[1]) = v44 & 1;
  v45 = v43 + 1;
  if ( (int)v43 + 1 < (unsigned int)v43 )
  {
    v48 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0LL, -2147024362, 0xB5u);
    goto LABEL_209;
  }
  if ( v45 <= *((_DWORD *)this + 447) )
  {
    *(_OWORD *)(*((_QWORD *)this + 221) + 16 * v43) = *(_OWORD *)v137;
    *((_DWORD *)this + 448) = v45;
    goto LABEL_37;
  }
  v46 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 1768, 16LL, 1LL, v137);
  v48 = v46;
  if ( v46 >= 0 )
  {
    v23 = v134;
    goto LABEL_37;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0LL, v46, 0xC0u);
LABEL_209:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x554,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
    (const char *)v48);
  return v48;
}
