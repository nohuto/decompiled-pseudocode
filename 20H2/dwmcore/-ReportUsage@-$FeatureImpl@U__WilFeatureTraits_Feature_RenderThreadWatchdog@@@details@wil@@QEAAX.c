/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002A21C
 * Callers:
 *     _dynamic_initializer_for__CCommonRegistryData::RenderThreadWatchdogTimeoutMilliseconds__ @ 0x1800032B0 (_dynamic_initializer_for__CCommonRegistryData--RenderThreadWatchdogTimeoutMilliseconds__.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18002A338 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@d.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800E6260 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 wil::details::FeatureImpl<__WilFeatureTraits_Feature_RenderThreadWatchdog>::ReportUsage(
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
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RenderThreadWatchdog>::GetCachedFeatureEnabledState(
                      a1,
                      &v7);
    v7 = v3;
  }
  LODWORD(v8) = 0;
  BYTE4(v8) = 0;
  return wil::details::ReportUsageToService(
           a1 + 2,
           16107080LL,
           ((unsigned int)v3 >> 8) & 1,
           ((unsigned int)v3 >> 9) & 1,
           (__int64 *)va,
           v5,
           3);
}
