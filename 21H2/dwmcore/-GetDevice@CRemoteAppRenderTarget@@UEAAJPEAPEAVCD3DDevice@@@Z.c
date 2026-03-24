/*
 * XREFs of ?GetDevice@CRemoteAppRenderTarget@@UEAAJPEAPEAVCD3DDevice@@@Z @ 0x1801863A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall CRemoteAppRenderTarget::GetDevice(CRemoteAppRenderTarget *this, struct CD3DDevice **a2)
{
  return CDeviceManager::GetDefaultDevice(this, a2);
}
