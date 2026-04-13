/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005CDEC
 * Callers:
 *     ?StartInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE@Z @ 0x18005A530 (-StartInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE@Z.c)
 *     ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x18005AE50 (-StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z.c)
 *     ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z @ 0x18005B270 (-StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z.c)
 *     ?Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800859D0 (-Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180008764 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005CC88 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProduc.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::ReportUsage(
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
    v7 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetCachedFeatureEnabledState(
                      (wil::details *)a1,
                      (signed __int32 *)&v7);
    v5 = v7;
  }
  BYTE4(v8) = 3;
  LODWORD(v8) = 0;
  if ( (_BYTE)v3 )
    wil_details_FeatureReporting_ReportUsageToService(
      a1 + 2,
      0x8284B3u,
      (v5 >> 8) & 1,
      (v5 >> 9) & 1,
      (const struct FEATURE_LOGGED_TRAITS *)va,
      v6,
      v3);
}
