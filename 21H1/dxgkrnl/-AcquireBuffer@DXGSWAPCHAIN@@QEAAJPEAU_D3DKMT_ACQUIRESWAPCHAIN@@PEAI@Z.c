/*
 * XREFs of ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C02A5634
 * Callers:
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1C02A8254 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 *     DxgkAcquireSwapChain @ 0x1C02A86A0 (DxgkAcquireSwapChain.c)
 * Callees:
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C0049F1C (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?Remove@DXGFIXEDQUEUE@@QEAAJPEAI@Z @ 0x1C004A0AC (-Remove@DXGFIXEDQUEUE@@QEAAJPEAI@Z.c)
 *     McTemplateK0pqddqq_EtwWriteTransfer @ 0x1C004A164 (McTemplateK0pqddqq_EtwWriteTransfer.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C02A691C (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C02A6A7C (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C02A6FA0 (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C02A7628 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::AcquireBuffer(
        struct _KTHREAD **this,
        struct _D3DKMT_ACQUIRESWAPCHAIN *a2,
        unsigned int *a3)
{
  unsigned int *v3; // r14
  struct _KTHREAD **v5; // rdi
  __int64 v6; // rax
  char *v7; // rsi
  __int64 v8; // rax
  int inserted; // ebx
  void *v10; // r8
  unsigned int v11; // r15d
  int v12; // eax
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v13; // r14
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v14; // r13
  unsigned int v15; // r9d
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO **v17; // [rsp+20h] [rbp-68h]
  BOOL bProducer; // [rsp+28h] [rbp-60h]
  BOOL bReleaseBeforeAcquire; // [rsp+30h] [rbp-58h]
  int v20; // [rsp+38h] [rbp-50h]
  int hNtSwapChain; // [rsp+40h] [rbp-48h]
  unsigned int v22; // [rsp+90h] [rbp+8h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v23; // [rsp+98h] [rbp+10h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v24; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a3;
  v5 = this;
  if ( this[2] != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v6 + 24) = 2603LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (char *)v5 + (a2->bProducer ? 136LL : 88LL);
  if ( a2->bReleaseBeforeAcquire )
  {
    if ( *((_DWORD *)v7 + 7) != 1 )
    {
      v8 = WdLogNewEntry5_WdError(this, a2);
      *(_QWORD *)(v8 + 24) = 2615LL;
      WdLogEvent5_WdError(v8);
      inserted = -1073741637;
      goto LABEL_28;
    }
    this = (struct _KTHREAD **)v5[26];
    if ( *((_DWORD *)this + 2) == *((_DWORD *)this + 3) )
      goto LABEL_27;
    v10 = *(void **)&a2->AcquiredBufferIdx;
    *(_QWORD *)&a2->AcquiredBufferIdx = 0LL;
    inserted = DXGSWAPCHAIN::ReleaseBuffer((DXGSWAPCHAIN *)v5, &a2->ReleaseInfo, v10, 1);
    if ( inserted < 0 )
    {
LABEL_8:
      DXGSWAPCHAIN::MarkAbandoned((DXGSWAPCHAIN *)v5, (bool)a2);
      goto LABEL_28;
    }
  }
  if ( *((_DWORD *)v7 + 10) != -1 )
    goto LABEL_27;
  v22 = 0;
  if ( !*((_DWORD *)v7 + 7) )
  {
    if ( !v3 )
      v3 = (unsigned int *)v5[27];
    v11 = *v3;
    goto LABEL_17;
  }
  v12 = DXGFIXEDQUEUE::Remove(v5[26], &v22);
  inserted = v12;
  if ( v12 == -2147483622 )
  {
LABEL_27:
    inserted = 259;
    goto LABEL_28;
  }
  if ( v12 < 0 )
    goto LABEL_8;
  v11 = v22;
LABEL_17:
  v23 = 0LL;
  v24 = 0LL;
  DXGSWAPCHAIN::GetClientSurfaceInfo(
    (DXGSWAPCHAIN *)v5,
    (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v7,
    v11,
    &v23,
    &v24);
  v13 = v23;
  v14 = v24;
  if ( *((_DWORD *)v5 + 56) )
  {
    if ( !*(_BYTE *)v24 )
    {
      inserted = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener((DXGSWAPCHAIN *)v5, v23, 0, 0LL);
      if ( inserted < 0 )
        goto LABEL_8;
    }
  }
  if ( *(_DWORD *)v13 == 2 )
    *(_DWORD *)v13 = 0;
  if ( *(_DWORD *)v13 || *((_DWORD *)v13 + 1) != *((_DWORD *)v7 + 7) )
    goto LABEL_27;
  *(_DWORD *)v13 = 1;
  inserted = 0;
  *((_DWORD *)v7 + 10) = v11;
  *((_DWORD *)v13 + 6) = 0;
  v15 = *((_DWORD *)v14 + 1);
  if ( v15 )
  {
    inserted = DXGSWAPCHAIN::InsertGPUWait(
                 (DXGSWAPCHAIN *)v5,
                 (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v7,
                 v13,
                 v15);
    if ( inserted < 0 )
      goto LABEL_8;
  }
  LODWORD(a2[1].hNtSwapChain) = v11;
  *(_QWORD *)&a2[1].bReleaseBeforeAcquire = *((_QWORD *)v14 + 3);
  this = (struct _KTHREAD **)*(unsigned int *)(*((_QWORD *)v13 + 2) + 8LL);
  LODWORD(a2[1].ReleaseInfo.hNtSwapChain) = (_DWORD)this;
LABEL_28:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
  {
    hNtSwapChain = (int)a2[1].ReleaseInfo.hNtSwapChain;
    v20 = (int)a2[1].hNtSwapChain;
    bReleaseBeforeAcquire = a2->bReleaseBeforeAcquire;
    bProducer = a2->bProducer;
    LODWORD(v17) = inserted;
    McTemplateK0pqddqq_EtwWriteTransfer(
      (__int64)this,
      (__int64)a2,
      (__int64)a3,
      v5,
      v17,
      bProducer,
      bReleaseBeforeAcquire,
      v20,
      hNtSwapChain);
  }
  return (unsigned int)inserted;
}
