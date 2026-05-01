/*
 * XREFs of _lambda_e7233f2d7fbbc8c446f08901eacadde9_::_lambda_e7233f2d7fbbc8c446f08901eacadde9__0 @ 0x1802F9A1C
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802FF9F0 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIInvocationAnimationHost@@UIAnimatedDismissableHost@@UIDismissalAnimationHost@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180212AF4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$CMultit.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EBCEC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1802EC484 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr_ea_1802EC484.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_e7233f2d7fbbc8c446f08901eacadde9_::_lambda_e7233f2d7fbbc8c446f08901eacadde9__0(
        __int64 a1,
        volatile int *a2,
        _QWORD *a3,
        __int64 *a4,
        _OWORD *a5,
        _OWORD *a6,
        __int64 *a7,
        __int64 *a8,
        _QWORD *a9,
        __int64 *a10,
        __int64 *a11,
        __int64 a12)
{
  _QWORD *v13; // r10
  __int64 v15; // rcx

  v13 = a3;
  v15 = *(_QWORD *)a2;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  if ( v15 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<ISnapAssistViewHost>,IInvocationAnimationHost,IAnimatedDismissableHost,IDismissalAnimationHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::InternalAddRef(
      v15,
      a2);
  *(_QWORD *)(a1 + 8) = *v13;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 8));
  *(_QWORD *)(a1 + 16) = __abi_winrt_ptr_ctor(*a4);
  *(_OWORD *)(a1 + 24) = *a5;
  *(_OWORD *)(a1 + 40) = *a6;
  *(_QWORD *)(a1 + 56) = __abi_winrt_ptr_ctor(*a7);
  *(_QWORD *)(a1 + 64) = __abi_winrt_ptr_ctor(*a8);
  *(_QWORD *)(a1 + 72) = *a9;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 72));
  *(_QWORD *)(a1 + 80) = __abi_winrt_ptr_ctor(*a10);
  *(_QWORD *)(a1 + 88) = __abi_winrt_ptr_ctor(*a11);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 96),
    a12);
  *(_QWORD *)(a1 + 96) = &XamlSwitcherTelemetry::WindowCreatedCallback::`vftable';
  return a1;
}
