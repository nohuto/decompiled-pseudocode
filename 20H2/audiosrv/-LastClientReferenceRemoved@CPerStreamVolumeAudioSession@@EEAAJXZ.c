/*
 * XREFs of ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x180047720
 * Callers:
 *     <none>
 * Callees:
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180050DB0 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::LastClientReferenceRemoved(CPerStreamVolumeAudioSession *this)
{
  if ( *((_BYTE *)this + 984) )
    CPerStreamVolumeAudioSession::PersistSessionConfiguration(this);
  return 0LL;
}
