/*
 * XREFs of ?PreRender@CComposition@@IEAAJXZ @ 0x180071B10
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18006FCF0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180048170 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18005FB10 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180065F4C (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006EAC0 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800732C0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800AD744 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@detail.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B23CC (McGenEventWrite_EventWriteTransfer.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800C1558 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8E4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CleanPossibleDirtyInputSinkList@CInputSinkContext@@QEAAJAEBV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1800C9E64 (-CleanPossibleDirtyInputSinkList@CInputSinkContext@@QEAAJAEBV-$vector@PEAVCVisual@@V-$allocator@.c)
 *     ?FlushAllDevices@CDeviceManager@@QEAAXXZ @ 0x1800DA958 (-FlushAllDevices@CDeviceManager@@QEAAXXZ.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800DE5C0 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800DFDAC (-AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1C00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ?NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ @ 0x1800E58F4 (-NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800EB470 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     memmove_0 @ 0x1800F47E7 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180152A24 (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180152AF8 (McTemplateU0qqq_EventWriteTransfer.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801542D8 (McTemplateU0x_EventWriteTransfer.c)
 *     ??$emplace@AEBQEAVCRenderTarget@@@?$vector@PEAVCRenderTarget@@V?$allocator@PEAVCRenderTarget@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCRenderTarget@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCRenderTarget@@@std@@@std@@@1@AEBQEAVCRenderTarget@@@Z @ 0x180163AE0 (--$emplace@AEBQEAVCRenderTarget@@@-$vector@PEAVCRenderTarget@@V-$allocator@PEAVCRenderTarget@@@s.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x1801684F4 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180168D70 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180214140 (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 *     ?MarkHardwareProtectedResourcesInvalid@CD3DResourceManager@@QEAA_NXZ @ 0x18024CB40 (-MarkHardwareProtectedResourcesInvalid@CD3DResourceManager@@QEAA_NXZ.c)
 *     ?MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ @ 0x18024CBDC (-MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ.c)
 */

