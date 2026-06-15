/*
 * XREFs of ?Release@CSystemAudioDeviceBase@@WBA@EAAKXZ @ 0x14001F7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CSystemAudioDeviceBase::Release()
{
  return CSystemAudioDeviceOffloadGraph::UpdateRegistry();
}
