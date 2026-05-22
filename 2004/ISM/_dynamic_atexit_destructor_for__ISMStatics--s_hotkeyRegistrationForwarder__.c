/*
 * XREFs of _dynamic_atexit_destructor_for__ISMStatics::s_hotkeyRegistrationForwarder__ @ 0x180051900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__ISMStatics::s_hotkeyRegistrationForwarder__()
{
  return Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&ISMStatics::s_hotkeyRegistrationForwarder);
}
