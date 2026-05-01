/*
 * XREFs of ?IsReducedSearchBoxWidthEnabled@@YAEXZ @ 0x18005F650
 * Callers:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x18005F5E0 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x180209540 (-ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z @ 0x1800137E8 (-GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005F68C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@QEAA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x18007788C (-getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@QEAA?AW4Variant_SearchAndCortanaSplit@@W4VariantReportingKind@3@_N@Z @ 0x18007C1C8 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@.c)
 */

char __fastcall IsReducedSearchBoxWidthEnabled(__int64 a1, __int64 a2)
{
  char v2; // bl
  CortanaFeatureConfiguration *v3; // rcx
  CortanaFeatureConfiguration *v5; // rcx
  CortanaFeatureConfiguration *v6; // rcx
  const unsigned __int16 *v7; // rdx
  WCHAR *v8; // rcx
  unsigned int v9; // r11d
  int v10; // r10d
  struct CortanaFeatureConfiguration::FeatureValue *v11[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 1;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetImpl'::`2'::impl,
    a2);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetImpl'::`2'::impl) != 1 )
    return 0;
  CortanaFeatureConfiguration::getSharedFeatureTable(v3);
  CortanaFeatureConfiguration::getSharedFeatureTable(v5);
  v8 = (WCHAR *)*((_QWORD *)CortanaFeatureConfiguration::getSharedFeatureTable(v6) + 9);
  if ( v10 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19A,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\CortanaFeatureConfiguration.h",
      (const char *)0x80070057LL,
      (int)v11[0]);
    return v2;
  }
  *(_OWORD *)v11 = 0LL;
  if ( (int)CortanaFeatureConfiguration::GetFeatureValue(v8, v7, (bool (*)(void))v9, (__int64)v11) >= 0 )
  {
    if ( HIDWORD(v11[0]) )
      return 0;
  }
  return v2;
}
