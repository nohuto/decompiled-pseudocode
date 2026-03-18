/*
 * XREFs of McTemplateK0pqq_EtwWriteTransfer @ 0x1C003942C
 * Callers:
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C003754C (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C0037858 (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0038174 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C00387E0 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x1C003DA50 (-DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z @ 0x1C003DAB0 (-DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeDeviceDirectedPowerDownCallback@@YAXPEAXK@Z @ 0x1C003DBE0 (-DxgkPowerRuntimeDeviceDirectedPowerDownCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeDeviceDirectedPowerUpCallback@@YAXPEAXK@Z @ 0x1C003DC30 (-DxgkPowerRuntimeDeviceDirectedPowerUpCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x1C003DC80 (-DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z.c)
 *     ?DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z @ 0x1C003DCE0 (-DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z.c)
 *     DpiRequestDevicePowerState @ 0x1C00508E4 (DpiRequestDevicePowerState.c)
 *     DpiDxgkDdiSetTargetAdjustedColorimetry2 @ 0x1C005887C (DpiDxgkDdiSetTargetAdjustedColorimetry2.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C00D5F34 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0138B18 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C015775C (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C017B1A8 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     DpiDxgkDdiGetChildContainerId @ 0x1C01884A0 (DpiDxgkDdiGetChildContainerId.c)
 *     DpiDxgkDdiExchangePreStartInfo @ 0x1C0197D44 (DpiDxgkDdiExchangePreStartInfo.c)
 *     ?HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C020C5B0 (-HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C020C6B0 (-HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ @ 0x1C02BB370 (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ.c)
 *     ?DpiDxgkDdiSaveMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_SAVEMEMORYFORHOTUPDATE@@@Z @ 0x1C02D10BC (-DpiDxgkDdiSaveMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_SAVEMEMORYFORHOTUPDATE@@@Z.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C02D75B0 (DpiDxgkDdiNotifySurpriseRemoval.c)
 *     DpiDxgkDdiSetTargetAdjustedColorimetry @ 0x1C02D780C (DpiDxgkDdiSetTargetAdjustedColorimetry.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C000BB3C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  va_list v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  va_list v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  va_list va2; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  v6 = 8LL;
  v8 = 4LL;
  va_copy(v5, va);
  v10 = 4LL;
  va_copy(v7, va1);
  va_copy(v9, va2);
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, a3, 4u, &v4);
}
