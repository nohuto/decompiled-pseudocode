/*
 * XREFs of ??$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVSurfaceHubPositioner@@@SmartCookie@@QEAAJPEAUIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVSurfaceHubPositioner@@@Z @ 0x1803D72E4
 * Callers:
 *     ?SubscribeToServices@SurfaceHubPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803D8140 (-SubscribeToServices@SurfaceHubPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@KioskPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803DD010 (-SubscribeToServices@KioskPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??_9IVirtualDesktopNotification@@$BBI@AA @ 0x1800F0450 (--_9IVirtualDesktopNotification@@$BBI@AA.c)
 *     ??$?4V_lambda_82aa5f2d4b5f706e5568013be286c283_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_82aa5f2d4b5f706e5568013be286c283_@@@Z @ 0x18013F38C (--$-4V_lambda_82aa5f2d4b5f706e5568013be286c283_@@X@-$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV.c)
 */

__int64 SmartCookie::Register<IImmersiveMonitorNotificationService,long (IImmersiveMonitorNotificationService::*)(IImmersiveMonitorNotification *,unsigned long *),long (IImmersiveMonitorNotificationService::*)(unsigned long),SurfaceHubPositioner *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  if ( *(_DWORD *)(a1 + 120) )
  {
    v5 = -2147019873;
    v6 = 41LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"internal\\shell\\private\\inc\\SmartCookie.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 =  IVirtualDesktopNotification::`vcall'{24,{flat}}(a2);
  if ( v5 < 0 )
  {
    v6 = 42LL;
    goto LABEL_3;
  }
  v10 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
  v8[0] = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
  v8[1] = (__int64) IBamThrottleSettings::`vcall'{32,{flat}};
  wistd::function<long (unsigned long)>::operator=<_lambda_82aa5f2d4b5f706e5568013be286c283_,void>((_QWORD *)a1, v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va);
  return 0LL;
}
