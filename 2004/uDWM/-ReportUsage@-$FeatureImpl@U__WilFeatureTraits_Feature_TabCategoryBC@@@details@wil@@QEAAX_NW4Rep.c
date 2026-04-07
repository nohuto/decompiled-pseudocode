/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabCategoryBC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800106FC
 * Callers:
 *     ?GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x1800107E0 (-GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180010AC8 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabCategoryBC@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004D2E0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabCategoryBC@@@details@.c)
 */

__int64 wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabCategoryBC>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        ...)
{
  __int64 v3; // r8
  int v5; // edi
  int v7; // [rsp+50h] [rbp+8h] BYREF
  __int16 v8; // [rsp+54h] [rbp+Ch]
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  LODWORD(v3) = *a1;
  v5 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabCategoryBC>::GetCachedFeatureEnabledState(
                      a1,
                      (__int64 *)va);
    v9 = v3;
  }
  LODWORD(v9) = 1;
  BYTE4(v9) = 0;
  v8 = WORD2(v9);
  v7 = 1;
  return wil_details_FeatureReporting_ReportUsageToService(
           a1 + 2,
           1470244LL,
           ((unsigned int)v3 >> 8) & 1,
           ((unsigned int)v3 >> 9) & 1,
           &v7,
           v5,
           3);
}
