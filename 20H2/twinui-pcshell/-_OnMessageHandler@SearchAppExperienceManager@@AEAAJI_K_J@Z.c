/*
 * XREFs of ?_OnMessageHandler@SearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18007A120
 * Callers:
 *     <none>
 * Callees:
 *     ?_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x18007A1C8 (-_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ @ 0x18007A6D4 (-_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ??$SearchApp_Dismiss@AEAY0L@$$CBG@CortanaProactiveTelemetry@@SAXAEAY0L@$$CBG@Z @ 0x180098E84 (--$SearchApp_Dismiss@AEAY0L@$$CBG@CortanaProactiveTelemetry@@SAXAEAY0L@$$CBG@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsDynamicSearchBox@@@details@wil@@QEAA_NXZ @ 0x180099684 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsDynamicSearchBox@@@details@w.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$DoInvoke@V_lambda_9dd196aade3b74d6ebabba0926cd735f_@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_9dd196aade3b74d6ebabba0926cd735f_@@@Z @ 0x1801B5C8C (--$DoInvoke@V_lambda_9dd196aade3b74d6ebabba0926cd735f_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

__int64 __fastcall SearchAppExperienceManager::_OnMessageHandler(
        SearchAppExperienceManager *this,
        int a2,
        SearchAppExperienceManager *a3,
        int a4)
{
  SearchAppExperienceManager *v6; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( a2 == *((_DWORD *)this + 114) )
    {
      SearchAppExperienceManager::_ResetActivationTimeoutPolicy(this);
    }
    else if ( a2 == *((_DWORD *)this + 118) )
    {
      SearchAppExperienceManager::_OnDeferredSuspensionTimer(this);
    }
    else if ( a2 == *((_DWORD *)this + 138)
           && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsDynamicSearchBox>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FeedsDynamicSearchBox>::GetImpl'::`2'::impl) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 56LL))(*((_QWORD *)this + 54));
      CortanaProactiveTelemetry::SearchApp_Dismiss<unsigned short const (&)[11]>(L"MouseTrack");
    }
  }
  else if ( a3 == this )
  {
    v6 = this;
    v7[0] = &v6;
    v8 = a4;
    v7[1] = &v8;
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_9dd196aade3b74d6ebabba0926cd735f_>(
      (char *)this + 312,
      v7);
  }
  return 0LL;
}
