/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18008C69C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001880 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180138394 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  __int64 result; // rax

  wil::details::g_featureStateManager = 0;
  word_1805CCD70 = 0;
  qword_1805CCD38 = (__int64)"WilStaging_02";
  *(_OWORD *)&xmmword_1805CCD40 = 0LL;
  *(_OWORD *)&stru_1805CCD50.Ptr = 0LL;
  xmmword_1805CCD60 = 0LL;
  xmmword_1805CCD78 = 0LL;
  xmmword_1805CCD88 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1805CCD98);
  result = wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1805CCDE0);
  wil::details::g_featureStateManager = 1;
  xmmword_1805CCE28 = 0LL;
  xmmword_1805CCE38 = 0LL;
  return result;
}
