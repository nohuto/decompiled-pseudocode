/*
 * XREFs of ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C004ACD8
 * Callers:
 *     ?SwapChainObDeleteProcedure@@YAXPEAX@Z @ 0x1C02AB610 (-SwapChainObDeleteProcedure@@YAXPEAX@Z.c)
 *     DxgkCreateSwapChain @ 0x1C02AC570 (DxgkCreateSwapChain.c)
 * Callees:
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x1C02A86AC (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 */

DXGSWAPCHAIN *__fastcall DXGSWAPCHAIN::`scalar deleting destructor'(DXGSWAPCHAIN *P)
{
  DXGSWAPCHAIN::~DXGSWAPCHAIN(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