__int64 __fastcall CComposition::PreRender(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // r15
  RTL_SRWLOCK *v2; // rdi
  LARGE_INTEGER **Ptr; // rdx
  LARGE_INTEGER v4; // r8
  _QWORD *v5; // rcx
  __int64 v6; // rax
  PVOID v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // r13d
  _QWORD *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int i; // esi
  __int64 v15; // rbx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // ebx
  _QWORD *v20; // rsi
  unsigned int j; // ebx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  HANDLE CurrentThread; // rax
  BOOL v25; // eax
  unsigned int v26; // r8d
  CDeviceManager *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // rcx
  HANDLE v32; // rax
  BOOL v33; // eax
  __int64 v34; // r14
  char *v35; // rsi
  struct CRenderTarget **v36; // rbx
  unsigned __int64 v37; // r15
  struct CComposition *v38; // rcx
  __int64 v39; // rax
  struct CRenderTarget *v40; // rcx
  unsigned __int64 v41; // r12
  __int64 v42; // r15
  unsigned __int64 v43; // r13
  int v44; // edi
  CMILCOMBase *v45; // r14
  __int64 v46; // rcx
  int v47; // eax
  int v48; // ebx
  struct CRenderTarget **v49; // r14
  struct CRenderTarget **v50; // rbx
  struct CRenderTarget **v51; // rbx
  CMILCOMBase **v52; // rbx
  CMILCOMBase *v53; // rcx
  size_t v54; // r8
  char v55; // al
  char v56; // r15
  __int64 v57; // rcx
  void *v58; // rax
  int v59; // r8d
  unsigned int v60; // r12d
  _BYTE *v61; // rsi
  _BYTE *v62; // rdi
  char v63; // r14
  CMILCOMBase *v64; // rbx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rbx
  CD2DResourceManager *v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  bool v71; // cl
  char v72; // dl
  __int64 v73; // rcx
  __int64 v74; // r8
  _QWORD *v75; // rsi
  __int64 v76; // rcx
  __int64 v77; // r12
  __int64 v78; // r12
  _QWORD *v79; // rbx
  __int64 v80; // r14
  unsigned __int64 v81; // r15
  CD3DDevice *v82; // rcx
  PVOID v83; // rcx
  _BYTE *v84; // rax
  _DWORD *v85; // rbx
  int v86; // esi
  __int64 v87; // r14
  __int64 v88; // r8
  __int64 v89; // r8
  __int64 v90; // rcx
  __int64 v91; // r9
  unsigned int k; // r8d
  __int64 v93; // rax
  char *v94; // rbx
  char *v95; // rbx
  __int64 v96; // rsi
  char *v97; // rcx
  __int64 v98; // rax
  int v99; // ebx
  void (__fastcall ***v100)(_QWORD); // rcx
  __int64 v101; // r8
  __int64 v102; // r8
  unsigned __int64 v103; // rcx
  HANDLE v104; // rax
  BOOL v105; // eax
  _QWORD *v106; // rcx
  __int64 v107; // r15
  __int64 v108; // r15
  _QWORD *v109; // rbx
  __int64 v110; // r12
  unsigned __int64 v111; // rax
  __int64 v112; // rsi
  unsigned __int64 v113; // r14
  PVOID v114; // r15
  __int64 v115; // r14
  unsigned __int64 v116; // rsi
  unsigned __int64 v117; // r12
  __int64 v118; // rcx
  int v119; // eax
  __int64 v120; // rcx
  int v121; // ebx
  struct CRenderTarget **v122; // rsi
  struct CRenderTarget **v123; // rbx
  struct CRenderTarget **v124; // rbx
  __int64 v125; // rcx
  HANDLE v126; // rax
  BOOL ThreadCycleTime; // eax
  PSLIST_ENTRY v128; // rsi
  PSLIST_ENTRY m; // rbx
  _BYTE *v130; // rdx
  _BYTE *v131; // rcx
  PVOID v132; // rax
  int v133; // eax
  __int64 v134; // rcx
  void *v135; // rbx
  HANDLE ProcessHeap; // rax
  const struct D2D1_BEZIER_SEGMENT *v137; // rdx
  CDrawListPolygonBuilder *v138; // rcx
  unsigned int v139; // r8d
  PSLIST_ENTRY v140; // rbx
  char v142; // [rsp+40h] [rbp-1C8h]
  int v143; // [rsp+44h] [rbp-1C4h] BYREF
  char v144; // [rsp+48h] [rbp-1C0h]
  void *v145; // [rsp+50h] [rbp-1B8h] BYREF
  unsigned __int64 CycleTime; // [rsp+58h] [rbp-1B0h] BYREF
  int v147; // [rsp+60h] [rbp-1A8h] BYREF
  CMILCOMBase *v148; // [rsp+68h] [rbp-1A0h] BYREF
  void *v149; // [rsp+70h] [rbp-198h] BYREF
  void *v150; // [rsp+78h] [rbp-190h] BYREF
  unsigned __int64 v151; // [rsp+80h] [rbp-188h] BYREF
  unsigned __int64 v152; // [rsp+88h] [rbp-180h] BYREF
  RTL_SRWLOCK *v153; // [rsp+90h] [rbp-178h]
  unsigned int v154[2]; // [rsp+98h] [rbp-170h] BYREF
  _QWORD v155[2]; // [rsp+A0h] [rbp-168h] BYREF
  unsigned __int64 v156; // [rsp+B0h] [rbp-158h]
  char v157[8]; // [rsp+B8h] [rbp-150h] BYREF
  char v158[16]; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v159; // [rsp+D0h] [rbp-138h] BYREF
  char v160; // [rsp+D8h] [rbp-130h]
  __int64 v161; // [rsp+E0h] [rbp-128h]
  int v162; // [rsp+ECh] [rbp-11Ch]
  __int128 v163; // [rsp+F0h] [rbp-118h]
  __int64 v164; // [rsp+104h] [rbp-104h]
  __int64 v165; // [rsp+10Ch] [rbp-FCh]
  LPVOID lpMem; // [rsp+118h] [rbp-F0h]
  int v167; // [rsp+120h] [rbp-E8h]
  LARGE_INTEGER PerformanceCount[2]; // [rsp+140h] [rbp-C8h] BYREF
  _OWORD v169[2]; // [rsp+150h] [rbp-B8h] BYREF
  char v170[16]; // [rsp+170h] [rbp-98h] BYREF
  char v171[16]; // [rsp+180h] [rbp-88h] BYREF
  char v172[16]; // [rsp+190h] [rbp-78h] BYREF
  char v173[16]; // [rsp+1A0h] [rbp-68h] BYREF
  char v174[16]; // [rsp+1B0h] [rbp-58h] BYREF
  char v175[16]; // [rsp+1C0h] [rbp-48h] BYREF

  v1 = this + 65;
  v153 = this;
  v2 = this;
  AcquireSRWLockExclusive(this + 65);
  LODWORD(v1[1].Ptr) = GetCurrentThreadId();
  Ptr = (LARGE_INTEGER **)v2[43].Ptr;
  *(_OWORD *)&PerformanceCount[0].LowPart = 0LL;
  memset(v169, 0, sizeof(v169));
  if ( Ptr )
  {
    v2[42].Ptr = (PVOID)(*Ptr)[8];
    PerformanceCount[0] = (*Ptr)[7];
    v4 = (*Ptr)[31];
    PerformanceCount[1] = v4;
    LODWORD(v169[0]) = *((_DWORD *)Ptr + 4) + (*Ptr)[5].HighPart;
    *(LARGE_INTEGER *)((char *)v169 + 4) = (*Ptr)[35];
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount[1]);
    v4 = PerformanceCount[1];
    PerformanceCount[0].QuadPart = 0LL;
    LODWORD(v169[0]) = 0;
    *(_QWORD *)((char *)v169 + 4) = 0x10000003CLL;
  }
  v5 = v2[59].Ptr;
  v6 = *(_QWORD *)((char *)v169 + 4);
  v2[57].Ptr = (PVOID)v4;
  v5[519] = v6;
  v7 = v2[62].Ptr;
  *(_OWORD *)((char *)v169 + 12) = *(_OWORD *)&v2[144].Ptr;
  v8 = (*(__int64 (__fastcall **)(PVOID, LARGE_INTEGER *, void **))(*(_QWORD *)v7 + 16LL))(v7, PerformanceCount, &v150);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC6Fu, 0LL);
  if ( BYTE5(v2[141].Ptr) )
  {
    RtlPublishWnfStateData(WNF_DWM_COMPOSITIONCAPABILITIES, 0LL, 0LL, 0LL, 0LL);
    BYTE5(v2[141].Ptr) = 0;
  }
  v11 = v2[43].Ptr;
  if ( v11 )
  {
    v11 = (_QWORD *)*v11;
    v11[3] = v150;
  }
  v2[44].Ptr = v150;
  if ( DWORD1(v169[1]) )
    dword_1803472B0 |= 0x40u;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, &dword_1802DB4D0, 3u, v10, 0xCB6u, 0LL);
    goto LABEL_161;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x_EventWriteTransfer(v11, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Start, v2);
  v12 = (*(__int64 (__fastcall **)(PVOID, RTL_SRWLOCK *, PVOID))(*(_QWORD *)v2[62].Ptr + 48LL))(
          v2[62].Ptr,
          v2,
          v2[44].Ptr);
  v10 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xD47u, 0LL);
  for ( i = 0; i < LODWORD(v2[40].Ptr); ++i )
  {
    v13 = i;
    v15 = *((_QWORD *)v2[37].Ptr + i);
    if ( v15 )
    {
      v16 = *(_DWORD *)(v15 + 80);
      if ( v16 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000) != 0 )
        {
          McTemplateU0qqq_EventWriteTransfer(
            i,
            (unsigned int)&CHANNELBATCHES_PROCESSED,
            *(_DWORD *)(v15 + 16),
            *(_DWORD *)(v15 + 20),
            *(_DWORD *)(v15 + 80));
          v16 = *(_DWORD *)(v15 + 80);
        }
        dword_180347338 += v16;
        ++*(_DWORD *)(*(_QWORD *)(v15 + 40) + 36LL);
        *(_DWORD *)(v15 + 80) = 0;
      }
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x_EventWriteTransfer(v13, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Stop, v2);
  v17 = (*(__int64 (__fastcall **)(PVOID, __int64))(*(_QWORD *)v2[143].Ptr + 24LL))(v2[143].Ptr, 3LL);
  v19 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xD54u, 0LL);
  if ( !v10 )
    goto LABEL_31;
  if ( v10 < 0 )
  {
LABEL_216:
    MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_1802DB4D0, 3u, v10, 0xCB9u, 0LL);
    goto LABEL_161;
  }
  if ( v19 < 0 )
