/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YGHPAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@IK@Z @ 0xF66C6
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YGXPAUwil_details_FeatureReportingCache@@IHHPBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@K@Z @ 0xF6678 (-wil_details_FeatureReporting_ReportUsageToService@@YGXPAUwil_details_FeatureReportingCache@@IHH.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?wil_RtlStagingConfig_RecordFeatureUsage@@YGJIIH@Z @ 0xF63BA (-wil_RtlStagingConfig_RecordFeatureUsage@@YGJIIH@Z.c)
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YG?AUwil_details_RecordUsageResult@@PAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0xF655C (-wil_details_FeatureReporting_RecordUsageInCache@@YG-AUwil_details_RecordUsageResult@@PAUwil_det.c)
 */

BOOL __thiscall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        void *this,
        int a2,
        BOOL a3,
        int a4,
        int a5,
        int a6)
{
  unsigned int v7; // [esp+0h] [ebp-4Ch]
  int v8; // [esp+4h] [ebp-48h]
  _DWORD v9[6]; // [esp+10h] [ebp-3Ch] BYREF
  BOOL v10[7]; // [esp+28h] [ebp-24h] BYREF

  qmemcpy(v9, wil_details_FeatureReporting_RecordUsageInCache((int)this, a4, v10, (int)this, (int)this), sizeof(v9));
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      23402279,
      a4,
      1,
      &Feature_Servicing_DynamicModeChange_23402279__private_reporting,
      v9);
    if ( a2 )
    {
      v10[5] = a3;
      v10[0] = 0;
      v10[1] = 0;
      v10[3] = 0;
      v10[4] = 0;
      v10[2] = a4;
      g_wil_details_recordFeatureUsage(23402279, a4, 1, 0, v10);
    }
  }
  else if ( a2 && a4 != 254 )
  {
    wil_RtlStagingConfig_RecordFeatureUsage(a4, a3, v7, v8);
  }
  return v9[4] == 0;
}
