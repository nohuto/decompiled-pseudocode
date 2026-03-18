/*
 * XREFs of ?PowerPolSleepingNoWakePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0017010
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C0017074 (-PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@W4RequestDIrpReason@@@Z @ 0x1C001C6D0 (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingNoWakePowerDown(FxPkgPnp *This)
{
  FxPowerPolicyOwnerSettings *m_Owner; // r8
  _DEVICE_POWER_STATE m_IdealDxStateForSx; // ebx
  int v4; // eax
  unsigned int v5; // ecx

  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  m_IdealDxStateForSx = m_Owner->m_IdealDxStateForSx;
  if ( m_IdealDxStateForSx != PowerDeviceD3
    && m_IdealDxStateForSx < (int)((m_Owner->m_SystemToDeviceStateMap & (15 << (4
                                                                              * (BYTE1(This->m_PendingSystemPowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length) & 0xF)))) >> (4 * (BYTE1(This->m_PendingSystemPowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length) & 0xF))) )
  {
    m_IdealDxStateForSx = (m_Owner->m_SystemToDeviceStateMap & (15 << (4
                                                                     * (BYTE1(This->m_PendingSystemPowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length) & 0xF)))) >> (4 * (BYTE1(This->m_PendingSystemPowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length) & 0xF));
  }
  FxPkgPnp::PowerPolicyBlockChildrenPowerUp(This);
  v4 = FxPkgPnp::PowerPolicySendDevicePowerRequest(This, m_IdealDxStateForSx, Retry, RequestDxForSx);
  v5 = 1472;
  if ( v4 < 0 )
    return 1321;
  return v5;
}
