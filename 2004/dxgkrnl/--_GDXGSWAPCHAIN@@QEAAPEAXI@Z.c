/*
 * XREFs of ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C004AD98
 * Callers:
 *     ?SwapChainObDeleteProcedure@@YAXPEAX@Z @ 0x1C02AC5F0 (-SwapChainObDeleteProcedure@@YAXPEAX@Z.c)
 *     DxgkCreateSwapChain @ 0x1C02AD550 (DxgkCreateSwapChain.c)
 * Callees:
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x1C02A968C (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 */

DXGSWAPCHAIN *__fastcall DXGSWAPCHAIN::`scalar deleting destructor'(DXGSWAPCHAIN *P)
{
  DXGSWAPCHAIN::~DXGSWAPCHAIN(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
