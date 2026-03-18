/*
 * XREFs of ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C02A9CD8
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C02AAB34 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00F9F10 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C0253F5C (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C02A9F88 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InsertGPUSignal(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a3,
        unsigned int a4)
{
  unsigned __int64 v5; // r14
  DXGDEVICE *v6; // rcx
  __int64 v9; // rax
  struct DXGPROCESS *v10; // rsi
  __int64 v11; // rax
  bool v12; // dl
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17[4]; // [rsp+60h] [rbp-148h] BYREF
  unsigned int v18[64]; // [rsp+70h] [rbp-138h] BYREF

  v5 = a4;
  v6 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  if ( !v6 )
  {
    v9 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v9 + 24) = 3311LL;
    WdLogEvent5_WdAssertion(v9);
    v6 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  }
  v10 = (struct DXGPROCESS *)*((_QWORD *)v6 + 5);
  if ( v10 )
  {
    v17[0] = 0;
    DXGDEVICE::GetContexts(v6, v17, v18);
    if ( v17[0] )
    {
      return SignalSynchronizationObjectInternal(
               1LL,
               (unsigned int *)a3 + 8 * *((int *)a2 + 7) + 14,
               0,
               v17[0],
               v18,
               0LL,
               v5,
               0LL,
               v10,
               0,
               1);
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v16 + 24) = this;
      *(_QWORD *)(v16 + 32) = *((_QWORD *)a2 + 1);
      WdLogEvent5_WdError(v16);
      return 3221225473LL;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v6, a2);
    *(_QWORD *)(v11 + 24) = 3317LL;
    WdLogEvent5_WdError(v11);
    DXGSWAPCHAIN::MarkAbandoned(this, v12);
    return 3221225485LL;
  }
}
