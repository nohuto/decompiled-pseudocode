/*
 * XREFs of ?get_WindowExperienceKind@ViewEventArgsForShowAsViewMode@@UEAAJPEAW4ExperienceKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18028C330
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LightweightWindows@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180147BC4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LightweightWindows@@@details@wil@@QEAAX_N.c)
 */

__int64 __fastcall ViewEventArgsForShowAsViewMode::get_WindowExperienceKind(
        ViewEventArgsForShowAsViewMode *this,
        enum Windows::Internal::ApplicationModel::WindowManagement::ExperienceKind *a2,
        __int64 a3)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::GetImpl'::`2'::impl,
    1u,
    a3);
  *(_DWORD *)a2 = *((_DWORD *)this + 13);
  return 0LL;
}
