/*
 * XREFs of ?DeleteDevice@FxPkgPnp@@IEAAXXZ @ 0x1C007FF84
 * Callers:
 *     ?ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C0079660 (-ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C008214C (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 *     ?ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C0084680 (-ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C00505FC (-Destroy@FxDevice@@QEAAXXZ.c)
 */

void __fastcall FxPkgPnp::DeleteDevice(FxPkgPnp *this)
{
  FxDevice::Destroy(this->m_Device);
  this->m_DeviceBase->DeleteObject(this->m_DeviceBase);
}
