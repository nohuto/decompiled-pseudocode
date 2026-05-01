/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18003DA30
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
  qword_1800B4138 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_1800B4140 = 0;
  xmmword_1800B4148 = 0LL;
  xmmword_1800B4158 = 0LL;
  xmmword_1800B4168 = 0LL;
  xmmword_1800B4178 = 0LL;
  xmmword_1800B4188 = 0LL;
  return result;
}
