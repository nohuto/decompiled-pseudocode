/*
 * XREFs of ?wil_RtlStagingConfig_RecordFeatureUsage@@YGJIIH@Z @ 0xF63BA
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YGHPAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@IK@Z @ 0xF66C6 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YGHPAUwil_details_FeatureReportingCach.c)
 * Callees:
 *     <none>
 */

int __userpurge wil_RtlStagingConfig_RecordFeatureUsage@<eax>(
        unsigned __int16 a1@<dx>,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  int v5; // [esp+0h] [ebp-Ch] BYREF
  int v6; // [esp+4h] [ebp-8h]

  v5 = 23402279;
  v6 = a1;
  if ( a2 )
    HIWORD(v6) |= 1u;
  return RtlNotifyFeatureUsage(&v5);
}
