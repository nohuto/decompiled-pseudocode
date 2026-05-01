/*
 * XREFs of _WindowEventDispatcher::WindowAdded_::_1_::dtor$4 @ 0x1800DBC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::WindowAdded_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)(a2 + 104));
}
