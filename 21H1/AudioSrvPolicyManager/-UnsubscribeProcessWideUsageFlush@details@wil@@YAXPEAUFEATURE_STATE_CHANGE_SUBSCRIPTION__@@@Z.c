/*
 * XREFs of ?UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180008EF8
 * Callers:
 *     ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x18000DB18 (--_GFeatureStateManager@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1800082AC (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

void __fastcall wil::details::UnsubscribeProcessWideUsageFlush(
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a2)
{
  if ( this )
  {
    if ( qword_1800550F0 )
      wil::details_abi::SubscriptionList::Unsubscribe((LPCRITICAL_SECTION)&qword_1800550F0[25], qword_1800550F0, this);
  }
}
