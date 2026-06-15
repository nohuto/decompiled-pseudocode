/*
 * XREFs of ?GetStreamSwitchId@CServerAudioSessionControl@@UEAAJPEAPEAG@Z @ 0x1800CC3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetStreamSwitchId(
        CServerAudioSessionControl *this,
        unsigned __int16 **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(**((_QWORD **)this + 9) + 176LL))(
           *((_QWORD *)this + 9),
           a2);
}
