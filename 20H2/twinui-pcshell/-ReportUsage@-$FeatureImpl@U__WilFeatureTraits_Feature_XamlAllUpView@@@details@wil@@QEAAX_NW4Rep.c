/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180215654
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@SA_NXZ @ 0x1800AA330 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@SA_NXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInTaskView@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18030161C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInTaskView@@@.c)
 *     ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x18037E604 (-_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x18037F360 (-s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z.c)
 *     ?GetMTVHostKind@@YA?AW4MultitaskingViewHostKind@@W4MULTITASKING_VIEW_TYPES@@@Z @ 0x180387CCC (-GetMTVHostKind@@YA-AW4MultitaskingViewHostKind@@W4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1803889B8 (-_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationV.c)
 *     ?_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180389080 (-_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationVi.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180093334 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180214230 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...)
{
  int v3; // edi
  volatile unsigned __int32 v5; // r8d
  int v6; // esi
  int v7; // [rsp+50h] [rbp+8h] BYREF
  __int16 v8; // [rsp+54h] [rbp+Ch]
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v3 = a3;
  v5 = *a1;
  v6 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v9 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAllUpView>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)va);
    v5 = v9;
  }
  LODWORD(v9) = 4;
  v7 = 4;
  BYTE4(v9) = 3;
  v8 = WORD2(v9);
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x78E913u,
    (v5 >> 8) & 1,
    (v5 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v7,
    v6,
    v3);
}
