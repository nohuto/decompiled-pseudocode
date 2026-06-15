/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180064C84
 * Callers:
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@QEAA?AW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@3@_N@Z @ 0x180064564 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@QEAAX_NW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@3@_K@Z @ 0x1800645AC (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@d.c)
 *     wil::details::functor_wrapper_void__lambda_4f14d1abbf0e3acbe7864117e4a90b66__&_::Run @ 0x180069690 (wil--details--functor_wrapper_void__lambda_4f14d1abbf0e3acbe7864117e4a90b66__-_--Run.c)
 * Callees:
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180034998 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180064950 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180064D60 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetCachedVariantState(
        volatile signed __int64 *a1,
        __int64 a2)
{
  volatile signed __int64 v2; // rax
  int v6; // esi
  signed __int64 v7; // rax
  unsigned __int16 v8; // cx
  int v9; // r10d
  unsigned int v10; // r8d
  signed __int64 v11; // rtt
  int v12; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int16 v13; // [rsp+38h] [rbp+10h] BYREF
  int v14; // [rsp+3Ch] [rbp+14h]

  v2 = *a1;
  *(_QWORD *)a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    v12 = 0;
    v6 = dword_18019F58C;
    if ( !dword_18019F58C )
      v6 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetCurrentVariantState(
      a1,
      &v13,
      &v12);
    v7 = *(_QWORD *)a2;
    do
    {
      v8 = v13;
      v9 = v7;
      *(_QWORD *)a2 = v7;
      if ( (v7 & 4) == 0 )
      {
        *(_DWORD *)(a2 + 4) = v14;
        v9 = ((v12 != 0 ? 4 : 0) | (v7 ^ (v8 ^ (unsigned __int16)v7) & 0xFC00) & 0xFFFFFFFB) ^ (v8 ^ ((v12 != 0 ? 4 : 0) | (unsigned __int16)(v7 ^ (v8 ^ v7) & 0xFC00))) & 0x200;
        *(_DWORD *)a2 = v9;
      }
      v10 = ((unsigned int)v7 >> 1) & 1;
      if ( !v10 )
        *(_DWORD *)a2 = v9 ^ (v8 ^ (unsigned __int16)v9) & 0x100 | 2;
      v11 = v7;
      v7 = _InterlockedCompareExchange64(a1, *(_QWORD *)a2, v7);
    }
    while ( v11 != v7 );
    if ( !v10 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        (__int64)&wil::details::g_enabledStateManager,
        (volatile signed __int32 *)a1,
        1,
        v6);
  }
  return a2;
}
