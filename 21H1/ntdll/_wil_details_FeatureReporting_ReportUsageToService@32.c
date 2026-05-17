/*
 * XREFs of _wil_details_FeatureReporting_ReportUsageToService@32 @ 0x4B3064E6
 * Callers:
 *     _Feature_SearchPackagePaths__private_IsEnabled@0 @ 0x4B3061C5 (_Feature_SearchPackagePaths__private_IsEnabled@0.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _wil_details_FeatureReporting_ReportUsageToServiceDirect@28 @ 0x4B30653E (_wil_details_FeatureReporting_ReportUsageToServiceDirect@28.c)
 *     _wil_details_MapReportingKind@8 @ 0x4B306847 (_wil_details_MapReportingKind@8.c)
 */

int __stdcall wil_details_FeatureReporting_ReportUsageToService(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int result; // eax
  int v8; // [esp+4h] [ebp-4h] BYREF

  v8 = 3;
  v6 = wil_details_MapReportingKind();
  result = wil_details_FeatureReporting_ReportUsageToServiceDirect(a1, a2, v6, 3, 3);
  if ( result )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      return g_wil_details_pfnFeatureLoggingHook(
               g_wil_details_pfnFeatureLoggingHook,
               24394929,
               &Feature_SearchPackagePaths_logged_traits,
               0,
               a4,
               &v8,
               0,
               0,
               1);
  }
  return result;
}
