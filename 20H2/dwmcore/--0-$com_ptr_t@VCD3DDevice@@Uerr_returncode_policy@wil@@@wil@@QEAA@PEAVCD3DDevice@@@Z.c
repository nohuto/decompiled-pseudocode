/*
 * XREFs of ??0?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z @ 0x1800327A4
 * Callers:
 *     ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IIUDXGI_RATIONAL@@W4Enum@FrontBufferRender@@@Z @ 0x18003251C (--0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ??0CLegacyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@PEAVIRenderTargetBitmap@@PEAXPEAUHINSTANCE__@@@Z @ 0x1800E05FC (--0CLegacyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@PEAVIRenderTargetBitmap@@PEAXPEAUHINSTANCE__@@.c)
 *     ??0CComputeScribbleFramebuffer@@AEAA@PEAVCD3DDevice@@PEAUID3D12Resource@@I@Z @ 0x1801A555C (--0CComputeScribbleFramebuffer@@AEAA@PEAVCD3DDevice@@PEAUID3D12Resource@@I@Z.c)
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x1801F0F1C (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ??0CCompSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChain1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I@Z @ 0x18024DE44 (--0CCompSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChain1@@AEBUPixelFormatInfo@@AEBVRenderTarg.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BC770 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

CMILCOMBase **__fastcall wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::com_ptr_t<CD3DDevice,wil::err_returncode_policy>(
        CMILCOMBase **a1,
        CMILCOMBase *a2)
{
  *a1 = a2;
  if ( a2 )
    CMILCOMBase::InternalAddRef(a2);
  return a1;
}
