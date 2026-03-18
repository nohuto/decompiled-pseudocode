/*
 * XREFs of ?Feature_QuickLaunchInvocation__private_IsEnabledPreCheck@@YGHXZ @ 0x155D05
 * Callers:
 *     ?IsPenQuickLaunchAndShouldBeDisabled@@YG_NII@Z @ 0xC5696 (-IsPenQuickLaunchAndShouldBeDisabled@@YG_NII@Z.c)
 * Callees:
 *     _wil_details_FeatureReporting_ReportUsageToService@32 @ 0xEF6BC (_wil_details_FeatureReporting_ReportUsageToService@32.c)
 */

int __thiscall Feature_QuickLaunchInvocation__private_IsEnabledPreCheck(void *this)
{
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_QuickLaunchInvocation__private_reporting,
    9100606,
    0,
    0,
    (int)&Feature_QuickLaunchInvocation_logged_traits,
    1,
    (int)this,
    (int)this);
  return 1;
}
