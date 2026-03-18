/*
 * XREFs of ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EFE18
 * Callers:
 *     MonitorSetLastWireformatAndColorspace @ 0x1C00DEA28 (MonitorSetLastWireformatAndColorspace.c)
 *     DpiPdoDispatchIoctl @ 0x1C00DF740 (DpiPdoDispatchIoctl.c)
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C00DFFEC (MonitorNotifyDXGIGammaRampChange.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00E4A24 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE4@Z @ 0x1C00E6760 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00EC88C (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     MonitorGetDeviceObject @ 0x1C00ED9EC (MonitorGetDeviceObject.c)
 *     ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00EE098 (-IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     MonitorGetLinkInfoFromTarget @ 0x1C00EF904 (MonitorGetLinkInfoFromTarget.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00EF9F4 (IsVirtualizationDisabledForTarget.c)
 *     MonitorGetMonitorHandle @ 0x1C00EFD00 (MonitorGetMonitorHandle.c)
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C0113ED0 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01223A0 (DxgkGetMonitorInternalInfo.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C012A63C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C013627C (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C01372D0 (MonitorGetDpiInfoFromDescriptor.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C013853C (MonitorGetMonitorDeviceInterfaceName.c)
 *     MonitorGetPreferredScaleFactor @ 0x1C0138704 (MonitorGetPreferredScaleFactor.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C013C270 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0154580 (DpiPdoDispatchInternalIoctl.c)
 *     MonitorIsMonitorConnected @ 0x1C01564C4 (MonitorIsMonitorConnected.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0159200 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0166FB8 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0167120 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01676EC (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C016A9C8 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     MonitorGetContainerIDFromDescriptor @ 0x1C016AD58 (MonitorGetContainerIDFromDescriptor.c)
 *     MonitorGetMonitorDescriptorIDs @ 0x1C016B4D8 (MonitorGetMonitorDescriptorIDs.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C016C5A4 (MonitorNotifyDeviceNodeReady.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C016C7D4 (MonitorCreatePhysicalMonitor.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C017F7D0 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0183D60 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0186FF0 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 *     ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C02A4A4C (-IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02E9240 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02E9D90 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C02EC818 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02ED0E4 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02ED968 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02EDD48 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02EDF20 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C02EE1E4 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C02EED40 (MonitorDisableMonitorVirtualModeSupport.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C02EF22C (MonitorGetEdidBaseBlockPtr.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C02EF560 (MonitorIsMonitorVirtualModeDisabled.c)
 *     MonitorSetPhysicalSizeOverride @ 0x1C02F045C (MonitorSetPhysicalSizeOverride.c)
 *     MonitorSetScaleFactorOverride @ 0x1C02F06DC (MonitorSetScaleFactorOverride.c)
 *     MonitorSetUsageClass @ 0x1C02F0828 (MonitorSetUsageClass.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C02F4600 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
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
