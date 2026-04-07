/*
 * XREFs of ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18007DF48
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180054A30 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@detail.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Rollback@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180054B34 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Rollback@@@details@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180054C38 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180054D3C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180055520 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOn.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2011c_29519204@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180055958 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2011c_29519204.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180055C20 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180051A84 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 */

__int64 __fastcall wil::details::EnsureSubscribedToFeatureConfigurationChanges(wil::details *this)
{
  __int64 result; // rax

  result = (unsigned int)dword_1800E505C;
  if ( !dword_1800E505C )
    return wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
  return result;
}
