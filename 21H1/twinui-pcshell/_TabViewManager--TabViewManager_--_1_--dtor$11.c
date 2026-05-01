/*
 * XREFs of _TabViewManager::TabViewManager_::_1_::dtor$11 @ 0x1802481E1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabViewManager::TabViewManager_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 408LL));
}
