/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18002EEDC
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
  qword_180345608 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_180345610 = 0;
  xmmword_180345618 = 0LL;
  xmmword_180345628 = 0LL;
  xmmword_180345638 = 0LL;
  xmmword_180345648 = 0LL;
  xmmword_180345658 = 0LL;
  return result;
}
