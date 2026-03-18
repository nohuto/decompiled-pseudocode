/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C000E6E8
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C00B148C (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5)
{
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+30h] [rbp-68h] BYREF
  int v13; // [rsp+34h] [rbp-64h]
  _BYTE v14[24]; // [rsp+38h] [rbp-60h] BYREF
  __int128 v15; // [rsp+50h] [rbp-48h] BYREF
  __int64 v16; // [rsp+60h] [rbp-38h]

  v9 = wil_details_FeatureReporting_RecordUsageInCache(v14, a1, a5);
  v10 = 0;
  v15 = *(_OWORD *)v9;
  v16 = *(_QWORD *)(v9 + 16);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(a2, a5, 1LL, a1, &v15);
  if ( a3 && a5 != 254 )
  {
    v12 = a2;
    v13 = (unsigned __int16)a5;
    if ( a4 )
      HIWORD(v13) |= 1u;
    RtlNotifyFeatureUsage(&v12);
  }
  LOBYTE(v10) = (_DWORD)v16 == 0;
  return v10;
}
