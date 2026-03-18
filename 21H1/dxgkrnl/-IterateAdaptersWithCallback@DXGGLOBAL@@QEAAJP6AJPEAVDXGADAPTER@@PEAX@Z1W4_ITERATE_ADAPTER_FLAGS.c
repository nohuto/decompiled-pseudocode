/*
 * XREFs of ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C011739C
 * Callers:
 *     ?WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C0020FF0 (-WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX.c)
 *     ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C00E2FCC (--RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C00E3F90 (DxgkGetDisplayConfigBufferSizes.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00E73D0 (DxgkDisplayConfigDeviceInfo.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00E9F98 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00EBA90 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C00EC498 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C011BAD8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C0132734 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x1C0139DD0 (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ.c)
 *     ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1C014ACD8 (-DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 *     DxgkPreSessionDisconnected @ 0x1C014B500 (DxgkPreSessionDisconnected.c)
 *     DxgkSessionDisconnected @ 0x1C014B630 (DxgkSessionDisconnected.c)
 *     DxgkCompleteTopologyTransition @ 0x1C014B9F0 (DxgkCompleteTopologyTransition.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014BC90 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C014F0D8 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DxgkInternalDeviceIoctl @ 0x1C01501E0 (DxgkInternalDeviceIoctl.c)
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0152A40 (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C0158DFC (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C015D840 (DxgkQueryVidPnExclusiveOwnership.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z @ 0x1C0164838 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C016D50C (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1C017DB00 (-AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z.c)
 *     ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0188BA0 (-EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C020899C (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x1C0208BDC (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020B838 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0233F68 (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C0234754 (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 *     ?ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C025CF50 (-ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C027F934 (-ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 *     DxgkTrimProcessCommitment @ 0x1C0283550 (DxgkTrimProcessCommitment.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02925C8 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     DxgkProcessLockScreen @ 0x1C0299330 (DxgkProcessLockScreen.c)
 *     ?EnableDisplayTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C02AC150 (-EnableDisplayTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z @ 0x1C02AC1C0 (-EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z.c)
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1C02B6A74 (-Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z.c)
 *     ??0PDOBaseEnum@@QEAA@XZ @ 0x1C02BA49C (--0PDOBaseEnum@@QEAA@XZ.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02EADA0 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02EAE48 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02EAEEC (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z @ 0x1C000D3AC (-CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00112D4 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkQueryCurrentSessionData@@YAPEAVDXGSESSIONDATA@@XZ @ 0x1C01175EC (-DxgkQueryCurrentSessionData@@YAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C0127FA4 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026494C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::IterateAdaptersWithCallback(
        __int64 a1,
        __int64 (__fastcall *a2)(_QWORD *, __int64),
        __int64 a3,
        int a4)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v7; // r12d
  DXGSESSIONDATA *CurrentSessionData; // r15
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // r13
  _QWORD *v12; // rdi
  signed __int64 v13; // rax
  signed __int64 v14; // rcx
  signed __int64 v15; // rtt
  __int64 v16; // rbx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  bool v25; // zf
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rax
  struct DXGTHREAD *Current; // rax
  _QWORD *i; // [rsp+20h] [rbp-20h]
  __int64 v31; // [rsp+30h] [rbp-10h] BYREF
  char v32; // [rsp+38h] [rbp-8h]
  __int64 v33; // [rsp+80h] [rbp+40h] BYREF
  __int64 (__fastcall *v34)(_QWORD *, __int64); // [rsp+88h] [rbp+48h]
  __int64 v35; // [rsp+90h] [rbp+50h]

  v35 = a3;
  v34 = a2;
  v31 = a1 + 472;
  v32 = 0;
  if ( a1 == -472 )
  {
    v27 = WdLogNewEntry5_WdAssertion(-472LL, a2);
    *(_QWORD *)(v27 + 24) = 760LL;
    WdLogEvent5_WdAssertion(v27);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v31 + 16) == CurrentThread )
  {
    v28 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
    *(_QWORD *)(v28 + 24) = 767LL;
    WdLogEvent5_WdAssertion(v28);
  }
  v7 = 0;
  CurrentSessionData = DxgkQueryCurrentSessionData();
  if ( a4 != 5 || (unsigned int)DxgIsRemoteSessionUsingWddmMonitors() )
  {
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v31);
    v10 = (_QWORD *)(a1 + 552);
    v11 = *(_QWORD **)(a1 + 552);
    for ( i = (_QWORD *)(a1 + 552); ; v10 = i )
    {
      do
      {
LABEL_7:
        if ( v11 == v10 || !v11 || v7 )
          goto LABEL_28;
        v12 = v11;
        v11 = (_QWORD *)*v11;
        _m_prefetchw(v12 + 3);
        v13 = v12[3];
      }
      while ( !v13 );
      while ( 1 )
      {
        v14 = v13 + 1;
        v15 = v13;
        v13 = _InterlockedCompareExchange64(v12 + 3, v13 + 1, v13);
        if ( v15 == v13 )
          break;
        if ( !v13 )
          goto LABEL_53;
      }
      if ( a4 != 4 )
        break;
      if ( v12[335]
        && (!v12[334]
         || CurrentSessionData && !DXGSESSIONDATA::CanEnumerateAdapter(CurrentSessionData, (struct DXGADAPTER *)v12)) )
      {
        goto LABEL_25;
      }
      v16 = v12[545];
      v33 = 0LL;
      CurrentProcess = PsGetCurrentProcess(v14, v9);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      v20 = ProcessDxgProcess;
      if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
        || (Current = DXGTHREAD::GetCurrent(v19, v9)) == 0LL
        || (v21 = *((_QWORD *)Current + 1)) == 0 )
      {
        v21 = v20;
      }
      if ( v21 && (v22 = *(_QWORD *)(v21 + 88)) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(v22 + 224))(0LL, &v33, 0LL);
        v23 = v33;
      }
      else
      {
        v23 = 0LL;
        v33 = 0LL;
      }
      if ( v23 != v16 )
        goto LABEL_25;
LABEL_24:
      v7 = v34(v12, v35);
LABEL_25:
      v10 = i;
      if ( _InterlockedExchangeAdd64(v12 + 3, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
        goto LABEL_7;
      DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v12[2], (struct DXGADAPTER *)v12);
LABEL_53:
      ;
    }
    if ( a4 != 5 )
    {
      switch ( a4 )
      {
        case 1:
          v26 = v12[334] == 0LL;
          break;
        case 2:
          v26 = v12[335] == 0LL;
          break;
        case 3:
          v25 = v12[334] == 0LL;
          goto LABEL_36;
        default:
          goto LABEL_40;
      }
      if ( v26 )
        goto LABEL_25;
      goto LABEL_40;
    }
    if ( !DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)v12) )
    {
      if ( v12[335] )
        goto LABEL_25;
      v25 = v12[545] == 0LL;
LABEL_36:
      if ( !v25 )
        goto LABEL_25;
    }
LABEL_40:
    if ( CurrentSessionData && !DXGSESSIONDATA::CanEnumerateAdapter(CurrentSessionData, (struct DXGADAPTER *)v12) )
      goto LABEL_25;
    goto LABEL_24;
  }
LABEL_28:
  if ( v32 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v31, v9);
  return v7;
}
