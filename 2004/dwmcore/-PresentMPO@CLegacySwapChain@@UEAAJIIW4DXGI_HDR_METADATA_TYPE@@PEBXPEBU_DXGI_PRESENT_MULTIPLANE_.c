/*
 * XREFs of ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1802485E4
 * Callers:
 *     ?PresentMPO@CLegacySwapChain@@$4PPPPPPPM@A@EAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800F1BE0 (-PresentMPO@CLegacySwapChain@@$4PPPPPPPM@A@EAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N@Z @ 0x1800C23B4 (-PostPresent@CLegacySwapChain@@IEAAX_N@Z.c)
 *     ?PrePresent@CLegacySwapChain@@IEAAX_N@Z @ 0x1800C4BC0 (-PrePresent@CLegacySwapChain@@IEAAX_N@Z.c)
 *     ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18023E700 (-PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_P.c)
 */

__int64 __fastcall CLegacySwapChain::PresentMPO(
        CD3DDevice **this,
        unsigned int a2,
        char a3,
        enum DXGI_HDR_METADATA_TYPE a4)
{
  CLegacySwapChain *v4; // r15
  char v7; // r14
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx

  v4 = (CLegacySwapChain *)(this - 44);
  v7 = (a3 & 2) != 0;
  CLegacySwapChain::PrePresent((CLegacySwapChain *)(this - 44), v7);
  v9 = CD3DDevice::PresentMPO(*(this - 36), *(this - 35), a2, a3);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x33Du, 0LL);
  else
    CLegacySwapChain::PostPresent(v4, v7);
  return v11;
}
