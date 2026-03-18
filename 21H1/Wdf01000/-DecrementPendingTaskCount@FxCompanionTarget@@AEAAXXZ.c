/*
 * XREFs of ?DecrementPendingTaskCount@FxCompanionTarget@@AEAAXXZ @ 0x1C0043584
 * Callers:
 *     ?SendTaskSynchronously@FxCompanionTarget@@QEAAJGKPEAU_WDF_MEMORY_DESCRIPTOR@@0PEA_JPEA_K@Z @ 0x1C00439DC (-SendTaskSynchronously@FxCompanionTarget@@QEAAJGKPEAU_WDF_MEMORY_DESCRIPTOR@@0PEA_JPEA_K@Z.c)
 *     ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C0080B50 (-HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxCompanionTarget::DecrementPendingTaskCount(FxCompanionTarget *this)
{
  if ( _InterlockedExchangeAdd(&this->m_PendingTaskCount, 0xFFFFFFFF) == 1 )
    KeSetEvent(&this->m_DisposeEvent->m_Event.m_Event, 0, 0);
}
