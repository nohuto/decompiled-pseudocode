/*
 * XREFs of _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$10 @ 0x1800BA782
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CAudioSrv::ProcessDeviceInternal_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>::~com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
