/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180026560
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001420 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180039698 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  __int64 result; // rax

  wil::details::g_featureStateManager = 0;
  word_180209398 = 0;
  qword_180209360 = (__int64)"WilStaging_02";
  *(_OWORD *)&xmmword_180209368 = 0LL;
  *(_OWORD *)&stru_180209378.Ptr = 0LL;
  xmmword_180209388 = 0LL;
  xmmword_1802093A0 = 0LL;
  xmmword_1802093B0 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1802093C0);
  result = wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180209408);
  wil::details::g_featureStateManager = 1;
  xmmword_180209450 = 0LL;
  xmmword_180209460 = 0LL;
  return result;
}
