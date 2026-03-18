/*
 * XREFs of _wil_RtlStagingConfig_RecordFeatureUsage@12 @ 0xEF3C8
 * Callers:
 *     _wil_details_FeatureReporting_ReportUsageToServiceDirect@28 @ 0xEF710 (_wil_details_FeatureReporting_ReportUsageToServiceDirect@28.c)
 * Callees:
 *     <none>
 */

int __fastcall wil_RtlStagingConfig_RecordFeatureUsage(int a1, unsigned __int16 a2, int a3)
{
  int v4; // [esp+0h] [ebp-Ch] BYREF
  int v5; // [esp+4h] [ebp-8h]

  v4 = a1;
  v5 = a2;
  if ( a3 )
    HIWORD(v5) |= 1u;
  return RtlNotifyFeatureUsage(&v4);
}
