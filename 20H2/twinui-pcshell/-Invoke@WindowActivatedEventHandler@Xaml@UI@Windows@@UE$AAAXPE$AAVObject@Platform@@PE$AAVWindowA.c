/*
 * XREFs of ?Invoke@WindowActivatedEventHandler@Xaml@UI@Windows@@UE$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@34@@Z @ 0x180303970
 * Callers:
 *     ?__abi_Windows_UI_Xaml_WindowActivatedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@WindowActivatedEventHandler@Xaml@UI@Windows@@2345@UE$AAAJPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@45@@Z @ 0x18030D540 (-__abi_Windows_UI_Xaml_WindowActivatedEventHandler___abi_IDelegate____abi_Invoke@-Q__abi_IDelega.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EBB30 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::UI::Xaml::WindowActivatedEventHandler::Invoke(_QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 == &Windows::UI::Xaml::WindowActivatedEventHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  result = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    JUMPOUT(0x1803039B2LL);
  }
  return result;
}
