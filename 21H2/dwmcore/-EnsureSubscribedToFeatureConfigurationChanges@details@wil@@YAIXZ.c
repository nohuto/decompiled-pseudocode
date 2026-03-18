/*
 * XREFs of ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x180177B68
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_905892157@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180103D88 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_905892157@@@details@wil@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180104068 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_3187573053@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180104320 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_3187573053@@@details@wil.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180028470 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 */

__int64 __fastcall wil::details::EnsureSubscribedToFeatureConfigurationChanges(wil::details *this)
{
  __int64 result; // rax

  result = (unsigned int)dword_1803D3544;
  if ( !dword_1803D3544 )
    return wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
  return result;
}
