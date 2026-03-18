/*
 * XREFs of ?PowerPolStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0031200
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00158AC (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?Start@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0031238 (-Start@FxPowerIdleMachine@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStarting(FxPkgPnp *This)
{
  FxPowerIdleMachine::Start(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  FxPkgPnp::PowerProcessEvent(This, 0x40u, 0);
  return 1472LL;
}
