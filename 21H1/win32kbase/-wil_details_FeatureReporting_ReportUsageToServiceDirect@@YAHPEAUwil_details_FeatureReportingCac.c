/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C00ACECC
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00ACE78 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C00ACF60 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v12; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+34h] [rbp-3Ch]
  __int64 v14; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-30h]
  __int64 v16; // [rsp+44h] [rbp-2Ch]
  int v17; // [rsp+4Ch] [rbp-24h]
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h]

  v9 = wil_details_FeatureReporting_RecordUsageInCache(&v14, a1, a5);
  v10 = 0;
  v18 = *(_OWORD *)v9;
  v19 = *(_QWORD *)(v9 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(a2, a5, 1LL, a1, &v18);
    if ( a3 )
    {
      v14 = 0LL;
      v16 = 0LL;
      v15 = a5;
      v17 = a4;
      g_wil_details_recordFeatureUsage(a2, a5, 1LL, 0LL, &v14);
    }
  }
  else if ( a3 && a5 != 254 )
  {
    v12 = a2;
    v13 = (unsigned __int16)a5;
    if ( a4 )
      HIWORD(v13) |= 1u;
    RtlNotifyFeatureUsage(&v12);
  }
  LOBYTE(v10) = (_DWORD)v19 == 0;
  return v10;
}
