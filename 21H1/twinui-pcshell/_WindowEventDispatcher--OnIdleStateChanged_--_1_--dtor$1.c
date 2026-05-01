/*
 * XREFs of _WindowEventDispatcher::OnIdleStateChanged_::_1_::dtor$1 @ 0x180295299
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::OnIdleStateChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)(a2 + 80));
}
