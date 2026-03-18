/*
 * XREFs of ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18014E4BC
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_HitTesting_32337248@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E8EF8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_HitTesting_323.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E98F4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x18002EDB4 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 */

__int64 __fastcall wil::details::EnsureSubscribedToFeatureConfigurationChanges(wil::details *this)
{
  __int64 result; // rax

  result = (unsigned int)dword_180345614;
  if ( !dword_180345614 )
    return wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
  return result;
}
