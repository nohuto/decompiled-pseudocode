/*
 * XREFs of ?SkipUnpin@CD3DDevice@@QEAAXXZ @ 0x1800E7D04
 * Callers:
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x18009D05C (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800BAFA8 (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18023D770 (-PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_P.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180099EC4 (-GetCurrentFrameId@@YA_KXZ.c)
 */

void __fastcall CD3DDevice::SkipUnpin(CD3DDevice *this)
{
  unsigned __int64 CurrentFrameId; // rax
  __int64 v2; // rdx

  CurrentFrameId = GetCurrentFrameId();
  *(_QWORD *)(v2 + 1400) = CurrentFrameId;
}
