/*
 * XREFs of _CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess_::_1_::dtor$1 @ 0x1800D00F9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(a2 + 64);
}
