/*
 * XREFs of ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_K@Z @ 0x180017FC0
 * Callers:
 *     ?__private_IsVariantEqual@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAA_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_N@Z @ 0x180017F4C (-__private_IsVariantEqual@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@detai.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800085F4 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180018428 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportVariantUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        __int64 a5)
{
  int v5; // esi
  unsigned int v6; // r8d
  int v9; // r14d
  __int64 v10; // rax
  int v11; // ebx
  unsigned int v12; // ecx
  int v13; // ecx
  _BYTE v14[16]; // [rsp+50h] [rbp-10h] BYREF
  int v15; // [rsp+90h] [rbp+30h] BYREF
  char v16; // [rsp+94h] [rbp+34h]
  int v17; // [rsp+98h] [rbp+38h] BYREF

  v5 = a3;
  v6 = *a1;
  HIDWORD(a5) = a1[1];
  v9 = a2;
  LODWORD(a5) = v6;
  if ( (v6 & 2) != 0 )
  {
    HIDWORD(v10) = HIDWORD(a5);
  }
  else
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedVariantState(
                       a1,
                       v14);
    a5 = v10;
    v6 = v10;
  }
  v15 = 2;
  v16 = 3;
  v17 = a4;
  if ( !a4 )
    return;
  v11 = a4 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
    {
      v12 = 255;
      goto LABEL_11;
    }
    v13 = v9 + 4;
  }
  else
  {
    v13 = v9 + 6;
  }
  v12 = v5 + (v13 << 6);
LABEL_11:
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                       a1 + 2,
                       0xF81202u,
                       (v6 >> 8) & 1,
                       (v6 >> 9) & 1,
                       v12,
                       HIDWORD(v10) & (unsigned int)-((_BYTE)v5 != 0)) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xF81202u,
        (const struct FEATURE_LOGGED_TRAITS *)&v15,
        0LL,
        v9,
        0LL,
        (const enum wil_VariantReportingKind *)&v17,
        v5,
        1uLL);
  }
}
