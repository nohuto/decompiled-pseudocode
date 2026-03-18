/*
 * XREFs of ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BD4C
 * Callers:
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C0056770 (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0165640 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C0178B20 (DxgkGetPresentHistoryInternal.c)
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 *     ?ProcessStatusChange@DXGPROCESS@@IEAAXXZ @ 0x1C0183478 (-ProcessStatusChange@DXGPROCESS@@IEAAXXZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_1_ @ 0x1C01A21A0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_1_1_.c)
 *     ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01ABB60 (-_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_ @ 0x1C01B03F0 (_BtlPreAcquireSharedAccess_-CCD_BTL_CLONE_GROUP_RESOLVER--_ResolveAdaptersCallback_0_1_.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C01DCBD0 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01E8570 (-CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02BADB0 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkStartPnPStop @ 0x1C02C572C (DxgkStartPnPStop.c)
 *     DxgkDestroyOverlay @ 0x1C032A840 (DxgkDestroyOverlay.c)
 *     ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0335138 (-DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C03498EC (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C0358A24 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 * Callees:
 *     <none>
 */

COREACCESS *__fastcall COREACCESS::COREACCESS(COREACCESS *this, struct DXGADAPTER *const a2)
{
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = a2;
  *((_BYTE *)this + 24) = 0;
  if ( a2 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a2 + 3);
    *((_QWORD *)this + 1) = -1LL;
  }
  return this;
}
