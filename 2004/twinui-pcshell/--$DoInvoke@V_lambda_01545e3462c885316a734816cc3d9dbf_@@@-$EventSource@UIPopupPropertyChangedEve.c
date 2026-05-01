/*
 * XREFs of ??$DoInvoke@V_lambda_01545e3462c885316a734816cc3d9dbf_@@@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_01545e3462c885316a734816cc3d9dbf_@@@Z @ 0x1802CBA90
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_34863b3fc76a19bdc8c010625003142d___::Run @ 0x1802D0C10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_34863b3fc76a19bdc8c010625003142d___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8443d09f6513b5b9b20fd7f53aa1c6cd___::Run @ 0x1802D0C70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8443d09f6513b5b9b20fd7f53aa1c6cd___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cc0b3fba328f8aac054ce118344567ee___::Run @ 0x1802D0D80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cc0b3fba328f8aac054ce118344567ee___--Run.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000F678 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000FBC0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000FD14 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800922B0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$InvokeDelegates@V_lambda_01545e3462c885316a734816cc3d9dbf_@@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_01545e3462c885316a734816cc3d9dbf_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1802CBE00 (--$InvokeDelegates@V_lambda_01545e3462c885316a734816cc3d9dbf_@@UIPopupPropertyChangedEventHandle.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_01545e3462c885316a734816cc3d9dbf_>(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  volatile int *v6; // rdx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v8 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v9, a1 + 1);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v8, a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v9);
  v5 = v8;
  if ( v8 )
  {
    v4 = Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_01545e3462c885316a734816cc3d9dbf_,Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler>(
           a2,
           v8,
           a1);
    if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v5 + 12), v6) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v4;
}
