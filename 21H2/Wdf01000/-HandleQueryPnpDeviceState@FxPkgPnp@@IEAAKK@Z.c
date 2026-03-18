/*
 * XREFs of ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C0010B10
 * Callers:
 *     ?HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C00109B0 (-HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0032010 (-_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?IsInSpecialUse@FxPkgPnp@@IEAAEXZ @ 0x1C0010C50 (-IsInSpecialUse@FxPkgPnp@@IEAAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?DecrementPendingTaskCount@FxCompanionTarget@@AEAAXXZ @ 0x1C0060FD4 (-DecrementPendingTaskCount@FxCompanionTarget@@AEAAXXZ.c)
 *     ?IncrementPendingTaskCountWithFloor@FxCompanionTarget@@AEAAJXZ @ 0x1C0061190 (-IncrementPendingTaskCountWithFloor@FxCompanionTarget@@AEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryPnpDeviceState(FxPkgPnp *this, unsigned int PnpDeviceState)
{
  unsigned __int8 v3; // al
  unsigned int v4; // edx
  unsigned int v5; // ebx
  FxCompanionTarget *m_CompanionTarget; // rdi

  v3 = FxPkgPnp::IsInSpecialUse(this);
  v5 = v4 | 0x20;
  if ( !v3 )
    v5 = v4;
  if ( this->m_InternalFailure || this->m_Failed )
    v5 |= 4u;
  m_CompanionTarget = this->m_CompanionTarget;
  if ( m_CompanionTarget && FxCompanionTarget::IncrementPendingTaskCountWithFloor(m_CompanionTarget) >= 0 )
  {
    m_CompanionTarget->m_RdDeviceCompanion->QueryPnPDeviceStateNotification(m_CompanionTarget->m_RdDeviceCompanion);
    FxCompanionTarget::DecrementPendingTaskCount(m_CompanionTarget);
  }
  return v5;
}
