/*
 * XREFs of ?PreRender@CComposition@@IEAAJXZ @ 0x1800407A0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18003E980 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800323A0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003D750 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180041B70 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180042060 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?CleanPossibleDirtyInputSinkList@CComposition@@QEAAJXZ @ 0x180043750 (-CleanPossibleDirtyInputSinkList@CComposition@@QEAAJXZ.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180084D38 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@detail.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18008AA6C (McGenEventWrite_EventWriteTransfer.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800965EC (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x18009DEB0 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800B32C8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?FlushAllDevices@CDeviceManager@@QEAAXXZ @ 0x1800CE2A8 (-FlushAllDevices@CDeviceManager@@QEAAXXZ.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800D1E6C (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800D3B64 (-AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ?NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ @ 0x1800DFBD4 (-NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_29854332@@@details@wil@@QEAA_NXZ @ 0x1800E4B54 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_29854332@@@detail.c)
 *     memmove_0 @ 0x1800EBD77 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x180151E20 (-wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180155DC4 (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180155E98 (McTemplateU0qqq_EventWriteTransfer.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801576F4 (McTemplateU0x_EventWriteTransfer.c)
 *     ??$emplace@AEBQEAVCRenderTarget@@@?$vector@PEAVCRenderTarget@@V?$allocator@PEAVCRenderTarget@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCRenderTarget@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCRenderTarget@@@std@@@std@@@1@AEBQEAVCRenderTarget@@@Z @ 0x180167F20 (--$emplace@AEBQEAVCRenderTarget@@@-$vector@PEAVCRenderTarget@@V-$allocator@PEAVCRenderTarget@@@s.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18016C934 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18016D1C0 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180215D54 (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 *     ?MarkHardwareProtectedResourcesInvalid@CD3DResourceManager@@QEAA_NXZ @ 0x18024D8B0 (-MarkHardwareProtectedResourcesInvalid@CD3DResourceManager@@QEAA_NXZ.c)
 *     ?MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ @ 0x18024D94C (-MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ.c)
 */

