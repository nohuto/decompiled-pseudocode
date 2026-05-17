/*
 * XREFs of _wil_details_FeatureReporting_ReportUsageToServiceDirect@28 @ 0x4B30653E
 * Callers:
 *     _wil_details_FeatureReporting_ReportUsageToService@32 @ 0x4B3064E6 (_wil_details_FeatureReporting_ReportUsageToService@32.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _wil_RtlStagingConfig_RecordFeatureUsage@12 @ 0x4B306208 (_wil_RtlStagingConfig_RecordFeatureUsage@12.c)
 *     _wil_details_FeatureReporting_RecordUsageInCache@16 @ 0x4B3063CE (_wil_details_FeatureReporting_RecordUsageInCache@16.c)
 */

BOOL __thiscall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  int v7[4]; // [esp+0h] [ebp-48h] BYREF
  _DWORD v8[4]; // [esp+10h] [ebp-38h] BYREF
  _DWORD var18[7]; // [esp+30h] [ebp-18h] BYREF

  qmemcpy(var18, wil_details_FeatureReporting_RecordUsageInCache((int)this, a4, v8, (int)this, (int)this, v7[0]), 0x18u);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      g_wil_details_recordFeatureUsage,
      24394929,
      a4,
      1,
      &Feature_SearchPackagePaths__private_reporting,
      var18);
    if ( a2 )
    {
      v8[1] = a3;
      v7[0] = 0;
      v7[1] = 0;
      v7[3] = 0;
      v8[0] = 0;
      v7[2] = a4;
      g_wil_details_recordFeatureUsage(g_wil_details_recordFeatureUsage, 24394929, a4, 1, 0, v7);
    }
  }
  else if ( a2 && a4 != 254 )
  {
    wil_RtlStagingConfig_RecordFeatureUsage(0, a4, a3);
  }
  return v8[2] == 0;
}
