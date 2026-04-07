/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180042AC8
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001000 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_1800E3050 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_1800E3058 = 0;
  xmmword_1800E3060 = 0LL;
  xmmword_1800E3070 = 0LL;
  xmmword_1800E3080 = 0LL;
  xmmword_1800E3090 = 0LL;
  xmmword_1800E30A0 = 0LL;
  return result;
}
