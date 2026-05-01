/*
 * XREFs of ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180053408
 * Callers:
 *     ?ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18004DC9C (-ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowSearchWithStart@XamlLauncherState@@AEAAJ_N@Z @ 0x180089118 (-ShowSearchWithStart@XamlLauncherState@@AEAAJ_N@Z.c)
 *     ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x1801E6FD8 (-ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR_.c)
 *     ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x1801E7920 (-CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z.c)
 *     ?GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA?AW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4EDGEUI_TRAYSTUCKPLACE@@_N1@Z @ 0x1801E8E68 (-GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA-AW4ShellExperienceViewBorderEdge@.c)
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x1801EB390 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1801ECB08 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     wil::details::functor_wrapper_void__lambda_744fbbf31ab9c433b0df41c4c967a538__&_::Run @ 0x1801EDA80 (wil--details--functor_wrapper_void__lambda_744fbbf31ab9c433b0df41c4c967a538__-_--Run.c)
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1801EE510 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ @ 0x1803138B0 (-MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180315700 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?IsReducedSearchBoxWidthEnabled@@YAEXZ @ 0x180053478 (-IsReducedSearchBoxWidthEnabled@@YAEXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800534B4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@QEAA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x18007A30C (-getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@QEAA?AW4Variant_SearchAndCortanaSplit@@W4VariantReportingKind@3@_N@Z @ 0x18007D118 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@.c)
 *     ?GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z @ 0x1801AFE7C (-GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z.c)
 */

unsigned __int8 IsSearchAndCortanaSplitEnabled(void)
{
  __int64 v0; // rdx
  char v1; // bl
  CortanaFeatureConfiguration *v2; // rcx
  CortanaFeatureConfiguration *v4; // rcx
  CortanaFeatureConfiguration *v5; // rcx
  const unsigned __int16 *v6; // rdx
  CortanaFeatureConfiguration *v7; // rcx
  unsigned int v8; // r11d
  int v9; // r10d
  struct CortanaFeatureConfiguration::FeatureValue *v10[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( IsReducedSearchBoxWidthEnabled() )
    goto LABEL_3;
  LOBYTE(v0) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetImpl'::`2'::impl,
    v0);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetImpl'::`2'::impl) == 2 )
    goto LABEL_3;
  CortanaFeatureConfiguration::getSharedFeatureTable(v2);
  CortanaFeatureConfiguration::getSharedFeatureTable(v4);
  v7 = (CortanaFeatureConfiguration *)*((_QWORD *)CortanaFeatureConfiguration::getSharedFeatureTable(v5) + 9);
  if ( v9 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x196,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\CortanaFeatureConfiguration.h",
      (const char *)0x80070057LL,
      (int)v10[0]);
    return v1;
  }
  *(_OWORD *)v10 = 0LL;
  if ( (int)CortanaFeatureConfiguration::GetFeatureValue(v7, v6, (bool (*)(void))v8, (unsigned int)v10, 0LL) >= 0 )
  {
    if ( HIDWORD(v10[0]) )
    {
LABEL_3:
      v12 = 0;
      RtlGetDeviceFamilyInfoEnum(0LL, &v12, 0LL);
      if ( v12 == 3 || v12 == 9 )
        return 1;
    }
  }
  return v1;
}
