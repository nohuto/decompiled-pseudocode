/*
 * XREFs of _dynamic_atexit_destructor_for__g_policyConfigInternal__ @ 0x18007D920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__g_policyConfigInternal__()
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&g_policyConfigInternal);
}
