/*
 * XREFs of ?NotifyDeviceInvalid@CDeviceManager@CCaptureRenderTarget@@QEAAXXZ @ 0x1800E813C
 * Callers:
 *     ?ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID@@@Z @ 0x180189028 (-ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDE.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x1801892D8 (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CCaptureRenderTarget::CDeviceManager::NotifyDeviceInvalid(CD3DDevice **this)
{
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(this);
}
