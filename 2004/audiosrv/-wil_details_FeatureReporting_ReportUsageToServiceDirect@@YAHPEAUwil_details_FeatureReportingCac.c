/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800648B4
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@QEAAX_NW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@3@_K@Z @ 0x1800646AC (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@d.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180064824 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180012690 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6)
{
  _DWORD *v10; // rax
  unsigned int v11; // ebx
  __int64 v13; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-60h]
  __int64 v15; // [rsp+3Ch] [rbp-5Ch]
  int v16; // [rsp+44h] [rbp-54h]
  __int128 v17; // [rsp+48h] [rbp-50h]
  __int64 v18; // [rsp+58h] [rbp-40h]

  v10 = wil_details_FeatureReporting_RecordUsageInCache((__int64)&v13, a1, a5, a6);
  v11 = 0;
  v17 = *(_OWORD *)v10;
  v18 = *((_QWORD *)v10 + 2);
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
  LOBYTE(v11) = (_DWORD)v18 == 0;
  return v11;
}
