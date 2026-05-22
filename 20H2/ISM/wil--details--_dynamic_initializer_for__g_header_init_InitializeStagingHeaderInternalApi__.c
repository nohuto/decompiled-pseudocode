/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__ @ 0x1800014A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__())(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *this, struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)
{
  void (__fastcall *result)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *, struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *); // rax

  g_wil_details_internalGetFeatureEnabledState = (enum FEATURE_ENABLED_STATE (*)(unsigned int, enum FEATURE_CHANGE_TIME, int *))wil::details::WilApiImpl_GetFeatureEnabledState;
  g_wil_details_internalRecordFeatureUsage = (void (*)(unsigned int, unsigned int, unsigned int, const char *))wil::details::WilApiImpl_RecordFeatureUsage;
  g_wil_details_internalSubscribeFeatureStateChangeNotification = (void (*)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *))wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification;
  result = wil::details::WilApiImpl_UnsubscribeFeatureStateChangeNotification;
  g_wil_details_internalUnsubscribeFeatureStateChangeNotification = (void (*)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *))wil::details::WilApiImpl_UnsubscribeFeatureStateChangeNotification;
  return result;
}
