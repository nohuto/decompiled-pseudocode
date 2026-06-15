/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800539F0
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001430 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  pti = 0LL;
  SRWLock.Ptr = 0LL;
  byte_18019E538 = 0;
  unk_18019E540 = 0LL;
  xmmword_18019E550 = 0LL;
  xmmword_18019E560 = 0LL;
  xmmword_18019E570 = 0LL;
  xmmword_18019E580 = 0LL;
  return result;
}
