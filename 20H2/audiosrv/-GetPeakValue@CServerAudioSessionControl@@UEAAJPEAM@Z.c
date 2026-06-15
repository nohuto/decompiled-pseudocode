/*
 * XREFs of ?GetPeakValue@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x1800CB7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetPeakValue(CServerAudioSessionControl *this, float *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 9) + 424LL))(*((_QWORD *)this + 9), a2);
}
