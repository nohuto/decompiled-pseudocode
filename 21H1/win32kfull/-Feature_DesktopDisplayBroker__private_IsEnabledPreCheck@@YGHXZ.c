/*
 * XREFs of ?Feature_DesktopDisplayBroker__private_IsEnabledPreCheck@@YGHXZ @ 0xEA758
 * Callers:
 *     _DispBrokerGetCurrentModeImpl@0 @ 0xEA730 (_DispBrokerGetCurrentModeImpl@0.c)
 * Callees:
 *     _wil_details_FeatureReporting_ReportUsageToService@32 @ 0xEF6BC (_wil_details_FeatureReporting_ReportUsageToService@32.c)
 */

int __thiscall Feature_DesktopDisplayBroker__private_IsEnabledPreCheck(void *this)
{
  wil_details_FeatureReporting_ReportUsageToService(0, 0, &Feature_InkProcessor_logged_traits, 1, this, this);
  return 1;
}
