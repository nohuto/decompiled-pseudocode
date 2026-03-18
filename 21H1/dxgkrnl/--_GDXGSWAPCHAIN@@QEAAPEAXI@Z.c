/*
 * XREFs of ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C0049D88
 * Callers:
 *     ?SwapChainObDeleteProcedure@@YAXPEAX@Z @ 0x1C02A80B0 (-SwapChainObDeleteProcedure@@YAXPEAX@Z.c)
 *     DxgkCreateSwapChain @ 0x1C02A9010 (DxgkCreateSwapChain.c)
 * Callees:
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x1C02A519C (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 */

DXGSWAPCHAIN *__fastcall DXGSWAPCHAIN::`scalar deleting destructor'(DXGSWAPCHAIN *P)
{
  DXGSWAPCHAIN::~DXGSWAPCHAIN(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
