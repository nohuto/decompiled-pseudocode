/*
 * XREFs of ?Invoke@DispatchedHandler@Core@UI@Windows@@UE$AAAXXZ @ 0x1802D2C70
 * Callers:
 *     ?__abi_Windows_UI_Core_DispatchedHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@DispatchedHandler@Core@UI@Windows@@2345@UE$AAAJXZ @ 0x1802D2E60 (-__abi_Windows_UI_Core_DispatchedHandler___abi_IDelegate____abi_Invoke@-Q__abi_IDelegate@Dispatc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802CA880 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::UI::Core::DispatchedHandler::Invoke(_QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 == &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  result = ((__int64 (*)(void))(*a1)[3])();
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    JUMPOUT(0x1802D2CB2LL);
  }
  return result;
}
