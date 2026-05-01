/*
 * XREFs of _TabViewManager::AddAndInsertTabAtDefaultPositionForWindowId_::_1_::dtor$5 @ 0x18026C0C9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabViewManager::AddAndInsertTabAtDefaultPositionForWindowId_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 32));
}
