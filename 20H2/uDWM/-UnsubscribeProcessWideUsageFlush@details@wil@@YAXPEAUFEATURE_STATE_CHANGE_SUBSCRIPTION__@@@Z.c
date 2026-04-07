/*
 * XREFs of ?UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18007EE9C
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18007CF20 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18007EDFC (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

void __fastcall wil::details::UnsubscribeProcessWideUsageFlush(
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a2)
{
  if ( this )
  {
    if ( *(&xmmword_1800E2F38 + 1) )
      wil::details_abi::SubscriptionList::Unsubscribe(
        (LPCRITICAL_SECTION)*(&xmmword_1800E2F38 + 1) + 5,
        (PSRWLOCK)*(&xmmword_1800E2F38 + 1),
        this);
  }
}