LABEL_31:
    v10 = v19;
  if ( v10 < 0 )
    goto LABEL_216;
  v20 = v2[34].Ptr;
  for ( j = 0; j < *((_DWORD *)v20 + 72); ++j )
  {
    v22 = v20[33];
    if ( *(_BYTE *)(*(_QWORD *)(v22 + 8LL * j) + 312LL) )
      InteractionSourceManager::UpdateActiveManipulations((InteractionSourceManager *)(*(_QWORD *)(v22 + 8LL * j) + 192LL));
  }
  v23 = 0LL;
  CycleTime = 0LL;
  if ( ::CycleTime )
  {
    CurrentThread = GetCurrentThread();
    v25 = QueryThreadCycleTime(CurrentThread, &CycleTime);
    v23 = CycleTime;
    if ( v25 )
      qword_1803472F0 += CycleTime - ::CycleTime;
  }
  v26 = `wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetImpl'::`2'::impl;
  ::CycleTime = v23;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v150 = *(void **)wil::details::FeatureImpl<__WilFeatureTraits_Feature_StereoscopicUwp>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetImpl'::`2'::impl,
                       v157);
    v26 = (unsigned int)v150;
  }
  v143 = 0;
  v144 = 0;
  wil::details::ReportUsageToService(&unk_18034B870, 13330426LL, (v26 >> 10) & 1, (v26 >> 11) & 1, &v143, 0, 3);
  if ( LOBYTE(v2[36].Ptr) )
  {
    CDeviceManager::FlushAllDevices(v27);
    LOBYTE(v2[36].Ptr) = 0;
  }
  v28 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)v2[12].Ptr + 32LL))(v2[12].Ptr);
  v10 = v28;
  if ( v28 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xD36u, 0LL);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v29, &dword_1802DB4D0, 3u, v10, 0xCC9u, 0LL);
  }
  else
  {
    v31 = 0LL;
    v151 = 0LL;
    if ( ::CycleTime )
    {
      v32 = GetCurrentThread();
      v33 = QueryThreadCycleTime(v32, &v151);
      v31 = v151;
      if ( v33 )
        qword_1803472F8 += v151 - ::CycleTime;
    }
    ::CycleTime = v31;
    v34 = 0LL;
    v35 = (char *)v2[11].Ptr;
    v143 = 0;
    CycleTime = 0LL;
    v36 = (struct CRenderTarget **)*((_QWORD *)v35 + 4);
    v37 = (unsigned __int64)(*((_QWORD *)v35 + 5) - (_QWORD)v36 + 7LL) >> 3;
    if ( (unsigned __int64)v36 > *((_QWORD *)v35 + 5) )
      v37 = 0LL;
    if ( v37 )
    {
      do
      {
        CRenderTargetManager::AddRenderTarget((CRenderTargetManager *)v35, *v36);
        ++v34;
        ++v36;
      }
      while ( v34 != v37 );
    }
    v38 = g_pComposition;
    *((_QWORD *)v35 + 5) = *((_QWORD *)v35 + 4);
    v39 = 0LL;
    if ( v38 )
      v39 = *((_QWORD *)v38 + 44);
    *((_QWORD *)v35 + 15) = v39;
    v35[132] = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Start,
        v30,
        1LL,
        v170);
    v40 = 0LL;
    v35[128] = 1;
    v41 = *((_QWORD *)v35 + 1);
    v42 = 0LL;
    v43 = (*((_QWORD *)v35 + 2) - v41 + 7) >> 3;
    if ( v41 > *((_QWORD *)v35 + 2) )
      v43 = 0LL;
    if ( v43 )
    {
      v44 = 0;
      do
      {
        v45 = *(CMILCOMBase **)v41;
        v46 = *(_QWORD *)v41 + *(int *)(*(_QWORD *)(*(_QWORD *)v41 + 72LL) + 12LL) + 72LL;
        v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 8LL))(v46);
        v48 = v47;
        if ( v47 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v40, 0LL, 0, v47, 0x57u, 0LL);
          if ( v44 >= 0 )
            v44 = v48;
        }
        else if ( v47 == 142213121 )
        {
          v145 = 0LL;
          if ( (int)CMILCOMBase::InternalQueryInterface(v45, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v145) >= 0 )
            CycleTime ^= (unsigned __int64)v45;
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v145);
        }
        else
        {
          v35[132] = 0;
        }
        v41 += 8LL;
        ++v42;
      }
      while ( v42 != v43 );
      v143 = v44;
      v2 = v153;
    }
    v35[128] = 0;
    v49 = (struct CRenderTarget **)*((_QWORD *)v35 + 8);
    v50 = (struct CRenderTarget **)*((_QWORD *)v35 + 7);
    if ( v50 != v49 )
    {
      do
        CRenderTargetManager::RemoveRenderTarget((CRenderTargetManager *)v35, *v50++);
      while ( v50 != v49 );
      v49 = (struct CRenderTarget **)*((_QWORD *)v35 + 8);
    }
    v51 = (struct CRenderTarget **)*((_QWORD *)v35 + 7);
    if ( v51 != v49 )
    {
      do
      {
        v40 = *v51;
        if ( *v51 )
          (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v40 + 16LL))(v40);
        ++v51;
      }
      while ( v51 != v49 );
      v51 = (struct CRenderTarget **)*((_QWORD *)v35 + 7);
    }
    *((_QWORD *)v35 + 8) = v51;
    if ( v35[130] || v35[131] )
    {
      v52 = (CMILCOMBase **)*((_QWORD *)v35 + 1);
      if ( (unsigned __int64)((__int64)(*((_QWORD *)v35 + 2) - (_QWORD)v52) >> 3) > 1 )
      {
        while ( v52 != *((CMILCOMBase ***)v35 + 2) )
        {
          v53 = *v52;
          v149 = 0LL;
          if ( (int)CMILCOMBase::InternalQueryInterface(v53, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v149) >= 0
            && (**(unsigned __int8 (__fastcall ***)(void *))v149)(v149) )
          {
            if ( v52 != *((CMILCOMBase ***)v35 + 1) )
            {
              v54 = *((_QWORD *)v35 + 2) - (_QWORD)(v52 + 1);
              v148 = *v52;
              memmove_0(v52, v52 + 1, v54);
              *((_QWORD *)v35 + 2) -= 8LL;
              std::vector<CRenderTarget *>::emplace<CRenderTarget * const &>(v35 + 8, v158, *((_QWORD *)v35 + 1), &v148);
            }
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v149);
            break;
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v149);
          ++v52;
        }
      }
      v40 = *(struct CRenderTarget **)(*(_QWORD *)v35 + 344LL);
      if ( v40 )
        *((_BYTE *)v40 + 20) = 1;
      v35[131] = 0;
    }
    if ( CycleTime != *((_QWORD *)v35 + 12) )
    {
      *((_QWORD *)v35 + 12) = CycleTime;
      CRenderTargetManager::NotifyTargetsOfOcclusionChange((CRenderTargetManager *)v35);
    }
    v55 = Microsoft_Windows_Dwm_CoreEnableBits;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Stop,
        v30,
        1LL,
        v171);
      v55 = Microsoft_Windows_Dwm_CoreEnableBits;
    }
    v10 = v143;
    if ( v143 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v40, &dword_1802DB4D0, 3u, v143, 0xCCEu, 0LL);
    }
    else
    {
      if ( (v55 & 2) != 0 )
        McTemplateU0q_EventWriteTransfer(v40, &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Start, 2000LL);
      v56 = 1;
      v142 = 1;
      v57 = *((_QWORD *)g_pComposition + 11);
      v58 = *(void **)(v57 + 104);
      v59 = *(_DWORD *)(v57 + 112);
      v145 = v58;
      if ( !(_DWORD)v58 || !HIDWORD(v58) )
      {
        v145 = (void *)0x43800000780LL;
        v59 = 4;
        LODWORD(v58) = 1920;
      }
      v60 = v59 * (((_DWORD)v58 + 255) & 0xFFFFFF00) * ((HIDWORD(v145) + 255) & 0xFFFFFF00)
          + ((v59 * (((_DWORD)v58 + 255) & 0xFFFFFF00) * ((HIDWORD(v145) + 255) & 0xFFFFFF00)) >> 2);
      EnterCriticalSection(&CriticalSection);
      v61 = (_BYTE *)qword_18034B648;
      if ( qword_18034B648 != (_QWORD)xmmword_18034B650 )
      {
        v62 = (_BYTE *)xmmword_18034B650;
        do
        {
          v63 = 0;
          v64 = *(CMILCOMBase **)(*(_QWORD *)v61 + 936LL);
          v148 = v64;
          EnterCriticalSection(&CriticalSection);
          v65 = qword_18034B648;
          if ( qword_18034B648 != (_QWORD)xmmword_18034B650 )
          {
            while ( 1 )
            {
              v66 = *(_QWORD *)v65;
              if ( __PAIR64__(HIDWORD(v148), (unsigned int)v64) == *(_QWORD *)(*(_QWORD *)v65 + 936LL) )
                break;
              v65 += 16LL;
              if ( v65 == (_QWORD)xmmword_18034B650 )
                goto LABEL_113;
            }
            if ( !*(_BYTE *)(v66 + 500) && !byte_18034B660 && *(_DWORD *)(v66 + 496) )
              v63 = 1;
          }
LABEL_113:
          LeaveCriticalSection(&CriticalSection);
          if ( v61[8] && !v63 )
          {
            v67 = *(_QWORD *)v61;
            v68 = *(CD2DResourceManager **)(*(_QWORD *)v61 + 224LL);
            if ( v68 )
              CD2DResourceManager::MarkHardwareProtectedResourcesInvalid(v68);
            v69 = *(_QWORD *)(v67 + 248);
            if ( v69 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 48LL))(v69);
            CD3DResourceManager::MarkHardwareProtectedResourcesInvalid((CD3DResourceManager *)(v67 + 1136));
          }
          v70 = *(_QWORD *)v61;
          v147 = 1;
          v71 = 1;
          if ( *(_QWORD *)(v70 + 240) )
          {
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD, int *))(**(_QWORD **)(v70 + 248) + 40LL))(
              *(_QWORD *)(v70 + 248),
              2000LL,
              v60,
              &v147);
            if ( v147 != 1 )
              v71 = 0;
          }
          v72 = 0;
          v61[8] = v63;
          if ( v71 )
            v72 = v56;
          v61 += 16;
          v56 = v72;
        }
        while ( v61 != v62 );
        v2 = v153;
        v142 = v72;
      }
      LeaveCriticalSection(&CriticalSection);
      if ( v56 )
      {
        v56 = (*(__int64 (__fastcall **)(PVOID, __int64))(*(_QWORD *)v2[64].Ptr + 32LL))(v2[64].Ptr, 2000LL);
        v142 = v56;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0q_EventWriteTransfer(v73, &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Stop, v56 != 0);
      v75 = v2[19].Ptr;
      if ( (__int64)(v75[6] - v75[5]) >> 3 && HIDWORD(v2[145].Ptr) && !LODWORD(v2[145].Ptr) )
      {
        CSceneResourceManager::EnsureSceneCompositor((CSceneResourceManager *)v2[19].Ptr);
      }
      else
      {
        v76 = v75[3];
        if ( v76 )
        {
          CD3DResource::RemoveResourceNotifier(
            (CD3DResource *)(v76 + 24),
            (const struct IDeviceResourceNotify *)v2[19].Ptr);
          v77 = v75[3];
          if ( v77 )
          {
            v78 = *(_QWORD *)(v77 + 112);
            if ( v78 )
            {
              v79 = (_QWORD *)v75[5];
              v80 = 0LL;
              v81 = (unsigned __int64)(v75[6] - (_QWORD)v79 + 7LL) >> 3;
              if ( (unsigned __int64)v79 > v75[6] )
                v81 = 0LL;
              if ( v81 )
              {
                do
                {
                  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v79 + 8LL))(*v79, v78);
                  ++v80;
                  ++v79;
                }
                while ( v80 != v81 );
              }
            }
          }
          wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset(v75 + 3);
        }
        v82 = (CD3DDevice *)v75[4];
        v75[4] = 0LL;
        if ( v82 )
          CD3DDevice::Release(v82);
      }
      v83 = v2[17].Ptr;
      if ( v83 )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v83 + 16LL))(v83);
      v84 = v2[11].Ptr;
      if ( !v84[132] || v84[133] )
      {
        if ( !v142 )
          (*(void (__fastcall **)(PVOID, __int64, __int64))(*(_QWORD *)v2[63].Ptr + 96LL))(v2[63].Ptr, 2000LL, 4LL);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Start,
            v74,
            1LL,
            v172);
        v99 = (int)v2[70].Ptr;
        while ( v99 )
        {
          v100 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v2[67].Ptr + (unsigned int)--v99);
          (**v100)(v100);
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Stop,
            v74,
            1LL,
            v173);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McGenEventWrite_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_PROCESS_EXPRESSIONS_Start,
              v101,
              1LL,
              v174);
        }
        CExpressionManager::UpdateExpressions(
          (CExpressionManager *)v2[34].Ptr,
          (unsigned __int64)v2[57].Ptr,
          (unsigned __int64)v2[44].Ptr);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_PROCESS_EXPRESSIONS_Stop,
            v102,
            1LL,
            v175);
        v103 = 0LL;
        v152 = 0LL;
        if ( ::CycleTime )
        {
          v104 = GetCurrentThread();
          v105 = QueryThreadCycleTime(v104, &v152);
          v103 = v152;
          if ( v105 )
            qword_180347300 += v152 - ::CycleTime;
        }
        ::CycleTime = v103;
        v106 = v2[19].Ptr;
        v107 = v106[3];
        if ( v107 )
        {
          v108 = *(_QWORD *)(v107 + 112);
          if ( v108 )
          {
            v109 = (_QWORD *)v106[5];
            v110 = *(_QWORD *)(v106[1] + 456LL);
            v111 = v106[6];
            v112 = 0LL;
            v113 = (v111 - (unsigned __int64)v109 + 7) >> 3;
            if ( (unsigned __int64)v109 > v111 )
              v113 = 0LL;
            if ( v113 )
            {
              do
              {
                (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v109 + 16LL))(*v109, v108, v110);
                ++v112;
                ++v109;
              }
              while ( v112 != v113 );
            }
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v108 + 96LL))(v108);
          }
        }
        v114 = v2[11].Ptr;
        v10 = 0;
        v115 = 0LL;
        *((_BYTE *)v114 + 128) = 1;
        v116 = *((_QWORD *)v114 + 1);
        v117 = (*((_QWORD *)v114 + 2) - v116 + 7) >> 3;
        if ( v116 > *((_QWORD *)v114 + 2) )
          v117 = 0LL;
        if ( v117 )
        {
          do
          {
            v118 = *(_QWORD *)v116 + 72LL + *(int *)(*(_QWORD *)(*(_QWORD *)v116 + 72LL) + 12LL);
            v119 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v118 + 16LL))(v118);
            v121 = v119;
            if ( v119 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v120, 0LL, 0, v119, 0x7Du, 0LL);
            if ( !v10 || v10 >= 0 && v121 < 0 )
              v10 = v121;
            v116 += 8LL;
            ++v115;
          }
          while ( v115 != v117 );
          v2 = v153;
        }
        *((_BYTE *)v114 + 128) = 0;
        v122 = (struct CRenderTarget **)*((_QWORD *)v114 + 8);
        v123 = (struct CRenderTarget **)*((_QWORD *)v114 + 7);
        if ( v123 != v122 )
        {
          do
            CRenderTargetManager::RemoveRenderTarget((CRenderTargetManager *)v114, *v123++);
          while ( v123 != v122 );
          v122 = (struct CRenderTarget **)*((_QWORD *)v114 + 8);
        }
        v124 = (struct CRenderTarget **)*((_QWORD *)v114 + 7);
        if ( v124 != v122 )
        {
          do
          {
            if ( *v124 )
              (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)*v124 + 16LL))(*v124);
            ++v124;
          }
          while ( v124 != v122 );
          v124 = (struct CRenderTarget **)*((_QWORD *)v114 + 7);
        }
        *((_QWORD *)v114 + 8) = v124;
        v125 = 0LL;
        *(_QWORD *)v154 = 0LL;
        if ( ::CycleTime )
        {
          v126 = GetCurrentThread();
          ThreadCycleTime = QueryThreadCycleTime(v126, (PULONG64)v154);
          v125 = *(_QWORD *)v154;
          if ( ThreadCycleTime )
            qword_180347308 += *(_QWORD *)v154 - ::CycleTime;
        }
        ::CycleTime = v125;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v125, &dword_1802DB4D0, 3u, v10, 0xCF4u, 0LL);
      }
      else
      {
        dword_1803472B0 |= 0x200u;
        v85 = v2[34].Ptr;
        v86 = v85[64] - 1;
        if ( v86 >= 0 )
        {
          v87 = 16LL * v86;
          do
          {
            if ( !CNotificationResource::ShouldNotify(*(CNotificationResource **)(v87 + *((_QWORD *)v85 + 29) + 8))
              && !CPtrArrayBase::GetCount((CPtrArrayBase *)(v88 + 24)) )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 16LL))(v89);
              v90 = (unsigned int)v85[64];
              if ( v86 < (unsigned int)v90 )
              {
                v91 = *((_QWORD *)v85 + 29);
                for ( k = v86; k < (int)v90 - 1; LODWORD(v90) = v85[64] )
                {
                  v93 = 2LL * k;
                  v90 = 2LL * ++k;
                  *(_OWORD *)(v91 + 8 * v93) = *(_OWORD *)(v91 + 8 * v90);
                }
                v85[64] = v90 - 1;
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(v90, 0LL, 0, -2147024809, 0x19Cu, 0LL);
              }
            }
            v87 -= 16LL;
            --v86;
          }
          while ( v86 >= 0 );
        }
      }
    }
    v1 = v2 + 65;
  }
