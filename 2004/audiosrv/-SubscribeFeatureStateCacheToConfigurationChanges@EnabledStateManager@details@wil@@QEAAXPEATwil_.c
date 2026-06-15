/*
 * XREFs of ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180034998
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800346F0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Audio_MultiChannelRender.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GetMixFormatForVSS@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800347CC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GetMixFormatForVSS@@@det.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180064978 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTw.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180064B10 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheck.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180064D84 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrv_RC_36390724@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18006DC84 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrv_RC_36.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowSpatialLicenseSideLoad@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180135B90 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowSpatialLicenseSideL.c)
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800348A8 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     memcpy_s @ 0x180034A94 (memcpy_s.c)
 */

void __fastcall wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        __int64 a1,
        volatile signed __int32 *a2,
        int a3,
        int a4)
{
  RTL_SRWLOCK *v8; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  int Source; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v13; // [rsp+28h] [rbp-10h]

  if ( *(_BYTE *)a1 )
  {
    v8 = (RTL_SRWLOCK *)(a1 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    if ( !a4 || a4 != *(_DWORD *)(a1 + 28) )
      goto LABEL_12;
    v9 = *(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80) + 16LL;
    v10 = *(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 80);
    Source = a3;
    v13 = a2;
    if ( v9 < v10 )
      goto LABEL_5;
    v11 = 16LL;
    if ( 2 * v10 > 0x10 )
      v11 = 2 * v10;
    if ( wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)(a1 + 80), v11) )
    {
LABEL_5:
      memcpy_s(
        *(void *const *)(a1 + 88),
        (*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) & -(__int64)(*(_QWORD *)(a1 + 88) < *(_QWORD *)(a1 + 96)),
        &Source,
        0x10uLL);
      *(_QWORD *)(a1 + 88) += 16LL;
    }
    else
    {
LABEL_12:
      _InterlockedAnd(a2, a3 != 0 ? -3 : -520);
    }
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
  }
}
