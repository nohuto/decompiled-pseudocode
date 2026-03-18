/*
 * XREFs of ?StartedPowerFailed@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C000DE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPowerIdleMachine::StartedPowerFailed(FxPowerIdleMachine *This)
{
  This->m_Flags |= 0x10u;
  return 2LL;
}
