/*
 * XREFs of ?AddRef@CSystemAudioDeviceBase@@W7EAAKXZ @ 0x14001F7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CSystemAudioDeviceBase::AddRef()
{
  return CSystemAudioDeviceOffloadGraph::UpdateRegistry();
}
