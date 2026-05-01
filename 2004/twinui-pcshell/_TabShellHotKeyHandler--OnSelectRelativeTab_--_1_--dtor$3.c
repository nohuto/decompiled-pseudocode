/*
 * XREFs of _TabShellHotKeyHandler::OnSelectRelativeTab_::_1_::dtor$3 @ 0x180292FBA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabShellHotKeyHandler::OnSelectRelativeTab_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 128));
}
