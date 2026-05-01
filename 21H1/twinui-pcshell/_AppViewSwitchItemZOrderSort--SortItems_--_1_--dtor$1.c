/*
 * XREFs of _AppViewSwitchItemZOrderSort::SortItems_::_1_::dtor$1 @ 0x180322D34
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppViewSwitchItemZOrderSort::SortItems_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