__int64 __fastcall CComposition::PreRender(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // r14
  RTL_SRWLOCK *v2; // r13
  LARGE_INTEGER **Ptr; // rdx
  LARGE_INTEGER v4; // r8
  _QWORD *v5; // rcx
  __int64 v6; // rax
  PVOID v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // r12d
  _QWORD *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int i; // edi
  __int64 v15; // rbx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // ebx
  _QWORD *v20; // rdi
  unsigned int j; // ebx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  HANDLE CurrentThread; // rax
  BOOL v25; // eax
  unsigned int v26; // ebx
  int v27; // edi
  int v28; // ebx
  __int64 v29; // rax
  CDeviceManager *v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int64 v34; // rcx
  HANDLE v35; // rax
  BOOL v36; // eax
  __int64 v37; // rsi
  char *v38; // rdi
  struct CRenderTarget **v39; // rbx
  unsigned __int64 v40; // r14
  struct CComposition *v41; // rcx
  __int64 v42; // rax
  struct CRenderTarget *v43; // rcx
  unsigned __int64 v44; // r15
  __int64 v45; // r14
  unsigned __int64 v46; // r12
  int v47; // r13d
  CMILCOMBase *v48; // rsi
  __int64 v49; // rcx
  int v50; // eax
  int v51; // ebx
  struct CRenderTarget **v52; // rsi
  struct CRenderTarget **v53; // rbx
  struct CRenderTarget **v54; // rbx
  CMILCOMBase **v55; // rbx
  CMILCOMBase *v56; // rcx
  size_t v57; // r8
  char v58; // al
  char v59; // r14
  __int64 v60; // rcx
  void *v61; // rax
  int v62; // r8d
  unsigned int v63; // r15d
  _BYTE *v64; // rdi
  _BYTE *v65; // r13
  char v66; // si
  CMILCOMBase *v67; // rbx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rbx
  CD2DResourceManager *v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  bool v74; // cl
  char v75; // dl
  __int64 v76; // rcx
  __int64 v77; // r8
  _QWORD *v78; // rdi
  __int64 v79; // rcx
  __int64 v80; // r15
  __int64 v81; // r15
  _QWORD *v82; // rbx
  __int64 v83; // rsi
  unsigned __int64 v84; // r14
  CD3DDevice *v85; // rcx
  PVOID v86; // rcx
  _BYTE *v87; // rax
  _DWORD *v88; // rbx
  int v89; // edi
  __int64 v90; // rsi
  __int64 v91; // r8
  __int64 v92; // r8
  __int64 v93; // rcx
  __int64 v94; // r9
  unsigned int k; // r8d
  __int64 v96; // rax
  char *v97; // rbx
  char *v98; // rbx
  __int64 v99; // rdi
  char *v100; // rcx
  __int64 v101; // rax
  int v102; // ebx
  void (__fastcall ***v103)(_QWORD); // rcx
  __int64 v104; // r8
  __int64 v105; // r8
  unsigned __int64 v106; // rcx
  HANDLE v107; // rax
  BOOL v108; // eax
  _QWORD *v109; // rcx
  __int64 v110; // r14
  __int64 v111; // r14
  _QWORD *v112; // rbx
  __int64 v113; // r15
  unsigned __int64 v114; // rax
  __int64 v115; // rdi
  unsigned __int64 v116; // rsi
  PVOID v117; // r14
  __int64 v118; // rsi
  unsigned __int64 v119; // rdi
  unsigned __int64 v120; // r15
  __int64 v121; // rcx
  int v122; // eax
  __int64 v123; // rcx
  int v124; // ebx
  struct CRenderTarget **v125; // rdi
  struct CRenderTarget **v126; // rbx
  struct CRenderTarget **v127; // rbx
  unsigned __int64 v128; // rcx
  HANDLE v129; // rax
  BOOL v130; // eax
  int v131; // eax
  __int64 v132; // rcx
  PSLIST_ENTRY v133; // rdi
  PSLIST_ENTRY m; // rbx
  const struct D2D1_BEZIER_SEGMENT *v135; // rdx
  CDrawListPolygonBuilder *v136; // rcx
  unsigned int v137; // r8d
  PSLIST_ENTRY v138; // rbx
  char v140; // [rsp+50h] [rbp-188h]
  int v141; // [rsp+58h] [rbp-180h] BYREF
  void *v142; // [rsp+60h] [rbp-178h] BYREF
  unsigned __int64 CycleTime; // [rsp+68h] [rbp-170h] BYREF
  int v144; // [rsp+70h] [rbp-168h] BYREF
  CMILCOMBase *v145; // [rsp+78h] [rbp-160h] BYREF
  int v146; // [rsp+80h] [rbp-158h] BYREF
  char v147; // [rsp+84h] [rbp-154h]
  void *v148; // [rsp+88h] [rbp-150h] BYREF
  void *v149; // [rsp+90h] [rbp-148h] BYREF
  unsigned __int64 v150; // [rsp+98h] [rbp-140h] BYREF
  unsigned __int64 v151; // [rsp+A0h] [rbp-138h] BYREF
  RTL_SRWLOCK *v152; // [rsp+A8h] [rbp-130h]
  unsigned __int64 v153; // [rsp+B0h] [rbp-128h] BYREF
  char v154[8]; // [rsp+B8h] [rbp-120h] BYREF
  char v155[8]; // [rsp+C0h] [rbp-118h] BYREF
  char v156[24]; // [rsp+C8h] [rbp-110h] BYREF
  LARGE_INTEGER PerformanceCount[2]; // [rsp+E0h] [rbp-F8h] BYREF
  _OWORD v158[2]; // [rsp+F0h] [rbp-E8h] BYREF
  __int64 v159; // [rsp+110h] [rbp-C8h]
  int v160; // [rsp+118h] [rbp-C0h]
  __int64 v161; // [rsp+11Ch] [rbp-BCh]
  int v162; // [rsp+124h] [rbp-B4h]
  __int128 v163; // [rsp+128h] [rbp-B0h] BYREF
  __int64 v164; // [rsp+138h] [rbp-A0h]
  char v165[16]; // [rsp+140h] [rbp-98h] BYREF
  char v166[16]; // [rsp+150h] [rbp-88h] BYREF
  char v167[16]; // [rsp+160h] [rbp-78h] BYREF
  char v168[16]; // [rsp+170h] [rbp-68h] BYREF
  char v169[16]; // [rsp+180h] [rbp-58h] BYREF
  char v170[16]; // [rsp+190h] [rbp-48h] BYREF

  v1 = this + 65;
  v152 = this;
  v2 = this;
  AcquireSRWLockExclusive(this + 65);
  LODWORD(v1[1].Ptr) = GetCurrentThreadId();
  Ptr = (LARGE_INTEGER **)v2[43].Ptr;
  *(_OWORD *)&PerformanceCount[0].LowPart = 0LL;
  memset(v158, 0, sizeof(v158));
  if ( Ptr )
  {
    v2[42].Ptr = (PVOID)(*Ptr)[8];
    PerformanceCount[0] = (*Ptr)[7];
    v4 = (*Ptr)[31];
    PerformanceCount[1] = v4;
    LODWORD(v158[0]) = *((_DWORD *)Ptr + 4) + (*Ptr)[5].HighPart;
    *(LARGE_INTEGER *)((char *)v158 + 4) = (*Ptr)[35];
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount[1]);
    v4 = PerformanceCount[1];
    PerformanceCount[0].QuadPart = 0LL;
    LODWORD(v158[0]) = 0;
    *(_QWORD *)((char *)v158 + 4) = 0x10000003CLL;
  }
  v5 = v2[59].Ptr;
  v6 = *(_QWORD *)((char *)v158 + 4);
  v2[57].Ptr = (PVOID)v4;
  v5[519] = v6;
  v7 = v2[62].Ptr;
  *(_OWORD *)((char *)v158 + 12) = *(_OWORD *)&v2[144].Ptr;
  v8 = (*(__int64 (__fastcall **)(PVOID, LARGE_INTEGER *, void **))(*(_QWORD *)v7 + 16LL))(v7, PerformanceCount, &v149);
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
    v11[3] = v149;
  }
  v2[44].Ptr = v149;
  if ( DWORD1(v158[1]) )
    dword_180349290 |= 0x40u;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, &dword_1802DC1E8, 3u, v10, 0xCB6u, 0LL);
    goto LABEL_169;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x_EventWriteTransfer(v11, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Start, v2);
  v12 = (*(__int64 (__fastcall **)(PVOID, RTL_SRWLOCK *, PVOID))(*(_QWORD *)v2[62].Ptr + 48LL))(
          v2[62].Ptr,
          v2,
          v2[44].Ptr);
  v10 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xD55u, 0LL);
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
        dword_180349318 += v16;
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
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xD62u, 0LL);
  if ( !v10 )
    goto LABEL_31;
  if ( v10 < 0 )
  {
LABEL_227:
    MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_1802DC1E8, 3u, v10, 0xCB9u, 0LL);
    goto LABEL_169;
  }
  if ( v19 < 0 )
