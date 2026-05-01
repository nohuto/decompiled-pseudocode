/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18008C288
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001AA0 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_1805CBEB8 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_1805CBEC0 = 0;
  xmmword_1805CBEC8 = 0LL;
  xmmword_1805CBED8 = 0LL;
  xmmword_1805CBEE8 = 0LL;
  xmmword_1805CBEF8 = 0LL;
  xmmword_1805CBF08 = 0LL;
  return result;
}
