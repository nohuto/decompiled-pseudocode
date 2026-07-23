/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x18009B9C0
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x18009B930 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x18009B7E4 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     RtlNotifyFeatureUsage @ 0x180101790 (RtlNotifyFeatureUsage.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        ULONG a2,
        int a3,
        int a4,
        unsigned int a5)
{
  _DWORD *v9; // rax
  unsigned int v10; // ebx
  _RTL_FEATURE_USAGE_REPORT FeatureUsageReport; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+40h] [rbp-30h]
  __int64 v15; // [rsp+44h] [rbp-2Ch]
  int v16; // [rsp+4Ch] [rbp-24h]
  __int128 v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h]

  v9 = wil_details_FeatureReporting_RecordUsageInCache((__int64)&v13, a1, a5);
  v10 = 0;
  v17 = *(_OWORD *)v9;
  v18 = *((_QWORD *)v9 + 2);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(a2, a5, 1LL, a1, &v17);
    if ( a3 )
    {
      v13 = 0LL;
      v15 = 0LL;
      v14 = a5;
      v16 = a4;
      g_wil_details_recordFeatureUsage(a2, a5, 1LL, 0LL, &v13);
    }
  }
  else if ( a3 && a5 != 254 )
  {
    FeatureUsageReport.ReportingOptions = 0;
    FeatureUsageReport.FeatureId = a2;
    FeatureUsageReport.ReportingKind = a5;
    if ( a4 )
      FeatureUsageReport.ReportingOptions |= 1u;
    RtlNotifyFeatureUsage(&FeatureUsageReport);
  }
  LOBYTE(v10) = (_DWORD)v18 == 0;
  return v10;
}
