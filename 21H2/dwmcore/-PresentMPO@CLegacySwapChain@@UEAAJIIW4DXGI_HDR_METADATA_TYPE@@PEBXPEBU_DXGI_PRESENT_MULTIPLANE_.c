/*
 * XREFs of ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18001BDBC
 * Callers:
 *     ?PresentMPO@CLegacySwapChain@@$4PPPPPPPM@A@EAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1801090F0 (-PresentMPO@CLegacySwapChain@@$4PPPPPPPM@A@EAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT.c)
 * Callees:
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x18001BF70 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 *     ?PrePresent@CLegacySwapChain@@IEAAX_N@Z @ 0x18001C21C (-PrePresent@CLegacySwapChain@@IEAAX_N@Z.c)
 *     ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18001C258 (-PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_P.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CLegacySwapChain::PresentMPO(
        CD3DDevice **this,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_HDR_METADATA_TYPE a4,
        void *a5,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6,
        unsigned int a7)
{
  CLegacySwapChain *v7; // r15
  bool v10; // r14
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx

  v7 = (CLegacySwapChain *)(this - 50);
  v10 = (a3 & 2) != 0;
  CLegacySwapChain::PrePresent((CLegacySwapChain *)(this - 50), v10);
  v13 = CD3DDevice::PresentMPO(*(this - 42), *(this - 41), a2, a3, a4, a5, a6, a7);
  v15 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x46Eu, 0LL);
  else
    CLegacySwapChain::PostPresent(v7, v10, v13 == 142213121);
  return v15;
}
