/*
 * XREFs of ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800B1970
 * Callers:
 *     <none>
 * Callees:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x1800107F0 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180011354 (-AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_dele.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1800227FC (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ContinueLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18007E65C (-ContinueLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x18007E784 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x18007E980 (-AddMultipleAndSet@-$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007FAC8 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18007FFE0 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ??$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@PEAPEAVCBatchCommand@@@Z @ 0x18008044C (--$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableArray@PEAVCBatch.c)
 *     ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180080650 (-RecycleLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180080A78 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AE6D8 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x1800B27A0 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?ApplyRenderState@CGroupBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x1800B58FC (-ApplyRenderState@CGroupBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ??$emplace_back@AEAPEAVCRenderingBatchCommand@@@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAAAEAVCMegaRect@@AEAPEAVCRenderingBatchCommand@@@Z @ 0x1800B6B1C (--$emplace_back@AEAPEAVCRenderingBatchCommand@@@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@st.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D1D9C (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1800E28B4 (-AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delet.c)
 *     ??0CDrawListEntryBatch@@AEAA@PEAVCD3DDevice@@PEAVCSharedDirect3DResources@0@@Z @ 0x1800F8F40 (--0CDrawListEntryBatch@@AEAA@PEAVCD3DDevice@@PEAVCSharedDirect3DResources@0@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?GetCurrentTargetNoRef@CD2DContext@@IEBAPEAVCD2DTarget@@XZ @ 0x180104F10 (-GetCurrentTargetNoRef@CD2DContext@@IEBAPEAVCD2DTarget@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801117F6 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1801E8AC4 (-UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180278640 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 */

