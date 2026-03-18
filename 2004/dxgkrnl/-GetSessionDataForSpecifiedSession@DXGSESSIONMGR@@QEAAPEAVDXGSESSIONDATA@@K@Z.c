/*
 * XREFs of ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00DD900 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1C00DEF08 (DxgkDestroyCsrssProcess.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C00DEFBC (DxgkRemoveSessionViewForCurrentSession.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C00DF124 (DxgkCreateSessionViewForCurrentSession.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00DF358 (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00E02F8 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00E1740 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C00F58B0 (DxgkGetPresentHistoryInternal.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C0104170 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01112C0 (DxgkGetAdapterDeviceDesc.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C0113640 (--1DXGPROCESS@@MEAA@XZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01142B4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C011D1F0 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C011EE7C (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C012D064 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C012FAF0 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     OutputDuplProcessTerminate @ 0x1C013C3F4 (OutputDuplProcessTerminate.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013FC34 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C014021C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C014369C (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C0143BF4 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C0143CCC (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C0144184 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01493BC (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01497D4 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkDisplayOnOff @ 0x1C014B4E0 (DxgkDisplayOnOff.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C014B850 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C014C304 (DxgkUseAdapterViewInCurrentSession.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0152630 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkPreSessionDisconnected @ 0x1C0159A30 (DxgkPreSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C0159C10 (DxgkSessionConnected.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C0159D4C (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0159DA4 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ @ 0x1C015A2D8 (--0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C015F0C8 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DxgkDispMgrOperation @ 0x1C0160D50 (DxgkDispMgrOperation.c)
 *     DxgkRegisterDwmProcess @ 0x1C0161650 (DxgkRegisterDwmProcess.c)
 *     ?DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z @ 0x1C0166390 (-DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C0166988 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01696F0 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C01699E8 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 *     DxgkNotifySessionStateChange @ 0x1C0169F30 (DxgkNotifySessionStateChange.c)
 *     DxgkGetScanLine @ 0x1C016BD50 (DxgkGetScanLine.c)
 *     DxgkGetAdapter @ 0x1C0174090 (DxgkGetAdapter.c)
 *     DxgkReleaseAdapter @ 0x1C0174230 (DxgkReleaseAdapter.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z @ 0x1C0174288 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z.c)
 *     DxgkSessionReconnected @ 0x1C01743C0 (DxgkSessionReconnected.c)
 *     DxgkGetUseHWGPUInRemoteSession @ 0x1C01746D0 (DxgkGetUseHWGPUInRemoteSession.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C0176C74 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     DpiFdoStartAdapter @ 0x1C0182794 (DpiFdoStartAdapter.c)
 *     DxgkAcquireGdiViewIds @ 0x1C0185CD0 (DxgkAcquireGdiViewIds.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C020CBEC (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C02236C0 (DxgkGetSharedPrimaryHandle.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0239210 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C025AE4C (DxgkIddHandleSetDisplayConfig.c)
 *     ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C0264350 (-IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C027DE68 (DxgkRedrawCursorForPostCompositon.c)
 *     ?DxgkSendCreateBundleObject@@YAJKPEAI0@Z @ 0x1C028A668 (-DxgkSendCreateBundleObject@@YAJKPEAI0@Z.c)
 *     ?DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z @ 0x1C028A81C (-DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z.c)
 *     ?DxgkSendDestroyBundleObject@@YAJI@Z @ 0x1C028A9D0 (-DxgkSendDestroyBundleObject@@YAJI@Z.c)
 *     ?CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C028C0F0 (-CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C028C4B0 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z.c)
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C028C924 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C028CAB8 (-Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C028CBA0 (-InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C028CDD0 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z.c)
 *     ?PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z @ 0x1C028D240 (-PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z.c)
 *     ?SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C028E1C8 (-SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C02990A8 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C02999C0 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1C029EEA0 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C029FA98 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     DxgkGetWddmRemoteSessionGdiViewRange @ 0x1C029FB80 (DxgkGetWddmRemoteSessionGdiViewRange.c)
 *     DxgkReleaseGdiViewId @ 0x1C029FCD4 (DxgkReleaseGdiViewId.c)
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C029FE98 (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C02A0C50 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C02A0FB8 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02A924C (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C02B0A34 (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 *     ?NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C02B54E0 (-NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     NtDxgkVailConnect @ 0x1C02B84D0 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x1C02B88E0 (NtDxgkVailDisconnect.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C02B8C00 (NtDxgkVailPromoteCompositionSurface.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E4814 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::GetSessionDataForSpecifiedSession(DXGSESSIONMGR *this, __int64 a2)
{
  __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  DXGFASTMUTEX *v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  v2 = (unsigned int)a2;
  v11 = (DXGSESSIONMGR *)((char *)this + 80);
  v12 = 0;
  if ( this == (DXGSESSIONMGR *)-80LL )
  {
    v8 = WdLogNewEntry5_WdAssertion(-80LL, a2);
    *(_QWORD *)(v8 + 24) = 762LL;
    WdLogEvent5_WdAssertion(v8);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v11 + 2) == CurrentThread )
  {
    v9 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
    *(_QWORD *)(v9 + 24) = 769LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( v12 )
  {
    v10 = WdLogNewEntry5_WdCriticalError(CurrentThread, a2);
    *(_QWORD *)(v10 + 40) = &v11;
    *(_QWORD *)(v10 + 24) = 275LL;
    *(_QWORD *)(v10 + 32) = 4LL;
    *(_OWORD *)(v10 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v10);
  }
  DXGFASTMUTEX::Acquire(v11);
  v12 = 1;
  if ( (unsigned int)v2 >= *((_DWORD *)this + 18) )
    v6 = 0LL;
  else
    v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v2);
  v12 = 0;
  DXGFASTMUTEX::Release((struct _KTHREAD **)v11, v5);
  return (struct DXGSESSIONDATA *)v6;
}
