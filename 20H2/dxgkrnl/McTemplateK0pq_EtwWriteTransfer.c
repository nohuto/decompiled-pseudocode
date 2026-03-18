/*
 * XREFs of McTemplateK0pq_EtwWriteTransfer @ 0x1C00393B4
 * Callers:
 *     ?CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0035F78 (-CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C0036C70 (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C003754C (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0038174 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C00387E0 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0050390 (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiCancelSuspendAdapterTimer @ 0x1C0050424 (DpiCancelSuspendAdapterTimer.c)
 *     DpiRequestDevicePowerIrp @ 0x1C0050688 (DpiRequestDevicePowerIrp.c)
 *     DpiSetDevicePowerTransitionState @ 0x1C0050D10 (DpiSetDevicePowerTransitionState.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C005250C (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C005253C (DpiMiracastEtwLogStopMiracastSessionStage.c)
 *     DxgkGetDeviceStateInternal @ 0x1C00F6630 (DxgkGetDeviceStateInternal.c)
 *     DpiDispatchInternalIoctl @ 0x1C0125070 (DpiDispatchInternalIoctl.c)
 *     DpiDispatchCreate @ 0x1C0125450 (DpiDispatchCreate.c)
 *     DpiDispatchCleanupAndClose @ 0x1C01550E0 (DpiDispatchCleanupAndClose.c)
 *     ?DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z @ 0x1C0156640 (-DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z.c)
 *     DpiDispatchPnp @ 0x1C015AE80 (DpiDispatchPnp.c)
 *     DpiDispatchIoctl @ 0x1C015E9A0 (DpiDispatchIoctl.c)
 *     DpiDispatchPower @ 0x1C0172350 (DpiDispatchPower.c)
 *     DpiFdoStartAdapter @ 0x1C01815E4 (DpiFdoStartAdapter.c)
 *     ?ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C0215C94 (-ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z.c)
 *     DpiDispatchSystemControl @ 0x1C02C6660 (DpiDispatchSystemControl.c)
 *     ?DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDATE@@@Z @ 0x1C02D1030 (-DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDAT.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C02D2CC0 (DpiFdoThermalPassiveCooling.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C02D7760 (DpiDxgkDdiRemoveDevice.c)
 *     DpiDxgkDdiStopDevice @ 0x1C02D7914 (DpiDxgkDdiStopDevice.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C000BB3C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
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
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, a3, 3u, &v4);
}
