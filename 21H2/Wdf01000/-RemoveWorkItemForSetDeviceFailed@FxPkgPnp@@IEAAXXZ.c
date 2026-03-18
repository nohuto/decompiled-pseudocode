/*
 * XREFs of ?RemoveWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAXXZ @ 0x1C00355D8
 * Callers:
 *     ?ReleaseReenumerationInterface@FxPkgPdo@@EEAAXXZ @ 0x1C00355C0 (-ReleaseReenumerationInterface@FxPkgPdo@@EEAAXXZ.c)
 *     ?ReleaseReenumerationInterface@FxPkgFdo@@EEAAXXZ @ 0x1C0089B40 (-ReleaseReenumerationInterface@FxPkgFdo@@EEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxPkgPnp::RemoveWorkItemForSetDeviceFailed(FxPkgPnp *this)
{
  FxSystemWorkItem *m_SetDeviceFailedAttemptRestartWorkItem; // rcx

  m_SetDeviceFailedAttemptRestartWorkItem = this->m_SetDeviceFailedAttemptRestartWorkItem;
  if ( m_SetDeviceFailedAttemptRestartWorkItem )
  {
    m_SetDeviceFailedAttemptRestartWorkItem->DeleteObject(m_SetDeviceFailedAttemptRestartWorkItem);
    this->m_SetDeviceFailedAttemptRestartWorkItem = 0LL;
  }
}
