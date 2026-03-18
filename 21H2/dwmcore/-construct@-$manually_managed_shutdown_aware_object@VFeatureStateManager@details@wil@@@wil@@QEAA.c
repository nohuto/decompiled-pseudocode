/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180029FAC
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001040 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180028BCC (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  word_1803D3460 = 0;
  qword_1803D3468 = 0LL;
  qword_1803D3428 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  xmmword_1803D3430 = 0LL;
  xmmword_1803D3440 = 0LL;
  xmmword_1803D3450 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&stru_1803D3470);
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_1803D34B8);
  qword_1803D3520 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1803D3500 = 0LL;
  xmmword_1803D3510 = 0LL;
  return result;
}
