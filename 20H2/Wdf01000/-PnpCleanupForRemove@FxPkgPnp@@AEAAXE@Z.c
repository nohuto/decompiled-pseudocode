/*
 * XREFs of ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0079670
 * Callers:
 *     ?PnpEventFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0079AD0 (-PnpEventFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007A7A0 (-PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C000EB04 (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C0010910 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0012A54 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C003F6C0 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?PnpDisableInterfaces@FxPkgPnp@@IEAAXXZ @ 0x1C0079714 (-PnpDisableInterfaces@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x1C007D5C4 (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C00806CC (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PnpCleanupForRemove(FxPkgPnp *this, unsigned __int8 GracefulRemove)
{
  __int64 v4; // rdx
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx

  FxWmiIrpHandler::Deregister((FxWmiIrpHandler *)this->m_DeviceBase[3].m_ParentObject, GracefulRemove);
  FxPkgPnp::PnpDisableInterfaces(this);
  LOBYTE(v4) = GracefulRemove;
  this->DeleteSymbolicLinkOverload(this, v4);
  FxPkgIo::StopProcessingForPower(
    (FxPkgIo *)this->m_DeviceBase[3].m_ChildListHead.Blink,
    FxIoStopProcessingForPowerPurgeManaged);
  m_SelfManagedIoMachine = this->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
    FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, (_FX_DRIVER_GLOBALS *)8, 0LL);
  FxPkgPnp::NotifyResourceobjectsToReleaseResources(this);
  FxPkgPnp::SaveState(this, 0);
  if ( this->m_SharedPower.m_WaitWakeOwner )
    FxPkgPnp::PowerIndicateWaitWakeStatus(this, -1073741810);
}
