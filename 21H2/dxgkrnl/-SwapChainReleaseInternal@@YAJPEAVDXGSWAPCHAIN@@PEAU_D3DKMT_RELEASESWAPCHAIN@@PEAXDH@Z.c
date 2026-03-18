/*
 * XREFs of ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0225CE8
 * Callers:
 *     _lambda_33b60cbf84f600ce0ec08d15fd307f89_::operator() @ 0x1C02260A8 (_lambda_33b60cbf84f600ce0ec08d15fd307f89_--operator().c)
 *     DxgkReleaseSwapChain @ 0x1C034F250 (DxgkReleaseSwapChain.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C0349848 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C03498B8 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C03498EC (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C034BF18 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 */

__int64 __fastcall SwapChainReleaseInternal(
        struct DXGSWAPCHAIN *a1,
        struct _D3DKMT_RELEASESWAPCHAIN *a2,
        void *a3,
        char a4)
{
  int v8; // ebx
  struct DXGDEVICE *v10; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v11[128]; // [rsp+60h] [rbp-B8h] BYREF

  if ( a2[1].hNtSwapChain )
  {
    WdLogSingleEntry1(1LL, 1492LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pKmReleaseSwapChain->pMetaData == nullptr",
      1492LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  a2[1].hNtSwapChain = 0LL;
  v10 = 0LL;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v11, a1, a2->bProducer, a4);
  v8 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v11, &v10, 1);
  if ( v8 >= 0 )
    v8 = DXGSWAPCHAIN::ReleaseBuffer(a1, a2, a3, a4);
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v11);
  return (unsigned int)v8;
}
