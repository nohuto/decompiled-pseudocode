/*
 * XREFs of ?GainDelta@CPBMStreamClassVolumeGainStage@@QEBAMXZ @ 0x18006DC30
 * Callers:
 *     ?GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z @ 0x1800379B0 (-GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z.c)
 *     ?GetDuckingState@CAudioSession@@QEAAJPEAM@Z @ 0x1800C7AF0 (-GetDuckingState@CAudioSession@@QEAAJPEAM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CPBMStreamClassVolumeGainStage::GainDelta(CPBMStreamClassVolumeGainStage *this)
{
  float v1; // xmm0_4

  v1 = (***((float (__fastcall ****)(_QWORD))this + 7))(*((_QWORD *)this + 7));
  return ConvertDbToEngineVolume(v1);
}
