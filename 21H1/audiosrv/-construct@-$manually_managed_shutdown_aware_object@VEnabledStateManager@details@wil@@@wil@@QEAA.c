/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180054090
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x1800018B0 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
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
  byte_18019F588 = 0;
  unk_18019F590 = 0LL;
  xmmword_18019F5A0 = 0LL;
  xmmword_18019F5B0 = 0LL;
  xmmword_18019F5C0 = 0LL;
  xmmword_18019F5D0 = 0LL;
  return result;
}
