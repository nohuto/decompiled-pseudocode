/*
 * XREFs of _AppViewIconFactory::CreateImageSource_::_1_::dtor$2 @ 0x18033CB91
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppViewIconFactory::CreateImageSource_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 56));
}
