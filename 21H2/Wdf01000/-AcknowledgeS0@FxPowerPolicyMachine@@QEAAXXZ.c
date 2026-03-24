/*
 * XREFs of ?AcknowledgeS0@FxPowerPolicyMachine@@QEAAXXZ @ 0x1C001C7E4
 * Callers:
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0011B40 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPowerPolicyMachine::AcknowledgeS0(FxPowerPolicyMachine *this)
{
  if ( (this->m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
    PoFxReportDevicePoweredOn(this->m_Owner->m_PoxInterface.m_PoHandle);
}
