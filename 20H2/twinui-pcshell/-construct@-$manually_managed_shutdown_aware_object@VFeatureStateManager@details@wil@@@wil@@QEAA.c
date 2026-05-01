/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18008C1F8
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001AC0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x1801381F4 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  __int64 result; // rax

  wil::details::g_featureStateManager = 0;
  word_1805CBDD0 = 0;
  qword_1805CBD98 = (__int64)"WilStaging_02";
  *(_OWORD *)&xmmword_1805CBDA0 = 0LL;
  *(_OWORD *)&stru_1805CBDB0.Ptr = 0LL;
  xmmword_1805CBDC0 = 0LL;
  xmmword_1805CBDD8 = 0LL;
  xmmword_1805CBDE8 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1805CBDF8);
  result = wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1805CBE40);
  wil::details::g_featureStateManager = 1;
  xmmword_1805CBE88 = 0LL;
  xmmword_1805CBE98 = 0LL;
  return result;
}
