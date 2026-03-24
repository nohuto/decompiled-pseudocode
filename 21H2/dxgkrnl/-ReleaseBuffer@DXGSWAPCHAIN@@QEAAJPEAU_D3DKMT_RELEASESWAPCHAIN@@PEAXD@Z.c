/*
 * XREFs of ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C02AC024
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C02AA004 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C02ACBCC (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1C02ACCA4 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?Add@DXGFIXEDQUEUE@@QEAAJI@Z @ 0x1C004BC5C (-Add@DXGFIXEDQUEUE@@QEAAJI@Z.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C004BDBC (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C004BE44 (-GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C004BFC0 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     McTemplateK0pqddqqqqq_EtwWriteTransfer @ 0x1C004C0C4 (McTemplateK0pqddqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqdqp_EtwWriteTransfer @ 0x1C004C1B0 (McTemplateK0pqdqp_EtwWriteTransfer.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C016E9EC (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x1C02AA624 (-ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C02AB1C8 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C02AB478 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C02AC724 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 */

__int64 __fastcall DXGSWAPCHAIN::ReleaseBuffer(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_RELEASESWAPCHAIN *a2,
        void *a3,
        char a4)
{
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  int bProducer; // r12d
  char *v10; // rdi
  __int64 v11; // rax
  unsigned int v13; // r8d
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 pDeferredFreeList_low; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int64 v25; // r12
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct _WORK_QUEUE_ITEM *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _WORK_QUEUE_ITEM *v32; // r14
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned int v39; // r8d
  __int64 v40; // rcx
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v41; // r14
  struct AUTOEXPANDALLOCATION *v42; // rdx
  __int64 v43; // rax
  int v44; // eax
  int *v45; // r8
  int v46; // ecx
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  size_t v49; // [rsp+20h] [rbp-89h]
  void *Src; // [rsp+28h] [rbp-81h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v51; // [rsp+30h] [rbp-79h]
  char v52[8]; // [rsp+38h] [rbp-71h]
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v54; // [rsp+70h] [rbp-39h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v55; // [rsp+78h] [rbp-31h] BYREF
  void *v56; // [rsp+80h] [rbp-29h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v57; // [rsp+88h] [rbp-21h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v58; // [rsp+90h] [rbp-19h] BYREF
  void *v59; // [rsp+98h] [rbp-11h]
  BOOL v60; // [rsp+A0h] [rbp-9h] BYREF
  int v61; // [rsp+A4h] [rbp-5h]
  __int128 v62; // [rsp+A8h] [rbp-1h]
  int v63; // [rsp+B8h] [rbp+Fh]

  v59 = a3;
  if ( *((struct _KTHREAD **)this + 2) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v6 + 24) = 2826LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = 0LL;
  if ( a2[1].hNtSwapChain )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 2833LL;
    WdLogEvent5_WdAssertion(v8);
  }
  bProducer = a2->bProducer;
  LODWORD(v54) = bProducer;
  v10 = (char *)this + (bProducer != 0 ? 136LL : 88LL);
  if ( *((_DWORD *)this + 56) && !bProducer && LODWORD(a2->pDeferredFreeList) )
  {
    v11 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v11 + 24) = 2841LL;
    WdLogEvent5_WdError(v11);
    return 3221225659LL;
  }
  v13 = *((_DWORD *)v10 + 10);
  if ( v13 == -1
    || (v55 = 0LL,
        v58 = 0LL,
        DXGSWAPCHAIN::GetClientSurfaceInfo(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v10, v13, &v55, &v58),
        v14 = v55,
        *(_DWORD *)v55 != 1)
    || *((_DWORD *)v55 + 1) != *((_DWORD *)v10 + 7) )
  {
    v48 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v48 + 24) = *((_QWORD *)v10 + 2);
    *(_QWORD *)(v48 + 32) = this;
    WdLogEvent5_WdError(v48);
    LODWORD(v16) = -1073741811;
    goto LABEL_50;
  }
  LODWORD(v16) = DXGSWAPCHAIN::InsertGPUSignal(
                   this,
                   (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v10,
                   v55,
                   *((_DWORD *)this + 46));
  if ( (int)v16 >= 0 )
  {
    if ( *((_DWORD *)v10 + 7) == 1 )
    {
      if ( *((_DWORD *)this + 56) )
      {
        v23 = *((_QWORD *)v14 + 4);
        if ( v23 )
        {
          v24 = *((_QWORD *)v10 + 2);
          v56 = 0LL;
          v25 = -(__int64)(bProducer != 0) & 0xFFFFFFFFFFFFFFD0uLL;
          v26 = ObDuplicateObject(*(_QWORD *)((char *)this + v25 + 152), v23, v24, &v56, 0, 0, 6, 1);
          v16 = v26;
          if ( v26 < 0 )
          {
            v17 = WdLogNewEntry5_WdError(v28, v27);
            *(_QWORD *)(v17 + 24) = *((_QWORD *)v14 + 4);
            *(_QWORD *)(v17 + 32) = v16;
            goto LABEL_14;
          }
          a2->pMetaData = v56;
          *(_QWORD *)&a2->DeferredFreeListSize = *((_QWORD *)v14 + 5);
          v29 = (struct _WORK_QUEUE_ITEM *)operator new[](0x30uLL, 0x4B677844u, (POOL_TYPE)512);
          v32 = v29;
          if ( v29 )
          {
            v29->List = 0LL;
            *(_OWORD *)&v29->WorkerRoutine = 0LL;
            v29[1].List = 0LL;
          }
          else
          {
            v32 = 0LL;
          }
          if ( !v32 )
          {
            v33 = WdLogNewEntry5_WdError(v31, v30);
            *(_QWORD *)(v33 + 24) = *((_QWORD *)v14 + 4);
            WdLogEvent5_WdError(v33);
LABEL_25:
            DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v34, v35);
            v7 = 0LL;
            goto LABEL_50;
          }
          LODWORD(v16) = ObReferenceObjectByPointer(
                           *(PVOID *)((char *)this + v25 + 152),
                           0x10000000u,
                           (POBJECT_TYPE)PsProcessType,
                           0);
          if ( (int)v16 < 0 )
          {
            v38 = WdLogNewEntry5_WdError(v37, v36);
            *(_QWORD *)(v38 + 24) = *(_QWORD *)((char *)this + v25 + 152);
            WdLogEvent5_WdError(v38);
            operator delete(v32);
            goto LABEL_25;
          }
          v32[1].List.Blink = (struct _LIST_ENTRY *)*((_QWORD *)v14 + 4);
          v32[1].List.Flink = *(struct _LIST_ENTRY **)((char *)this + v25 + 152);
          v32->WorkerRoutine = (PWORKER_THREAD_ROUTINE)DXGSWAPCHAIN::AsyncCloseNtHandle;
          v32->Parameter = v32;
          v32->List.Flink = 0LL;
          ExQueueWorkItem(v32, DelayedWorkQueue);
          *((_QWORD *)v14 + 4) = 0LL;
          *((_QWORD *)v14 + 5) = 0LL;
          bProducer = (int)v54;
        }
      }
    }
    v39 = *((_DWORD *)v10 + 10);
    v57 = 0LL;
    v54 = 0LL;
    DXGSWAPCHAIN::GetOtherClientSurfaceInfo(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v10, v39, &v57, &v54);
    v40 = *((unsigned int *)this + 46);
    v41 = v57;
    *((_DWORD *)v54 + 1) = v40;
    ++*((_DWORD *)this + 46);
    *(_DWORD *)v41 = 2;
    *((_DWORD *)v41 + 1) = DXGSWAPCHAIN::SwitchClient(v40, *((unsigned int *)v10 + 7));
    pDeferredFreeList_low = LODWORD(a2->pDeferredFreeList);
    if ( (_DWORD)pDeferredFreeList_low )
    {
      v42 = (struct AUTOEXPANDALLOCATION *)*((_QWORD *)v41 + 2);
      v60 = a2->bProducer;
      LODWORD(v49) = pDeferredFreeList_low;
      v62 = 0LL;
      v63 = 0;
      v61 = 0;
      LODWORD(v16) = DXGSWAPCHAIN::SetMetaDataInternal(
                       this,
                       v42,
                       (int *)v41 + 6,
                       0,
                       v49,
                       v59,
                       (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v60,
                       a4);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
      {
        *(_DWORD *)v52 = v62;
        LODWORD(v51) = v61;
        LODWORD(Src) = v60;
        LODWORD(v49) = v16;
        McTemplateK0pqddqqqqq_EtwWriteTransfer(
          pDeferredFreeList_low,
          &EventIndirectSwapChainSetMetaData,
          v22,
          this,
          v49,
          Src,
          v51,
          *(_QWORD *)v52,
          DWORD1(v62),
          DWORD2(v62),
          HIDWORD(v62),
          v63);
      }
      if ( (int)v16 < 0 )
      {
        v43 = WdLogNewEntry5_WdError(pDeferredFreeList_low, v20);
        *(_QWORD *)(v43 + 24) = *((_QWORD *)v10 + 2);
        *(_QWORD *)(v43 + 32) = this;
LABEL_34:
        WdLogEvent5_WdError(v43);
LABEL_35:
        DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v20, v22);
        v7 = 0LL;
        goto LABEL_50;
      }
    }
    if ( !*((_DWORD *)v41 + 6) )
      AUTOEXPANDALLOCATION::GetBuffer(*((AUTOEXPANDALLOCATION **)v41 + 2), 0, 0);
    v44 = *((_DWORD *)this + 56);
    if ( *((_DWORD *)v10 + 7) )
    {
      if ( v44 )
      {
        LODWORD(v16) = DXGSWAPCHAIN::ConsumerCheckForSurfacesToFree((unsigned __int64)this, a2);
        if ( (int)v16 < 0 )
          goto LABEL_35;
      }
    }
    else
    {
      if ( !v44 )
      {
        v45 = (int *)*((_QWORD *)this + 27);
        v46 = *v45 + 1;
        if ( *v45 == v45[1] )
          v46 = 0;
        *v45 = v46;
      }
      LODWORD(v16) = DXGFIXEDQUEUE::Add(*((DXGFIXEDQUEUE **)this + 26), *((unsigned int *)v10 + 10));
      if ( (int)v16 < 0 )
      {
        v43 = WdLogNewEntry5_WdError(pDeferredFreeList_low, v20);
        *(_QWORD *)(v43 + 24) = this;
        goto LABEL_34;
      }
    }
    *((_DWORD *)v10 + 10) = -1;
    v47 = -(__int64)(bProducer != 0) & 0xFFFFFFFFFFFFFFD0uLL;
    v7 = *(_QWORD *)((char *)this + v47 + 168);
    if ( v7 )
      KeSetEvent(*(PRKEVENT *)((char *)this + v47 + 168), 2, 0);
    goto LABEL_50;
  }
  v17 = WdLogNewEntry5_WdError(0LL, v15);
  *(_QWORD *)(v17 + 24) = this;
LABEL_14:
  WdLogEvent5_WdError(v17);
  DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v18, v19);
LABEL_50:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
  {
    LODWORD(v51) = a2->pDeferredFreeList;
    LODWORD(Src) = a2->bProducer;
    LODWORD(v49) = v16;
    McTemplateK0pqdqp_EtwWriteTransfer(pDeferredFreeList_low, v20, v22, this, v49, Src, v51, v7);
  }
  return (unsigned int)v16;
}
