/*
 * XREFs of ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C005AC08
 * Callers:
 *     ?SwapChainObDeleteProcedure@@YAXPEAX@Z @ 0x1C034CD30 (-SwapChainObDeleteProcedure@@YAXPEAX@Z.c)
 *     DxgkCreateSwapChain @ 0x1C034DD20 (DxgkCreateSwapChain.c)
 * Callees:
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x1C034988C (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 */

DXGSWAPCHAIN *__fastcall DXGSWAPCHAIN::`scalar deleting destructor'(DXGSWAPCHAIN *P)
{
  DXGSWAPCHAIN::~DXGSWAPCHAIN(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
