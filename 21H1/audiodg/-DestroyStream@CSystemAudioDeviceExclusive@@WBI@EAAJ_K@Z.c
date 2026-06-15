/*
 * XREFs of ?DestroyStream@CSystemAudioDeviceExclusive@@WBI@EAAJ_K@Z @ 0x14001F7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CSystemAudioDeviceExclusive::DestroyStream()
{
  return CSystemAudioDeviceOffloadGraph::UpdateRegistry();
}
