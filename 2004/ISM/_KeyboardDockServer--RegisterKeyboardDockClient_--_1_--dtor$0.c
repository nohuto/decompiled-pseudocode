/*
 * XREFs of _KeyboardDockServer::RegisterKeyboardDockClient_::_1_::dtor$0 @ 0x1801274D6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardDockServer::RegisterKeyboardDockClient_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