__int64 __fastcall CHWDrawListEntry::Render(__int64 a1, __int64 a2, __int64 a3, float a4, int a5)
{
  __int64 v5; // r15
  __m128 *v10; // rax
  int CurrentLightBufferForContextNoRef; // eax
  CLightStack *v12; // rcx
  unsigned int v13; // r12d
  int v14; // edx
  CBatchCommand *v15; // rbx
  int v16; // r8d
  int v17; // edi
  __int64 v18; // rdx
  unsigned int v19; // eax
  CBatchCommand *v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  struct ClipPlaneInfoRef *v23; // r15
  struct CD3DDevice *v24; // r14
  char *v25; // rsi
  __int64 v26; // rbx
  struct CHwLightCollectionBuffer *v27; // rdi
  int v28; // r14d
  int v29; // ebx
  struct CD3DDevice *v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rsi
  struct CHwLightCollectionBuffer *v33; // rbx
  _DWORD *v34; // rdi
  __int64 v35; // rdx
  CBatchCommand *v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // r9
  int *v39; // r9
  int v40; // r13d
  int v41; // edi
  __int64 v42; // r8
  float a; // xmm8_4
  float b; // xmm6_4
  float r; // xmm7_4
  int v46; // r15d
  int *v47; // rdx
  __int64 v48; // r14
  char v49; // al
  int *v50; // rcx
  __int64 v51; // rax
  float *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  struct CHwLightCollectionBuffer *v55; // rdi
  struct CHwLightCollectionBuffer *v56; // rcx
  __int64 v57; // rdi
  struct CHwLightCollectionBuffer *v58; // rax
  __int64 v59; // rcx
  CBatchCommand *v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r8
  __int64 v63; // rcx
  int v65; // ecx
  char v66; // al
  struct CHwLightCollectionBuffer *v67; // rdi
  struct CHwLightCollectionBuffer *v68; // rax
  __int128 v69; // xmm0
  int v70; // eax
  int v71; // eax
  struct CHwLightCollectionBuffer *v72; // rcx
  __int64 v73; // rax
  struct CHwLightCollectionBuffer *v74; // r13
  __int64 v75; // rcx
  struct CD2DTarget *CurrentTargetNoRef; // rax
  __int64 v77; // r9
  bool v78; // zf
  struct CD3DDevice *v79; // rcx
  struct CD3DDevice *v80; // rax
  int v81; // r13d
  __int64 v82; // rcx
  __int64 v83; // rdx
  struct CD3DDevice *v84; // rdi
  unsigned int v85; // eax
  int v86; // eax
  __int64 v87; // rbx
  __int64 v88; // rax
  struct CD3DDevice *v89; // rcx
  void (__fastcall ***v90)(_QWORD, struct ClipPlaneInfoRef **); // rcx
  int v91; // eax
  float v92; // xmm0_4
  int v93; // eax
  CDrawListEntryBatch *v94; // rbx
  __int64 v95; // rcx
  __int128 v96; // xmm0
  __int64 v97; // rdx
  int v98; // eax
  __int64 v99; // r11
  CD2DTarget *v100; // r13
  __int64 i; // rbx
  CD2DTarget *v102; // r12
  __int64 v103; // rcx
  CBatchCommand *v104; // rcx
  CBatchCommand *v105; // r15
  __int64 v106; // rax
  CBatchOptimizer *v107; // rcx
  CBatchCommand *v108; // rax
  __int64 v109; // rcx
  CBatchCommand *v110; // r12
  int v111; // eax
  __int64 v112; // rcx
  struct CDrawListEntryBatch::CSharedDirect3DResources *v113; // r12
  struct CD3DDevice *v114; // rbx
  CDrawListEntryBatch *v115; // rax
  __int64 v116; // rcx
  CDrawListEntryBatch *v117; // rax
  CDrawListEntryBatch *v118; // rbx
  __int64 v119; // rcx
  unsigned int v120; // eax
  unsigned int v121; // edx
  int v122; // eax
  __int64 v123; // rcx
  int v124; // ebx
  int v125; // r9d
  __m128 v126; // xmm2
  float v127; // xmm3_4
  D3DVALUE v128; // xmm1_4
  float v129; // xmm0_4
  D3DVALUE v130; // xmm3_4
  D3DVALUE v131; // xmm0_4
  CDrawListPrimitive *v132; // rcx
  struct ClipPlaneInfoRef *v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rcx
  __int64 v136; // rcx
  int v137; // eax
  __int64 v138; // rcx
  char v139; // al
  int v140; // eax
  __int64 v141; // rcx
  __int64 v142; // rcx
  unsigned int v143; // [rsp+20h] [rbp-C1h]
  unsigned __int8 v144; // [rsp+30h] [rbp-B1h]
  char v145[7]; // [rsp+31h] [rbp-B0h] BYREF
  CBatchCommand *v146; // [rsp+38h] [rbp-A9h] BYREF
  CBatchCommand *v147; // [rsp+40h] [rbp-A1h] BYREF
  CDrawListEntryBatch *v148; // [rsp+48h] [rbp-99h] BYREF
  struct CD3DDevice *v149; // [rsp+50h] [rbp-91h]
  struct ClipPlaneInfoRef *v150; // [rsp+58h] [rbp-89h] BYREF
  CBatchCommand *v151; // [rsp+60h] [rbp-81h]
  CDrawListEntryBatch *v152; // [rsp+68h] [rbp-79h] BYREF
  char v153[24]; // [rsp+70h] [rbp-71h] BYREF
  struct CHwLightCollectionBuffer *v154[2]; // [rsp+88h] [rbp-59h] BYREF
  struct _D3DCOLORVALUE v155; // [rsp+98h] [rbp-49h] BYREF
  char v156; // [rsp+A8h] [rbp-39h]
  char v157[16]; // [rsp+B0h] [rbp-31h] BYREF
  void *retaddr; // [rsp+138h] [rbp+57h]

  v5 = *(_QWORD *)(a2 + 40);
  v147 = 0LL;
  v149 = (struct CD3DDevice *)v5;
  v154[0] = 0LL;
  v150 = 0LL;
  if ( a4 == 1.0 && !a5 && (*(_BYTE *)(a1 + 48) & 1) != 0 )
    a5 = 5;
  v10 = *(__m128 **)(a1 + 16);
  if ( v10 )
  {
    v126 = v10[4];
    v127 = _mm_shuffle_ps(v126, v126, 255).m128_f32[0];
    v128 = (float)(_mm_shuffle_ps(v126, v126, 85).m128_f32[0] * v127) * *(float *)(a1 + 28);
    v155.r = (float)(v127 * v126.m128_f32[0]) * *(float *)(a1 + 24);
    v129 = v127;
    v130 = v127 * *(float *)(a1 + 36);
    v155.g = v128;
    v155.a = v130;
    v131 = (float)(v129 * _mm_shuffle_ps(v126, v126, 170).m128_f32[0]) * *(float *)(a1 + 32);
    v132 = *(CDrawListPrimitive **)(a1 + 64);
    v155.b = v131;
    CDrawListPrimitive::UpdatePremultipliedColor(v132, &v155);
  }
  CurrentLightBufferForContextNoRef = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 48LL))(
                                        *(_QWORD *)(a1 + 72),
                                        a2);
  v13 = CurrentLightBufferForContextNoRef;
  if ( CurrentLightBufferForContextNoRef < 0 )
  {
    v143 = 86;
    goto LABEL_223;
  }
  v14 = *(_DWORD *)(v5 + 88);
  v15 = 0LL;
  LODWORD(v146) = 0;
  v16 = 0;
  v17 = -2147024882;
  if ( v14 )
    goto LABEL_9;
  v108 = (CBatchCommand *)DefaultHeap::Alloc(0x68uLL);
  v110 = v108;
  if ( v108 )
  {
    *(_DWORD *)v108 = 0;
    v148 = v108;
    v111 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(v5 + 64, &v148, 1LL);
    LODWORD(v146) = v111;
    v16 = v111;
    if ( v111 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v112, 0LL, 0LL, v111, 0x16Fu);
      CBatchCommand::`scalar deleting destructor'(v110);
      v16 = (int)v146;
LABEL_12:
      v13 = v16;
      goto LABEL_13;
    }
    v14 = *(_DWORD *)(v5 + 88);
LABEL_9:
    v18 = (unsigned int)(v14 - 1);
    v15 = *(CBatchCommand **)(*(_QWORD *)(v5 + 64) + 8 * v18);
    v19 = *(_DWORD *)(v5 + 96);
    *(_DWORD *)(v5 + 88) = v18;
    if ( v19 >= (unsigned int)v18 )
      v19 = v18;
    *(_DWORD *)(v5 + 96) = v19;
    goto LABEL_12;
  }
  LODWORD(v146) = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v109, 0LL, 0LL, -2147024882, 0x16Du);
  v16 = -2147024882;
  v13 = -2147024882;
LABEL_13:
  v20 = v147;
  v147 = v15;
  if ( v20 )
  {
    CBatchCommand::`scalar deleting destructor'(v20);
    v16 = (int)v146;
    v15 = v147;
  }
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v20, 0LL, 0LL, v16, 0x58u);
    goto LABEL_82;
  }
  *((_QWORD *)v15 + 1) = a1;
  (**(void (__fastcall ***)(__int64))a1)(a1);
  *((_QWORD *)v15 + 2) = 0LL;
  *(_OWORD *)((char *)v15 + 24) = *(_OWORD *)a3;
  *(_OWORD *)((char *)v15 + 40) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)((char *)v15 + 56) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)((char *)v15 + 72) = *(_OWORD *)(a3 + 48);
  *((_DWORD *)v15 + 22) = *(_DWORD *)(a3 + 64);
  *((_DWORD *)v15 + 23) = a5;
  *((float *)v15 + 24) = a4;
  *((_BYTE *)v15 + 100) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) == 2;
  *(_DWORD *)v15 = 1;
  v21 = *(_DWORD *)(a1 + 48);
  if ( (v21 & 4) != 0 )
  {
    *(_BYTE *)(a2 + 7967) = 1;
    v21 = *(_DWORD *)(a1 + 48);
  }
  if ( (v21 & 0x200) != 0 )
  {
    v97 = 0LL;
    v98 = *(_DWORD *)(a2 + 300);
    if ( v98 >= 1 )
    {
      switch ( v98 )
      {
        case 1:
          v97 = 1LL;
          break;
        case 2:
        case 3:
          v97 = 2LL;
          break;
        case 4:
        case 6:
          v97 = 3LL;
          break;
        case 5:
          v97 = 4LL;
          break;
        default:
          break;
      }
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 64LL))(*(_QWORD *)(a1 + 72), v97);
  }
  v12 = (CLightStack *)(a2 + 528);
  if ( !*(_DWORD *)(a2 + 624) )
  {
    if ( *(_DWORD *)(a2 + 552) )
    {
      CurrentLightBufferForContextNoRef = CLightStack::RetrieveCurrentLightBufferForContextNoRef(
                                            v12,
                                            (struct CDrawingContext *)a2,
                                            (const struct CMILMatrix *)(a2 + 96),
                                            v154);
      v13 = CurrentLightBufferForContextNoRef;
      if ( CurrentLightBufferForContextNoRef < 0 )
      {
        v143 = 110;
LABEL_223:
        v125 = CurrentLightBufferForContextNoRef;
        goto LABEL_179;
      }
    }
  }
  v22 = *(_QWORD *)(a2 + 3352);
  v23 = v150;
  if ( v22 )
  {
    v133 = *(struct ClipPlaneInfoRef **)(v22 + 256);
    if ( v133 )
      v23 = v133;
  }
  v24 = v149;
  v25 = (char *)v149 + 16;
  if ( !*((_BYTE *)v149 + 453) )
  {
    v100 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        16LL,
        0LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v25 + 25) + 384LL))(*((_QWORD *)v25 + 25));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0qq_EventWriteTransfer(Microsoft_Windows_Dwm_Core_Provider_Context, "3", 16LL, 0LL);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v25 + 88); v100 = v102 )
    {
      v102 = *(CD2DTarget **)(*((_QWORD *)v25 + 41) + 8 * i);
      if ( v100 )
        *((_BYTE *)v100 + 73) = 0;
      CD2DTarget::ApplyState(v102, (struct CD2DContext *)v25);
      i = (unsigned int)(i + 1);
    }
    v25[437] = 1;
  }
  v26 = *((_QWORD *)v25 + 17);
  v25[438] = 1;
  if ( v26 )
  {
    if ( *(struct ClipPlaneInfoRef **)(v26 + 32) == v23 )
    {
      v27 = v154[0];
      v28 = 0;
      if ( v154[0] == *(struct CHwLightCollectionBuffer **)(v26 + 40) )
        goto LABEL_26;
      ++dword_1803D312C;
      v103 = *(_QWORD *)(v26 + 24) + 64LL;
      v146 = 0LL;
      *(_QWORD *)&v155.r = &v146;
      *(_QWORD *)&v155.b = 0LL;
      v156 = 1;
      v28 = CDrawListBatchManager::TakeItemFromCache<CBatchCommand>(v103, &v155.b);
      v13 = v28;
      if ( v156 )
      {
        v104 = **(CBatchCommand ***)&v155.r;
        **(_QWORD **)&v155.r = *(_QWORD *)&v155.b;
        if ( v104 )
          CBatchCommand::`scalar deleting destructor'(v104);
      }
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v104, 0LL, 0LL, v28, 0xC3u);
        v12 = v146;
        if ( !v146 )
          goto LABEL_26;
      }
      else
      {
        v105 = v146;
        *((_QWORD *)v146 + 1) = v27;
        if ( v27 )
          (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))v27)(v27);
        *(_DWORD *)v105 = 2;
        v106 = *(_QWORD *)(v26 + 24);
        v107 = *(CBatchOptimizer **)(v106 + 160);
        if ( v107 )
        {
          CBatchOptimizer::AddStateSettingCommand(v107, &v146);
          goto LABEL_160;
        }
        v137 = CDrawListBatchManager::AddBatchCommand(v106 + 24, &v146);
        v28 = v137;
        v13 = v137;
        if ( v137 >= 0 )
        {
LABEL_160:
          v12 = v146;
          *(_QWORD *)(v26 + 40) = v27;
          if ( v12 )
            CBatchCommand::`scalar deleting destructor'(v12);
LABEL_26:
          v17 = v28;
          v13 = v28;
          if ( v28 >= 0 )
            goto LABEL_27;
          goto LABEL_206;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v138, 0LL, 0LL, v137, 0xCDu);
        v12 = v146;
        if ( !v146 )
        {
LABEL_205:
          v17 = v28;
LABEL_206:
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0LL, v28, 0x1F4u);
          goto LABEL_207;
        }
      }
      CBatchCommand::`scalar deleting destructor'(v12);
      goto LABEL_205;
    }
    CD2DContext::FlushDrawList((CD2DContext *)v25);
    v17 = CD2DContext::EnsureDrawListBatch((CD2DContext *)v25, v154[0], v23);
    v13 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0LL, v17, 0x1F0u);
      goto LABEL_196;
    }
    goto LABEL_27;
  }
  CurrentTargetNoRef = CD2DContext::GetCurrentTargetNoRef((CD2DContext *)v25);
  v78 = *((_QWORD *)v24 + 21) == 0LL;
  v79 = (struct CD3DDevice *)*((_QWORD *)CurrentTargetNoRef + 3);
  v149 = v79;
  if ( !v78 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v80 = 0LL;
  if ( v77 )
    v80 = v24;
  v81 = *((_DWORD *)v80 + 272);
  v13 = v81;
  if ( v81 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v79, 0LL, 0LL, v81, 0x10Du);
    v17 = v81;
    goto LABEL_198;
  }
  if ( !*((_DWORD *)v24 + 32) )
  {
    v113 = (struct CDrawListEntryBatch::CSharedDirect3DResources *)*((_QWORD *)v24 + 18);
    v114 = 0LL;
    if ( v77 )
      v114 = v24;
    v115 = (CDrawListEntryBatch *)DefaultHeap::Alloc(0x98uLL);
    if ( v115 && (v117 = CDrawListEntryBatch::CDrawListEntryBatch(v115, v114, v113), v148 = v117, (v118 = v117) != 0LL) )
    {
      CMILRefCountImpl::AddReference((CDrawListEntryBatch *)((char *)v117 + 16));
      v120 = *((_DWORD *)v24 + 32);
      v152 = v118;
      v121 = v120 + 1;
      if ( v120 + 1 < v120 )
      {
        v13 = -2147024362;
        v124 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v119, 0LL, 0LL, -2147024362, 0xB5u);
      }
      else
      {
        if ( v121 <= *((_DWORD *)v24 + 31) )
        {
          *(_QWORD *)(*((_QWORD *)v24 + 13) + 8LL * v120) = v118;
          *((_DWORD *)v24 + 32) = v121;
          goto LABEL_123;
        }
        v122 = DynArrayImpl<0>::AddMultipleAndSet((char *)v24 + 104, 8LL, 1LL, &v152);
        v124 = v122;
        v13 = v122;
        if ( v122 >= 0 )
          goto LABEL_123;
        MilInstrumentationCheckHR_MaybeFailFast(v123, 0LL, 0LL, v122, 0xC0u);
      }
      v81 = v13;
      MilInstrumentationCheckHR_MaybeFailFast(v134, 0LL, 0LL, v124, 0x116u);
      CMILRefCountBaseT<IMILRefCount>::InternalRelease((char *)v148 + 8);
      v17 = v13;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v116, 0LL, 0LL, -2147024882, 0x53u);
      v81 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v136, 0LL, 0LL, -2147024882, 0x114u);
      v13 = -2147024882;
    }
LABEL_198:
    MilInstrumentationCheckHR_MaybeFailFast(v135, 0LL, 0LL, v81, 0x1E1u);
LABEL_207:
    v29 = v13;
    goto LABEL_177;
  }
LABEL_123:
  v82 = *((_QWORD *)v25 + 17);
  *((_QWORD *)v25 + 17) = 0LL;
  if ( v82 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v82 + 8);
  v83 = (unsigned int)(*((_DWORD *)v24 + 32) - 1);
  v84 = v149;
  *((_QWORD *)v25 + 17) = *(_QWORD *)(*((_QWORD *)v24 + 13) + 8 * v83);
  v85 = *((_DWORD *)v24 + 34);
  *((_DWORD *)v24 + 32) = v83;
  if ( v85 >= (unsigned int)v83 )
    v85 = v83;
  *((_DWORD *)v24 + 34) = v85;
  ++*((_DWORD *)v24 + 44);
  v86 = *((_DWORD *)v24 + 12);
  v87 = *((_QWORD *)v25 + 17);
  *(_DWORD *)(v87 + 48) = v86;
  *(_DWORD *)(v87 + 52) = v86;
  v88 = (**(__int64 (__fastcall ***)(struct CD3DDevice *, char *))v84)(v84, v153);
  *(_OWORD *)(v87 + 72) = *(_OWORD *)v88;
  *(_QWORD *)(v87 + 88) = *(_QWORD *)(v88 + 16);
  v89 = (struct CD3DDevice *)((char *)v84 + *(int *)(*((_QWORD *)v84 + 1) + 12LL) + 8);
  *(_DWORD *)(v87 + 96) = *(_DWORD *)((**(__int64 (__fastcall ***)(struct CD3DDevice *, char *))v89)(v89, v157) + 8);
  v90 = (void (__fastcall ***)(_QWORD, struct ClipPlaneInfoRef **))((char *)v84
                                                                  + *(int *)(*((_QWORD *)v84 + 1) + 16LL)
                                                                  + 8);
  (**v90)(v90, &v150);
  v91 = (int)v150;
  *(_DWORD *)(v87 + 64) = -1082130432;
  *(_DWORD *)(v87 + 68) = 1065353216;
  v92 = (float)v91;
  v93 = HIDWORD(v150);
  *(float *)(v87 + 56) = 2.0 / v92;
  *(float *)(v87 + 60) = -2.0 / (float)v93;
  v94 = (CDrawListEntryBatch *)*((_QWORD *)v25 + 17);
  v17 = CDrawListEntryBatch::SetLightingCollection(v94, v154[0]);
  v13 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v95, 0LL, 0LL, v17, 0x1E3u);
LABEL_196:
    v29 = v17;
    goto LABEL_177;
  }
  v12 = (CLightStack *)*((_QWORD *)v94 + 4);
  if ( v12 != v23 )
  {
    if ( v23 )
    {
      (**(void (__fastcall ***)(struct ClipPlaneInfoRef *))v23)(v23);
      v12 = (CLightStack *)*((_QWORD *)v94 + 4);
    }
    *((_QWORD *)v94 + 4) = v23;
    if ( v12 )
      (*(void (__fastcall **)(CLightStack *))(*(_QWORD *)v12 + 8LL))(v12);
  }
LABEL_27:
  v29 = v17;
  v13 = v17;
  if ( v17 < 0 )
  {
LABEL_177:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0LL, v17, 0x209u);
LABEL_178:
    v125 = v29;
    v143 = 121;
LABEL_179:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0LL, v125, v143);
    goto LABEL_82;
  }
  v30 = (struct CD3DDevice *)*((_QWORD *)v25 + 17);
  v13 = 0;
  ++dword_1803D3128;
  v149 = v30;
  v148 = (CBatchCommand *)((char *)v147 + 8);
  if ( *((_DWORD *)v147 + 23) != 5
    || (*(_BYTE *)(*((_QWORD *)v147 + 1) + 48LL) & 8) == 0
    || !CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)v147 + 24)
    && (v139 = CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(v99 + 16)) == 0 )
  {
    v148 = 0LL;
  }
  v31 = *((_QWORD *)v30 + 3);
  v32 = *(_QWORD *)(v31 + 160);
  if ( !v32 )
  {
    v140 = CDrawListBatchManager::AddBatchCommand(v31 + 24, &v147);
    v13 = v140;
    v29 = v140;
    if ( v140 >= 0 )
      goto LABEL_80;
    MilInstrumentationCheckHR_MaybeFailFast(v141, 0LL, 0LL, v140, 0x81u);
    MilInstrumentationCheckHR_MaybeFailFast(v142, 0LL, 0LL, v29, 0x20Cu);
    goto LABEL_178;
  }
  v33 = 0LL;
  if ( !*(_DWORD *)(v32 + 32) )
  {
    v96 = *(_OWORD *)(v32 + 16);
    *(_DWORD *)(v32 + 32) = 1;
    *(_OWORD *)(520LL * *(int *)(v32 + 48) + v32 + 80) = v96;
  }
  switch ( *(_DWORD *)v147 )
  {
    case 1:
      if ( !*((_BYTE *)v147 + 100) )
      {
        v34 = (_DWORD *)*((_QWORD *)v147 + 2);
        if ( !v34 )
          v34 = *(_DWORD **)(*((_QWORD *)v147 + 1) + 64LL);
        if ( v34[2] )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v32 + 8LL))(v32, *((unsigned int *)v147 + 23));
          if ( v34[6] )
          {
            LOBYTE(v35) = 2;
          }
          else if ( v34[5] )
          {
            v35 = 0LL;
          }
          else
          {
            LOBYTE(v35) = 1;
          }
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 24LL))(v32, v35);
        }
      }
      break;
    case 2:
      (**(void (__fastcall ***)(__int64, _QWORD))v32)(v32, *((_QWORD *)v147 + 1));
      break;
    case 3:
      CGroupBatchCommand::ApplyRenderState((CBatchCommand *)((char *)v147 + 8), (struct IDrawListStateSink *)v32);
      break;
    default:
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  v36 = v147;
  v151 = v147;
  v37 = *((_QWORD *)v147 + 1);
  *(struct _D3DCOLORVALUE *)&v155.r = 0LL;
  *(_OWORD *)v154 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 48LL))(v37);
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v36 + 24, (__int64)v154, &v155.r, v38);
  v40 = *(_DWORD *)(v32 + 32);
  v41 = 0;
  LOBYTE(v42) = 1;
  v144 = 1;
  if ( !v40 )
    goto LABEL_96;
  a = v155.a;
  b = v155.b;
  r = v155.r;
  while ( 1 )
  {
    v46 = v41;
    v47 = (int *)(v32 + 4 * (v41 + 12LL));
    if ( *(_DWORD *)(520LL * *v47 + v32 + 104) )
    {
      do
      {
        v73 = v47[1];
        ++v47;
        ++v46;
      }
      while ( *(_DWORD *)(520 * v73 + v32 + 104) );
    }
    v48 = v32 + 520LL * *(int *)(v32 + 4LL * v46 + 48);
    if ( *(_QWORD *)(v48 + 80) != *(_QWORD *)(v32 + 16) )
      goto LABEL_94;
    if ( *(_QWORD *)(v48 + 112) || (v71 = *(_DWORD *)(v48 + 100), v71 == 1) )
    {
      if ( *(_DWORD *)(v48 + 88) != *(_DWORD *)(v32 + 24) )
        goto LABEL_94;
      v49 = *(_BYTE *)(v48 + 92);
      if ( v49 != *(_BYTE *)(v32 + 28) || v49 == 2 )
        goto LABEL_94;
    }
    else if ( v71 )
    {
      goto LABEL_94;
    }
    if ( (_BYTE)v42 )
    {
      v41 = v40 - 1;
      v42 = v40 - 1;
      if ( v42 != v46 )
      {
        v39 = (int *)(v32 + 48 + 4LL * v41);
        while ( 1 )
        {
          v50 = 0LL;
          v51 = v32 + 520LL * *v39;
          v47 = (int *)*(int *)(v51 + 100);
          if ( *(_DWORD *)(v51 + 100) )
            break;
LABEL_58:
          --v41;
          --v42;
          --v39;
          if ( v42 == v46 )
            goto LABEL_59;
        }
        v52 = (float *)(v51 + 284);
        while ( b < *(v52 - 1) || v52[1] < r || a < *v52 || v52[2] < v155.g )
        {
          v50 = (int *)((char *)v50 + 1);
          v52 += 4;
          if ( v50 == v47 )
            goto LABEL_58;
        }
        v65 = *(_DWORD *)(v32 + 32);
        LOBYTE(v42) = 0;
        v144 = 0;
        if ( v41 == v65 - 1 )
        {
          if ( *(_BYTE *)(v32 + 4240) )
          {
            if ( v65 == 8 && *(_DWORD *)(520LL * *(int *)(v32 + 4LL * v41 + 48) + v32 + 100) == 1 )
            {
              v66 = CBatchOptimizer::TryMergeOneLayer((CBatchOptimizer *)v32);
              v42 = 0LL;
              if ( v66 )
              {
                v40 = *(_DWORD *)(v32 + 32);
                v41 = v40 - 1;
              }
            }
          }
        }
        goto LABEL_95;
      }
    }
LABEL_59:
    v53 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64, int *))(**((_QWORD **)v151 + 1) + 40LL))(
            *((_QWORD *)v151 + 1),
            v47,
            v42,
            v39);
    v54 = *(_QWORD *)(v48 + 112);
    v55 = (struct CHwLightCollectionBuffer *)v53;
    if ( v54
      || *(_DWORD *)(v48 + 100) == 1
      && (v75 = *(_QWORD *)(*(_QWORD *)(v48 + 8LL * (unsigned int)(*(_DWORD *)(v48 + 96) - 1) + 120) + 8LL),
          (v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v75 + 40LL))(v75)) != 0) )
    {
      (*(void (__fastcall **)(__int64, struct CHwLightCollectionBuffer **, struct CHwLightCollectionBuffer *, char *))(*(_QWORD *)v54 + 80LL))(
        v54,
        v154,
        v55,
        v145);
      if ( !v145[0] )
      {
        v72 = v154[0];
        v154[0] = 0LL;
        if ( v72 )
          (*(void (__fastcall **)(struct CHwLightCollectionBuffer *))(*(_QWORD *)v72 + 8LL))(v72);
      }
      v55 = v154[0];
      v154[0] = 0LL;
    }
    else if ( v55 )
    {
      (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))v55)(v55);
    }
    v56 = v33;
    v33 = v55;
    if ( v56 )
      (*(void (__fastcall **)(struct CHwLightCollectionBuffer *))(*(_QWORD *)v56 + 8LL))(v56);
    if ( v55 )
      break;
    v42 = v144;
LABEL_94:
    v41 = v46 + 1;
LABEL_95:
    if ( v41 == v40 )
      goto LABEL_96;
  }
  if ( !*(_DWORD *)(v48 + 100) )
  {
    *(_DWORD *)(v48 + 88) = *(_DWORD *)(v32 + 24);
    *(_BYTE *)(v48 + 92) = *(_BYTE *)(v32 + 28);
  }
  if ( v46 == v40 )
  {
LABEL_96:
    v67 = v33;
    v68 = (struct CHwLightCollectionBuffer *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v151 + 1) + 40LL))(*((_QWORD *)v151 + 1));
    v33 = v68;
    if ( v68 )
      (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))v68)(v68);
    if ( v67 )
      (*(void (__fastcall **)(struct CHwLightCollectionBuffer *))(*(_QWORD *)v67 + 8LL))(v67);
    if ( *(_DWORD *)(v32 + 32) == 8
      && (!*(_BYTE *)(v32 + 4240) || !CBatchOptimizer::TryMergeOneLayer((CBatchOptimizer *)v32)) )
    {
      CBatchOptimizer::FlushBottomLayer((CBatchOptimizer *)v32);
      CBatchOptimizer::RecycleLayer((CBatchOptimizer *)v32, 0);
    }
    v69 = *(_OWORD *)(v32 + 16);
    v70 = *(_DWORD *)(v32 + 32) + 1;
    *(_DWORD *)(v32 + 32) = v70;
    *(_OWORD *)(520LL * *(int *)(v32 + 4LL * (v70 - 1) + 48) + v32 + 80) = v69;
    v46 = *(_DWORD *)(v32 + 32) - 1;
  }
  v57 = 520LL * *(int *)(v32 + 4LL * v46 + 48);
  v58 = v33;
  if ( !v33 )
    goto LABEL_72;
  if ( *(_DWORD *)(v57 + v32 + 100) )
  {
    v59 = *(_QWORD *)(v57 + v32 + 112);
    v33 = 0LL;
    *(_QWORD *)(v57 + v32 + 112) = v58;
    if ( v59 )
      goto LABEL_71;
    goto LABEL_72;
  }
  if ( *(_QWORD *)(v57 + v32 + 112) )
    goto LABEL_72;
  v74 = v33;
  if ( ((*(__int64 (__fastcall **)(struct CHwLightCollectionBuffer *))(*(_QWORD *)v33 + 72LL))(v33) & 0x10000) == 0 )
  {
    if ( v46 )
    {
      if ( !*(_DWORD *)(520LL * *(int *)(v32 + 4LL * v46 + 44) + v32 + 104) )
        *(_BYTE *)(v32 + 4240) = 1;
      goto LABEL_72;
    }
    goto LABEL_74;
  }
  v59 = *(_QWORD *)(v57 + v32 + 112);
  v33 = 0LL;
  *(_QWORD *)(v57 + v32 + 112) = v74;
  if ( v59 )
LABEL_71:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 8LL))(v59);
LABEL_72:
  if ( !v46 || *(_DWORD *)(v57 + v32 + 100) != 20 )
  {
LABEL_74:
    if ( *(_DWORD *)(v57 + v32 + 96) != 20 )
      goto LABEL_75;
  }
  CBatchOptimizer::ContinueLayer((CBatchOptimizer *)v32, v46);
LABEL_75:
  v60 = v147;
  v61 = 520LL * *(int *)(v32 + 4LL * v46 + 48);
  v147 = 0LL;
  v62 = v32 + v61;
  v63 = *(unsigned int *)(v62 + 96);
  *(_DWORD *)(v62 + 96) = v63 + 1;
  *(_QWORD *)(v62 + 8 * v63 + 120) = v60;
  if ( v46 )
    *(struct _D3DCOLORVALUE *)(v62 + 16LL * *(unsigned int *)(v62 + 100) + 280) = *(struct _D3DCOLORVALUE *)&v155.r;
  ++*(_DWORD *)(v62 + 100);
  if ( v33 )
    (*(void (__fastcall **)(struct CHwLightCollectionBuffer *))(*(_QWORD *)v33 + 8LL))(v33);
  v30 = v149;
LABEL_80:
  if ( v148 )
    std::deque<CMegaRect>::emplace_back<CRenderingBatchCommand * &>((char *)v30 + 112, &v148);
LABEL_82:
  if ( v147 )
    CBatchCommand::`scalar deleting destructor'(v147);
  return v13;
}
