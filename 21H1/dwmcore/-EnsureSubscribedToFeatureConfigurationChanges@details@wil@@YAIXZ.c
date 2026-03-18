/*
 * XREFs of ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1801503FC
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_29854332@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E4918 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_29854332.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_27737997@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E4C30 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_27737997.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359196@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E4D34 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359196.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_29643259@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E73BC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_29643259.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2102c_26374961@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E7D0C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2102c_26374961.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359137@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E92B4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359137.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_OffsetFixSetWindowRgn_31015038@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E93B8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_OffsetFixSetWi.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180085BE4 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 */

__int64 __fastcall wil::details::EnsureSubscribedToFeatureConfigurationChanges(wil::details *this)
{
  __int64 result; // rax

  result = (unsigned int)dword_180349614;
  if ( !dword_180349614 )
    return wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
  return result;
}
