/*
 * XREFs of _CAudioSrv::Terminate_::_1_::dtor$0 @ 0x1800BB4C9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSrv::Terminate_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IAudioSessionStore>::~ComPtr<IAudioSessionStore>((__int64 *)(a2 + 56));
}
