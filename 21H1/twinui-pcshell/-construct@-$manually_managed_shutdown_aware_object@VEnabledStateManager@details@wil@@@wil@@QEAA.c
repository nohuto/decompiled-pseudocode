/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18008C048
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001360 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_18059FC08 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_18059FC10 = 0;
  xmmword_18059FC18 = 0LL;
  xmmword_18059FC28 = 0LL;
  xmmword_18059FC38 = 0LL;
  xmmword_18059FC48 = 0LL;
  xmmword_18059FC58 = 0LL;
  return result;
}
