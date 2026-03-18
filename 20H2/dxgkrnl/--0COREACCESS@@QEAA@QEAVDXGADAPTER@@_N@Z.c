/*
 * XREFs of ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0007050
 * Callers:
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C00466E4 (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E3B14 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C00F4820 (DxgkGetPresentHistoryInternal.c)
 *     DxgkEscape @ 0x1C00F72C0 (DxgkEscape.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0113134 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C0118150 (DxgkGetMonitorInternalInfo.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C0118770 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_ @ 0x1C0118910 (_BtlPreAcquireSharedAccess_-CCD_BTL_CONNECTIVITY_COLLECTOR--_AppendConnectedSetAdaptersCallback_.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1C0118A2C (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     ?ProcessStatusChange@DXGPROCESS@@IEAAXXZ @ 0x1C0118B18 (-ProcessStatusChange@DXGPROCESS@@IEAAXXZ.c)
 *     ?CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01673C0 (-CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C020B710 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C022F878 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 *     DxgkDestroyOverlay @ 0x1C027A0B0 (DxgkDestroyOverlay.c)
 *     ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C02832F8 (-DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C02A870C (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
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
