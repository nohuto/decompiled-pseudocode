/*
 * XREFs of _CStreamGroup::CreateBridgeStream_::_1_::dtor$2 @ 0x14004D65F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::CreateBridgeStream_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)(a2 + 72));
}
