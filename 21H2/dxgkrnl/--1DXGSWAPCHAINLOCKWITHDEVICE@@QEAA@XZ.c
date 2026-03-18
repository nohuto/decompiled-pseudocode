/*
 * XREFs of ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C03498B8
 * Callers:
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0225CE8 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     DxgkAcquireSwapChain @ 0x1C034D320 (DxgkAcquireSwapChain.c)
 *     DxgkAddSurfaceToSwapChain @ 0x1C034D910 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x1C034DD20 (DxgkCreateSwapChain.c)
 *     DxgkGetSwapChainSurfacePhysicalAddress @ 0x1C034E8B0 (DxgkGetSwapChainSurfacePhysicalAddress.c)
 *     DxgkRemoveSurfaceFromSwapChain @ 0x1C034F6A0 (DxgkRemoveSurfaceFromSwapChain.c)
 *     DxgkUnOrderedPresentSwapChain @ 0x1C034F990 (DxgkUnOrderedPresentSwapChain.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C0225BDC (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE(DXGSWAPCHAINLOCKWITHDEVICE *this)
{
  DXGSWAPCHAINLOCKWITHDEVICE::Release(this);
  COREACCESS::~COREACCESS((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
  if ( *((_BYTE *)this + 32) )
    DXGAUTOMUTEX::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
}
