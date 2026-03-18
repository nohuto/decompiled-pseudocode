/*
 * XREFs of ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4
 * Callers:
 *     ?WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C0025CF0 (-WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX.c)
 *     DxgkProcessLockScreen @ 0x1C015D530 (DxgkProcessLockScreen.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C015FD14 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C01A4FF0 (DxgkGetDisplayConfigBufferSizes.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01ABA20 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C01ABFD8 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C01AD6E8 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x1C01B7C98 (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ.c)
 *     ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C01B81F8 (--RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C01BFF20 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01C88B4 (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1C01D9E5C (-DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 *     DxgkPreSessionDisconnected @ 0x1C01DA800 (DxgkPreSessionDisconnected.c)
 *     DxgkSessionDisconnected @ 0x1C01DA900 (DxgkSessionDisconnected.c)
 *     DxgkCompleteTopologyTransition @ 0x1C01DACE0 (DxgkCompleteTopologyTransition.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01DAF7C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     DxgkInternalDeviceIoctl @ 0x1C01E0A20 (DxgkInternalDeviceIoctl.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01E878C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C01ECBE0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z @ 0x1C01F2964 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z.c)
 *     ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1C0213380 (-AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z.c)
 *     ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C021B9C0 (-EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C021BA30 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     ?EnableDisplayTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C021C280 (-EnableDisplayTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C02252BC (-ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C02BB170 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x1C02BB444 (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02BE1F8 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkStartPnPStop @ 0x1C02C572C (DxgkStartPnPStop.c)
 *     ??0PDOBaseEnum@@QEAA@XZ @ 0x1C02E2E38 (--0PDOBaseEnum@@QEAA@XZ.c)
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1C02EF308 (-Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F20A0 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C03016F0 (-ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z @ 0x1C0304534 (-EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z.c)
 *     DxgkTrimProcessCommitment @ 0x1C0339230 (DxgkTrimProcessCommitment.c)
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0361A90 (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C03623F4 (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C03AEB50 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C03AEBF4 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C03AEC84 (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z @ 0x1C000E670 (-CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0021A48 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C01DB11C (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::IterateAdaptersWithCallback(
        __int64 a1,
        __int64 (__fastcall *a2)(_QWORD *, __int64),
        __int64 a3,
        __int64 a4)
{
  int v4; // r12d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v7; // r13d
  DXGSESSIONDATA *v8; // rsi
  __int64 v9; // rbx
  __int64 CurrentProcessSessionId; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rcx
  _QWORD *v15; // r15
  _QWORD *v16; // rdi
  signed __int64 v17; // rax
  signed __int64 v18; // rcx
  signed __int64 v19; // rtt
  __int64 v20; // rbx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  bool v28; // zf
  bool v29; // zf
  struct DXGTHREAD *Current; // rax
  _QWORD *i; // [rsp+50h] [rbp-30h]
  DXGFASTMUTEX *v32; // [rsp+60h] [rbp-20h] BYREF
  char v33; // [rsp+68h] [rbp-18h]
  DXGFASTMUTEX *v34; // [rsp+70h] [rbp-10h] BYREF
  char v35; // [rsp+78h] [rbp-8h]
  __int64 v36; // [rsp+C0h] [rbp+40h] BYREF
  __int64 (__fastcall *v37)(_QWORD *, __int64); // [rsp+C8h] [rbp+48h]
  __int64 v38; // [rsp+D0h] [rbp+50h]

  v38 = a3;
  v37 = a2;
  v34 = (DXGFASTMUTEX *)(a1 + 704);
  v35 = 0;
  v4 = a4;
  if ( a1 == -704 )
  {
    WdLogSingleEntry1(1LL, 573LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 573LL, 0LL, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v34 + 3) == CurrentThread )
  {
    WdLogSingleEntry1(1LL, 580LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 580LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = 0;
  if ( (PEPROCESS)PsGetCurrentProcess(CurrentThread, a2, a3, a4) == PsInitialSystemProcess )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
    v9 = *((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
    if ( v9 )
    {
      v33 = 0;
      CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
      v32 = (DXGFASTMUTEX *)(v9 + 88);
      if ( v9 == -88 )
      {
        WdLogSingleEntry1(1LL, 573LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 573LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *((struct _KTHREAD **)v32 + 3) == KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 580LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 580LL, 0LL, 0LL, 0LL, 0LL);
      }
      DXGFASTMUTEX::Acquire(v32);
      v33 = 1;
      if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v9 + 80) )
      {
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v32);
      }
      else
      {
        v8 = *(DXGSESSIONDATA **)(*(_QWORD *)(v9 + 48) + 8 * CurrentProcessSessionId);
        v33 = 0;
        DXGFASTMUTEX::Release((struct _KTHREAD **)v32);
      }
    }
  }
  if ( v4 != 5 || (unsigned int)DxgIsRemoteSessionUsingWddmMonitors() )
  {
    if ( v35 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, &v34, 0LL, 0LL);
    DXGFASTMUTEX::Acquire(v34);
    v14 = (_QWORD *)(a1 + 800);
    v35 = 1;
    v15 = *(_QWORD **)(a1 + 800);
    for ( i = (_QWORD *)(a1 + 800); ; v14 = i )
    {
      do
      {
LABEL_17:
        if ( v15 == v14 || !v15 || v7 )
          goto LABEL_38;
        v16 = v15;
        v15 = (_QWORD *)*v15;
        _m_prefetchw(v16 + 3);
        v17 = v16[3];
      }
      while ( !v17 );
      while ( 1 )
      {
        v18 = v17 + 1;
        v19 = v17;
        v17 = _InterlockedCompareExchange64(v16 + 3, v17 + 1, v17);
        if ( v19 == v17 )
          break;
        if ( !v17 )
          goto LABEL_66;
      }
      if ( v4 != 4 )
        break;
      if ( v16[350] && (!v16[349] || v8 && !DXGSESSIONDATA::CanEnumerateAdapter(v8, (struct DXGADAPTER *)v16)) )
        goto LABEL_34;
      if ( (v36 = 0LL,
            v20 = v16[568],
            CurrentProcess = PsGetCurrentProcess(v18, v11, v12, v13),
            ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess),
            (v23 = ProcessDxgProcess) != 0)
        && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
        || (Current = DXGTHREAD::GetCurrent()) == 0LL
        || (v24 = *((_QWORD *)Current + 3)) == 0 )
      {
        v24 = v23;
        if ( !v23 )
          goto LABEL_62;
      }
      v25 = *(_QWORD *)(v24 + 88);
      if ( v25 )
      {
        (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(v25 + 224))(0LL, &v36, 0LL);
        v26 = v36;
      }
      else
      {
LABEL_62:
        v26 = 0LL;
        v36 = 0LL;
      }
      if ( v26 != v20 )
        goto LABEL_34;
LABEL_33:
      v7 = v37(v16, v38);
LABEL_34:
      v14 = i;
      if ( _InterlockedExchangeAdd64(v16 + 3, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
        goto LABEL_17;
      DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v16[2], (struct DXGADAPTER *)v16);
LABEL_66:
      ;
    }
    if ( v4 != 5 )
    {
      switch ( v4 )
      {
        case 1:
          v29 = v16[349] == 0LL;
          break;
        case 2:
          v29 = v16[350] == 0LL;
          break;
        case 3:
          v28 = v16[349] == 0LL;
          goto LABEL_46;
        default:
          goto LABEL_50;
      }
      if ( v29 )
        goto LABEL_34;
      goto LABEL_50;
    }
    if ( !DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)v16) )
    {
      if ( v16[350] )
        goto LABEL_34;
      v28 = v16[568] == 0LL;
LABEL_46:
      if ( !v28 )
        goto LABEL_34;
    }
LABEL_50:
    if ( v8 && !DXGSESSIONDATA::CanEnumerateAdapter(v8, (struct DXGADAPTER *)v16) )
      goto LABEL_34;
    goto LABEL_33;
  }
  v7 = 0;
LABEL_38:
  if ( v35 )
  {
    v35 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v34);
  }
  return v7;
}
