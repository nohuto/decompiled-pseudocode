/*
 * XREFs of ?IsSupportedFakeOverlayColorSpace@CConversionSwapChain@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18024CDA4
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CConversionSwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18024B880 (-CheckMultiplaneOverlaySupport@CConversionSwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPO.c)
 *     ?Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVILegacySwapChain@@@Z @ 0x18024C7BC (-Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AE.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall CConversionSwapChain::IsSupportedFakeOverlayColorSpace(unsigned int a1)
{
  unsigned __int8 result; // al
  int v2; // edx

  result = 0;
  if ( a1 <= 0xE )
  {
    v2 = 20483;
    return _bittest(&v2, a1);
  }
  return result;
}
