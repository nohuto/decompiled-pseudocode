/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18002C304
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800474A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@details@wil@@QE.c)
 *     ?wil_details_FeatureReporting_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x18007D9EC (-wil_details_FeatureReporting_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureReportingCa.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18002E0B4 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x18013CD4C (-wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v13; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-60h]
  __int64 v15; // [rsp+3Ch] [rbp-5Ch]
  int v16; // [rsp+44h] [rbp-54h]
  __int128 v17; // [rsp+48h] [rbp-50h]
  __int64 v18; // [rsp+58h] [rbp-40h]

  v10 = wil_details_FeatureReporting_RecordUsageInCache(&v13, a1, a5, a6);
  v11 = 0;
  v17 = *(_OWORD *)v10;
  v18 = *(_QWORD *)(v10 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(a2, a5, 1LL, a1);
    if ( a3 )
    {
      v13 = 0LL;
      v15 = 0LL;
      v14 = a5;
      v16 = a4;
      ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, __int64 *))g_wil_details_recordFeatureUsage)(
        a2,
        a5,
        1LL,
        0LL,
        &v13);
    }
  }
  else if ( a3 && a5 != 254 )
  {
    wil_RtlStagingConfig_RecordFeatureUsage(a2, a5, a4);
  }
  LOBYTE(v11) = (_DWORD)v18 == 0;
  return v11;
}
