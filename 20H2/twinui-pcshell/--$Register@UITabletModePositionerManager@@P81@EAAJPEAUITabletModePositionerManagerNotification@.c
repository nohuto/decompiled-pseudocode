/*
 * XREFs of ??$Register@UITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@SmartCookie@@QEAAJPEAUITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@Z @ 0x180403F2C
 * Callers:
 *     ?Initialize@ScreenManager@@UEAAJAEBUScreenManangerInitParams@@@Z @ 0x180404BC0 (-Initialize@ScreenManager@@UEAAJAEBUScreenManangerInitParams@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??_9IVirtualDesktopNotification@@$BBI@AA @ 0x1800F0450 (--_9IVirtualDesktopNotification@@$BBI@AA.c)
 *     ??$?4V_lambda_981d6f8b111e5fca3cbe4796bc87df4f_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_981d6f8b111e5fca3cbe4796bc87df4f_@@@Z @ 0x180403CE0 (--$-4V_lambda_981d6f8b111e5fca3cbe4796bc87df4f_@@X@-$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV.c)
 */

__int64 SmartCookie::Register<ITabletModePositionerManager,long (ITabletModePositionerManager::*)(ITabletModePositionerManagerNotification *,unsigned long *),long (ITabletModePositionerManager::*)(unsigned long),ScreenManager *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  int v6; // eax
  unsigned int v7; // edi
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
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"internal\\shell\\private\\inc\\SmartCookie.h",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    v6 =  IVirtualDesktopNotification::`vcall'{24,{flat}}(a2);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v10 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
      v8[0] = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
      v8[1] = (__int64) IBamThrottleSettings::`vcall'{32,{flat}};
      wistd::function<long (unsigned long)>::operator=<_lambda_981d6f8b111e5fca3cbe4796bc87df4f_,void>((_QWORD *)a1, v8);
      if ( v8[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8[0] + 16LL))(v8[0]);
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A,
        (__int64)"internal\\shell\\private\\inc\\SmartCookie.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
}
