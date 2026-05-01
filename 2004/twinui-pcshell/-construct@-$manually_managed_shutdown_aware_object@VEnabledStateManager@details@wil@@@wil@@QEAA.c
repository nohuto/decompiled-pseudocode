/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18008C72C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001860 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_1805CCE58 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_1805CCE60 = 0;
  xmmword_1805CCE68 = 0LL;
  xmmword_1805CCE78 = 0LL;
  xmmword_1805CCE88 = 0LL;
  xmmword_1805CCE98 = 0LL;
  xmmword_1805CCEA8 = 0LL;
  return result;
}
