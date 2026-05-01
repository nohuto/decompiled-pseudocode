/*
 * XREFs of _TabViewManager::AddVirtualTabForWindow_::_1_::dtor$5 @ 0x18024AC01
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabViewManager::AddVirtualTabForWindow_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
