/*
 * XREFs of ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C02A817C
 * Callers:
 *     DxgkReleaseSwapChain @ 0x1C02AA1D0 (DxgkReleaseSwapChain.c)
 *     _lambda_8e631c23aebb5c5c759a7e2e825fab1c_::_lambda_invoker_cdecl_ @ 0x1C02F8060 (_lambda_8e631c23aebb5c5c759a7e2e825fab1c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C02A5158 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C02A51C8 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C02A51FC (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C02A7628 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 */

__int64 __fastcall SwapChainReleaseInternal(
        struct DXGSWAPCHAIN *this,
        struct _D3DKMT_RELEASESWAPCHAIN *a2,
        void *a3,
        char a4)
{
  __int64 v8; // rax
  int v9; // ebx
  struct DXGDEVICE *v11; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v12[128]; // [rsp+30h] [rbp-B8h] BYREF

  if ( a2[1].hNtSwapChain )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 1427LL;
    WdLogEvent5_WdAssertion(v8);
  }
  a2[1].hNtSwapChain = 0LL;
  v11 = 0LL;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v12, this, a2->bProducer, a4);
  v9 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v12, &v11, 1);
  if ( v9 >= 0 )
    v9 = DXGSWAPCHAIN::ReleaseBuffer(this, a2, a3, a4);
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v12);
  return (unsigned int)v9;
}
