/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18002A76C
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
  qword_180344600 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_180344608 = 0;
  xmmword_180344610 = 0LL;
  xmmword_180344620 = 0LL;
  xmmword_180344630 = 0LL;
  xmmword_180344640 = 0LL;
  xmmword_180344650 = 0LL;
  return result;
}
