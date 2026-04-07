/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800426FC
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001020 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18004278C (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  __int64 result; // rax

  wil::details::g_featureStateManager = 0;
  word_1800E2F68 = 0;
  qword_1800E2F30 = (__int64)"WilStaging_02";
  *(_OWORD *)&xmmword_1800E2F38 = 0LL;
  *(_OWORD *)&stru_1800E2F48.Ptr = 0LL;
  xmmword_1800E2F58 = 0LL;
  xmmword_1800E2F70 = 0LL;
  xmmword_1800E2F80 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&CriticalSection);
  result = wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1800E2FD8);
  wil::details::g_featureStateManager = 1;
  xmmword_1800E3020 = 0LL;
  xmmword_1800E3030 = 0LL;
  return result;
}
