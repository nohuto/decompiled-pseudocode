/*
 * XREFs of ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180057C84
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UnplateMicrosoftEdgeTiles_26864230@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800C9878 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UnplateMicroso.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180186994 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHan.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicDesktopHotkeyFunctionalityHiding@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180365B74 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicDesktopHotkey.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180366EBC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@det.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInShell@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18037B140 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInShell@@@deta.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18037B230 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803D67D4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubProximalAppLau.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubRemoveSidebars_Shell@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803FD630 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubRemoveSidebars.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AppsFolderTaskbarIconLoading@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18044A5F0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AppsFolderTaskbarIconLoa.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18044A6D0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18044A7C0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@det.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_LIACoreNavigationClient@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804621D0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_LIACoreNavigationClient@.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800560F4 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        __int64 a1,
        volatile signed __int32 *a2,
        int a3,
        int a4)
{
  RTL_SRWLOCK *v8; // rsi
  int v9; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v10; // [rsp+28h] [rbp-10h]

  if ( *(_BYTE *)a1 )
  {
    v8 = (RTL_SRWLOCK *)(a1 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    if ( !a4
      || a4 != *(_DWORD *)(a1 + 28)
      || (v9 = a3, v10 = a2, !wil::details_abi::heap_buffer::push_back((void **)(a1 + 80), &v9, 0x10uLL)) )
    {
      _InterlockedAnd(a2, a3 != 0 ? -3 : -520);
    }
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
  }
}
