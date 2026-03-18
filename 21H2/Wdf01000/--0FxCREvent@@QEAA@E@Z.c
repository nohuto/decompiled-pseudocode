/*
 * XREFs of ??0FxCREvent@@QEAA@E@Z @ 0x1C001AC84
 * Callers:
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C001A138 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z @ 0x1C0021F8C (--0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z.c)
 *     ??0FxWmiIrpHandler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C00241BC (--0FxWmiIrpHandler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C0026E08 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ??0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E008 (--0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C0030434 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x1C00305C8 (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 *     ?WaitForDisposeEvent@FxIoTarget@@MEAAXXZ @ 0x1C0034B20 (-WaitForDisposeEvent@FxIoTarget@@MEAAXXZ.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C005F1C4 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?Dispose@FxCompanionTarget@@EEAAEXZ @ 0x1C0061010 (-Dispose@FxCompanionTarget@@EEAAEXZ.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z @ 0x1C0073AB8 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z.c)
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1C008DB7C (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
 *     ?_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z @ 0x1C008EC50 (-_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxCREvent::FxCREvent(FxCREvent *this, unsigned __int8 InitialState)
{
  this->m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_Event.m_Event, SynchronizationEvent, 0);
  this->m_Event.m_DbgFlagIsInitialized = 1;
}
