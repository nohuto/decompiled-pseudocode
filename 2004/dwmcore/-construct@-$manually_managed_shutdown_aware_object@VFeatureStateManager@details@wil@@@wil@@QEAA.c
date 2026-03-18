/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18002E7E4
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001230 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18002F7A8 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  __int64 result; // rax

  wil::details::g_featureStateManager = 0;
  word_180345520 = 0;
  qword_1803454E8 = (__int64)"WilStaging_02";
  xmmword_1803454F0 = 0LL;
  *(_OWORD *)&stru_180345500.Ptr = 0LL;
  xmmword_180345510 = 0LL;
  xmmword_180345528 = 0LL;
  xmmword_180345538 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180345548);
  result = wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180345590);
  wil::details::g_featureStateManager = 1;
  xmmword_1803455D8 = 0LL;
  xmmword_1803455E8 = 0LL;
  return result;
}
