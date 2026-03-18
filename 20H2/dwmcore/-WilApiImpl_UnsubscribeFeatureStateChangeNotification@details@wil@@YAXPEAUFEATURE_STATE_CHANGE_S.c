/*
 * XREFs of ?WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1800E1F00
 * Callers:
 *     <none>
 * Callees:
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1800E1F58 (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

void __fastcall wil::details::WilApiImpl_UnsubscribeFeatureStateChangeNotification(
        unsigned __int64 this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a2)
{
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v2; // r8
  struct _RTL_CRITICAL_SECTION *v3; // rcx

  if ( (this & 0x80000000) != 0 )
  {
    if ( !wil::details::g_featureStateManager )
      return;
    v2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)(this & 0xFFFFFFFF7FFFFFFFuLL);
    v3 = &stru_180344588;
    goto LABEL_4;
  }
  if ( wil::details::g_featureStateManager )
  {
    v2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)this;
    v3 = &stru_180344540;
LABEL_4:
    wil::details_abi::SubscriptionList::Unsubscribe(v3, &stru_1803444F8, v2);
  }
}
