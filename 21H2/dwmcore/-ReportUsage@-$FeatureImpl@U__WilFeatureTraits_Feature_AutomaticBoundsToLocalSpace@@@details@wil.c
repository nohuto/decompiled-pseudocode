/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F32DC
 * Callers:
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x1800F3278 (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x1800F32A8 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x1802236A0 (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800F3364 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSp.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180103518 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::GetCachedFeatureEnabledState(
                      a1,
                      v8);
    v11 = v4;
  }
  v9 = 0;
  v10 = 0;
  return wil::details::ReportUsageToService(
           a1 + 2,
           16043029LL,
           ((unsigned int)v4 >> 8) & 1,
           ((unsigned int)v4 >> 9) & 1,
           &v9,
           v6,
           3);
}
