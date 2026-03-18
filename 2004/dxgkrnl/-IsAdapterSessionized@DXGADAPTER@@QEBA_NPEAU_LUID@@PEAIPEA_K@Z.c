/*
 * XREFs of ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000CFDC
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0128950 (DxgkDisplayConfigDeviceInfo.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C013BF44 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0141DF0 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C01488B0 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C015CCDC (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     DpiPdoDispatchPnp @ 0x1C0163780 (DpiPdoDispatchPnp.c)
 *     ?EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0175070 (-EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?ProcessHPDFiltering@VIDPN_MGR@@QEAA?AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1C0175BF4 (-ProcessHPDFiltering@VIDPN_MGR@@QEAA-AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEA.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017890C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     DpiFdoStartAdapter @ 0x1C0182794 (DpiFdoStartAdapter.c)
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C0185698 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C01950EC (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C020C1A4 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C020DF2C (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0214698 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02147EC (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C0215178 (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1C0215AE8 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z @ 0x1C0215C7C (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0226618 (DxgkSetIndirectDisplayRenderAdapter.c)
 *     _lambda_4498cf4aa093f7a41b3920419f3e92d9_::operator() @ 0x1C025A9FC (_lambda_4498cf4aa093f7a41b3920419f3e92d9_--operator().c)
 *     DxgkIddGetAdapterSessionDiagnostics @ 0x1C025ACFC (DxgkIddGetAdapterSessionDiagnostics.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C025AE4C (DxgkIddHandleSetDisplayConfig.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C02654D0 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026B860 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C027DE68 (DxgkRedrawCursorForPostCompositon.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C02DE0B8 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x1C02E4588 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E4814 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsAdapterSessionized(
        DXGADAPTER *this,
        struct _LUID *a2,
        unsigned int *a3,
        unsigned __int64 *a4)
{
  int v4; // edx
  bool v5; // r10
  unsigned __int64 v6; // rax

  v4 = *((_DWORD *)this + 1100) | *((_DWORD *)this + 1101);
  v5 = *((_QWORD *)this + 550) != 0LL;
  if ( a3 )
    *a3 = *((_DWORD *)this + 1102);
  if ( a4 )
  {
    if ( v4 )
      v6 = *((unsigned int *)this + 1102);
    else
      v6 = 0x200000000LL;
    *a4 = v6;
  }
  return v5;
}
