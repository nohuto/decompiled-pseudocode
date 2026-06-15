/*
 * XREFs of _CStreamInstance::GetOta_::_1_::dtor$0 @ 0x14004452D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamInstance::GetOta_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)(a2 + 40));
}
