/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180093470
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180093334 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x18009521C (-ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATU.c)
 * Callees:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x1800478A0 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180058F40 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6)
{
  _DWORD *v10; // rax
  __int64 v11; // xmm0_8
  __int64 v12; // r8
  unsigned int v13; // ebx
  void (*v14)(unsigned int, unsigned int, unsigned int, const char *); // rax
  __int64 v15; // rdx
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-28h]
  __int64 v19; // [rsp+48h] [rbp-20h] BYREF

  v10 = wil_details_FeatureReporting_RecordUsageInCache((__int64)&v19, a1, a5, a6);
  v11 = *((_QWORD *)v10 + 2);
  v17 = *(_OWORD *)v10;
  v18 = v11;
  wil::details::RecordFeatureUsageCallback(a2, a5, v12, (char *)a1, &v17);
  v13 = 0;
  if ( a3 )
  {
    v15 = a5;
    v14 = g_wil_details_internalRecordFeatureUsage;
    LODWORD(v15) = a5 | 0x80000000;
    if ( !a4 )
      v15 = a5;
    if ( g_wil_details_internalRecordFeatureUsage || (v14 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v14)(a2, v15, 0LL, 0LL);
  }
  LOBYTE(v13) = (_DWORD)v18 == 0;
  return v13;
}
