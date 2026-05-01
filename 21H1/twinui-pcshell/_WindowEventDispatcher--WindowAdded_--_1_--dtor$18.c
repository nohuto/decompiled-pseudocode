/*
 * XREFs of _WindowEventDispatcher::WindowAdded_::_1_::dtor$18 @ 0x1800DBD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::WindowAdded_::_1_::dtor_18(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 384));
}
