/*
 * XREFs of ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C0225596
 * Callers:
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1C034CDE4 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 *     DxgkAcquireSwapChain @ 0x1C034D320 (DxgkAcquireSwapChain.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C005AE1C (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?Remove@DXGFIXEDQUEUE@@QEAAJPEAI@Z @ 0x1C005B07C (-Remove@DXGFIXEDQUEUE@@QEAAJPEAI@Z.c)
 *     McTemplateK0pqddqq_EtwWriteTransfer @ 0x1C005B1BC (McTemplateK0pqddqq_EtwWriteTransfer.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C0225A02 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C034B21C (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C034B894 (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C034BF18 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::AcquireBuffer(
        struct _KTHREAD **this,
        struct _D3DKMT_ACQUIRESWAPCHAIN *a2,
        unsigned int *a3)
{
  unsigned int *v3; // r14
  struct _KTHREAD **v5; // rdi
  char *v6; // rsi
  int inserted; // ebx
  void *v8; // r8
  unsigned int v9; // r15d
  int v10; // eax
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v11; // r14
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v12; // r13
  unsigned int v13; // r9d
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO **v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+28h] [rbp-60h]
  __int64 v17; // [rsp+30h] [rbp-58h]
  __int64 v18; // [rsp+38h] [rbp-50h]
  __int64 v19; // [rsp+40h] [rbp-48h]
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v20; // [rsp+90h] [rbp+8h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v21; // [rsp+98h] [rbp+10h] BYREF

  v3 = a3;
  v5 = this;
  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 2667LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 2667LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = (char *)v5 + (a2->bProducer ? 144LL : 96LL);
  if ( a2->bReleaseBeforeAcquire )
  {
    if ( *((_DWORD *)v6 + 7) != 1 )
    {
      WdLogSingleEntry1(2LL, 2679LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Release before acquire is only supported for consumers",
        2679LL,
        0LL,
        0LL,
        0LL,
        0LL);
      inserted = -1073741637;
      goto LABEL_28;
    }
    this = (struct _KTHREAD **)v5[27];
    if ( *((_DWORD *)this + 2) == *((_DWORD *)this + 3) )
      goto LABEL_27;
    v8 = *(void **)&a2->AcquiredBufferIdx;
    *(_QWORD *)&a2->AcquiredBufferIdx = 0LL;
    inserted = DXGSWAPCHAIN::ReleaseBuffer((DXGSWAPCHAIN *)v5, &a2->ReleaseInfo, v8, 1);
    if ( inserted < 0 )
    {
LABEL_8:
      DXGSWAPCHAIN::MarkAbandoned((DXGSWAPCHAIN *)v5, (bool)a2);
      goto LABEL_28;
    }
  }
  if ( *((_DWORD *)v6 + 10) != -1 )
    goto LABEL_27;
  LODWORD(v20) = 0;
  if ( !*((_DWORD *)v6 + 7) )
  {
    if ( !v3 )
      v3 = (unsigned int *)v5[28];
    v9 = *v3;
    goto LABEL_17;
  }
  v10 = DXGFIXEDQUEUE::Remove(v5[27], (unsigned int *)&v20);
  inserted = v10;
  if ( v10 == -2147483622 )
  {
LABEL_27:
    inserted = 259;
    goto LABEL_28;
  }
  if ( v10 < 0 )
    goto LABEL_8;
  v9 = (unsigned int)v20;
LABEL_17:
  v20 = 0LL;
  v21 = 0LL;
  DXGSWAPCHAIN::GetClientSurfaceInfo(
    (DXGSWAPCHAIN *)v5,
    (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v6,
    v9,
    &v20,
    &v21);
  v11 = v20;
  v12 = v21;
  if ( *((_DWORD *)v5 + 58) )
  {
    if ( !*(_BYTE *)v21 )
    {
      inserted = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener((DXGSWAPCHAIN *)v5, v20, 0, 0LL);
      if ( inserted < 0 )
        goto LABEL_8;
    }
  }
  if ( *(_DWORD *)v11 == 2 )
    *(_DWORD *)v11 = 0;
  if ( *(_DWORD *)v11 || *((_DWORD *)v11 + 1) != *((_DWORD *)v6 + 7) )
    goto LABEL_27;
  *(_DWORD *)v11 = 1;
  inserted = 0;
  *((_DWORD *)v6 + 10) = v9;
  *((_DWORD *)v11 + 6) = 0;
  v13 = *((_DWORD *)v12 + 1);
  if ( v13 )
  {
    inserted = DXGSWAPCHAIN::InsertGPUWait(
                 (DXGSWAPCHAIN *)v5,
                 (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v6,
                 v11,
                 v13);
    if ( inserted < 0 )
      goto LABEL_8;
  }
  LODWORD(a2[1].hNtSwapChain) = v9;
  *(_QWORD *)&a2[1].bReleaseBeforeAcquire = *((_QWORD *)v12 + 3);
  this = (struct _KTHREAD **)*(unsigned int *)(*((_QWORD *)v11 + 2) + 8LL);
  LODWORD(a2[1].ReleaseInfo.hNtSwapChain) = (_DWORD)this;
LABEL_28:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
  {
    LODWORD(v19) = a2[1].ReleaseInfo.hNtSwapChain;
    LODWORD(v18) = a2[1].hNtSwapChain;
    LODWORD(v17) = a2->bReleaseBeforeAcquire;
    LODWORD(v16) = a2->bProducer;
    LODWORD(v15) = inserted;
    McTemplateK0pqddqq_EtwWriteTransfer((__int64)this, (__int64)a2, (__int64)a3, v5, v15, v16, v17, v18, v19);
  }
  return (unsigned int)inserted;
}