LABEL_161:
  v94 = (char *)v2[14].Ptr;
  if ( v94 )
  {
    v95 = v94 + 104;
    while ( 1 )
    {
      v96 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)(v95 + 24));
      v97 = *(char **)v95;
      if ( *(char **)(*(_QWORD *)v95 + 8LL) != v95 || (v98 = *(_QWORD *)v97, *(char **)(*(_QWORD *)v97 + 8LL) != v97) )
        __fastfail(3u);
      *(_QWORD *)v95 = v98;
      *(_QWORD *)(v98 + 8) = v95;
      if ( v97 != v95 )
      {
        v96 = *((_QWORD *)v97 + 2);
        operator delete(v97);
        --*((_DWORD *)v95 + 4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v95 + 24));
      if ( !v96 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v96 + 16LL))(v96);
    }
  }
  v128 = InterlockedFlushSList((PSLIST_HEADER)&v2[138]);
  for ( m = v128; m; m = m->Next )
  {
    if ( BYTE4(v2[141].Ptr) )
      LODWORD(m[2].Next->Next) = -2147467260;
    else
      LODWORD(m[2].Next->Next) = ((__int64 (__fastcall *)(struct _SLIST_ENTRY *))m[1].Next->Next[13].Next)(m[1].Next);
  }
  v130 = v2[147].Ptr;
  v131 = v2[146].Ptr;
  v159 = 0LL;
  v160 = 0;
  v161 = 0LL;
  v165 = 0LL;
  lpMem = 0LL;
  v167 = 0;
  v164 = 0LL;
  v162 = 0;
  v163 = 0LL;
  if ( (v130 - v131) >> 3 )
  {
    while ( 1 )
    {
      v132 = v2[148].Ptr;
      v155[0] = v131;
      v155[1] = v130;
      v156 = (unsigned __int64)v132;
      v2[146].Ptr = 0LL;
      v2[147].Ptr = 0LL;
      v2[148].Ptr = 0LL;
      v133 = CInputSinkContext::CleanPossibleDirtyInputSinkList(&v159, v155);
      if ( v133 < 0 )
        break;
      if ( v155[0] )
        std::_Deallocate<16,0>(v155[0], (v156 - v155[0]) & 0xFFFFFFFFFFFFFFF8uLL);
      v130 = v2[147].Ptr;
      v131 = v2[146].Ptr;
      if ( !((v130 - v131) >> 3) )
        goto LABEL_232;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v134, 0LL, 0, v133, 0xDEEu, 0LL);
    if ( v155[0] )
      std::_Deallocate<16,0>(v155[0], (v156 - v155[0]) & 0xFFFFFFFFFFFFFFF8uLL);
LABEL_232:
    v135 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v135);
    }
  }
  LODWORD(v1[1].Ptr) = 0;
  ReleaseSRWLockExclusive(v1);
  if ( LOBYTE(v2[141].Ptr) )
  {
    v138 = (CDrawListPolygonBuilder *)*((_QWORD *)v2[13].Ptr + 3);
    if ( v138 )
      (*(void (__fastcall **)(CDrawListPolygonBuilder *))(*(_QWORD *)v138 + 16LL))(v138);
    LOBYTE(v2[141].Ptr) = 0;
  }
  while ( v128 )
  {
    v140 = v128;
    SetEvent(*((HANDLE *)&v128[1].Next + 1));
    v128 = v128->Next;
    operator delete(v140);
  }
  if ( dword_18034B530 )
    SetEvent(CManipulationManager::s_rghWaitEvents);
  CDrawListPolygonBuilder::AddBeziers(v138, v137, v139);
  return (unsigned int)v10;
}
