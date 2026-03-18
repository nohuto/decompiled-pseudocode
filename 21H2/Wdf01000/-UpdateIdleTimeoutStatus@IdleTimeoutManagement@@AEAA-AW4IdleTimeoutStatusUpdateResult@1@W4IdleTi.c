/*
 * XREFs of ?UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA?AW4IdleTimeoutStatusUpdateResult@1@W4IdleTimeoutStatusFlag@1@@Z @ 0x1C001DCB8
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C001BAE0 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1C001DC5C (-CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IdleTimeoutManagement::UpdateIdleTimeoutStatus(
        IdleTimeoutManagement *this,
        IdleTimeoutManagement::IdleTimeoutStatusFlag Flag)
{
  volatile int m_IdleTimeoutStatus; // eax
  signed __int32 v3; // eax
  volatile int v4; // ett

  m_IdleTimeoutStatus = this->m_IdleTimeoutStatus;
  if ( (this->m_IdleTimeoutStatus & Flag) != 0 )
    return 1LL;
  if ( (m_IdleTimeoutStatus & 1) != 0 )
    return 2LL;
  v4 = this->m_IdleTimeoutStatus;
  v3 = _InterlockedCompareExchange(&this->m_IdleTimeoutStatus, Flag | m_IdleTimeoutStatus, m_IdleTimeoutStatus);
  if ( v4 == v3 )
    return 0LL;
  if ( (v3 & 1) != 0 )
    return 2LL;
  else
    return 3LL;
}
