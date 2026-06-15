/*
 * XREFs of _DynamicAudioEndpointManager::RemoveRule_::_1_::dtor$0_1 @ 0x180113D45
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DynamicAudioEndpointManager::RemoveRule_::_1_::dtor_0_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
