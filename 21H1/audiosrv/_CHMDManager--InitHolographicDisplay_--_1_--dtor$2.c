/*
 * XREFs of _CHMDManager::InitHolographicDisplay_::_1_::dtor$2 @ 0x1800F788A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHMDManager::InitHolographicDisplay_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 40));
}
