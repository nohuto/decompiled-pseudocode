/*
 * XREFs of ?_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelayedAppActivation@@PEAUISplashScreen@@@Z @ 0x1803CC318
 * Callers:
 *     ?PerformDelayedActivation@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEAUIDelayedAppActivation@@PEAUISplashScreen@@@Z @ 0x1803CB710 (-PerformDelayedActivation@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEAUIDelayedAppActi.c)
 *     ?RelaunchApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEAUISplashScreen@@@Z @ 0x1803CB7C0 (-RelaunchApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEAUISplashScreen@@@Z.c)
 *     ?_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x1803CC234 (-_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 * Callees:
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x18004A94C (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     _lambda_5c8667dff346ed4d003bfb934b61e856_::__lambda_5c8667dff346ed4d003bfb934b61e856_ @ 0x180167798 (_lambda_5c8667dff346ed4d003bfb934b61e856_--__lambda_5c8667dff346ed4d003bfb934b61e856_.c)
 *     ??$AsAgile@UISplashScreen@@@WRL@Microsoft@@YAJPEAUISplashScreen@@PEAVAgileRef@01@@Z @ 0x1803CAF24 (--$AsAgile@UISplashScreen@@@WRL@Microsoft@@YAJPEAUISplashScreen@@PEAVAgileRef@01@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5c8667dff346ed4d003bfb934b61e856___ @ 0x1803CB2A4 (Windows--Internal--ComTaskPool--QueueTask__lambda_5c8667dff346ed4d003bfb934b61e856___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchController::_PerformDelayedActivationInternal(
        CSwitchController *this,
        struct IImmersiveApplication *a2,
        struct IDelayedAppActivation *a3,
        struct ISplashScreen *a4)
{
  __int64 (__fastcall *v7)(struct IImmersiveApplication *, __int64 *); // rbx
  int v8; // eax
  int v9; // ebx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 *v13; // [rsp+20h] [rbp-20h] BYREF
  struct IDelayedAppActivation *v14; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v17; // [rsp+60h] [rbp+20h] BYREF
  __int64 v18; // [rsp+68h] [rbp+28h] BYREF

  v17 = 0LL;
  if ( a2
    && (v7 = *(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64 *))(*(_QWORD *)a2 + 232LL),
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17),
        v8 = v7(a2, &v17),
        v9 = v8,
        v8 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FB,
      (__int64)"pcshell\\twinui\\apppositioner\\lib\\switchcontroller.cpp",
      (const char *)(unsigned int)v8);
  }
  else
  {
    v18 = 0LL;
    if ( a4 )
    {
      v13 = &v18;
      v10 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v13);
      Microsoft::WRL::AsAgile<ISplashScreen>((__int64)a4, v10);
    }
    if ( a3 )
      (*(void (__fastcall **)(struct IDelayedAppActivation *))(*(_QWORD *)a3 + 8LL))(a3);
    v14 = a3;
    v13 = 0LL;
    v15[0] = v17;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v15);
    v11 = v18;
    v15[1] = v18;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_5c8667dff346ed4d003bfb934b61e856___(v11, &v14);
    lambda_5c8667dff346ed4d003bfb934b61e856_::__lambda_5c8667dff346ed4d003bfb934b61e856_((__int64 *)&v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    if ( v9 >= 0 )
      v9 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x223,
        (__int64)"pcshell\\twinui\\apppositioner\\lib\\switchcontroller.cpp",
        (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return (unsigned int)v9;
}
