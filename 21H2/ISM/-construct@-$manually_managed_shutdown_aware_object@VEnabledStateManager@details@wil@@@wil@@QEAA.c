/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800263CC
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
  qword_180209380 = 0LL;
  qword_180209378 = 0LL;
  byte_180209388 = 0;
  xmmword_180209390 = 0LL;
  xmmword_1802093A0 = 0LL;
  xmmword_1802093B0 = 0LL;
  xmmword_1802093C0 = 0LL;
  xmmword_1802093D0 = 0LL;
  return result;
}
