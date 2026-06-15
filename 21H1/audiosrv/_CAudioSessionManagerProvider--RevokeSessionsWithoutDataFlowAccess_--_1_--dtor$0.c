/*
 * XREFs of _CAudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess_::_1_::dtor$0 @ 0x1800D1F5D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>(a2 + 48);
}
