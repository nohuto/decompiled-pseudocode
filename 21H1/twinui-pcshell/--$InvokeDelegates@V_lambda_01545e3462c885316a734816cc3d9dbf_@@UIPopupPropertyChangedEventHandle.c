/*
 * XREFs of ??$InvokeDelegates@V_lambda_01545e3462c885316a734816cc3d9dbf_@@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_01545e3462c885316a734816cc3d9dbf_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1802AA260
 * Callers:
 *     ??$DoInvoke@V_lambda_01545e3462c885316a734816cc3d9dbf_@@@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_01545e3462c885316a734816cc3d9dbf_@@@Z @ 0x1802A9EF0 (--$DoInvoke@V_lambda_01545e3462c885316a734816cc3d9dbf_@@@-$EventSource@UIPopupPropertyChangedEve.c)
 * Callees:
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000F004 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18000F720 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180091950 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_01545e3462c885316a734816cc3d9dbf_,Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler>(
        unsigned int *a1,
        __int64 a2,
        __int64 *a3)
{
  volatile int *v5; // rdx
  _QWORD *v6; // rbx
  struct IUnknown **i; // rsi
  int v8; // eax
  int v9; // ebp
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v11, a2);
  v6 = (_QWORD *)v11;
  for ( i = *(struct IUnknown ***)(v11 + 16); i != (struct IUnknown **)v6[3]; ++i )
  {
    v8 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))(*i)->lpVtbl[1].QueryInterface)(*i, *a1);
    v9 = v8;
    if ( v8 < 0 )
    {
      RoTransformError((unsigned int)v8, 0LL, 0LL);
      if ( v9 == -2147417848 || v9 == -2147023174 || v9 == -1996357631 )
        Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
          a3,
          *i);
    }
  }
  if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference(
                        (Microsoft::WRL::Details *)((char *)v6 + 12),
                        v5) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 24LL))(v6, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return 0LL;
}
