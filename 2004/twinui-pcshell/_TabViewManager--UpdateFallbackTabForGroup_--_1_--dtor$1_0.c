/*
 * XREFs of _TabViewManager::UpdateFallbackTabForGroup_::_1_::dtor$1_0 @ 0x180280312
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabViewManager::UpdateFallbackTabForGroup_::_1_::dtor_1_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 88));
}
