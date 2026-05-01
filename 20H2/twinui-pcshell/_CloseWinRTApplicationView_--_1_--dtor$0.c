/*
 * XREFs of _CloseWinRTApplicationView_::_1_::dtor$0 @ 0x18045E3B1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CloseWinRTApplicationView_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 88));
}
