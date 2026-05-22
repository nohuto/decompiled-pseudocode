/*
 * XREFs of _VirtualTouchpadControllerProxy::OnTouchpadRectChanged_::_1_::dtor$0 @ 0x1800F0B74
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualTouchpadControllerProxy::OnTouchpadRectChanged_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<VirtualTouchpadContextProvider,wil::err_exception_policy>::~com_ptr_t<VirtualTouchpadContextProvider,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