LABEL_31:
    v10 = v19;
  if ( v10 < 0 )
    goto LABEL_227;
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
      qword_1803492D0 += CycleTime - ::CycleTime;
  }
  v26 = `wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetImpl'::`2'::impl;
  ::CycleTime = v23;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v149 = *(void **)wil::details::FeatureImpl<__WilFeatureTraits_Feature_StereoscopicUwp>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetImpl'::`2'::impl,
                       v154);
    v26 = (unsigned int)v149;
  }
  v146 = 0;
  v147 = 0;
  v27 = (v26 >> 9) & 1;
  v141 = 3;
  v28 = (v26 >> 8) & 1;
  v29 = wil_details_FeatureReporting_RecordUsageInCache(v156, &unk_18034D838, 6LL);
  v163 = *(_OWORD *)v29;
  v164 = *(_QWORD *)(v29 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(13330426LL, 6LL, 1LL, &unk_18034D838, &v163);
    if ( v28 )
    {
      v159 = 0LL;
      v161 = 0LL;
      v160 = 6;
      v162 = v27;
      ((void (__fastcall *)(__int64, __int64, __int64))g_wil_details_recordFeatureUsage)(13330426LL, 6LL, 1LL);
    }
  }
  else if ( v28 )
  {
    wil_RtlStagingConfig_RecordFeatureUsage(0xCB67FAu, 6u, v27);
  }
  if ( !(_DWORD)v164 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0xCB67FAu,
      (const struct FEATURE_LOGGED_TRAITS *)&v146,
      0LL,
      0,
      (const enum wil_ReportingKind *)&v141,
      0LL,
      0,
      1uLL);
  if ( LOBYTE(v2[36].Ptr) )
  {
    CDeviceManager::FlushAllDevices(v30);
    LOBYTE(v2[36].Ptr) = 0;
  }
  v31 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)v2[12].Ptr + 32LL))(v2[12].Ptr);
  v10 = v31;
  if ( v31 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0xD44u, 0LL);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v32, &dword_1802DC1E8, 3u, v10, 0xCC9u, 0LL);
  }
  else
  {
    v34 = 0LL;
    v150 = 0LL;
    if ( ::CycleTime )
    {
      v35 = GetCurrentThread();
      v36 = QueryThreadCycleTime(v35, &v150);
      v34 = v150;
      if ( v36 )
        qword_1803492D8 += v150 - ::CycleTime;
    }
    ::CycleTime = v34;
    v37 = 0LL;
    v38 = (char *)v2[11].Ptr;
    v141 = 0;
    CycleTime = 0LL;
    v39 = (struct CRenderTarget **)*((_QWORD *)v38 + 4);
    v40 = (unsigned __int64)(*((_QWORD *)v38 + 5) - (_QWORD)v39 + 7LL) >> 3;
    if ( (unsigned __int64)v39 > *((_QWORD *)v38 + 5) )
      v40 = 0LL;
    if ( v40 )
    {
      do
      {
        CRenderTargetManager::AddRenderTarget((CRenderTargetManager *)v38, *v39);
        ++v37;
        ++v39;
      }
      while ( v37 != v40 );
    }
    v41 = g_pComposition;
    *((_QWORD *)v38 + 5) = *((_QWORD *)v38 + 4);
    v42 = 0LL;
    if ( v41 )
      v42 = *((_QWORD *)v41 + 44);
    *((_QWORD *)v38 + 15) = v42;
    v38[132] = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Start,
        v33,
        1LL,
        v165);
    v43 = 0LL;
    v38[128] = 1;
    v44 = *((_QWORD *)v38 + 1);
    v45 = 0LL;
    v46 = (*((_QWORD *)v38 + 2) - v44 + 7) >> 3;
    if ( v44 > *((_QWORD *)v38 + 2) )
      v46 = 0LL;
    if ( v46 )
    {
      v47 = 0;
      do
      {
        v48 = *(CMILCOMBase **)v44;
        v49 = *(_QWORD *)v44 + *(int *)(*(_QWORD *)(*(_QWORD *)v44 + 72LL) + 12LL) + 72LL;
        v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 8LL))(v49);
        v51 = v50;
        if ( v50 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v43, 0LL, 0, v50, 0x57u, 0LL);
          if ( v47 >= 0 )
            v47 = v51;
        }
        else if ( v50 == 142213121 )
        {
          v142 = 0LL;
          if ( (int)CMILCOMBase::InternalQueryInterface(v48, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v142) >= 0 )
            CycleTime ^= (unsigned __int64)v48;
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v142);
        }
        else
        {
          v38[132] = 0;
        }
        v44 += 8LL;
        ++v45;
      }
      while ( v45 != v46 );
      v141 = v47;
      v2 = v152;
    }
    v38[128] = 0;
    v52 = (struct CRenderTarget **)*((_QWORD *)v38 + 8);
    v53 = (struct CRenderTarget **)*((_QWORD *)v38 + 7);
    if ( v53 != v52 )
    {
      do
        CRenderTargetManager::RemoveRenderTarget((CRenderTargetManager *)v38, *v53++);
      while ( v53 != v52 );
      v52 = (struct CRenderTarget **)*((_QWORD *)v38 + 8);
    }
    v54 = (struct CRenderTarget **)*((_QWORD *)v38 + 7);
    if ( v54 != v52 )
    {
      do
      {
        v43 = *v54;
        if ( *v54 )
          (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v43 + 16LL))(v43);
        ++v54;
      }
      while ( v54 != v52 );
      v54 = (struct CRenderTarget **)*((_QWORD *)v38 + 7);
    }
    *((_QWORD *)v38 + 8) = v54;
    if ( v38[130] || v38[131] )
    {
      v55 = (CMILCOMBase **)*((_QWORD *)v38 + 1);
      if ( (unsigned __int64)((__int64)(*((_QWORD *)v38 + 2) - (_QWORD)v55) >> 3) > 1 )
      {
        while ( v55 != *((CMILCOMBase ***)v38 + 2) )
        {
          v56 = *v55;
          v148 = 0LL;
          if ( (int)CMILCOMBase::InternalQueryInterface(v56, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v148) >= 0
            && (**(unsigned __int8 (__fastcall ***)(void *))v148)(v148) )
          {
            if ( v55 != *((CMILCOMBase ***)v38 + 1) )
            {
              v57 = *((_QWORD *)v38 + 2) - (_QWORD)(v55 + 1);
              v145 = *v55;
              memmove_0(v55, v55 + 1, v57);
              *((_QWORD *)v38 + 2) -= 8LL;
              std::vector<CRenderTarget *>::emplace<CRenderTarget * const &>(v38 + 8, v155, *((_QWORD *)v38 + 1), &v145);
            }
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v148);
            break;
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v148);
          ++v55;
        }
      }
      v43 = *(struct CRenderTarget **)(*(_QWORD *)v38 + 344LL);
      if ( v43 )
        *((_BYTE *)v43 + 20) = 1;
      v38[131] = 0;
    }
    if ( CycleTime != *((_QWORD *)v38 + 12) )
    {
      *((_QWORD *)v38 + 12) = CycleTime;
      CRenderTargetManager::NotifyTargetsOfOcclusionChange((CRenderTargetManager *)v38);
    }
    v58 = Microsoft_Windows_Dwm_CoreEnableBits;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Stop,
        v33,
        1LL,
        v166);
      v58 = Microsoft_Windows_Dwm_CoreEnableBits;
    }
    v10 = v141;
    if ( v141 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v43, &dword_1802DC1E8, 3u, v141, 0xCCEu, 0LL);
    }
    else
    {
      if ( (v58 & 2) != 0 )
        McTemplateU0q_EventWriteTransfer(v43, &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Start, 2000LL);
      v59 = 1;
      v140 = 1;
      v60 = *((_QWORD *)g_pComposition + 11);
      v61 = *(void **)(v60 + 104);
      v62 = *(_DWORD *)(v60 + 112);
      v142 = v61;
      if ( !(_DWORD)v61 || !HIDWORD(v61) )
      {
        v142 = (void *)0x43800000780LL;
        v62 = 4;
        LODWORD(v61) = 1920;
      }
      v63 = v62 * (((_DWORD)v61 + 255) & 0xFFFFFF00) * ((HIDWORD(v142) + 255) & 0xFFFFFF00)
          + ((v62 * (((_DWORD)v61 + 255) & 0xFFFFFF00) * ((HIDWORD(v142) + 255) & 0xFFFFFF00)) >> 2);
      EnterCriticalSection(&CriticalSection);
      v64 = (_BYTE *)qword_18034D608;
      if ( qword_18034D608 != (_QWORD)xmmword_18034D610 )
      {
        v65 = (_BYTE *)xmmword_18034D610;
        do
        {
          v66 = 0;
          v67 = *(CMILCOMBase **)(*(_QWORD *)v64 + 936LL);
          v145 = v67;
          EnterCriticalSection(&CriticalSection);
          v68 = qword_18034D608;
          if ( qword_18034D608 != (_QWORD)xmmword_18034D610 )
          {
            while ( 1 )
            {
              v69 = *(_QWORD *)v68;
              if ( __PAIR64__(HIDWORD(v145), (unsigned int)v67) == *(_QWORD *)(*(_QWORD *)v68 + 936LL) )
                break;
              v68 += 16LL;
              if ( v68 == (_QWORD)xmmword_18034D610 )
                goto LABEL_121;
            }
            if ( !*(_BYTE *)(v69 + 500) && !byte_18034D620 && *(_DWORD *)(v69 + 496) )
              v66 = 1;
          }
LABEL_121:
          LeaveCriticalSection(&CriticalSection);
          if ( v64[8] && !v66 )
          {
            v70 = *(_QWORD *)v64;
            v71 = *(CD2DResourceManager **)(*(_QWORD *)v64 + 224LL);
            if ( v71 )
              CD2DResourceManager::MarkHardwareProtectedResourcesInvalid(v71);
            v72 = *(_QWORD *)(v70 + 248);
            if ( v72 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 48LL))(v72);
            CD3DResourceManager::MarkHardwareProtectedResourcesInvalid((CD3DResourceManager *)(v70 + 1136));
          }
          v73 = *(_QWORD *)v64;
          v144 = 1;
          v74 = 1;
          if ( *(_QWORD *)(v73 + 240) )
          {
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD, int *))(**(_QWORD **)(v73 + 248) + 40LL))(
              *(_QWORD *)(v73 + 248),
              2000LL,
              v63,
              &v144);
            if ( v144 != 1 )
              v74 = 0;
          }
          v75 = 0;
          v64[8] = v66;
          if ( v74 )
            v75 = v59;
          v64 += 16;
          v59 = v75;
        }
        while ( v64 != v65 );
        v2 = v152;
        v140 = v75;
      }
      LeaveCriticalSection(&CriticalSection);
      if ( v59 )
      {
        v59 = (*(__int64 (__fastcall **)(PVOID, __int64))(*(_QWORD *)v2[64].Ptr + 32LL))(v2[64].Ptr, 2000LL);
        v140 = v59;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0q_EventWriteTransfer(v76, &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Stop, v59 != 0);
      v78 = v2[19].Ptr;
      if ( (__int64)(v78[6] - v78[5]) >> 3 && HIDWORD(v2[145].Ptr) && !LODWORD(v2[145].Ptr) )
      {
        CSceneResourceManager::EnsureSceneCompositor((CSceneResourceManager *)v2[19].Ptr);
      }
      else
      {
        v79 = v78[3];
        if ( v79 )
        {
          CD3DResource::RemoveResourceNotifier(
            (CD3DResource *)(v79 + 24),
            (const struct IDeviceResourceNotify *)v2[19].Ptr);
          v80 = v78[3];
          if ( v80 )
          {
            v81 = *(_QWORD *)(v80 + 112);
            if ( v81 )
            {
              v82 = (_QWORD *)v78[5];
              v83 = 0LL;
              v84 = (unsigned __int64)(v78[6] - (_QWORD)v82 + 7LL) >> 3;
              if ( (unsigned __int64)v82 > v78[6] )
                v84 = 0LL;
              if ( v84 )
              {
                do
                {
                  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v82 + 8LL))(*v82, v81);
                  ++v83;
                  ++v82;
                }
                while ( v83 != v84 );
              }
            }
          }
          wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset(v78 + 3);
        }
        v85 = (CD3DDevice *)v78[4];
        v78[4] = 0LL;
        if ( v85 )
          CD3DDevice::Release(v85);
      }
      v86 = v2[17].Ptr;
      if ( v86 )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v86 + 16LL))(v86);
      v87 = v2[11].Ptr;
      if ( !v87[132] || v87[133] )
      {
        if ( !v140 )
          (*(void (__fastcall **)(PVOID, __int64, __int64))(*(_QWORD *)v2[63].Ptr + 96LL))(v2[63].Ptr, 2000LL, 4LL);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Start,
            v77,
            1LL,
            v167);
        v102 = (int)v2[70].Ptr;
        while ( v102 )
        {
          v103 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v2[67].Ptr + (unsigned int)--v102);
          (**v103)(v103);
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Stop,
            v77,
            1LL,
            v168);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McGenEventWrite_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_PROCESS_EXPRESSIONS_Start,
              v104,
              1LL,
              v169);
        }
        CExpressionManager::UpdateExpressions(
          (CExpressionManager *)v2[34].Ptr,
          (unsigned __int64)v2[57].Ptr,
          (unsigned __int64)v2[44].Ptr);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_PROCESS_EXPRESSIONS_Stop,
            v105,
            1LL,
            v170);
        v106 = 0LL;
        v151 = 0LL;
        if ( ::CycleTime )
        {
          v107 = GetCurrentThread();
          v108 = QueryThreadCycleTime(v107, &v151);
          v106 = v151;
          if ( v108 )
            qword_1803492E0 += v151 - ::CycleTime;
        }
        ::CycleTime = v106;
        v109 = v2[19].Ptr;
        v110 = v109[3];
        if ( v110 )
        {
          v111 = *(_QWORD *)(v110 + 112);
          if ( v111 )
          {
            v112 = (_QWORD *)v109[5];
            v113 = *(_QWORD *)(v109[1] + 456LL);
            v114 = v109[6];
            v115 = 0LL;
            v116 = (v114 - (unsigned __int64)v112 + 7) >> 3;
            if ( (unsigned __int64)v112 > v114 )
              v116 = 0LL;
            if ( v116 )
            {
              do
              {
                (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v112 + 16LL))(*v112, v111, v113);
                ++v115;
                ++v112;
              }
              while ( v115 != v116 );
            }
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v111 + 96LL))(v111);
          }
        }
        v117 = v2[11].Ptr;
        v10 = 0;
        v118 = 0LL;
        *((_BYTE *)v117 + 128) = 1;
        v119 = *((_QWORD *)v117 + 1);
        v120 = (*((_QWORD *)v117 + 2) - v119 + 7) >> 3;
        if ( v119 > *((_QWORD *)v117 + 2) )
          v120 = 0LL;
        if ( v120 )
        {
          do
          {
            v121 = *(_QWORD *)v119 + 72LL + *(int *)(*(_QWORD *)(*(_QWORD *)v119 + 72LL) + 12LL);
            v122 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v121 + 16LL))(v121);
            v124 = v122;
            if ( v122 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v123, 0LL, 0, v122, 0x7Du, 0LL);
            if ( !v10 || v10 >= 0 && v124 < 0 )
              v10 = v124;
            v119 += 8LL;
            ++v118;
          }
          while ( v118 != v120 );
          v2 = v152;
        }
        *((_BYTE *)v117 + 128) = 0;
        v125 = (struct CRenderTarget **)*((_QWORD *)v117 + 8);
        v126 = (struct CRenderTarget **)*((_QWORD *)v117 + 7);
        if ( v126 != v125 )
        {
          do
            CRenderTargetManager::RemoveRenderTarget((CRenderTargetManager *)v117, *v126++);
          while ( v126 != v125 );
          v125 = (struct CRenderTarget **)*((_QWORD *)v117 + 8);
        }
        v127 = (struct CRenderTarget **)*((_QWORD *)v117 + 7);
        if ( v127 != v125 )
        {
          do
          {
            if ( *v127 )
              (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)*v127 + 16LL))(*v127);
            ++v127;
          }
          while ( v127 != v125 );
          v127 = (struct CRenderTarget **)*((_QWORD *)v117 + 7);
        }
        *((_QWORD *)v117 + 8) = v127;
        v128 = 0LL;
        v153 = 0LL;
        if ( ::CycleTime )
        {
          v129 = GetCurrentThread();
          v130 = QueryThreadCycleTime(v129, &v153);
          v128 = v153;
          if ( v130 )
            qword_1803492E8 += v153 - ::CycleTime;
        }
        ::CycleTime = v128;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v128, &dword_1802DC1E8, 3u, v10, 0xCF4u, 0LL);
        }
        else if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_29854332>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2101c_29854332>::GetImpl'::`2'::impl) )
        {
          v131 = CComposition::CleanPossibleDirtyInputSinkList((CComposition *)v2);
          v10 = v131;
          if ( v131 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v132, &dword_1802DC1E8, 3u, v131, 0xCFEu, 0LL);
        }
      }
      else
      {
        dword_180349290 |= 0x200u;
        v88 = v2[34].Ptr;
        v89 = v88[64] - 1;
        if ( v89 >= 0 )
        {
          v90 = 16LL * v89;
          do
          {
            if ( !CNotificationResource::ShouldNotify(*(CNotificationResource **)(v90 + *((_QWORD *)v88 + 29) + 8))
              && !CPtrArrayBase::GetCount((CPtrArrayBase *)(v91 + 24)) )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 16LL))(v92);
              v93 = (unsigned int)v88[64];
              if ( v89 < (unsigned int)v93 )
              {
                v94 = *((_QWORD *)v88 + 29);
                for ( k = v89; k < (int)v93 - 1; LODWORD(v93) = v88[64] )
                {
                  v96 = 2LL * k;
                  v93 = 2LL * ++k;
                  *(_OWORD *)(v94 + 8 * v96) = *(_OWORD *)(v94 + 8 * v93);
                }
                v88[64] = v93 - 1;
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(v93, 0LL, 0, -2147024809, 0x19Cu, 0LL);
              }
            }
            v90 -= 16LL;
            --v89;
          }
          while ( v89 >= 0 );
        }
      }
    }
    v1 = v2 + 65;
  }
