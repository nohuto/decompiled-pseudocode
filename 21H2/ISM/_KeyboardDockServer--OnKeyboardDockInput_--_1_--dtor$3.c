/*
 * XREFs of _KeyboardDockServer::OnKeyboardDockInput_::_1_::dtor$3 @ 0x180127256
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardDockServer::OnKeyboardDockInput_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<VirtualTouchpadContextProvider,wil::err_exception_policy>::~com_ptr_t<VirtualTouchpadContextProvider,wil::err_exception_policy>((__int64 *)(a2 + 80));
}
