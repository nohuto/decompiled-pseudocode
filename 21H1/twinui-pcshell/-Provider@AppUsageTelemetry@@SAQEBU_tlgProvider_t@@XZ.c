/*
 * XREFs of ?Provider@AppUsageTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x180431DDC
 * Callers:
 *     _lambda_195736d014a597a101f4034c78cde5c1_::operator() @ 0x1800A88FC (_lambda_195736d014a597a101f4034c78cde5c1_--operator().c)
 *     _lambda_995566f987e36b46da19b96e162bec73_::operator() @ 0x1800A8A44 (_lambda_995566f987e36b46da19b96e162bec73_--operator().c)
 *     _lambda_d0f838cfdd25b27c1c6d7e08a6f313dc_::operator() @ 0x1800A8B48 (_lambda_d0f838cfdd25b27c1c6d7e08a6f313dc_--operator().c)
 *     ?TerminateApp@Win32AppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800A9C40 (-TerminateApp@Win32AppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@W.c)
 *     ?OnTerminateTimer@Win32AppStateManager@@AEAAXXZ @ 0x1804394E4 (-OnTerminateTimer@Win32AppStateManager@@AEAAXXZ.c)
 *     ?RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x180439774 (-RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV-$basic_string@GU-$char_traits@G@.c)
 * Callees:
 *     ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x1804331F8 (-get@-$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall AppUsageTelemetry::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<AppUsageTelemetry>::get(
                                             a1,
                                             _lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_)
                                         + 8);
}
