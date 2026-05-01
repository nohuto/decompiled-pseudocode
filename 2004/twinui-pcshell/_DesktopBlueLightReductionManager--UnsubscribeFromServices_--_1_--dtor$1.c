/*
 * XREFs of _DesktopBlueLightReductionManager::UnsubscribeFromServices_::_1_::dtor$1 @ 0x18019A46F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DesktopBlueLightReductionManager::UnsubscribeFromServices_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
