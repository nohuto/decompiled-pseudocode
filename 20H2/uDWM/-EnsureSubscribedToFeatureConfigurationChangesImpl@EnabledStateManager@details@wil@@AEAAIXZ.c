/*
 * XREFs of ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x1800507D4
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAA_NXZ @ 0x18001E6C0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@det.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabCategoryBC@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004BF80 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabCategoryBC@@@details@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RgbaSwapChains@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004C570 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RgbaSwapChains@@@details.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicSecureDesktop@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004C6A0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicSecureDesktop.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SimulationDriver@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004C7D0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SimulationDriver@@@detai.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004C8EC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@d.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004CA08 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@.c)
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x18004CBAC (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18007D698 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180086134 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateIn.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18008B9D8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJi.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ThumbnailTabs@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009A040 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ThumbnailTabs@@@details@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800AE46C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SlideWindowAnimationRect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rsi
  RTL_SRWLOCK *v3; // rdi
  void (*v4)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  unsigned int Ptr_high; // edi

  if ( !LOBYTE(this->Ptr) )
    return 0LL;
  v2 = this + 1;
  AcquireSRWLockExclusive(this + 1);
  v3 = this + 4;
  if ( this[4].Ptr )
  {
    Ptr_high = HIDWORD(this[3].Ptr);
  }
  else
  {
    v3->Ptr = 0LL;
    v4 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
    if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
      || (v4 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
    {
      ((void (__fastcall *)(RTL_SRWLOCK *, void (__fastcall *)(void *), RTL_SRWLOCK *))v4)(
        &this[4],
        _lambda_fee8cea507d2413a58be13acfb66740a_::_lambda_invoker_cdecl_,
        this);
    }
    if ( v3->Ptr )
    {
      Ptr_high = 1;
      HIDWORD(this[3].Ptr) = 1;
    }
    else
    {
      Ptr_high = 0;
    }
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return Ptr_high;
}
