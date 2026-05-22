/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18002650C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001400 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_180209480 = 0LL;
  qword_180209478 = 0LL;
  byte_180209488 = 0;
  xmmword_180209490 = 0LL;
  xmmword_1802094A0 = 0LL;
  xmmword_1802094B0 = 0LL;
  xmmword_1802094C0 = 0LL;
  xmmword_1802094D0 = 0LL;
  return result;
}
