/*
 * XREFs of ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x180007CD4
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x180007318 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000F5AC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListE.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18003AEB4 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEA.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18003B04C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@w.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::EnsureSubscribedToFeatureConfigurationChanges(wil::details *this)
{
  unsigned int v1; // ebx
  void (*v2)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax

  v1 = dword_18005A44C;
  if ( !dword_18005A44C )
  {
    if ( wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&stru_18005A438);
      if ( qword_18005A450 )
      {
        v1 = dword_18005A44C;
LABEL_5:
        ReleaseSRWLockExclusive(&stru_18005A438);
        return v1;
      }
      qword_18005A450 = 0LL;
      v2 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v2 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        ((void (__fastcall *)(__int64 *, void (__fastcall *)(RTL_SRWLOCK *), void *))v2)(
          &qword_18005A450,
          _lambda_fee8cea507d2413a58be13acfb66740a_::_lambda_invoker_cdecl_,
          &wil::details::g_enabledStateManager);
      }
      if ( qword_18005A450 )
      {
        v1 = 1;
        dword_18005A44C = 1;
        goto LABEL_5;
      }
      ReleaseSRWLockExclusive(&stru_18005A438);
    }
    return 0;
  }
  return v1;
}
