/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18003894C
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800388A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave@@@details@wi.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180038A18 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 *     ?wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x1800668CC (-wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-50h]
  __int64 v14; // [rsp+3Ch] [rbp-4Ch]
  int v15; // [rsp+44h] [rbp-44h]
  __int128 v16; // [rsp+48h] [rbp-40h] BYREF
  __int64 v17; // [rsp+58h] [rbp-30h]

  v9 = wil_details_FeatureReporting_RecordUsageInCache(&v12, a1, a5, a6);
  v10 = 0;
  v16 = *(_OWORD *)v9;
  v17 = *(_QWORD *)(v9 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(16669694LL, a5, 1LL, a1, &v16);
    if ( a3 )
    {
      v12 = 0LL;
      v14 = 0LL;
      v13 = a5;
      v15 = a4;
      g_wil_details_recordFeatureUsage(16669694LL, a5, 1LL, 0LL, &v12);
    }
  }
  else if ( a3 && a5 != 254 )
  {
    wil_RtlStagingConfig_RecordFeatureUsage(0xFE5BFEu, a5, a4);
  }
  LOBYTE(v10) = (_DWORD)v17 == 0;
  return v10;
}
