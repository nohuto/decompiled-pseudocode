/*
 * XREFs of ?Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck@@YGHXZ @ 0xEA77A
 * Callers:
 *     _DispBrokerGetCurrentModeImpl@0 @ 0xEA730 (_DispBrokerGetCurrentModeImpl@0.c)
 * Callees:
 *     _wil_details_FeatureReporting_ReportUsageToService@32 @ 0xEF6BC (_wil_details_FeatureReporting_ReportUsageToService@32.c)
 */

int __thiscall Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck(void *this)
{
  wil_details_FeatureReporting_ReportUsageToService(
    0,
    0,
    &Feature_BrokeredDisplays_ConsoleSessions_logged_traits,
    0,
    this,
    this);
  return 1;
}
