/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180017A54
 * Callers:
 *     ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18000F460 (-LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU-$IAsyncOperation@_.c)
 *     ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18000FC10 (-LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18005A4B0 (-UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800AE06C (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CC90 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800178F0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
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
    v7 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetCachedFeatureEnabledState(
                      (wil::details *)a1,
                      (signed __int32 *)&v7);
    v5 = v7;
  }
  BYTE4(v8) = 3;
  LODWORD(v8) = 0;
  if ( (_BYTE)v3 )
    wil::details::ReportUsageToService(
      a1 + 2,
      0x79780Du,
      (v5 >> 8) & 1,
      (v5 >> 9) & 1,
      (const struct FEATURE_LOGGED_TRAITS *)va,
      v6,
      v3);
}
