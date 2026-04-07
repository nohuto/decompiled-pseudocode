/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18008D1A0
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180011830 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18008C3CC (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?OnSoftwareCursorOffsetUpdated@CMagnifierControl@@UEAAJPEAVCVisual@@AEBUtagPOINT@@@Z @ 0x18008CE60 (-OnSoftwareCursorOffsetUpdated@CMagnifierControl@@UEAAJPEAVCVisual@@AEBUtagPOINT@@@Z.c)
 *     ??0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z @ 0x1800BC744 (--0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z.c)
 *     ?ShouldUpdateViewport@MagnifierExperienceHelper@@AEBA_NAEBUtagPOINT@@00@Z @ 0x1800BD0FC (-ShouldUpdateViewport@MagnifierExperienceHelper@@AEBA_NAEBUtagPOINT@@00@Z.c)
 *     ?UpdateMagnifiedWindowParameters@MagnifierExperienceHelper@@AEAAXXZ @ 0x1800BD240 (-UpdateMagnifiedWindowParameters@MagnifierExperienceHelper@@AEAAXXZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180010AC8 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18008C0B8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJi.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        ...)
{
  __int64 v3; // r8
  int v5; // edi
  int v6; // [rsp+50h] [rbp+8h] BYREF
  __int16 v7; // [rsp+54h] [rbp+Ch]
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
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)va);
    v8 = v3;
  }
  LODWORD(v8) = 0;
  v6 = 0;
  BYTE4(v8) = 3;
  v7 = WORD2(v8);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)(a1 + 2),
    0x1364866u,
    ((unsigned int)v3 >> 8) & 1,
    ((unsigned int)v3 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v6,
    v5,
    3);
}
