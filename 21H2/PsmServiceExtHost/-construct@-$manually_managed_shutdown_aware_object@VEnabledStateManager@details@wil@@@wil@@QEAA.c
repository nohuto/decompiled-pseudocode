/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18003D4E0
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001010 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_1800B4038 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_1800B4040 = 0;
  xmmword_1800B4048 = 0LL;
  xmmword_1800B4058 = 0LL;
  xmmword_1800B4068 = 0LL;
  xmmword_1800B4078 = 0LL;
  xmmword_1800B4088 = 0LL;
  return result;
}
