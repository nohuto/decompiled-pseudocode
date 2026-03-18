/*
 * XREFs of ?Feature_DeliverViaSendMessage__private_IsEnabledPreCheck@@YGHXZ @ 0xF0F32
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 * Callees:
 *     _wil_details_FeatureReporting_ReportUsageToService@32 @ 0xEF6BC (_wil_details_FeatureReporting_ReportUsageToService@32.c)
 */

int __thiscall Feature_DeliverViaSendMessage__private_IsEnabledPreCheck(void *this)
{
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_DeliverViaSendMessage__private_reporting,
    21629918,
    0,
    0,
    (int)&Feature_BrokeredDisplays_ConsoleSessions_logged_traits,
    0,
    (int)this,
    (int)this);
  return 1;
}
