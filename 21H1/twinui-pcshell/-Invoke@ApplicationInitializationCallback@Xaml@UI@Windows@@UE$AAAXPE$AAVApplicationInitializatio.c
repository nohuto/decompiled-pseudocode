/*
 * XREFs of ?Invoke@ApplicationInitializationCallback@Xaml@UI@Windows@@UE$AAAXPE$AAVApplicationInitializationCallbackParams@234@@Z @ 0x1802CF7E0
 * Callers:
 *     ?__abi_Windows_UI_Xaml_ApplicationInitializationCallback___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@ApplicationInitializationCallback@Xaml@UI@Windows@@2345@UE$AAAJPE$AAVApplicationInitializationCallbackParams@345@@Z @ 0x1802D1330 (-__abi_Windows_UI_Xaml_ApplicationInitializationCallback___abi_IDelegate____abi_Invoke@-Q__abi_I.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802CA880 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::UI::Xaml::ApplicationInitializationCallback::Invoke(_QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 == &Windows::UI::Xaml::ApplicationInitializationCallback::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  result = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    JUMPOUT(0x1802CF822LL);
  }
  return result;
}
