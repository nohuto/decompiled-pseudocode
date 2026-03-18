/*
 * XREFs of ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ @ 0x1800E89E4
 * Callers:
 *     ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJXZ @ 0x1800E85E8 (-CheckOcclusionState@CCaptureRenderTarget@@UEAAJXZ.c)
 *     ?Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E8B54 (-Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Present@CCaptureRenderTarget@@UEAAJ_N@Z @ 0x1801871AC (-Present@CCaptureRenderTarget@@UEAAJ_N@Z.c)
 *     ?CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z @ 0x180187D70 (-CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CCaptureRenderTarget::GetD3DDeviceNoRef(CCaptureRenderTarget *this)
{
  return CCaptureRenderTarget::CDeviceManager::GetD3DDeviceNoRef(
           (struct CD3DDevice **)this + 236,
           (const struct _LUID *)this + 237,
           *((struct IFlipProducer **)this + 247));
}
