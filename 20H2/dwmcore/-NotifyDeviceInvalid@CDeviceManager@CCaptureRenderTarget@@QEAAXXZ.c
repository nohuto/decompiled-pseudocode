/*
 * XREFs of ?NotifyDeviceInvalid@CDeviceManager@CCaptureRenderTarget@@QEAAXXZ @ 0x1800E8B48
 * Callers:
 *     ?ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID@@@Z @ 0x1801873A8 (-ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDE.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x180187658 (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CCaptureRenderTarget::CDeviceManager::NotifyDeviceInvalid(CD3DDevice **this)
{
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(this);
}
