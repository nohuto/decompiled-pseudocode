/*
 * XREFs of _CDesktopPositioner::SubscribeToServices_::_1_::dtor$2 @ 0x1803EDF1F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopPositioner::SubscribeToServices_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 72));
}
