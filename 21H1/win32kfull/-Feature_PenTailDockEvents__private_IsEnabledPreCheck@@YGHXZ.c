/*
 * XREFs of ?Feature_PenTailDockEvents__private_IsEnabledPreCheck@@YGHXZ @ 0xF049E
 * Callers:
 *     ?SetPenHotKeys@@YGXXZ @ 0xF0526 (-SetPenHotKeys@@YGXXZ.c)
 * Callees:
 *     _wil_details_FeatureReporting_ReportUsageToService@32 @ 0xEF6BC (_wil_details_FeatureReporting_ReportUsageToService@32.c)
 */

int __thiscall Feature_PenTailDockEvents__private_IsEnabledPreCheck(void *this)
{
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_PenTailDockEvents__private_reporting,
    20840718,
    0,
    0,
    (int)&Feature_InkProcessor_logged_traits,
    1,
    (int)this,
    (int)this);
  return 1;
}
