/*
 * XREFs of _ReconsiderSpatialOnComboEndpoints_::_1_::dtor$0 @ 0x18012298F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ReconsiderSpatialOnComboEndpoints_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
