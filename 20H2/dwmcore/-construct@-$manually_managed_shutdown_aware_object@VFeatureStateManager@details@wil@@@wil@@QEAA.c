/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18002C938
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001230 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18002B0E8 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  wil::details::g_featureStateManager = 0;
  word_180344518 = 0;
  qword_1803444E0 = (__int64)"WilStaging_02";
  xmmword_1803444E8 = 0LL;
  *(_OWORD *)&stru_1803444F8.Ptr = 0LL;
  xmmword_180344508 = 0LL;
  xmmword_180344520 = 0LL;
  xmmword_180344530 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&stru_180344540);
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_180344588);
  wil::details::g_featureStateManager = 1;
  xmmword_1803445D0 = 0LL;
  xmmword_1803445E0 = 0LL;
  return result;
}
