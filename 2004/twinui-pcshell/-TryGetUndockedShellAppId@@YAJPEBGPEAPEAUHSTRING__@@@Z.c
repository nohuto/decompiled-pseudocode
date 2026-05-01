/*
 * XREFs of ?TryGetUndockedShellAppId@@YAJPEBGPEAPEAUHSTRING__@@@Z @ 0x1801B22CC
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B0AE0 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B526C (-RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801C6128 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ShellUndockedPackage@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801B0A44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ShellUndockedPackage@@@details@wil@@QEAAX.c)
 */

__int64 __fastcall TryGetUndockedShellAppId(const unsigned __int16 *a1, HSTRING *a2, __int64 a3)
{
  *a2 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ShellUndockedPackage>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_ShellUndockedPackage>::GetImpl'::`2'::impl,
    0,
    a3);
  return 0LL;
}
