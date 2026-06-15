/*
 * XREFs of ?ResetVolumeRampDelays@CPerStreamVolumeAudioStream@@MEAAXXZ @ 0x18004D020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPerStreamVolumeAudioStream::ResetVolumeRampDelays(CPerStreamVolumeAudioStream *this)
{
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
}
