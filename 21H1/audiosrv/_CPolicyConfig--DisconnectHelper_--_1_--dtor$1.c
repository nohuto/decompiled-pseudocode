/*
 * XREFs of _CPolicyConfig::DisconnectHelper_::_1_::dtor$1 @ 0x18007A989
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPolicyConfig::DisconnectHelper_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>::~com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>(a2 + 64);
}
