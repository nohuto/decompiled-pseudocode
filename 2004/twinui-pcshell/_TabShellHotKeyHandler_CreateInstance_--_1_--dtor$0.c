/*
 * XREFs of _TabShellHotKeyHandler_CreateInstance_::_1_::dtor$0 @ 0x18029379F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabShellHotKeyHandler_CreateInstance_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<TabShellHotKeyHandler,wil::err_exception_policy>::~com_ptr_t<TabShellHotKeyHandler,wil::err_exception_policy>((__int64 *)(a2 + 136));
}
