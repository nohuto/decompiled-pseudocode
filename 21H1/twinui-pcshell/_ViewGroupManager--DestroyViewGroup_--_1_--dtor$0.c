/*
 * XREFs of _ViewGroupManager::DestroyViewGroup_::_1_::dtor$0 @ 0x18026A209
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewGroupManager::DestroyViewGroup_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
