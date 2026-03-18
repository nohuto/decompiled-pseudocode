/*
 * XREFs of DpiGetDxgAdapter @ 0x1C0013B20
 * Callers:
 *     ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x1C003A020 (-DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z.c)
 *     DxgNotifyVSyncCB @ 0x1C0040870 (DxgNotifyVSyncCB.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x1C00408F0 (DxgPresentDisplayOnlyProgressCB.c)
 *     DxgSetPowerComponentActiveNoWaitCB @ 0x1C0040980 (DxgSetPowerComponentActiveNoWaitCB.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x1C00409B0 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 *     DxgSetPowerComponentIdleCB @ 0x1C0040A30 (DxgSetPowerComponentIdleCB.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x1C0040AB0 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgSetPowerComponentIdleForceAsyncCBInternal @ 0x1C0040B30 (DxgSetPowerComponentIdleForceAsyncCBInternal.c)
 *     DxgkCompleteFStateTransitionCB @ 0x1C0040E10 (DxgkCompleteFStateTransitionCB.c)
 *     DxgkCompletePStateTransitionCB @ 0x1C0040E90 (DxgkCompletePStateTransitionCB.c)
 *     DxgkHardwareContentProtectionTeardownCB @ 0x1C0041010 (DxgkHardwareContentProtectionTeardownCB.c)
 *     DxgkInvalidateHwContextCB @ 0x1C0041090 (DxgkInvalidateHwContextCB.c)
 *     DxgkMapFrameBufferPointerCB @ 0x1C0041190 (DxgkMapFrameBufferPointerCB.c)
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x1C0041280 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     DxgkPinFrameBufferForSaveCB @ 0x1C0041300 (DxgkPinFrameBufferForSaveCB.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x1C0041330 (DxgkPowerRuntimeControlRequestCB.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1C0041460 (DxgkSetPowerComponentLatencyCB.c)
 *     DxgkSetPowerComponentResidencyCB @ 0x1C00414E0 (DxgkSetPowerComponentResidencyCB.c)
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C0041560 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 *     DxgkUnmapFrameBufferPointerCB @ 0x1C00415E0 (DxgkUnmapFrameBufferPointerCB.c)
 *     DxgkUnpinFrameBufferForSaveCB @ 0x1C0041670 (DxgkUnpinFrameBufferForSaveCB.c)
 *     DxgkCbReportDiagnostic @ 0x1C004B0F0 (DxgkCbReportDiagnostic.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1C0143040 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     DxgDestroyContextAllocationCB @ 0x1C0143140 (DxgDestroyContextAllocationCB.c)
 *     DxgCreateContextAllocationCB @ 0x1C01431F0 (DxgCreateContextAllocationCB.c)
 *     DxgMiniportQueryMonitorInterfaceCB @ 0x1C01539F0 (DxgMiniportQueryMonitorInterfaceCB.c)
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0183D60 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0186FF0 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 *     DxgSetPowerComponentActiveCB @ 0x1C024D410 (DxgSetPowerComponentActiveCB.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C024D490 (DxgSetPowerComponentActiveCBInternal.c)
 *     DxgkMapContextAllocationCB @ 0x1C024D5B0 (DxgkMapContextAllocationCB.c)
 *     DxgkUpdateContextAllocationCB @ 0x1C024D650 (DxgkUpdateContextAllocationCB.c)
 *     ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C02F24D0 (-AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOUR.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C02F2F50 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C02F31A0 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 *     ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C02F3D30 (-ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDxgAdapter(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rax

  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    if ( v3 && *(_DWORD *)(v3 + 16) == 1953656900 && *(_DWORD *)(v3 + 20) == 2 )
      return *(_QWORD *)(v3 + 3896);
    v5 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v5 + 24) = a1;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(0LL, a2);
  }
  WdLogEvent5_WdError(v5);
  return 0LL;
}
