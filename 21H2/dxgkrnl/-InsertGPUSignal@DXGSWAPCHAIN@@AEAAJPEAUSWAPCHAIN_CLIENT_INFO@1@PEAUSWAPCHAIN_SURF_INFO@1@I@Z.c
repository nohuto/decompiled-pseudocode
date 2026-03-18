/*
 * XREFs of ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C022583C
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C034BF18 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N66@Z @ 0x1C017EED0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C02E5760 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C034B21C (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InsertGPUSignal(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a3,
        unsigned int a4)
{
  unsigned __int64 v5; // r14
  DXGDEVICE *v6; // rcx
  struct DXGPROCESS *v9; // rdi
  bool v10; // dl
  unsigned int v12[4]; // [rsp+60h] [rbp-158h] BYREF
  unsigned int v13[64]; // [rsp+70h] [rbp-148h] BYREF

  v5 = a4;
  v6 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  if ( !v6 )
  {
    WdLogSingleEntry1(1LL, 3375LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pClientInfo->pTempDevice", 3375LL, 0LL, 0LL, 0LL, 0LL);
    v6 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  }
  v9 = (struct DXGPROCESS *)*((_QWORD *)v6 + 5);
  if ( v9 )
  {
    v12[0] = 0;
    DXGDEVICE::GetContexts(v6, v12, v13);
    if ( v12[0] )
    {
      return SignalSynchronizationObjectInternal(
               1u,
               (unsigned int *)a3 + 8 * *((int *)a2 + 7) + 14,
               0,
               v12[0],
               v13,
               0LL,
               v5,
               0LL,
               v9,
               0,
               1,
               0);
    }
    else
    {
      WdLogSingleEntry2(2LL, this, *((_QWORD *)a2 + 1));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Swapchain 0x%I64x Failed to get context count for device 0x%I64x",
        (__int64)this,
        *((_QWORD *)a2 + 1),
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 3381LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 3381LL, 0LL, 0LL, 0LL, 0LL);
    DXGSWAPCHAIN::MarkAbandoned(this, v10);
    return 3221225485LL;
  }
}
