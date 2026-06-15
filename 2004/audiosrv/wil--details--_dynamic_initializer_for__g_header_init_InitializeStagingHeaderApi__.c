/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderApi__ @ 0x1800018D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderApi__())(wil::details *__hidden this, unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *, int *)
{
  unsigned int (__fastcall *result)(wil::details *__hidden, unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *, int *); // rax

  g_wil_details_recordFeatureUsage = (void (__high *)(unsigned int, enum wil_details_ServiceReportingKind, unsigned int, struct wil_details_FeatureReportingCache *, struct wil_details_RecordUsageResult *))&wil::details::RecordFeatureUsageCallback;
  g_wil_details_apiGetFeatureEnabledState = (enum FEATURE_ENABLED_STATE (*)(unsigned int, enum FEATURE_CHANGE_TIME, int *))wil::details::GetFeatureEnabledStateHelper;
  g_wil_details_apiRecordFeatureUsage = RecordFeatureUsage;
  g_wil_details_apiRecordFeatureError = RecordFeatureError;
  g_wil_details_apiSubscribeFeatureStateChangeNotification = SubscribeFeatureStateChangeNotification;
  g_wil_details_apiUnsubscribeFeatureStateChangeNotification = UnsubscribeFeatureStateChangeNotification;
  result = wil::details::GetFeatureVariantHelper;
  g_wil_details_apiGetFeatureVariant = (unsigned int (*)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *, int *))wil::details::GetFeatureVariantHelper;
  return result;
}
