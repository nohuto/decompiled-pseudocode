/*
 * XREFs of ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x18002A644
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180006154 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSp.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18002A338 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@d.c)
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x18002A4FC (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18002D1D8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ExpressionKeyframePerFra.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18002D308 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@detail.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18002D438 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@w.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18002D568 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@detail.c)
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18014C93C (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SpatialComposition@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180168428 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SpatialComposition@@@det.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Rendering_SharpMagShader@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180191E24 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Rendering_SharpMagShader.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SuperWetInk@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180194AA0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SuperWetInk@@@details@wi.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VailSuperWetInk@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180194BE8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VailSuperWetInk@@@detail.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TreeDumping@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801972CC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TreeDumping@@@details@wi.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SpatialCompositionLabel@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801E8B40 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SpatialCompositionLabel@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
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
