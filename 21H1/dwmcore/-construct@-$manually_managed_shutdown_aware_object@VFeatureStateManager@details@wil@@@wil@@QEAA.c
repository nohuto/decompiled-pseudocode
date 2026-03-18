/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180085614
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001230 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x1800865D8 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  __int64 result; // rax

  wil::details::g_featureStateManager = 0;
  word_180349520 = 0;
  qword_1803494E8 = (__int64)"WilStaging_02";
  xmmword_1803494F0 = 0LL;
  *(_OWORD *)&stru_180349500.Ptr = 0LL;
  xmmword_180349510 = 0LL;
  xmmword_180349528 = 0LL;
  xmmword_180349538 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180349548);
  result = wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180349590);
  wil::details::g_featureStateManager = 1;
  xmmword_1803495D8 = 0LL;
  xmmword_1803495E8 = 0LL;
  return result;
}
