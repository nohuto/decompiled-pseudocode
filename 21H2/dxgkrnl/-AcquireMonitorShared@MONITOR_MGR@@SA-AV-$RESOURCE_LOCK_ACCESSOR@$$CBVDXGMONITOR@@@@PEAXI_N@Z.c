/*
 * XREFs of ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000F304
 * Callers:
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C0163A38 (MonitorGetDpiInfoFromDescriptor.c)
 *     MonitorGetDeviceObject @ 0x1C01657A8 (MonitorGetDeviceObject.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C01A25F8 (MonitorGetMonitorOrientationsFromTarget.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01A4940 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     MonitorGetLinkInfoFromTarget @ 0x1C01A6260 (MonitorGetLinkInfoFromTarget.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C01AC3D4 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE44@Z @ 0x1C01AFC48 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C01AFF60 (IsVirtualizationDisabledForTarget.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01B06A0 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C01B633C (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01D2410 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C01D4290 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C01D4AE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     MonitorGetPreferredScaleFactor @ 0x1C01D59A4 (MonitorGetPreferredScaleFactor.c)
 *     MonitorIsBoostRefreshRateEnabledByDefault @ 0x1C01E316C (MonitorIsBoostRefreshRateEnabledByDefault.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0206954 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     MonitorGetContainerIDFromDescriptor @ 0x1C0206CC0 (MonitorGetContainerIDFromDescriptor.c)
 *     MonitorGetMonitorDescriptorIDs @ 0x1C0206E54 (MonitorGetMonitorDescriptorIDs.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0216DB4 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C03AC838 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C03AD350 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C03ADCB8 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C03B07D0 (MonitorIsMonitorVirtualModeDisabled.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01A2ECC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

struct DXGMONITOR **__fastcall MONITOR_MGR::AcquireMonitorShared(struct DXGMONITOR **a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  MONITOR_MGR *v7; // rcx
  struct DXGMONITOR *v8; // rdi
  struct DXGMONITOR *v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 2792);
  if ( !v3 )
  {
    WdLogSingleEntry0(1LL);
    v3 = *(_QWORD *)(a2 + 2792);
  }
  v7 = *(MONITOR_MGR **)(v3 + 112);
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, a2);
    goto LABEL_8;
  }
  v10 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v7, a3, 1u, &v10) < 0 )
  {
LABEL_8:
    *a1 = 0LL;
    return a1;
  }
  v8 = v10;
  *a1 = v10;
  if ( v8 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v8 + 24), 1u);
  }
  return a1;
}
