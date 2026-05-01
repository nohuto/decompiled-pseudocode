/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003E080
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18002F340 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18003D3DC (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ?TryGetLaunchPosition@DefaultLaunchPositionOverride@@UEAAJPEAUIApplicationView@@PEAV?$optional@UtagRECT@@@std@@@Z @ 0x18003E010 (-TryGetLaunchPosition@DefaultLaunchPositionOverride@@UEAAJPEAUIApplicationView@@PEAV-$optional@U.c)
 *     _lambda_a0ee7bb0dcee848556900d8415f399c8_::operator() @ 0x18006DC08 (_lambda_a0ee7bb0dcee848556900d8415f399c8_--operator().c)
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@wil@@SA_NXZ @ 0x180093270 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@wil@@SA_NXZ.c)
 *     ?SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801F4968 (-SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 *     _lambda_c6623334da8ed11a0378a692878c9731_::operator() @ 0x1803E9EA0 (_lambda_c6623334da8ed11a0378a692878c9731_--operator().c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180093334 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18014AF00 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner.c)
 */

__int64 wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        ...)
{
  __int64 v3; // r8
  int v5; // edi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  LODWORD(v3) = *a1;
  v5 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetCachedFeatureEnabledState(
                      a1,
                      &v7);
    v7 = v3;
  }
  LODWORD(v8) = 0;
  BYTE4(v8) = 3;
  return wil::details::ReportUsageToService(
           a1 + 2,
           20484887LL,
           ((unsigned int)v3 >> 8) & 1,
           ((unsigned int)v3 >> 9) & 1,
           (__int64 *)va,
           v5,
           3);
}
