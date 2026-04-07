/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__ @ 0x180001070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__())(wil::details *__hidden this, unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *, int *)
{
  unsigned int (__fastcall *result)(wil::details *__hidden, unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *, int *); // rax

  g_wil_details_recordFeatureUsage = (void (__high *)(unsigned int, enum wil_details_ServiceReportingKind, unsigned int, struct wil_details_FeatureReportingCache *, struct wil_details_RecordUsageResult *))&wil::details::RecordFeatureUsageCallback;
  g_wil_details_internalGetFeatureEnabledState = (enum FEATURE_ENABLED_STATE (*)(unsigned int, enum FEATURE_CHANGE_TIME, int *))wil::details::WilApiImpl_GetFeatureEnabledState;
  g_wil_details_internalRecordFeatureUsage = (void (*)(unsigned int, unsigned int, unsigned int, const char *))wil::details::WilApiImpl_RecordFeatureUsage;
  g_wil_details_internalRecordFeatureError = (void (*)(unsigned int, const struct FEATURE_ERROR *))wil::details::WilApiImpl_RecordFeatureError;
  g_wil_details_internalSubscribeFeatureStateChangeNotification = (void (*)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *))wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification;
  g_wil_details_internalUnsubscribeFeatureStateChangeNotification = (void (*)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *))wil::details::WilApiImpl_UnsubscribeFeatureStateChangeNotification;
  result = wil::details::WilApiImpl_GetFeatureVariant;
  g_wil_details_internalGetFeatureVariant = (unsigned int (*)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *, int *))wil::details::WilApiImpl_GetFeatureVariant;
  return result;
}
