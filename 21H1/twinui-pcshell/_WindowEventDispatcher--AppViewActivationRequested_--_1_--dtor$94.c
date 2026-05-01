/*
 * XREFs of _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$94 @ 0x1800DC830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor_94(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ViewEventArgs,wil::err_exception_policy>::~com_ptr_t<ViewEventArgs,wil::err_exception_policy>(a2 + 368);
}
