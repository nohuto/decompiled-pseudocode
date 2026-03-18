/*
 * XREFs of ?PreRender@CComposition@@IEAAJXZ @ 0x18005DE00
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18005BFE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18002DE30 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@detail.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18003CAA0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005ADB0 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18005F2F0 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18005F7E0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800A01FC (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800B9990 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD6F8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CleanPossibleDirtyInputSinkList@CInputSinkContext@@QEAAJAEBV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1800C6148 (-CleanPossibleDirtyInputSinkList@CInputSinkContext@@QEAAJAEBV-$vector@PEAVCVisual@@V-$allocator@.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800D600C (McGenEventWrite_EventWriteTransfer.c)
 *     ?FlushAllDevices@CDeviceManager@@QEAAXXZ @ 0x1800D63E8 (-FlushAllDevices@CDeviceManager@@QEAAXXZ.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800D9FAC (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800DB75C (-AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ?NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ @ 0x1800E1234 (-NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memmove_0 @ 0x1800EED27 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x180150210 (-wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180154254 (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180154328 (McTemplateU0qqq_EventWriteTransfer.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180155A68 (McTemplateU0x_EventWriteTransfer.c)
 *     ??$emplace@AEBQEAVCRenderTarget@@@?$vector@PEAVCRenderTarget@@V?$allocator@PEAVCRenderTarget@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCRenderTarget@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCRenderTarget@@@std@@@std@@@1@AEBQEAVCRenderTarget@@@Z @ 0x1801653C0 (--$emplace@AEBQEAVCRenderTarget@@@-$vector@PEAVCRenderTarget@@V-$allocator@PEAVCRenderTarget@@@s.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x180169DD4 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18016A660 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180213384 (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 *     ?MarkHardwareProtectedResourcesInvalid@CD3DResourceManager@@QEAA_NXZ @ 0x18024AE20 (-MarkHardwareProtectedResourcesInvalid@CD3DResourceManager@@QEAA_NXZ.c)
 *     ?MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ @ 0x18024AEBC (-MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ.c)
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
  unsigned int v26; // ebx
  int v27; // esi
  int v28; // ebx
  __int64 v29; // rax
  CDeviceManager *v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int64 v34; // rcx
  HANDLE v35; // rax
  BOOL v36; // eax
  __int64 v37; // r14
  char *v38; // rsi
  struct CRenderTarget **v39; // rbx
  unsigned __int64 v40; // r15
  struct CComposition *v41; // rcx
  __int64 v42; // rax
  struct CRenderTarget *v43; // rcx
  unsigned __int64 v44; // r12
  __int64 v45; // r15
  unsigned __int64 v46; // r13
  int v47; // edi
  CMILCOMBase *v48; // r14
  __int64 v49; // rcx
  int v50; // eax
  int v51; // ebx
  struct CRenderTarget **v52; // r14
  struct CRenderTarget **v53; // rbx
  struct CRenderTarget **v54; // rbx
  CMILCOMBase **v55; // rbx
  CMILCOMBase *v56; // rcx
  size_t v57; // r8
  char v58; // al
  char v59; // r15
  __int64 v60; // rcx
  void *v61; // rax
  int v62; // r8d
  unsigned int v63; // r12d
  _BYTE *v64; // rsi
  _BYTE *v65; // rdi
  char v66; // r14
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
  _QWORD *v78; // rsi
  __int64 v79; // rcx
  __int64 v80; // r12
  __int64 v81; // r12
  _QWORD *v82; // rbx
  __int64 v83; // r14
  unsigned __int64 v84; // r15
  CD3DDevice *v85; // rcx
  PVOID v86; // rcx
  _BYTE *v87; // rax
  _DWORD *v88; // rbx
  int v89; // esi
  __int64 v90; // r14
  __int64 v91; // r8
  __int64 v92; // r8
  __int64 v93; // rcx
  __int64 v94; // r9
  unsigned int k; // r8d
  __int64 v96; // rax
  char *v97; // rbx
  char *v98; // rbx
  __int64 v99; // rsi
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
  __int64 v110; // r15
  __int64 v111; // r15
  _QWORD *v112; // rbx
  __int64 v113; // r12
  unsigned __int64 v114; // rax
  __int64 v115; // rsi
  unsigned __int64 v116; // r14
  PVOID v117; // r15
  __int64 v118; // r14
  unsigned __int64 v119; // rsi
  unsigned __int64 v120; // r12
  __int64 v121; // rcx
  int v122; // eax
  __int64 v123; // rcx
  int v124; // ebx
  struct CRenderTarget **v125; // rsi
  struct CRenderTarget **v126; // rbx
  struct CRenderTarget **v127; // rbx
  __int64 v128; // rcx
  HANDLE v129; // rax
  BOOL ThreadCycleTime; // eax
  PSLIST_ENTRY v131; // rsi
  PSLIST_ENTRY m; // rbx
  _BYTE *v133; // rdx
  _BYTE *v134; // rcx
  PVOID v135; // rax
  int v136; // eax
  __int64 v137; // rcx
  void *v138; // rbx
  HANDLE ProcessHeap; // rax
  const struct D2D1_BEZIER_SEGMENT *v140; // rdx
  CDrawListPolygonBuilder *v141; // rcx
  unsigned int v142; // r8d
  PSLIST_ENTRY v143; // rbx
  char v145; // [rsp+50h] [rbp-208h]
  int v146; // [rsp+58h] [rbp-200h] BYREF
  void *v147; // [rsp+60h] [rbp-1F8h] BYREF
  unsigned __int64 CycleTime; // [rsp+68h] [rbp-1F0h] BYREF
  int v149; // [rsp+70h] [rbp-1E8h] BYREF
  CMILCOMBase *v150; // [rsp+78h] [rbp-1E0h] BYREF
  int v151; // [rsp+80h] [rbp-1D8h] BYREF
  char v152; // [rsp+84h] [rbp-1D4h]
  void *v153; // [rsp+88h] [rbp-1D0h] BYREF
  void *v154; // [rsp+90h] [rbp-1C8h] BYREF
  unsigned __int64 v155; // [rsp+98h] [rbp-1C0h] BYREF
  unsigned __int64 v156; // [rsp+A0h] [rbp-1B8h] BYREF
  RTL_SRWLOCK *v157; // [rsp+A8h] [rbp-1B0h]
  unsigned int v158[2]; // [rsp+B0h] [rbp-1A8h] BYREF
  _QWORD v159[2]; // [rsp+B8h] [rbp-1A0h] BYREF
  unsigned __int64 v160; // [rsp+C8h] [rbp-190h]
  signed __int32 v161; // [rsp+D0h] [rbp-188h] BYREF
  char v162[8]; // [rsp+D8h] [rbp-180h] BYREF
  __int64 v163; // [rsp+E0h] [rbp-178h] BYREF
  char v164; // [rsp+E8h] [rbp-170h]
  __int64 v165; // [rsp+F0h] [rbp-168h]
  int v166; // [rsp+FCh] [rbp-15Ch]
  __int128 v167; // [rsp+100h] [rbp-158h]
  __int64 v168; // [rsp+114h] [rbp-144h]
  __int64 v169; // [rsp+11Ch] [rbp-13Ch]
  LPVOID lpMem; // [rsp+128h] [rbp-130h]
  int v171; // [rsp+130h] [rbp-128h]
  char v172[24]; // [rsp+150h] [rbp-108h] BYREF
  LARGE_INTEGER PerformanceCount[2]; // [rsp+168h] [rbp-F0h] BYREF
  _OWORD v174[2]; // [rsp+178h] [rbp-E0h] BYREF
  __int64 v175; // [rsp+198h] [rbp-C0h]
  int v176; // [rsp+1A0h] [rbp-B8h]
  __int64 v177; // [rsp+1A4h] [rbp-B4h]
  int v178; // [rsp+1ACh] [rbp-ACh]
  __int128 v179; // [rsp+1B0h] [rbp-A8h] BYREF
  __int64 v180; // [rsp+1C0h] [rbp-98h]
  char v181[16]; // [rsp+1C8h] [rbp-90h] BYREF
  char v182[16]; // [rsp+1D8h] [rbp-80h] BYREF
  char v183[16]; // [rsp+1E8h] [rbp-70h] BYREF
  char v184[16]; // [rsp+1F8h] [rbp-60h] BYREF
  char v185[16]; // [rsp+208h] [rbp-50h] BYREF
  char v186[16]; // [rsp+218h] [rbp-40h] BYREF

  v1 = this + 65;
  v157 = this;
  v2 = this;
  AcquireSRWLockExclusive(this + 65);
  LODWORD(v1[1].Ptr) = GetCurrentThreadId();
  Ptr = (LARGE_INTEGER **)v2[43].Ptr;
  *(_OWORD *)&PerformanceCount[0].LowPart = 0LL;
  memset(v174, 0, sizeof(v174));
  if ( Ptr )
  {
    v2[42].Ptr = (PVOID)(*Ptr)[8];
    PerformanceCount[0] = (*Ptr)[7];
    v4 = (*Ptr)[31];
    PerformanceCount[1] = v4;
    LODWORD(v174[0]) = *((_DWORD *)Ptr + 4) + (*Ptr)[5].HighPart;
    *(LARGE_INTEGER *)((char *)v174 + 4) = (*Ptr)[35];
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount[1]);
    v4 = PerformanceCount[1];
    PerformanceCount[0].QuadPart = 0LL;
    LODWORD(v174[0]) = 0;
    *(_QWORD *)((char *)v174 + 4) = 0x10000003CLL;
  }
  v5 = v2[59].Ptr;
  v6 = *(_QWORD *)((char *)v174 + 4);
  v2[57].Ptr = (PVOID)v4;
  v5[519] = v6;
  v7 = v2[62].Ptr;
  *(_OWORD *)((char *)v174 + 12) = *(_OWORD *)&v2[144].Ptr;
  v8 = (*(__int64 (__fastcall **)(PVOID, LARGE_INTEGER *, void **))(*(_QWORD *)v7 + 16LL))(v7, PerformanceCount, &v154);
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
    v11[3] = v154;
  }
  v2[44].Ptr = v154;
  if ( DWORD1(v174[1]) )
    dword_180345290 |= 0x40u;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, &dword_1802D9270, 3u, v10, 0xCB6u, 0LL);
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
        dword_180345318 += v16;
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
LABEL_224:
    MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_1802D9270, 3u, v10, 0xCB9u, 0LL);
    goto LABEL_169;
  }
  if ( v19 < 0 )
LABEL_31:
    v10 = v19;
  if ( v10 < 0 )
    goto LABEL_224;
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
      qword_1803452D0 += CycleTime - ::CycleTime;
  }
  v26 = `wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetImpl'::`2'::impl;
  ::CycleTime = v23;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v154 = *(void **)wil::details::FeatureImpl<__WilFeatureTraits_Feature_StereoscopicUwp>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetImpl'::`2'::impl,
                       &v161);
    v26 = (unsigned int)v154;
  }
  v151 = 0;
  v152 = 0;
  v27 = (v26 >> 9) & 1;
  v146 = 3;
  v28 = (v26 >> 8) & 1;
  v29 = wil_details_FeatureReporting_RecordUsageInCache(v172, &unk_1803497B8, 6LL);
  v179 = *(_OWORD *)v29;
  v180 = *(_QWORD *)(v29 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(13330426LL, 6LL, 1LL, &unk_1803497B8, &v179);
    if ( v28 )
    {
      v175 = 0LL;
      v177 = 0LL;
      v176 = 6;
      v178 = v27;
      ((void (__fastcall *)(__int64, __int64, __int64))g_wil_details_recordFeatureUsage)(13330426LL, 6LL, 1LL);
    }
  }
  else if ( v28 )
  {
    wil_RtlStagingConfig_RecordFeatureUsage(0xCB67FAu, 6u, v27);
  }
  if ( !(_DWORD)v180 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0xCB67FAu,
      (const struct FEATURE_LOGGED_TRAITS *)&v151,
      0LL,
      0,
      (const enum wil_ReportingKind *)&v146,
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
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0xD36u, 0LL);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v32, &dword_1802D9270, 3u, v10, 0xCC9u, 0LL);
  }
  else
  {
    v34 = 0LL;
    v155 = 0LL;
    if ( ::CycleTime )
    {
      v35 = GetCurrentThread();
      v36 = QueryThreadCycleTime(v35, &v155);
      v34 = v155;
      if ( v36 )
        qword_1803452D8 += v155 - ::CycleTime;
    }
    ::CycleTime = v34;
    v37 = 0LL;
    v38 = (char *)v2[11].Ptr;
    v146 = 0;
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
        v181);
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
          v147 = 0LL;
          if ( (int)CMILCOMBase::InternalQueryInterface(v48, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v147) >= 0 )
            CycleTime ^= (unsigned __int64)v48;
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v147);
        }
        else
        {
          v38[132] = 0;
        }
        v44 += 8LL;
        ++v45;
      }
      while ( v45 != v46 );
      v146 = v47;
      v2 = v157;
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
          v153 = 0LL;
          if ( (int)CMILCOMBase::InternalQueryInterface(v56, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v153) >= 0
            && (**(unsigned __int8 (__fastcall ***)(void *))v153)(v153) )
          {
            if ( v55 != *((CMILCOMBase ***)v38 + 1) )
            {
              v57 = *((_QWORD *)v38 + 2) - (_QWORD)(v55 + 1);
              v150 = *v55;
              memmove_0(v55, v55 + 1, v57);
              *((_QWORD *)v38 + 2) -= 8LL;
              std::vector<CRenderTarget *>::emplace<CRenderTarget * const &>(v38 + 8, v162, *((_QWORD *)v38 + 1), &v150);
            }
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v153);
            break;
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v153);
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
        v182);
      v58 = Microsoft_Windows_Dwm_CoreEnableBits;
    }
    v10 = v146;
    if ( v146 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v43, &dword_1802D9270, 3u, v146, 0xCCEu, 0LL);
    }
    else
    {
      if ( (v58 & 2) != 0 )
        McTemplateU0q_EventWriteTransfer(v43, &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Start, 2000LL);
      v59 = 1;
      v145 = 1;
      v60 = *((_QWORD *)g_pComposition + 11);
      v61 = *(void **)(v60 + 104);
      v62 = *(_DWORD *)(v60 + 112);
      v147 = v61;
      if ( !(_DWORD)v61 || !HIDWORD(v61) )
      {
        v147 = (void *)0x43800000780LL;
        v62 = 4;
        LODWORD(v61) = 1920;
      }
      v63 = v62 * (((_DWORD)v61 + 255) & 0xFFFFFF00) * ((HIDWORD(v147) + 255) & 0xFFFFFF00)
          + ((v62 * (((_DWORD)v61 + 255) & 0xFFFFFF00) * ((HIDWORD(v147) + 255) & 0xFFFFFF00)) >> 2);
      EnterCriticalSection(&stru_180349580);
      v64 = (_BYTE *)qword_1803495A8;
      if ( qword_1803495A8 != (_QWORD)xmmword_1803495B0 )
      {
        v65 = (_BYTE *)xmmword_1803495B0;
        do
        {
          v66 = 0;
          v67 = *(CMILCOMBase **)(*(_QWORD *)v64 + 936LL);
          v150 = v67;
          EnterCriticalSection(&stru_180349580);
          v68 = qword_1803495A8;
          if ( qword_1803495A8 != (_QWORD)xmmword_1803495B0 )
          {
            while ( 1 )
            {
              v69 = *(_QWORD *)v68;
              if ( __PAIR64__(HIDWORD(v150), (unsigned int)v67) == *(_QWORD *)(*(_QWORD *)v68 + 936LL) )
                break;
              v68 += 16LL;
              if ( v68 == (_QWORD)xmmword_1803495B0 )
                goto LABEL_121;
            }
            if ( !*(_BYTE *)(v69 + 500) && !byte_1803495C0 && *(_DWORD *)(v69 + 496) )
              v66 = 1;
          }
LABEL_121:
          LeaveCriticalSection(&stru_180349580);
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
          v149 = 1;
          v74 = 1;
          if ( *(_QWORD *)(v73 + 240) )
          {
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD, int *))(**(_QWORD **)(v73 + 248) + 40LL))(
              *(_QWORD *)(v73 + 248),
              2000LL,
              v63,
              &v149);
            if ( v149 != 1 )
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
        v2 = v157;
        v145 = v75;
      }
      LeaveCriticalSection(&stru_180349580);
      if ( v59 )
      {
        v59 = (*(__int64 (__fastcall **)(PVOID, __int64))(*(_QWORD *)v2[64].Ptr + 32LL))(v2[64].Ptr, 2000LL);
        v145 = v59;
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
        if ( !v145 )
          (*(void (__fastcall **)(PVOID, __int64, __int64))(*(_QWORD *)v2[63].Ptr + 96LL))(v2[63].Ptr, 2000LL, 4LL);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Start,
            v77,
            1LL,
            v183);
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
            v184);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McGenEventWrite_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_PROCESS_EXPRESSIONS_Start,
              v104,
              1LL,
              v185);
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
            v186);
        v106 = 0LL;
        v156 = 0LL;
        if ( ::CycleTime )
        {
          v107 = GetCurrentThread();
          v108 = QueryThreadCycleTime(v107, &v156);
          v106 = v156;
          if ( v108 )
            qword_1803452E0 += v156 - ::CycleTime;
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
          v2 = v157;
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
        *(_QWORD *)v158 = 0LL;
        if ( ::CycleTime )
        {
          v129 = GetCurrentThread();
          ThreadCycleTime = QueryThreadCycleTime(v129, (PULONG64)v158);
          v128 = *(_QWORD *)v158;
          if ( ThreadCycleTime )
            qword_1803452E8 += *(_QWORD *)v158 - ::CycleTime;
        }
        ::CycleTime = v128;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v128, &dword_1802D9270, 3u, v10, 0xCF4u, 0LL);
      }
      else
      {
        dword_180345290 |= 0x200u;
        v88 = v2[34].Ptr;
        v89 = v88[64] - 1;
        if ( v89 >= 0 )
        {
          v90 = 16LL * v89;
          do
          {
            if ( !CNotificationResource::ShouldNotify(*(CNotificationResource **)(*((_QWORD *)v88 + 29) + v90 + 8))
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
        operator delete(v100, 0x18uLL);
        --*((_DWORD *)v98 + 4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v98 + 24));
      if ( !v99 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v99 + 16LL))(v99);
    }
  }
  v131 = InterlockedFlushSList((PSLIST_HEADER)&v2[138]);
  for ( m = v131; m; m = m->Next )
  {
    if ( BYTE4(v2[141].Ptr) )
      LODWORD(m[2].Next->Next) = -2147467260;
    else
      LODWORD(m[2].Next->Next) = ((__int64 (__fastcall *)(struct _SLIST_ENTRY *))m[1].Next->Next[13].Next)(m[1].Next);
  }
  v133 = v2[147].Ptr;
  v134 = v2[146].Ptr;
  v163 = 0LL;
  v164 = 0;
  v165 = 0LL;
  v169 = 0LL;
  lpMem = 0LL;
  v171 = 0;
  v168 = 0LL;
  v166 = 0;
  v167 = 0LL;
  if ( (v133 - v134) >> 3 )
  {
    while ( 1 )
    {
      v135 = v2[148].Ptr;
      v159[0] = v134;
      v159[1] = v133;
      v160 = (unsigned __int64)v135;
      v2[146].Ptr = 0LL;
      v2[147].Ptr = 0LL;
      v2[148].Ptr = 0LL;
      v136 = CInputSinkContext::CleanPossibleDirtyInputSinkList(&v163, v159);
      if ( v136 < 0 )
        break;
      if ( v159[0] )
        std::_Deallocate<16,0>(v159[0], (v160 - v159[0]) & 0xFFFFFFFFFFFFFFF8uLL);
      v133 = v2[147].Ptr;
      v134 = v2[146].Ptr;
      if ( !((v133 - v134) >> 3) )
        goto LABEL_240;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v137, 0LL, 0, v136, 0xDEEu, 0LL);
    if ( v159[0] )
      std::_Deallocate<16,0>(v159[0], (v160 - v159[0]) & 0xFFFFFFFFFFFFFFF8uLL);
LABEL_240:
    v138 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v138);
    }
  }
  LODWORD(v1[1].Ptr) = 0;
  ReleaseSRWLockExclusive(v1);
  if ( LOBYTE(v2[141].Ptr) )
  {
    v141 = (CDrawListPolygonBuilder *)*((_QWORD *)v2[13].Ptr + 3);
    if ( v141 )
      (*(void (__fastcall **)(CDrawListPolygonBuilder *))(*(_QWORD *)v141 + 16LL))(v141);
    LOBYTE(v2[141].Ptr) = 0;
  }
  while ( v131 )
  {
    v143 = v131;
    SetEvent(*((HANDLE *)&v131[1].Next + 1));
    v131 = v131->Next;
    operator delete(v143, 0x30uLL);
  }
  if ( dword_180349490 )
    SetEvent(CManipulationManager::s_rghWaitEvents);
  CDrawListPolygonBuilder::AddBeziers(v141, v140, v142);
  return (unsigned int)v10;
}
