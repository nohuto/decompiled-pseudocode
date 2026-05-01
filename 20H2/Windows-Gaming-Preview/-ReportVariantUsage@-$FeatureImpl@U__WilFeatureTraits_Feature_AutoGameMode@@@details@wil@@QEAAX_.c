/*
 * XREFs of ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4Variant_AutoGameMode@@W4VariantReportingKind@3@_K@Z @ 0x18003B1B0
 * Callers:
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA?AW4Variant_AutoGameMode@@W4VariantReportingKind@3@_N@Z @ 0x18003B004 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180011778 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18003AEB4 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEA.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::ReportVariantUsage(
        signed __int32 *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        __int64 a5)
{
  int v5; // esi
  unsigned __int32 v7; // r8d
  int v9; // r14d
  __int64 v10; // rax
  int v11; // ebx
  unsigned int v12; // ecx
  int v13; // ecx
  char v14[16]; // [rsp+50h] [rbp-10h] BYREF
  signed __int32 v15; // [rsp+94h] [rbp+34h]
  int v16; // [rsp+98h] [rbp+38h] BYREF

  v5 = a3;
  v7 = *a1;
  v15 = a1[1];
  v9 = a2;
  if ( (*a1 & 2) != 0 )
  {
    HIDWORD(v10) = a1[1];
  }
  else
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedVariantState(
                       (wil::details *)a1,
                       (__int64)v14);
    BYTE1(v15) = BYTE5(v10);
    v7 = v10;
  }
  LOBYTE(v15) = 3;
  v16 = a4;
  LODWORD(a5) = 0;
  WORD2(a5) = v15;
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
                       0xA8161Eu,
                       (v7 >> 8) & 1,
                       (v7 >> 9) & 1,
                       v12,
                       HIDWORD(v10) & (unsigned int)-((_BYTE)v5 != 0)) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xA8161Eu,
        (const struct FEATURE_LOGGED_TRAITS *)&a5,
        0LL,
        v9,
        0LL,
        (const enum wil_VariantReportingKind *)&v16,
        v5,
        1uLL);
  }
}
