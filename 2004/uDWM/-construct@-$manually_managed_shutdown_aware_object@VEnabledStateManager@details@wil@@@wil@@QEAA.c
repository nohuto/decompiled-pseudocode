/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180042244
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
  qword_1800E5050 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_1800E5058 = 0;
  xmmword_1800E5060 = 0LL;
  xmmword_1800E5070 = 0LL;
  xmmword_1800E5080 = 0LL;
  xmmword_1800E5090 = 0LL;
  xmmword_1800E50A0 = 0LL;
  return result;
}
