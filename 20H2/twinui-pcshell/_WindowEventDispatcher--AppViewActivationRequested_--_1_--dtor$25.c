/*
 * XREFs of _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$25 @ 0x180102630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor_25(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)(a2 + 360));
}
