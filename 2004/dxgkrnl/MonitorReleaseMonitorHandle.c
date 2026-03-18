/*
 * XREFs of MonitorReleaseMonitorHandle @ 0x1C012C2CC
 * Callers:
 *     _DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1C0026A48 (_DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C005A280 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01112C0 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01192D0 (DxgkGetMonitorInternalInfo.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0128950 (DxgkDisplayConfigDeviceInfo.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C0143058 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C014495C (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0159450 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C0166B90 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C0186D10 (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C01950EC (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     DxgkIsMonitorConnected @ 0x1C0224080 (DxgkIsMonitorConnected.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C0297820 (DxgkHandleForceProjectionMonitor.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1C02A3B70 (-PopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI.c)
 *     ?ReleaseMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C02E38A0 (-ReleaseMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMD.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C02F74C0 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C02F7710 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 *     ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C02F82A0 (-ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorReleaseMonitorHandle(__int64 a1, __int64 a2, void *a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v7 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = a1;
  if ( a1 && a2 )
  {
    v10 = *(_QWORD *)(a1 + 2696);
    if ( !v10 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v12);
      v10 = *(_QWORD *)(a1 + 2696);
    }
    if ( *(_QWORD *)(v10 + 96) )
    {
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a2 + 400), a3, 0x20u);
      return 0LL;
    }
    v13 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
  }
  return 3221225485LL;
}
