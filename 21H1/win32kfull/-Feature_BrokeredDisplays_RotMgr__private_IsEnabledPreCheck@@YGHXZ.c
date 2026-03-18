/*
 * XREFs of ?Feature_BrokeredDisplays_RotMgr__private_IsEnabledPreCheck@@YGHXZ @ 0xEC254
 * Callers:
 *     _InitRotationManager@0 @ 0xEC21A (_InitRotationManager@0.c)
 * Callees:
 *     _wil_details_FeatureReporting_ReportUsageToService@32 @ 0xEF6BC (_wil_details_FeatureReporting_ReportUsageToService@32.c)
 */

int __thiscall Feature_BrokeredDisplays_RotMgr__private_IsEnabledPreCheck(void *this)
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
