/*
 * XREFs of ?GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z @ 0x1800A355C
 * Callers:
 *     ?SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0@Z @ 0x1800A3948 (-SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0.c)
 *     ?GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUHSTRING__@@PEB_W@Z @ 0x1800A3AB8 (-GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA-AV-$basic_string@_WU-.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180008764 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentAPI@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180047F18 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentAPI@@@det.c)
 */

LPCWCH __fastcall CreativeFramework::TargetedContent::GetAdUnitIdFromSubscriptionId(
        LPCWCH lpString1,
        const wchar_t *a2)
{
  __int64 v2; // r8
  char v3; // si
  const wchar_t near *const *v5; // rbx
  signed __int32 v7[10]; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+80h] [rbp+18h] BYREF
  char v9; // [rsp+84h] [rbp+1Ch]
  __int64 v10; // [rsp+88h] [rbp+20h]

  LODWORD(v2) = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetImpl'::`2'::impl;
  v3 = (char)a2;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v2 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentAPI>::GetCachedFeatureEnabledState(
                      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetImpl'::`2'::impl,
                      v7);
    v10 = v2;
  }
  v8 = 0;
  v9 = 3;
  wil_details_FeatureReporting_ReportUsageToService(
    (signed __int32 *)&unk_180199180,
    0x7EA375u,
    ((unsigned int)v2 >> 8) & 1,
    ((unsigned int)v2 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v8,
    1,
    3);
  v5 = &off_1800FB2F0;
  while ( CompareStringOrdinal(lpString1, -1, *v5, -1, 1) != 2 )
  {
    v5 += 3;
    if ( v5 == &off_1800FB518 )
      return lpString1;
  }
  if ( v3 )
    return (LPCWCH)*((_QWORD *)v5 + 1);
  else
    return (LPCWCH)*((_QWORD *)v5 + 2);
}
