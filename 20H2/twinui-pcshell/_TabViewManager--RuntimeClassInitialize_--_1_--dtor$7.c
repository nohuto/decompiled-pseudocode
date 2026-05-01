/*
 * XREFs of _TabViewManager::RuntimeClassInitialize_::_1_::dtor$7 @ 0x180276CFB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabViewManager::RuntimeClassInitialize_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(*(__int64 **)(a2 + 168));
}
