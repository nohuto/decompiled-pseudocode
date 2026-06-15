/*
 * XREFs of _VAD_AudiosrvAudioDGProcessTerminated_::_1_::dtor$0 @ 0x18007AA19
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VAD_AudiosrvAudioDGProcessTerminated_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CAudioSessionManagerProvider,wil::err_returncode_policy>::~com_ptr_t<CAudioSessionManagerProvider,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
