/*
 * XREFs of ?CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ @ 0x1C0019010
 * Callers:
 *     ?Disabling@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0018FF0 (-Disabling@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?CancelTimer@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C00832F0 (-CancelTimer@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 * Callees:
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C0019040 (-Stop@MxTimer@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall FxPowerIdleMachine::CancelIdleTimer(FxPowerIdleMachine *this)
{
  if ( !MxTimer::Stop(&this->m_PowerTimeoutTimer) )
    return 0;
  this->m_Flags &= ~8u;
  return 1;
}
