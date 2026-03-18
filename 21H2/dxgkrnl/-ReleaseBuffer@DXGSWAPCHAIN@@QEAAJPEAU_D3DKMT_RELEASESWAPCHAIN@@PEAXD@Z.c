/*
 * XREFs of ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C034BF18
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C0225596 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0225CE8 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1C034CDE4 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?Add@DXGFIXEDQUEUE@@QEAAJI@Z @ 0x1C005AC3C (-Add@DXGFIXEDQUEUE@@QEAAJI@Z.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C005AE1C (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C005AEEC (-GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C005B130 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     McTemplateK0pqddqqqqq_EtwWriteTransfer @ 0x1C005B27C (McTemplateK0pqddqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqdqp_EtwWriteTransfer @ 0x1C005B368 (McTemplateK0pqdqp_EtwWriteTransfer.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01E8B48 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C022583C (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x1C034A154 (-ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C034B21C (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C034C870 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 */

__int64 __fastcall DXGSWAPCHAIN::ReleaseBuffer(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_RELEASESWAPCHAIN *a2,
        void *a3,
        char a4)
{
  char v4; // r15
  PRKEVENT v7; // r14
  BOOL bProducer; // ecx
  char *v9; // rbx
  PRKEVENT *v10; // rax
  PVOID *v11; // r12
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 pDeferredFreeList_low; // rcx
  int *v16; // r8
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v17; // r14
  __int64 v18; // rsi
  const wchar_t *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  PVOID v22; // rcx
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  struct _WORK_QUEUE_ITEM *v27; // rax
  struct _WORK_QUEUE_ITEM *v28; // r15
  unsigned int v29; // r8d
  __int64 v30; // rcx
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v31; // r14
  __int64 v32; // r9
  struct AUTOEXPANDALLOCATION *v33; // rdx
  int v34; // eax
  int v35; // ecx
  size_t Size; // [rsp+20h] [rbp-79h]
  void *Src; // [rsp+28h] [rbp-71h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v38; // [rsp+30h] [rbp-69h]
  int v39; // [rsp+38h] [rbp-61h]
  char v40[8]; // [rsp+38h] [rbp-61h]
  __int64 v41; // [rsp+40h] [rbp-59h]
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v43; // [rsp+70h] [rbp-29h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v44; // [rsp+78h] [rbp-21h] BYREF
  PRKEVENT *v45; // [rsp+80h] [rbp-19h]
  void *v46; // [rsp+88h] [rbp-11h]
  BOOL v47; // [rsp+90h] [rbp-9h] BYREF
  int v48; // [rsp+94h] [rbp-5h]
  __int128 v49; // [rsp+98h] [rbp-1h]
  int v50; // [rsp+A8h] [rbp+Fh]

  v4 = a4;
  v46 = a3;
  if ( *((struct _KTHREAD **)this + 3) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 2879LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 2879LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = 0LL;
  if ( a2[1].hNtSwapChain )
  {
    WdLogSingleEntry1(1LL, 2886LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pRelease->pMetaData == nullptr", 2886LL, 0LL, 0LL, 0LL, 0LL);
  }
  bProducer = a2->bProducer;
  v9 = (char *)this + (bProducer ? 144LL : 96LL);
  if ( bProducer )
  {
    v10 = (PRKEVENT *)((char *)this + 128);
    v11 = (PVOID *)((char *)this + 112);
  }
  else
  {
    v10 = (PRKEVENT *)((char *)this + 176);
    v11 = (PVOID *)((char *)this + 160);
  }
  v45 = v10;
  if ( *((_DWORD *)this + 58) && !bProducer && LODWORD(a2->pDeferredFreeList) )
  {
    WdLogSingleEntry1(2LL, 2894LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Non-sequential swapchain client cannot provided metadata when releasing",
      2894LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
  v13 = *((_DWORD *)v9 + 10);
  if ( v13 == -1 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)v9 + 2), this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ReleaseBuffer caller (0x%I64x) does not own the swapchain 0x%I64x",
      *((_QWORD *)v9 + 2),
      (__int64)this,
      0LL,
      0LL,
      0LL);
LABEL_49:
    LODWORD(v18) = -1073741811;
    goto LABEL_50;
  }
  v43 = 0LL;
  v44 = 0LL;
  DXGSWAPCHAIN::GetClientSurfaceInfo(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v9, v13, &v43, &v44);
  v17 = v43;
  if ( *(_DWORD *)v43 != 1 || *((_DWORD *)v43 + 1) != *((_DWORD *)v9 + 7) )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)v9 + 2), this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ReleaseBuffer caller (0x%I64x) does not own the swapchain 0x%I64x",
      *((_QWORD *)v9 + 2),
      (__int64)this,
      0LL,
      0LL,
      0LL);
    v7 = 0LL;
    goto LABEL_49;
  }
  LODWORD(v18) = DXGSWAPCHAIN::InsertGPUSignal(
                   this,
                   (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v9,
                   v43,
                   *((_DWORD *)this + 48));
  if ( (int)v18 >= 0 )
  {
    if ( *((_DWORD *)v9 + 7) == 1 )
    {
      if ( *((_DWORD *)this + 58) )
      {
        v20 = *((_QWORD *)v17 + 4);
        if ( v20 )
        {
          v21 = *((_QWORD *)v9 + 2);
          v22 = *v11;
          LOBYTE(v39) = 1;
          v43 = 0LL;
          v23 = ObDuplicateObject(v22, v20, v21, &v43, 0, 0, 6, v39);
          v18 = v23;
          if ( v23 < 0 )
          {
            WdLogSingleEntry2(2LL, *((_QWORD *)v17 + 4), v23);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to duplicate Fence Nt handle 0x%I64x, error 0x%I64x",
              *((_QWORD *)v17 + 4),
              v18,
              0LL,
              0LL,
              0LL);
            DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v25, v26);
            v7 = 0LL;
            goto LABEL_50;
          }
          a2->pMetaData = v43;
          *(_QWORD *)&a2->DeferredFreeListSize = *((_QWORD *)v17 + 5);
          v27 = (struct _WORK_QUEUE_ITEM *)operator new[](0x30uLL, 0x4B677844u, 64LL, v24);
          v28 = v27;
          if ( !v27 )
          {
            WdLogSingleEntry1(2LL, *((_QWORD *)v17 + 4));
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to allocate WorkItem to delayed close Nt Handle 0x%I64x",
              *((_QWORD *)v17 + 4),
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_19;
          }
          v27->List = 0LL;
          *(_OWORD *)&v27->WorkerRoutine = 0LL;
          v27[1].List = 0LL;
          LODWORD(v18) = ObReferenceObjectByPointer(*v11, 0x10000000u, (POBJECT_TYPE)PsProcessType, 0);
          if ( (int)v18 < 0 )
          {
            WdLogSingleEntry1(2LL, *v11);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to increment refcount on Process 0x%I64x",
              (__int64)*v11,
              0LL,
              0LL,
              0LL,
              0LL);
            operator delete(v28);
            goto LABEL_19;
          }
          v28[1].List.Blink = (struct _LIST_ENTRY *)*((_QWORD *)v17 + 4);
          v28[1].List.Flink = (struct _LIST_ENTRY *)*v11;
          v28->WorkerRoutine = (PWORKER_THREAD_ROUTINE)DXGSWAPCHAIN::AsyncCloseNtHandle;
          v28->Parameter = v28;
          v28->List.Flink = 0LL;
          ExQueueWorkItem(v28, DelayedWorkQueue);
          v4 = a4;
          *((_QWORD *)v17 + 4) = 0LL;
          *((_QWORD *)v17 + 5) = 0LL;
        }
      }
    }
    v29 = *((_DWORD *)v9 + 10);
    v44 = 0LL;
    v43 = 0LL;
    DXGSWAPCHAIN::GetOtherClientSurfaceInfo(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v9, v29, &v44, &v43);
    v30 = *((unsigned int *)this + 48);
    v31 = v44;
    *((_DWORD *)this + 48) = v30 + 1;
    *((_DWORD *)v43 + 1) = v30;
    *(_DWORD *)v31 = 2;
    *((_DWORD *)v31 + 1) = DXGSWAPCHAIN::SwitchClient(v30, *((_DWORD *)v9 + 7));
    pDeferredFreeList_low = LODWORD(a2->pDeferredFreeList);
    if ( (_DWORD)pDeferredFreeList_low )
    {
      v33 = (struct AUTOEXPANDALLOCATION *)*((_QWORD *)v31 + 2);
      v47 = a2->bProducer;
      LODWORD(Size) = pDeferredFreeList_low;
      v49 = 0LL;
      v50 = 0;
      v48 = 0;
      LODWORD(v18) = DXGSWAPCHAIN::SetMetaDataInternal(
                       this,
                       v33,
                       (int *)v31 + 6,
                       0,
                       Size,
                       v46,
                       (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v47,
                       v4);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
      {
        LODWORD(v41) = DWORD1(v49);
        *(_DWORD *)v40 = v49;
        LODWORD(v38) = v48;
        LODWORD(Src) = v47;
        LODWORD(Size) = v18;
        McTemplateK0pqddqqqqq_EtwWriteTransfer(
          pDeferredFreeList_low,
          &EventIndirectSwapChainSetMetaData,
          (__int64)v16,
          this,
          Size,
          Src,
          v38,
          *(_QWORD *)v40,
          v41,
          DWORD2(v49),
          HIDWORD(v49),
          v50);
      }
      if ( (int)v18 < 0 )
      {
        WdLogSingleEntry2(2LL, *((_QWORD *)v9 + 2), this);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"ReleaseBuffer could not store the caller's (0x%I64x) metadata for swapchain (0x%I64x)",
          *((_QWORD *)v9 + 2),
          (__int64)this,
          0LL,
          0LL,
          0LL);
        goto LABEL_19;
      }
    }
    if ( !*((_DWORD *)v31 + 6) )
      AUTOEXPANDALLOCATION::GetBuffer(*((const void ***)v31 + 2), 0, 0, v32);
    v34 = *((_DWORD *)this + 58);
    if ( *((_DWORD *)v9 + 7) )
    {
      if ( v34 )
      {
        LODWORD(v18) = DXGSWAPCHAIN::ConsumerCheckForSurfacesToFree((unsigned __int64)this, a2);
        if ( (int)v18 < 0 )
          goto LABEL_19;
      }
    }
    else
    {
      if ( !v34 )
      {
        v16 = (int *)*((_QWORD *)this + 28);
        v35 = *v16 + 1;
        if ( *v16 == v16[1] )
          v35 = 0;
        *v16 = v35;
      }
      LODWORD(v18) = DXGFIXEDQUEUE::Add(*((DXGFIXEDQUEUE **)this + 27), *((_DWORD *)v9 + 10), (__int64)v16, v32);
      if ( (int)v18 < 0 )
      {
        WdLogSingleEntry1(2LL, this);
        v19 = L"Failed to add to surface to process queue, swapchain 0x%I64x";
        goto LABEL_18;
      }
    }
    *((_DWORD *)v9 + 10) = -1;
    v7 = *v45;
    if ( *v45 )
      KeSetEvent(*v45, 2, 0);
    goto LABEL_50;
  }
  WdLogSingleEntry1(2LL, this);
  v19 = L"Failed to insert GPU signal, swapchain 0x%I64x";
LABEL_18:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v19, (__int64)this, 0LL, 0LL, 0LL, 0LL);
LABEL_19:
  DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v14, (__int64)v16);
  v7 = 0LL;
LABEL_50:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
  {
    LODWORD(v38) = a2->pDeferredFreeList;
    LODWORD(Src) = a2->bProducer;
    LODWORD(Size) = v18;
    McTemplateK0pqdqp_EtwWriteTransfer(pDeferredFreeList_low, v14, (__int64)v16, this, Size, Src, v38, v7);
  }
  return (unsigned int)v18;
}
