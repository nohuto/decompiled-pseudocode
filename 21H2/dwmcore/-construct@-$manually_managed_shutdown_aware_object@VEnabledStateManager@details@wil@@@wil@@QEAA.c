/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800AE628
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001210 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_180347508 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_180347510 = 0;
  xmmword_180347518 = 0LL;
  xmmword_180347528 = 0LL;
  xmmword_180347538 = 0LL;
  xmmword_180347548 = 0LL;
  xmmword_180347558 = 0LL;
  return result;
}
