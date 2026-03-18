/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180085D0C
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
  qword_180349608 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_180349610 = 0;
  xmmword_180349618 = 0LL;
  xmmword_180349628 = 0LL;
  xmmword_180349638 = 0LL;
  xmmword_180349648 = 0LL;
  xmmword_180349658 = 0LL;
  return result;
}
