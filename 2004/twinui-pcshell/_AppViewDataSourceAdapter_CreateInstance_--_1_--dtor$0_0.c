/*
 * XREFs of _AppViewDataSourceAdapter_CreateInstance_::_1_::dtor$0_0 @ 0x18033C7A6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppViewDataSourceAdapter_CreateInstance_::_1_::dtor_0_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 144));
}
