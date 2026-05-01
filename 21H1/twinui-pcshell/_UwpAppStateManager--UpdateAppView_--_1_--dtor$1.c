/*
 * XREFs of _UwpAppStateManager::UpdateAppView_::_1_::dtor$1 @ 0x180436D3C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UwpAppStateManager::UpdateAppView_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 56));
}
