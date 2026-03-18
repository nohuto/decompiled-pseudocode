/*
 * XREFs of ?PowerPolStartingDecideS0Wake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0010770
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C0010910 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 *     ?PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C0010A28 (-PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStartingDecideS0Wake(FxPkgPnp *This)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  __int64 m_NextIdleTimeoutHint; // rax
  FxPowerPolicyOwnerSettings *v4; // rax

  This->m_PowerPolicyMachine.m_Owner->m_DevicePowerIrpTracker.m_DIrpRequestedForSIrp = RequestDIrpReasonInvalid;
  FxPkgPnp::PowerPolicyChildrenCanPowerUp(This);
  FxPkgPnp::SaveState(This, 1u);
  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( (m_Owner->m_PoxInterface.m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
  {
    m_NextIdleTimeoutHint = m_Owner->m_PoxInterface.m_NextIdleTimeoutHint;
    if ( (_DWORD)m_NextIdleTimeoutHint != m_Owner->m_PoxInterface.m_CurrentIdleTimeoutHint )
    {
      m_Owner->m_PoxInterface.m_CurrentIdleTimeoutHint = m_NextIdleTimeoutHint;
      PoFxSetDeviceIdleTimeout(m_Owner->m_PoxInterface.m_PoHandle, 10000 * m_NextIdleTimeoutHint);
    }
  }
  v4 = This->m_PowerPolicyMachine.m_Owner;
  if ( v4->m_IdleSettings.Enabled )
    return v4->m_IdleSettings.WakeFromS0Capable != 0 ? 1329 : 1285;
  else
    return 1381LL;
}
