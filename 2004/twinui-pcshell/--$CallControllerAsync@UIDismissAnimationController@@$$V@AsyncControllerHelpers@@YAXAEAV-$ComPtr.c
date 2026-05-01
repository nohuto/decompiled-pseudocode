/*
 * XREFs of ??$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UIDismissAnimationController@@@WRL@Microsoft@@P8IDismissAnimationController@@EAAXXZ@Z @ 0x18038DB04
 * Callers:
 *     ?AnimateDismissView@CSnapAssistViewHost@@UEAAXPEAUISwitchItem@@@Z @ 0x18038E3A0 (-AnimateDismissView@CSnapAssistViewHost@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?CurrentVirtualDesktopChanged@CSnapAssistViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18038E6F0 (-CurrentVirtualDesktopChanged@CSnapAssistViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?DismissAnimationFinished@CSnapAssistViewHost@@UEAAXPEAUIUnknown@@@Z @ 0x18038E750 (-DismissAnimationFinished@CSnapAssistViewHost@@UEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_04782cd470235717f7963c3576bcb0e4___ @ 0x18038DC00 (Windows--Internal--ComTaskPool--QueueTask__lambda_04782cd470235717f7963c3576bcb0e4___.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x18038DE34 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 */

void __fastcall AsyncControllerHelpers::CallControllerAsync<IDismissAnimationController,>(__int64 *a1)
{
  unsigned int ControllerApartment; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 (__fastcall *v5)(__int64); // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h] BYREF

  if ( *a1 )
  {
    ControllerApartment = AsyncControllerHelpers::GetControllerApartment();
    v3 = *a1;
    v4 = ControllerApartment;
    v6 = v3;
    v5 =  IVirtualDesktopNotification::`vcall'{24,{flat}};
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    Windows::Internal::ComTaskPool::QueueTask__lambda_04782cd470235717f7963c3576bcb0e4___(v4, &v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  }
}
