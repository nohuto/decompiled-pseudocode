/*
 * XREFs of ?UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1800E24C0
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x1800E1D80 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1800E1F58 (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

void __fastcall wil::details::UnsubscribeProcessWideUsageFlush(
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a2)
{
  if ( this )
  {
    if ( *((_QWORD *)&xmmword_1803444E8 + 1) )
      wil::details_abi::SubscriptionList::Unsubscribe(
        (LPCRITICAL_SECTION)(*((_QWORD *)&xmmword_1803444E8 + 1) + 200LL),
        *((PSRWLOCK *)&xmmword_1803444E8 + 1),
        this);
  }
}
