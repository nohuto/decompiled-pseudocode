/*
 * XREFs of ??$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@$$T@Z @ 0x1801B5EB4
 * Callers:
 *     ?OnAppRequestedDismiss@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x1801B9CA0 (-OnAppRequestedDismiss@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAppRequestedTransition@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x1801B9CD0 (-OnAppRequestedTransition@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAppTransitionCompleted@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x1801B9D00 (-OnAppTransitionCompleted@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnDeviceLocked@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x1801B9D30 (-OnDeviceLocked@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnDeviceUnlocked@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x1801B9D60 (-OnDeviceUnlocked@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnHidden@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x1801B9E60 (-OnHidden@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnSetForegroundFailed@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x1801B9EE0 (-OnSetForegroundFailed@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnStartAndCortanaDismissRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x1801BA010 (-OnStartAndCortanaDismissRequested@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnSuggestionsHidden@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x1801BA040 (-OnSuggestionsHidden@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnSuggestionsShown@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x1801BA070 (-OnSuggestionsShown@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?_OnViewDestroyed@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1801BCCC0 (-_OnViewDestroyed@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$DoInvoke@V_lambda_6788242ee63e21dca0a125830d496daa_@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_6788242ee63e21dca0a125830d496daa_@@@Z @ 0x1801B5DFC (--$DoInvoke@V_lambda_6788242ee63e21dca0a125830d496daa_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,std::nullptr_t>(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  v3 = 0LL;
  *(_QWORD *)&v4 = &v5;
  *((_QWORD *)&v4 + 1) = &v3;
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_6788242ee63e21dca0a125830d496daa_>(
           a1,
           &v4);
}
