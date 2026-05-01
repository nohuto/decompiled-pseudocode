/*
 * XREFs of ?_OnMessageHandler@CortanaSharedExperienceManager@@AEAAJI_K_J@Z @ 0x180199350
 * Callers:
 *     <none>
 * Callees:
 *     ??$DoInvoke@V_lambda_9dd196aade3b74d6ebabba0926cd735f_@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_9dd196aade3b74d6ebabba0926cd735f_@@@Z @ 0x1801923FC (--$DoInvoke@V_lambda_9dd196aade3b74d6ebabba0926cd735f_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ?_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18019928C (-_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180199F88 (-_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_OnMessageHandler(
        RTL_SRWLOCK *this,
        int a2,
        CortanaSharedExperienceManager *a3,
        int a4)
{
  RTL_SRWLOCK *v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( a2 == LODWORD(this[56].Ptr) )
    {
      CortanaSharedExperienceManager::_ResetActivationTimeoutPolicy((CortanaSharedExperienceManager *)this);
    }
    else if ( a2 == LODWORD(this[58].Ptr) )
    {
      CortanaSharedExperienceManager::_OnDeferredSuspensionTimer((CortanaSharedExperienceManager *)this);
    }
  }
  else if ( a3 == (CortanaSharedExperienceManager *)this )
  {
    v5 = this;
    *(_QWORD *)&v6 = &v5;
    v7 = a4;
    *((_QWORD *)&v6 + 1) = &v7;
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_9dd196aade3b74d6ebabba0926cd735f_>(
      this + 39,
      &v6);
  }
  return 0LL;
}
