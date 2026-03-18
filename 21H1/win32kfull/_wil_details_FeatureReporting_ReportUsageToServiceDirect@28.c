/*
 * XREFs of _wil_details_FeatureReporting_ReportUsageToServiceDirect@28 @ 0xEF710
 * Callers:
 *     _wil_details_FeatureReporting_ReportUsageToService@32 @ 0xEF6BC (_wil_details_FeatureReporting_ReportUsageToService@32.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _wil_RtlStagingConfig_RecordFeatureUsage@12 @ 0xEF3C8 (_wil_RtlStagingConfig_RecordFeatureUsage@12.c)
 *     _wil_details_FeatureReporting_RecordUsageInCache@16 @ 0xEF58C (_wil_details_FeatureReporting_RecordUsageInCache@16.c)
 */

BOOL __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  _DWORD v10[6]; // [esp+18h] [ebp-3Ch] BYREF
  BOOL v11[7]; // [esp+30h] [ebp-24h] BYREF

  qmemcpy(v10, wil_details_FeatureReporting_RecordUsageInCache(a1, a5, v11, (int)a1, (int)a1), sizeof(v10));
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(a2, a5, 1, a1, v10);
    if ( a3 )
    {
      v11[5] = a4;
      v11[0] = 0;
      v11[1] = 0;
      v11[3] = 0;
      v11[4] = 0;
      v11[2] = a5;
      g_wil_details_recordFeatureUsage(a2, a5, 1, 0, v11);
    }
  }
  else if ( a3 && a5 != 254 )
  {
    wil_RtlStagingConfig_RecordFeatureUsage(a2, a5, a4);
  }
  return v10[4] == 0;
}
