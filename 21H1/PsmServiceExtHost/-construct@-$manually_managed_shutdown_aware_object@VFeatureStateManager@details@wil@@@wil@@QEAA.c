/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18003D010
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001030 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18003D0A0 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  __int64 result; // rax

  wil::details::g_featureStateManager = 0;
  word_1800B4050 = 0;
  qword_1800B4018 = (__int64)"WilStaging_02";
  *(_OWORD *)&xmmword_1800B4020 = 0LL;
  *(_OWORD *)&stru_1800B4030.Ptr = 0LL;
  xmmword_1800B4040 = 0LL;
  xmmword_1800B4058 = 0LL;
  xmmword_1800B4068 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&CriticalSection);
  result = wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1800B40C0);
  wil::details::g_featureStateManager = 1;
  xmmword_1800B4108 = 0LL;
  xmmword_1800B4118 = 0LL;
  return result;
}
