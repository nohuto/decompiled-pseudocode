/*
 * XREFs of McTemplateK0pq_EtwWriteTransfer @ 0x1C0038624
 * Callers:
 *     ?CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z @ 0x1C00351E8 (-CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C0035EE0 (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C00367BC (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C00373E4 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C0037A50 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C004F440 (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiCancelSuspendAdapterTimer @ 0x1C004F4D4 (DpiCancelSuspendAdapterTimer.c)
 *     DpiRequestDevicePowerIrp @ 0x1C004F738 (DpiRequestDevicePowerIrp.c)
 *     DpiSetDevicePowerTransitionState @ 0x1C004FDC0 (DpiSetDevicePowerTransitionState.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C00515BC (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C00515EC (DpiMiracastEtwLogStopMiracastSessionStage.c)
 *     DpiDispatchInternalIoctl @ 0x1C00EFB80 (DpiDispatchInternalIoctl.c)
 *     DpiDispatchCreate @ 0x1C00EFF60 (DpiDispatchCreate.c)
 *     DxgkGetDeviceStateInternal @ 0x1C00FA640 (DxgkGetDeviceStateInternal.c)
 *     DpiDispatchCleanupAndClose @ 0x1C0148740 (DpiDispatchCleanupAndClose.c)
 *     ?DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z @ 0x1C014A020 (-DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z.c)
 *     DpiDispatchPnp @ 0x1C014DCB0 (DpiDispatchPnp.c)
 *     DpiDispatchIoctl @ 0x1C014FEE0 (DpiDispatchIoctl.c)
 *     DpiDispatchPower @ 0x1C0163AB0 (DpiDispatchPower.c)
 *     DpiFdoStartAdapter @ 0x1C0171310 (DpiFdoStartAdapter.c)
 *     ?ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C0212BF4 (-ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z.c)
 *     DpiDispatchSystemControl @ 0x1C02C30A0 (DpiDispatchSystemControl.c)
 *     ?DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDATE@@@Z @ 0x1C02CDA70 (-DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDAT.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C02CF700 (DpiFdoThermalPassiveCooling.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C02D41A0 (DpiDxgkDdiRemoveDevice.c)
 *     DpiDxgkDdiStopDevice @ 0x1C02D4354 (DpiDxgkDdiStopDevice.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0011B40 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
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
