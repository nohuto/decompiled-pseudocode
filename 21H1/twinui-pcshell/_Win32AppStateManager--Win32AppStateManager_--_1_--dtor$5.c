/*
 * XREFs of _Win32AppStateManager::Win32AppStateManager_::_1_::dtor$5 @ 0x180438701
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32AppStateManager::Win32AppStateManager_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 144LL));
}
