/*
 * XREFs of ?_OnMessageHandler@SearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x180051170
 * Callers:
 *     <none>
 * Callees:
 *     ?_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x1800511A8 (-_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ @ 0x180051748 (-_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ??$DoInvoke@V_lambda_9dd196aade3b74d6ebabba0926cd735f_@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_9dd196aade3b74d6ebabba0926cd735f_@@@Z @ 0x1801923FC (--$DoInvoke@V_lambda_9dd196aade3b74d6ebabba0926cd735f_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

__int64 __fastcall SearchAppExperienceManager::_OnMessageHandler(
        SearchAppExperienceManager *this,
        int a2,
        SearchAppExperienceManager *a3,
        int a4)
{
  SearchAppExperienceManager *v5; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF

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
  }
  else if ( a3 == this )
  {
    v5 = this;
    v6[0] = &v5;
    v7 = a4;
    v6[1] = &v7;
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_9dd196aade3b74d6ebabba0926cd735f_>(
      (char *)this + 312,
      v6);
  }
  return 0LL;
}
