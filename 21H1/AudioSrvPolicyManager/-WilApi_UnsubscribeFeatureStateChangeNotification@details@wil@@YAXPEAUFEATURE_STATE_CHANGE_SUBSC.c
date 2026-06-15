/*
 * XREFs of ?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180009308
 * Callers:
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x18000DA24 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(
        wil::details *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a2)
{
  void (*v2)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *); // rax

  v2 = g_wil_details_internalUnsubscribeFeatureStateChangeNotification;
  if ( g_wil_details_internalUnsubscribeFeatureStateChangeNotification
    || (v2 = g_wil_details_apiUnsubscribeFeatureStateChangeNotification) != 0LL )
  {
    ((void (__fastcall *)(wil::details *, struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *))v2)(this, a2);
  }
}
