/*
 * XREFs of _wil::ActivateInstance_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSink__::_1_::dtor$0 @ 0x1803178B6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::ActivateInstance_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSink__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 32));
}