LABEL_169:
  v97 = (char *)v2[14].Ptr;
  if ( v97 )
  {
    v98 = v97 + 104;
    while ( 1 )
    {
      v99 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)(v98 + 24));
      v100 = *(char **)v98;
      if ( *(char **)(*(_QWORD *)v98 + 8LL) != v98
        || (v101 = *(_QWORD *)v100, *(char **)(*(_QWORD *)v100 + 8LL) != v100) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)v98 = v101;
      *(_QWORD *)(v101 + 8) = v98;
      if ( v100 != v98 )
      {
        v99 = *((_QWORD *)v100 + 2);
        operator delete(v100);
        --*((_DWORD *)v98 + 4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v98 + 24));
      if ( !v99 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v99 + 16LL))(v99);
    }
  }
  v133 = InterlockedFlushSList((PSLIST_HEADER)&v2[138]);
  for ( m = v133; m; m = m->Next )
  {
    if ( BYTE4(v2[141].Ptr) )
      LODWORD(m[2].Next->Next) = -2147467260;
    else
      LODWORD(m[2].Next->Next) = ((__int64 (__fastcall *)(struct _SLIST_ENTRY *))m[1].Next->Next[13].Next)(m[1].Next);
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_29854332>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2101c_29854332>::GetImpl'::`2'::impl) )
    CComposition::CleanPossibleDirtyInputSinkList((CComposition *)v2);
  LODWORD(v1[1].Ptr) = 0;
  ReleaseSRWLockExclusive(v1);
  if ( LOBYTE(v2[141].Ptr) )
  {
    v136 = (CDrawListPolygonBuilder *)*((_QWORD *)v2[13].Ptr + 3);
    if ( v136 )
      (*(void (__fastcall **)(CDrawListPolygonBuilder *))(*(_QWORD *)v136 + 16LL))(v136);
    LOBYTE(v2[141].Ptr) = 0;
  }
  while ( v133 )
  {
    v138 = v133;
    SetEvent(*((HANDLE *)&v133[1].Next + 1));
    v133 = v133->Next;
    operator delete(v138);
  }
  if ( dword_18034D4F0 )
    SetEvent(CManipulationManager::s_rghWaitEvents);
  CDrawListPolygonBuilder::AddBeziers(v136, v135, v137);
  return (unsigned int)v10;
}
