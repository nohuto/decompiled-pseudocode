/*
 * XREFs of ?OpenFlyoutOnHover@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x18009B9EC
 * Callers:
 *     ?NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@W4ShellFeedsButtonInteraction@3456@PEAUHSTRING__@@@Z @ 0x18009B670 (-NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Exp.c)
 *     ?_NotifyViewTaskbarButtonHoverStateChanged@ShellFeedsExperienceManagerImpl@@AEAAJ_N@Z @ 0x18009D048 (-_NotifyViewTaskbarButtonHoverStateChanged@ShellFeedsExperienceManagerImpl@@AEAAJ_N@Z.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180050BC0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@QEAA?AW4Variant_FeedsTaskbarHeadline@@W4VariantReportingKind@3@_N@Z @ 0x18009E3E8 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@w.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@details@wil@@QEAA_NXZ @ 0x18009E474 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@details@.c)
 */

char __fastcall ShellFeedsExperienceManagerImpl::OpenFlyoutOnHover(ShellFeedsExperienceManagerImpl *this)
{
  char v1; // bl
  ShellFeedsExperienceManagerImpl *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  v1 = 1;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsHoverClickOptions>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FeedsHoverClickOptions>::GetImpl'::`2'::impl) )
  {
    if ( SHRegGetDWORD(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Feeds",
           L"ShellFeedsTaskbarOpenOnHover",
           (unsigned int *)&v3) < 0 )
      return (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetImpl'::`2'::impl) != 4;
    else
      return (_DWORD)v3 != 0;
  }
  return v1;
}
