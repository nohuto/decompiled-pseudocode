/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180081B44
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_PinWebsiteAction@@@wil@@SA_NXZ @ 0x180081980 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_PinWebsiteAction@@@wil@@SA_NXZ.c)
 *     ?Invoke@PinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAXXZ @ 0x180090490 (-Invoke@PinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?MakePinWebsiteToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180090570 (-MakePinWebsiteToTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Act.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180008764 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800819E0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@detai.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteAction>::ReportUsage(
        signed __int32 *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...)
{
  int v3; // edi
  unsigned __int32 v5; // r8d
  int v6; // esi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v3 = a3;
  v5 = *a1;
  v6 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v7 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteAction>::GetCachedFeatureEnabledState(
                      (wil::details *)a1,
                      (signed __int32 *)&v7);
    v5 = v7;
  }
  BYTE4(v8) = 3;
  LODWORD(v8) = 1;
  if ( (_BYTE)v3 )
    wil_details_FeatureReporting_ReportUsageToService(
      a1 + 2,
      0xB3E9A6u,
      (v5 >> 8) & 1,
      (v5 >> 9) & 1,
      (const struct FEATURE_LOGGED_TRAITS *)va,
      v6,
      v3);
}
