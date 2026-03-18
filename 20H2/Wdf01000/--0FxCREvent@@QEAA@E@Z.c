/*
 * XREFs of ??0FxCREvent@@QEAA@E@Z @ 0x1C0017D80
 * Callers:
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0017C60 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??0FxWmiIrpHandler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C003EF90 (--0FxWmiIrpHandler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C003F6C0 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0040A34 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?Dispose@FxCompanionTarget@@EEAAEXZ @ 0x1C0042CF0 (-Dispose@FxCompanionTarget@@EEAAEXZ.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C0063DB8 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z @ 0x1C0063E3C (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z.c)
 *     ?WaitForDisposeEvent@FxIoTarget@@MEAAXXZ @ 0x1C0065860 (-WaitForDisposeEvent@FxIoTarget@@MEAAXXZ.c)
 *     ??0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0066100 (--0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C007F248 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x1C0081D1C (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 *     ??0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z @ 0x1C0085744 (--0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z.c)
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1C008A278 (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
 *     ?_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z @ 0x1C008BD40 (-_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxCREvent::FxCREvent(FxCREvent *this, unsigned __int8 InitialState)
{
  this->m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_Event.m_Event, SynchronizationEvent, 0);
  this->m_Event.m_DbgFlagIsInitialized = 1;
}
