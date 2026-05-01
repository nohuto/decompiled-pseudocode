/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds_BoostPriorityImplementation@@@details@wil@@QEAA_NXZ @ 0x18009F984
 * Callers:
 *     ?Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x18009CCE0 (-Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?_OnViewChangedHandler@ShellFeedsExperienceManagerImpl@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18009E970 (-_OnViewChangedHandler@ShellFeedsExperienceManagerImpl@@AEAAJPEAUIShellExperienceView@Experience.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds_BoostPriorityImplementation@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009BA58 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds_BoostPri.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds_BoostPriorityImplementation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009D260 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds_BoostPriorityImplementati.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Feeds_BoostPriorityImplementation>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Feeds_BoostPriorityImplementation>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Feeds_BoostPriorityImplementation>::ReportUsage(
    a1,
    v2,
    v3);
  return v2;
}
