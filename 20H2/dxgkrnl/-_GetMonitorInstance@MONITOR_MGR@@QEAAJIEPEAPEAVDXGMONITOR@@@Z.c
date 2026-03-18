/*
 * XREFs of ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0125308
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C0118150 (DxgkGetMonitorInternalInfo.c)
 *     ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C012358C (-IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     MonitorGetLinkInfoFromTarget @ 0x1C0124DF4 (MonitorGetLinkInfoFromTarget.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C0124EE4 (IsVirtualizationDisabledForTarget.c)
 *     MonitorGetMonitorHandle @ 0x1C01251F0 (MonitorGetMonitorHandle.c)
 *     MonitorGetDeviceObject @ 0x1C0127568 (MonitorGetDeviceObject.c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE4@Z @ 0x1C012B72C (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C012BEB4 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C012FB08 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C0130AA0 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0133FB0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0136F68 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C0138F14 (MonitorNotifyDXGIGammaRampChange.c)
 *     DpiPdoDispatchIoctl @ 0x1C013AB90 (DpiPdoDispatchIoctl.c)
 *     MonitorSetLastWireformatAndColorspace @ 0x1C013EAF0 (MonitorSetLastWireformatAndColorspace.c)
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C0140A9C (MonitorGetDpiInfoFromDescriptor.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C0141BEC (MonitorGetMonitorDeviceInterfaceName.c)
 *     MonitorGetPreferredScaleFactor @ 0x1C0141DB4 (MonitorGetPreferredScaleFactor.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C0145460 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01582A0 (DxgkQueryMonitorTypeLockHeld.c)
 *     MonitorIsMonitorConnected @ 0x1C015BC84 (MonitorIsMonitorConnected.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C01630D0 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C01881B4 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     MonitorGetContainerIDFromDescriptor @ 0x1C0188544 (MonitorGetContainerIDFromDescriptor.c)
 *     MonitorGetMonitorDescriptorIDs @ 0x1C0188CC4 (MonitorGetMonitorDescriptorIDs.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C0189D90 (MonitorNotifyDeviceNodeReady.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C0189FC0 (MonitorCreatePhysicalMonitor.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018A14C (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018A2B4 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018A3CC (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C018B6E0 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0192C90 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0196010 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 *     ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C02A7F5C (-IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02EC810 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02ED360 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C02EFDE8 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F06B4 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F0F38 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F1318 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F14F0 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C02F17B4 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C02F2310 (MonitorDisableMonitorVirtualModeSupport.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C02F27FC (MonitorGetEdidBaseBlockPtr.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C02F2B30 (MonitorIsMonitorVirtualModeDisabled.c)
 *     MonitorSetPhysicalSizeOverride @ 0x1C02F3A2C (MonitorSetPhysicalSizeOverride.c)
 *     MonitorSetScaleFactorOverride @ 0x1C02F3CAC (MonitorSetScaleFactorOverride.c)
 *     MonitorSetUsageClass @ 0x1C02F3DF8 (MonitorSetUsageClass.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C02F7BD0 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_GetMonitorInstance(
        struct _FAST_MUTEX *this,
        __int64 a2,
        char a3,
        struct DXGMONITOR **a4)
{
  __int64 v4; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG *p_Contention; // rdx
  char *i; // rcx
  char *v12; // rax
  unsigned int v13; // edi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  v4 = (unsigned int)a2;
  if ( !a4 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v17);
  }
  *a4 = 0LL;
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v18);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  for ( i = *(char **)&this[2].Contention; i != (char *)p_Contention; i = (char *)*((_QWORD *)v12 + 2) )
  {
    v12 = i - 16;
    if ( !i )
      v12 = 0LL;
    if ( !v12 )
      break;
    if ( *((_DWORD *)v12 + 11) == (_DWORD)v4 )
    {
      if ( a3 && *((_DWORD *)v12 + 108) != 1 )
        v12 = (char *)*((_QWORD *)v12 + 55);
      if ( v12 )
      {
        *a4 = (struct DXGMONITOR *)v12;
        v13 = 0;
        goto LABEL_18;
      }
      break;
    }
  }
  v15 = WdLogNewEntry5_WdTrace(i, p_Contention, v8, v9);
  v13 = -1073741275;
  *(_QWORD *)(v15 + 24) = v4;
  *(_QWORD *)(v15 + 32) = this;
LABEL_18:
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v19 = WdLogNewEntry5_WdAssertion(i, p_Contention);
    WdLogEvent5_WdAssertion(v19);
  }
  KeReleaseGuardedMutex(this + 3);
  return v13;
}
