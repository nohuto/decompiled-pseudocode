/*
 * XREFs of _TabViewManager::TryGetTabGroupForView_::_1_::dtor$1 @ 0x18027EF2A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabViewManager::TryGetTabGroupForView_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
