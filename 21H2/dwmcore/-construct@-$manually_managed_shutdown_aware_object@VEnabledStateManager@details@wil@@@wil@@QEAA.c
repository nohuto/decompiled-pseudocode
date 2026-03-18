/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18002851C
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
  qword_1803D3538 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_1803D3540 = 0;
  xmmword_1803D3548 = 0LL;
  xmmword_1803D3558 = 0LL;
  xmmword_1803D3568 = 0LL;
  xmmword_1803D3578 = 0LL;
  xmmword_1803D3588 = 0LL;
  return result;
}
