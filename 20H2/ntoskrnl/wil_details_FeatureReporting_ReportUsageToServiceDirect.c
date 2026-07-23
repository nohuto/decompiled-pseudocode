/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1402FD760
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402FD704 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1402FD858 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     RtlNotifyFeatureUsage @ 0x14058C720 (RtlNotifyFeatureUsage.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v11; // rax
  unsigned int v12; // ebx
  _RTL_FEATURE_USAGE_REPORT FeatureUsageReport; // [rsp+30h] [rbp-68h] BYREF
  __int64 v15; // [rsp+38h] [rbp-60h] BYREF
  __int128 v16; // [rsp+50h] [rbp-48h] BYREF
  __int64 v17; // [rsp+60h] [rbp-38h]

  v11 = wil_details_FeatureReporting_RecordUsageInCache((unsigned int)&v15, a1, a5, 0, a7);
  v12 = 0;
  v16 = *(_OWORD *)v11;
  v17 = *(_QWORD *)(v11 + 16);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(a2, a5, a7, a1, &v16);
  if ( a3 && a5 != 254 )
  {
    FeatureUsageReport.ReportingOptions = 0;
    FeatureUsageReport.FeatureId = a2;
    FeatureUsageReport.ReportingKind = a5;
    if ( a4 )
      FeatureUsageReport.ReportingOptions |= 1u;
    RtlNotifyFeatureUsage(&FeatureUsageReport);
  }
  LOBYTE(v12) = (_DWORD)v17 == 0;
  return v12;
}
