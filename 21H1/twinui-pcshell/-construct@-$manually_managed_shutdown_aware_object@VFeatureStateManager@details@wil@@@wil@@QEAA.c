/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18008BFB8
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001380 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180113D44 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  __int64 result; // rax

  wil::details::g_featureStateManager = 0;
  word_18059FB20 = 0;
  qword_18059FAE8 = (__int64)"WilStaging_02";
  *(_OWORD *)&xmmword_18059FAF0 = 0LL;
  *(_OWORD *)&stru_18059FB00.Ptr = 0LL;
  xmmword_18059FB10 = 0LL;
  xmmword_18059FB28 = 0LL;
  xmmword_18059FB38 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_18059FB48);
  result = wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_18059FB90);
  wil::details::g_featureStateManager = 1;
  xmmword_18059FBD8 = 0LL;
  xmmword_18059FBE8 = 0LL;
  return result;
}
