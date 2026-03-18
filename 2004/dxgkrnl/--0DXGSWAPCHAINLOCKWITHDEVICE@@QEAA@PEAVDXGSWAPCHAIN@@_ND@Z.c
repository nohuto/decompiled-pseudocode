/*
 * XREFs of ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C02A9648
 * Callers:
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C02AC6BC (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     DxgkAcquireSwapChain @ 0x1C02ACBE0 (DxgkAcquireSwapChain.c)
 *     DxgkAddSurfaceToSwapChain @ 0x1C02AD170 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x1C02AD550 (DxgkCreateSwapChain.c)
 *     DxgkRemoveSurfaceFromSwapChain @ 0x1C02AEB20 (DxgkRemoveSurfaceFromSwapChain.c)
 *     DxgkUnOrderedPresentSwapChain @ 0x1C02AEDE0 (DxgkUnOrderedPresentSwapChain.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGSWAPCHAINLOCKWITHDEVICE *__fastcall DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE(
        DXGSWAPCHAINLOCKWITHDEVICE *this,
        struct DXGSWAPCHAIN *a2,
        char a3,
        char a4)
{
  *((_BYTE *)this + 16) = a3;
  *(_BYTE *)this = a4;
  *((_QWORD *)this + 1) = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24), a2, 0);
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 80) = 0;
  *((_QWORD *)this + 11) = 0LL;
  return this;
}
