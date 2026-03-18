/*
 * XREFs of ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0158B10 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C015FD14 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DxgkNotifySessionStateChange @ 0x1C0160C10 (DxgkNotifySessionStateChange.c)
 *     DxgkDisplayOnOff @ 0x1C0162A00 (DxgkDisplayOnOff.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0162E98 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0164D50 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01752C0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1C0177070 (DxgkWaitForVerticalBlankEventInternal.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C0178B20 (DxgkGetPresentHistoryInternal.c)
 *     DxgkGetDeviceStateInternal @ 0x1C017C6C0 (DxgkGetDeviceStateInternal.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01862D0 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C018DB90 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C019A588 (--1DXGPROCESS@@MEAA@XZ.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x1C01A32D0 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01A3640 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C01B3CC0 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1C01B6150 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C01B6D84 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C01B6E54 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BC204 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BF100 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C01C040C (DxgkCreateSessionViewForCurrentSession.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C01C0654 (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C01C0738 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C01C1110 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01C2A0C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C3530 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01C7600 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     DxgkRegisterDwmProcess @ 0x1C01C8180 (DxgkRegisterDwmProcess.c)
 *     DxgkDispMgrOperation @ 0x1C01C89E0 (DxgkDispMgrOperation.c)
 *     DxgkCheckMonitorPowerState @ 0x1C01CC2D0 (DxgkCheckMonitorPowerState.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1C01CCF40 (DxgkCheckVidPnExclusiveOwnership.c)
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C01D3878 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C01D642C (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C01D6B10 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 *     DxgkPreSessionDisconnected @ 0x1C01DA800 (DxgkPreSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C01DA9B0 (DxgkSessionConnected.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C01DAAB8 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C01DAB10 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ @ 0x1C01DB094 (--0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C01E1BC4 (DxgkUseAdapterViewInCurrentSession.c)
 *     ?DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z @ 0x1C01E4D80 (-DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01E9130 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C01E96AC (DxgkRemoveSessionViewForCurrentSession.c)
 *     DxgkDestroyCsrssProcess @ 0x1C01E9CA4 (DxgkDestroyCsrssProcess.c)
 *     DxgkGetScanLine @ 0x1C01EB450 (DxgkGetScanLine.c)
 *     DxgkGetAdapter @ 0x1C01F2740 (DxgkGetAdapter.c)
 *     DxgkReleaseAdapter @ 0x1C01F2910 (DxgkReleaseAdapter.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z @ 0x1C01F2964 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z.c)
 *     DxgkSessionReconnected @ 0x1C01F2CB0 (DxgkSessionReconnected.c)
 *     DxgkGetUseHWGPUInRemoteSession @ 0x1C01F2E60 (DxgkGetUseHWGPUInRemoteSession.c)
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FECEC (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C0210998 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     DxgkAcquireGdiViewIds @ 0x1C021AD08 (DxgkAcquireGdiViewIds.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02BA5BC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C02BB170 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C02D1520 (DxgkGetSharedPrimaryHandle.c)
 *     ?CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C02DF010 (-CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C02DF41C (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPa.c)
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C02DF8F4 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C02DFAD0 (-Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C02DFB90 (-InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1C02DFE10 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 *     ?PairedQueryStats@DXGCOMPOSITIONSURFACEPROXY@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C02E0320 (-PairedQueryStats@DXGCOMPOSITIONSURFACEPROXY@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z @ 0x1C02E0590 (-PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z.c)
 *     ?SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C02E1ABC (-SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EC214 (DxgkIddHandleSetDisplayConfig.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C02F37F4 (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02FA574 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C0304F80 (-IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C03204EC (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C0320F7C (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C0325B58 (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0326B70 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C0326FE0 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C032DE78 (DxgkRedrawCursorForPostCompositon.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1C03485B0 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C03493B4 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     DxgkGetWddmRemoteSessionGdiViewRange @ 0x1C03494F0 (DxgkGetWddmRemoteSessionGdiViewRange.c)
 *     DxgkReleaseGdiViewId @ 0x1C03496C8 (DxgkReleaseGdiViewId.c)
 *     ?NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C0351720 (-NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     NtDxgkVailConnect @ 0x1C0353FA0 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x1C0354450 (NtDxgkVailDisconnect.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C0354840 (NtDxgkVailPromoteCompositionSurface.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0362D5C (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C03A4D40 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
        DXGSESSIONMGR *this,
        unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  DXGFASTMUTEX *v6; // [rsp+50h] [rbp-18h]
  char v7; // [rsp+58h] [rbp-10h]

  v2 = a2;
  v6 = (DXGSESSIONMGR *)((char *)this + 88);
  v7 = 0;
  if ( this == (DXGSESSIONMGR *)-88LL )
  {
    WdLogSingleEntry1(1LL, 573LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 573LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v6 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 580LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 580LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire(v6);
  v7 = 1;
  if ( (unsigned int)v2 >= *((_DWORD *)this + 20) )
    v4 = 0LL;
  else
    v4 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v2);
  v7 = 0;
  DXGFASTMUTEX::Release((struct _KTHREAD **)v6);
  return (struct DXGSESSIONDATA *)v4;
}
