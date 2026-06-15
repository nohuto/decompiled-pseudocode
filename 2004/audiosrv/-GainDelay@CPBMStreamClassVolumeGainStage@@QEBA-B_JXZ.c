/*
 * XREFs of ?GainDelay@CPBMStreamClassVolumeGainStage@@QEBA?B_JXZ @ 0x18006E6D8
 * Callers:
 *     ?GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z @ 0x1800381A0 (-GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPBMStreamClassVolumeGainStage::GainDelay(CPBMStreamClassVolumeGainStage *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 16LL))(*((_QWORD *)this + 7));
}
