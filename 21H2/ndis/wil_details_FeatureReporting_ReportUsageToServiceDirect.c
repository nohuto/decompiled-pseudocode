/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C003E030
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C003DFA8 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1C003DE40 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // bx
  unsigned int v5; // esi
  int *v6; // rax
  unsigned int v7; // edi
  unsigned int v8; // eax
  _RTL_FEATURE_USAGE_REPORT FeatureUsageReport; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v12; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h]

  v3 = a2;
  v5 = a3;
  v6 = wil_details_FeatureReporting_RecordUsageInCache(
         (__int64)v11,
         *(volatile signed __int32 **)(a1 + 8),
         a3,
         SHIDWORD(a2));
  v7 = 0;
  v12 = *(_OWORD *)v6;
  v13 = *((_QWORD *)v6 + 2);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(*(unsigned int *)(a1 + 24), v5, 1LL, *(_QWORD *)(a1 + 8), &v12);
  if ( (v3 & 0x400) != 0 && v5 != 254 )
  {
    v8 = *(_DWORD *)(a1 + 24);
    FeatureUsageReport.ReportingOptions = 0;
    FeatureUsageReport.FeatureId = v8;
    FeatureUsageReport.ReportingKind = v5;
    if ( (v3 & 0x800) != 0 )
      FeatureUsageReport.ReportingOptions |= 1u;
    RtlNotifyFeatureUsage(&FeatureUsageReport);
  }
  LOBYTE(v7) = (_DWORD)v13 == 0;
  return v7;
}
