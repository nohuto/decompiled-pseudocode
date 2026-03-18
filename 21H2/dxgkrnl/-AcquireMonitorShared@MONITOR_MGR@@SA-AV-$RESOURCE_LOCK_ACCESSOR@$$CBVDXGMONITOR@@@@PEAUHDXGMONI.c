/*
 * XREFs of ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08
 * Callers:
 *     MonitorFillMonitorDeviceInfo @ 0x1C0161AB8 (MonitorFillMonitorDeviceInfo.c)
 *     MonitorGetDisplayHdrSupportLevel @ 0x1C01638C4 (MonitorGetDisplayHdrSupportLevel.c)
 *     MonitorIsMonitorEdidless @ 0x1C0163930 (MonitorIsMonitorEdidless.c)
 *     MonitorGetDisplayIDFromMonitor @ 0x1C01639A0 (MonitorGetDisplayIDFromMonitor.c)
 *     MonitorGetPseudoSpecializedState @ 0x1C0163BCC (MonitorGetPseudoSpecializedState.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01659C0 (DxgkGetMonitorInternalInfo.c)
 *     MonitorGetMonitorOrientationsFromMonitor @ 0x1C0165F90 (MonitorGetMonitorOrientationsFromMonitor.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 *     _lambda_b5f01eb3f4b149c357ab2eab84592b3f_::operator() @ 0x1C01A267C (_lambda_b5f01eb3f4b149c357ab2eab84592b3f_--operator().c)
 *     MonitorGetAdvancedColorParams @ 0x1C01A6650 (MonitorGetAdvancedColorParams.c)
 *     MonitorGetNativeFlags @ 0x1C01A67CC (MonitorGetNativeFlags.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C01A68E8 (MonitorIsMonitorAndDriverWCGCapable.c)
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01A8DFC (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 *     MonitorGetIsAutoColorManagementSupported @ 0x1C01A9AC4 (MonitorGetIsAutoColorManagementSupported.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C01BACB8 (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C01BD518 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     MonitorGetNextFrequencyRange @ 0x1C01D1004 (MonitorGetNextFrequencyRange.c)
 *     MonitorGetUsageClass @ 0x1C01D7358 (MonitorGetUsageClass.c)
 *     MonitorGetPreferredMonitorSourceMode @ 0x1C01D7AD4 (MonitorGetPreferredMonitorSourceMode.c)
 *     MonitorIsAdvancedColorEnabled @ 0x1C01E06B4 (MonitorIsAdvancedColorEnabled.c)
 *     MonitorGetEdidFromMonitor @ 0x1C01E65CC (MonitorGetEdidFromMonitor.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0216DB4 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     MonitorGetLinkInfoFromMonitor @ 0x1C021726C (MonitorGetLinkInfoFromMonitor.c)
 *     MonitorIsPhysicalMonitor @ 0x1C02172D0 (MonitorIsPhysicalMonitor.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1C0224BB0 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 *     MonitorGetAdvancedColorMetadataOverride @ 0x1C03B0488 (MonitorGetAdvancedColorMetadataOverride.c)
 *     MonitorGetCachedApiGammaRampForDiagnostics @ 0x1C03B0530 (MonitorGetCachedApiGammaRampForDiagnostics.c)
 *     MonitorGetLidStateFromMonitor @ 0x1C03B05C4 (MonitorGetLidStateFromMonitor.c)
 *     MonitorGetSDRWhiteLevel @ 0x1C03B066C (MonitorGetSDRWhiteLevel.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C03B06F4 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorIsUsingDefaultMonitorProfile @ 0x1C03B0884 (MonitorIsUsingDefaultMonitorProfile.c)
 *     MonitorSerializeMonitor @ 0x1C03B0C40 (MonitorSerializeMonitor.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MONITOR_MGR::AcquireMonitorShared(_QWORD *a1, __int64 a2)
{
  if ( a2 )
  {
    *a1 = a2;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(a2 + 24), 1u);
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
