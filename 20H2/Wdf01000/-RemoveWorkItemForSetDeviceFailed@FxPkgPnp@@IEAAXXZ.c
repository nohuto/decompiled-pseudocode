/*
 * XREFs of ?RemoveWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAXXZ @ 0x1C0081E74
 * Callers:
 *     ?ReleaseReenumerationInterface@FxPkgPdo@@EEAAXXZ @ 0x1C0078EC0 (-ReleaseReenumerationInterface@FxPkgPdo@@EEAAXXZ.c)
 *     ?ReleaseReenumerationInterface@FxPkgFdo@@EEAAXXZ @ 0x1C0083F70 (-ReleaseReenumerationInterface@FxPkgFdo@@EEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
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
