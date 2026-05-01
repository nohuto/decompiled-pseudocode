/*
 * XREFs of ?GetMTVHostKind@@YA?AW4MultitaskingViewHostKind@@W4MULTITASKING_VIEW_TYPES@@@Z @ 0x180387CCC
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180388F60 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180139588 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180215654 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAltTabView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802EAA30 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAltTabView@@@details@wil@@QEAAX_NW4Re.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180388078 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@details@wil@@QEAAX_N.c)
 */

__int64 __fastcall GetMTVHostKind(int a1, __int64 a2, __int64 a3, const char *a4)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a1 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( !v5 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetImpl'::`2'::impl,
        1u,
        3u);
      return 1LL;
    }
    v6 = v5 - 2;
    if ( v6 )
    {
      if ( v6 != 4 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          35LL,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
          a4);
        __debugbreak();
      }
    }
    else
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlSnapAssistView>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_XamlSnapAssistView>::GetImpl'::`2'::impl,
        0LL);
    }
  }
  else
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAltTabView>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_XamlAltTabView>::GetImpl'::`2'::impl,
      0,
      3u);
  }
  return 0LL;
}
