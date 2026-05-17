/*
 * XREFs of _wil_RtlStagingConfig_RecordFeatureUsage@12 @ 0x4B306208
 * Callers:
 *     _wil_details_FeatureReporting_ReportUsageToServiceDirect@28 @ 0x4B30653E (_wil_details_FeatureReporting_ReportUsageToServiceDirect@28.c)
 * Callees:
 *     _RtlNotifyFeatureUsage@4 @ 0x4B3695D0 (_RtlNotifyFeatureUsage@4.c)
 */

int __fastcall wil_RtlStagingConfig_RecordFeatureUsage(int a1, unsigned __int16 a2, int a3)
{
  int v4; // [esp+0h] [ebp-Ch] BYREF
  int v5; // [esp+4h] [ebp-8h]

  v4 = 24394929;
  v5 = a2;
  if ( a3 )
    HIWORD(v5) |= 1u;
  return RtlNotifyFeatureUsage(&v4);
}
