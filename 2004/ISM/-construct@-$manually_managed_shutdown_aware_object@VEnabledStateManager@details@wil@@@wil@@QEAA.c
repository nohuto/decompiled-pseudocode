/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18002656C
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
  qword_180208480 = 0LL;
  qword_180208478 = 0LL;
  byte_180208488 = 0;
  xmmword_180208490 = 0LL;
  xmmword_1802084A0 = 0LL;
  xmmword_1802084B0 = 0LL;
  xmmword_1802084C0 = 0LL;
  xmmword_1802084D0 = 0LL;
  return result;
}
