/*
 * XREFs of ??$Register@UISnapComponent@@P81@EAAJPEAUIWindowSnappingEvents@@PEAK@ZP81@EAAJK@ZPEAVTabSetMediator@Tabs@ComposableShell@Internal@Windows@@@SmartCookie@@QEAAJPEAUISnapComponent@@P81@EAAJPEAUIWindowSnappingEvents@@PEAK@ZP81@EAAJK@ZPEAVTabSetMediator@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18029A42C
 * Callers:
 *     ?SubscribeToServices@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIServiceProvider@@@Z @ 0x18029CCC0 (-SubscribeToServices@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIServiceProv.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??_9ITabletModeController@@$BEI@AA @ 0x1800F4670 (--_9ITabletModeController@@$BEI@AA.c)
 *     ??$?4V_lambda_4ea0b100659b49e250c4c20a6c651340_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_4ea0b100659b49e250c4c20a6c651340_@@@Z @ 0x1801428C0 (--$-4V_lambda_4ea0b100659b49e250c4c20a6c651340_@@X@-$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV.c)
 */

__int64 SmartCookie::Register<ISnapComponent,long (ISnapComponent::*)(IWindowSnappingEvents *,unsigned long *),long (ISnapComponent::*)(unsigned long),Windows::Internal::ComposableShell::Tabs::TabSetMediator *>(
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
      (__int64)"internal\\shell\\private\\inc\\smartcookie.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 =  ITabletModeController::`vcall'{72,{flat}}(a2);
  if ( v5 < 0 )
  {
    v6 = 42LL;
    goto LABEL_3;
  }
  v10 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
  v8[0] = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
  v8[1] = (__int64) ITabletModeController::`vcall'{80,{flat}};
  wistd::function<long (unsigned long)>::operator=<_lambda_4ea0b100659b49e250c4c20a6c651340_,void>((_QWORD *)a1, v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va);
  return 0LL;
}
