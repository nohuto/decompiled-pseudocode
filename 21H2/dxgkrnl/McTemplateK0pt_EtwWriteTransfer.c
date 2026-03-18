/*
 * XREFs of McTemplateK0pt_EtwWriteTransfer @ 0x1C0044CF4
 * Callers:
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0014D90 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C00170F0 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C001A984 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 *     DpiSetDevicePowerTransitionState @ 0x1C00242A8 (DpiSetDevicePowerTransitionState.c)
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0024300 (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiCancelSuspendAdapterTimer @ 0x1C00244F0 (DpiCancelSuspendAdapterTimer.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C0025DC4 (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     ?CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z @ 0x1C00434B8 (-CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z.c)
 *     DpiRequestDevicePowerIrp @ 0x1C005F6B4 (DpiRequestDevicePowerIrp.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C016E8D4 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     DxgkGetDeviceStateInternal @ 0x1C017C6C0 (DxgkGetDeviceStateInternal.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     DpiDispatchCreate @ 0x1C01A0690 (DpiDispatchCreate.c)
 *     DpiDispatchCleanupAndClose @ 0x1C01D8470 (DpiDispatchCleanupAndClose.c)
 *     DpiDispatchPnp @ 0x1C01DB310 (DpiDispatchPnp.c)
 *     DpiDispatchIoctl @ 0x1C01DB4B0 (DpiDispatchIoctl.c)
 *     DpiDispatchInternalIoctl @ 0x1C01DB630 (DpiDispatchInternalIoctl.c)
 *     ?DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z @ 0x1C01DC100 (-DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z.c)
 *     ?ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C01E70F4 (-ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z.c)
 *     DpiDispatchPower @ 0x1C01F1B60 (DpiDispatchPower.c)
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C0200238 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C02BCEF0 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BDA44 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     DpiDispatchSystemControl @ 0x1C0388210 (DpiDispatchSystemControl.c)
 *     DpiFdoThermalActiveCooling @ 0x1C0391190 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C0391310 (DpiFdoThermalPassiveCooling.c)
 *     ?DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDATE@@@Z @ 0x1C0393650 (-DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDAT.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C03970B8 (DpiDxgkDdiRemoveDevice.c)
 *     DpiDxgkDdiStopDevice @ 0x1C039727C (DpiDxgkDdiStopDevice.c)
 *     ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x1C03C0750 (-SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x1C03C08B4 (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013C40 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pt_EtwWriteTransfer(REGHANDLE *a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  va_list v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  va_copy(v8, va1);
  v10 = 0;
  v9 = 4;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 3u, &v4);
}
