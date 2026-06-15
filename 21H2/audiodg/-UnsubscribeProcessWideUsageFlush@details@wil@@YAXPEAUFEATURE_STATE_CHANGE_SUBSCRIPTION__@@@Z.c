/*
 * XREFs of ?UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x140027E68
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x140020FEC (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x140027DE4 (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

void __fastcall wil::details::UnsubscribeProcessWideUsageFlush(
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a2)
{
  if ( this )
  {
    if ( qword_140090410 )
      wil::details_abi::SubscriptionList::Unsubscribe(
        (struct wil::srwlock *)((char *)qword_140090410 + 200),
        (RTL_SRWLOCK *)qword_140090410,
        this);
  }
}
