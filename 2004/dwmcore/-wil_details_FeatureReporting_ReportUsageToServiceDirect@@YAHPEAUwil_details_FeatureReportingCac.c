/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800A35EC
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800A352C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18005F2F0 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x180150210 (-wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5)
{
  _DWORD *v9; // rax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-60h]
  __int64 v14; // [rsp+3Ch] [rbp-5Ch]
  int v15; // [rsp+44h] [rbp-54h]
  __int128 v16; // [rsp+48h] [rbp-50h] BYREF
  __int64 v17; // [rsp+58h] [rbp-40h]

  v9 = wil_details_FeatureReporting_RecordUsageInCache((__int64)&v12, a1, a5);
  v10 = 0;
  v16 = *(_OWORD *)v9;
  v17 = *((_QWORD *)v9 + 2);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(a2, a5, 1LL, a1, &v16);
    if ( a3 )
    {
      v12 = 0LL;
      v14 = 0LL;
      v13 = a5;
      v15 = a4;
      g_wil_details_recordFeatureUsage(a2, a5, 1LL, 0LL, &v12);
    }
  }
  else if ( a3 && a5 != 254 )
  {
    wil_RtlStagingConfig_RecordFeatureUsage(a2, a5, a4);
  }
  LOBYTE(v10) = (_DWORD)v17 == 0;
  return v10;
}
