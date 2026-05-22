/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800265F0
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001420 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180039778 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  __int64 result; // rax

  wil::details::g_featureStateManager = 0;
  word_180208390 = 0;
  qword_180208358 = (__int64)"WilStaging_02";
  *(_OWORD *)&xmmword_180208360 = 0LL;
  *(_OWORD *)&stru_180208370.Ptr = 0LL;
  xmmword_180208380 = 0LL;
  xmmword_180208398 = 0LL;
  xmmword_1802083A8 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1802083B8);
  result = wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180208400);
  wil::details::g_featureStateManager = 1;
  xmmword_180208448 = 0LL;
  xmmword_180208458 = 0LL;
  return result;
}
