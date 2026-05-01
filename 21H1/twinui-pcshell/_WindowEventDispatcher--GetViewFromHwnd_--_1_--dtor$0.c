/*
 * XREFs of _WindowEventDispatcher::GetViewFromHwnd_::_1_::dtor$0 @ 0x180294835
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::GetViewFromHwnd_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)(a2 + 96));
}
