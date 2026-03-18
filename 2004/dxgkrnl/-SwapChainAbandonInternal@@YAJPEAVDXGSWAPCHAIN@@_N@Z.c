/*
 * XREFs of ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x1C02AC49C
 * Callers:
 *     DxgkAbandonSwapChain @ 0x1C02ACA50 (DxgkAbandonSwapChain.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C02FEF94 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C02FF06C (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C02AAF68 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall SwapChainAbandonInternal(struct DXGSWAPCHAIN *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v2, v3);
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6, v4);
  return 0LL;
}
