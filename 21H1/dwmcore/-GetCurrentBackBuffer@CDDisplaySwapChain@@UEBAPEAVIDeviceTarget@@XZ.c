/*
 * XREFs of ?GetCurrentBackBuffer@CDDisplaySwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x1801904C0
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7A44 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x180190630 (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x180190C9C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 * Callees:
 *     <none>
 */

struct IDeviceTarget *__fastcall CDDisplaySwapChain::GetCurrentBackBuffer(CDDisplaySwapChain *this)
{
  __int64 v1; // rdx
  struct IDeviceTarget *result; // rax

  v1 = *((_QWORD *)this + 20);
  result = 0LL;
  if ( v1 )
    return (struct IDeviceTarget *)(*(int *)(*(_QWORD *)(v1 + 8) + 24LL) + v1 + 8);
  return result;
}
