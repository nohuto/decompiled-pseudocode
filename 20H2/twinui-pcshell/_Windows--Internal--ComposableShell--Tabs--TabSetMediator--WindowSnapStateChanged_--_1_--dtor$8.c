/*
 * XREFs of _Windows::Internal::ComposableShell::Tabs::TabSetMediator::WindowSnapStateChanged_::_1_::dtor$8 @ 0x18029CDDF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabSetMediator::WindowSnapStateChanged_::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
