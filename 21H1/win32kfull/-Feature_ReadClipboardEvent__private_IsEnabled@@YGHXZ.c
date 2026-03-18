/*
 * XREFs of ?Feature_ReadClipboardEvent__private_IsEnabled@@YGHXZ @ 0xF20F0
 * Callers:
 *     _NtUserGetClipboardData@8 @ 0x161F6A (_NtUserGetClipboardData@8.c)
 * Callees:
 *     _wil_details_FeatureReporting_ReportUsageToService@32 @ 0xEF6BC (_wil_details_FeatureReporting_ReportUsageToService@32.c)
 *     _wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@16 @ 0xF2CE4 (_wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@16.c)
 */

int __stdcall Feature_ReadClipboardEvent__private_IsEnabled()
{
  unsigned int v0; // eax
  int v1; // ecx
  int v2; // esi

  v0 = Feature_ReadClipboardEvent__private_featureState;
  v1 = 0;
  if ( (Feature_ReadClipboardEvent__private_featureState & 1) == 0 )
    v0 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
           Feature_ReadClipboardEvent__private_featureState,
           0);
  v2 = (v0 >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_ReadClipboardEvent__private_reporting,
    26475108,
    (v0 >> 8) & 1,
    (v0 >> 9) & 1,
    (int)&Feature_Servicing_DynamicModeChange_23402279_logged_traits,
    v2,
    v1,
    v1);
  return v2;
}
