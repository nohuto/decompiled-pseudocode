/*
 * XREFs of MonitorGetMonitorHandle @ 0x1C01A0DA4
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C01659C0 (DxgkGetMonitorInternalInfo.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01D2410 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C01D5A2C (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C01D73F8 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C01E63E0 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0216DB4 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C021A870 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1C0224BB0 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 *     DxgkIsMonitorConnected @ 0x1C02D2120 (DxgkIsMonitorConnected.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C02F2F10 (DxgkHandleForceProjectionMonitor.c)
 *     ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C03B1FC0 (-AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOUR.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C03B2840 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 * Callees:
 *     ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C01A0644 (-_AddReference@DXGMONITOR@@QEAAXPEAX@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01A2ECC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorHandle(__int64 a1, __int64 a2, unsigned __int8 a3, void *a4, DXGMONITOR **a5)
{
  __int64 v6; // r14
  __int64 v9; // rax
  DXGMONITOR **v10; // rsi
  __int64 v11; // rdi
  MONITOR_MGR *v12; // rdi
  int MonitorInstance; // eax
  unsigned int v14; // ebx
  DXGMONITOR *v15; // rbx
  DXGMONITOR *v17; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned int)a2;
  v9 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v9 + 24) = v6;
  *(_QWORD *)(v9 + 32) = a1;
  if ( !a1 )
    return 3221225485LL;
  v10 = a5;
  if ( !a5 || (_DWORD)v6 == -1 )
    return 3221225485LL;
  *a5 = 0LL;
  v11 = *(_QWORD *)(a1 + 2792);
  if ( !v11 )
  {
    WdLogSingleEntry0(1LL);
    v11 = *(_QWORD *)(a1 + 2792);
  }
  v12 = *(MONITOR_MGR **)(v11 + 112);
  if ( !v12 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3221225485LL;
  }
  v17 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v12, v6, a3, &v17);
  v14 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    WdLogSingleEntry2(7LL, (unsigned int)v6, v12);
    return 3221226021LL;
  }
  else if ( MonitorInstance < 0 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)v6, v12);
    return v14;
  }
  else
  {
    v15 = v17;
    if ( !v17 )
      WdLogSingleEntry0(1LL);
    DXGMONITOR::_AddReference(v15, a4);
    if ( !v15 )
      WdLogSingleEntry0(1LL);
    *v10 = v15;
    return 0LL;
  }
}
