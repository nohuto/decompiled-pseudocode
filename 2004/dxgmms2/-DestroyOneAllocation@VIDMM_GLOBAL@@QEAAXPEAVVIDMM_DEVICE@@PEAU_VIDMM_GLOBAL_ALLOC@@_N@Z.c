/*
 * XREFs of ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00689A0
 * Callers:
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005E964 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005F664 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0068988 (-DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0089920 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0089B98 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C008A884 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C008AE2C (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0001710 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x1C001659C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0023700 (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     McTemplateK0puu_EtwWriteTransfer @ 0x1C0024D78 (McTemplateK0puu_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E00 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0060ECC (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0063778 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0064DD4 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00661CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ??1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1C0069320 (--1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006A4E0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     VidSchDestroySyncObject @ 0x1C0081DD0 (VidSchDestroySyncObject.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C0087490 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x1C00B0090 (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B4288 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00BBD88 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DestroyOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        char a4)
{
  int v4; // r13d
  VIDMM_GLOBAL *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  bool v11; // di
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v19; // rdi
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdi
  int v25; // eax
  void *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  KSPIN_LOCK *v29; // rdx
  __int64 v30; // rdx
  int *v31; // rdi
  __int64 v32; // rsi
  _QWORD *v33; // rax
  int v34; // eax
  __int64 v35; // r9
  int *v36; // r8
  __int64 v37; // r10
  __int64 v38; // r11
  int v39; // edi
  int v40; // esi
  int v41; // r12d
  int v42; // edx
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 i; // rdi
  void *v49; // rcx
  __int64 v50; // rax
  int *v51; // rsi
  __int64 v52; // rdi
  _QWORD *v53; // rax
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v54[2]; // [rsp+20h] [rbp-208h]
  struct _KEVENT **v55; // [rsp+28h] [rbp-200h]
  int v56; // [rsp+48h] [rbp-1E0h]
  int v57; // [rsp+60h] [rbp-1C8h]
  char v58; // [rsp+100h] [rbp-128h]
  int v59; // [rsp+104h] [rbp-124h]
  int v60; // [rsp+108h] [rbp-120h]
  int v61; // [rsp+10Ch] [rbp-11Ch]
  int v62; // [rsp+110h] [rbp-118h]
  int v63; // [rsp+150h] [rbp-D8h] BYREF
  __int64 v64; // [rsp+154h] [rbp-D4h]
  int v65; // [rsp+15Ch] [rbp-CCh]
  __int128 v66; // [rsp+160h] [rbp-C8h]
  __int64 v67; // [rsp+170h] [rbp-B8h]
  struct _VIDMM_GLOBAL_ALLOC *v68; // [rsp+178h] [rbp-B0h]
  __int128 v69; // [rsp+180h] [rbp-A8h]
  __int128 v70; // [rsp+190h] [rbp-98h]
  __int64 v71; // [rsp+1A0h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+1B0h] [rbp-78h] BYREF

  LOBYTE(v4) = 0;
  v8 = this;
  if ( a2 )
    v9 = *((_QWORD *)a2 + 3);
  else
    v9 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v10 + 24) = a3;
    *(_QWORD *)(v10 + 32) = a2;
  }
  v11 = 0;
  if ( (*((_DWORD *)a3 + 19) & 0x100) == 0 )
  {
    if ( v8 != (VIDMM_GLOBAL *)-39968LL && *((struct _KTHREAD **)v8 + 4997) == KeGetCurrentThread() )
    {
      v12 = WdLogNewEntry5_WdAssertion(this, a2, a3);
      *(_QWORD *)(v12 + 24) = 1569LL;
      WdLogEvent5_WdAssertion(v12);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v8 + 39968, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v15 = *((_DWORD *)v8 + 9998);
        if ( v15 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, &EventBlockThread, v14, v15);
      }
      ExAcquirePushLockExclusiveEx((char *)v8 + 39968, 0LL);
    }
    *((_QWORD *)v8 + 4997) = KeGetCurrentThread();
    v16 = (_QWORD *)((char *)a3 + 392);
    v17 = *((_QWORD *)a3 + 49);
    if ( v17 )
    {
      if ( *(_QWORD **)(v17 + 8) != v16 || (v18 = (_QWORD *)*((_QWORD *)a3 + 50), (_QWORD *)*v18 != v16) )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      *v16 = 0LL;
    }
    if ( *((_QWORD *)a3 + 51) )
      VIDMM_GLOBAL::RemoveAllocationFromDecommitList(v8, a3);
    v19 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v8 + 5588);
    *((_QWORD *)v8 + 4997) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v8 + 39968, 0LL);
    KeLeaveCriticalRegion();
    v11 = v19 == a3;
  }
  v20 = *((_DWORD *)a3 + 21);
  if ( (v20 & 4) != 0 )
  {
    if ( *((_QWORD *)a3 + 16) || *((_QWORD *)a3 + 32) )
    {
      v71 = 0LL;
      v21 = *((_DWORD *)a3 + 19);
      v65 = 0;
      v63 = 112;
      v67 = 0LL;
      v64 = v21 & 0x3F;
      v69 = 0LL;
      v68 = a3;
      v66 = 0LL;
      LODWORD(v69) = 0;
      v70 = 0LL;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(v8, (struct _VIDMM_SYSTEM_COMMAND *)&v63);
      v20 = *((_DWORD *)a3 + 21);
      v11 = 0;
    }
    v22 = *((_QWORD *)a3 + 12);
    v23 = *(_QWORD *)(v22 + 40);
    if ( (v20 & 2) != 0 )
    {
      VIDMM_SEGMENT::UnlockAllocationBackingStore(v8, a3, 0LL);
      VIDMM_GLOBAL::ReturnPinnedBackingStore(v8, *((_QWORD *)a3 + 1));
      *((_DWORD *)a3 + 21) &= ~2u;
      v22 = *((_QWORD *)a3 + 12);
    }
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(**(PRKPROCESS **)(v22 + 8), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(v8, (struct VIDMM_ALLOC *)(v23 - 40), 0LL, 0, 0, 0LL);
    KeUnstackDetachProcess(&ApcState);
    *((_QWORD *)a3 + 12) = 0LL;
  }
  if ( v11 )
  {
    v24 = *(_QWORD *)v8;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v24 + 56, 0LL);
    *(_QWORD *)(v24 + 64) = 0LL;
    ExReleasePushLockExclusiveEx(v24 + 56, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( a4 )
    VIDMM_GLOBAL::WaitForAllPagingEngines(v8, a3);
  if ( (*((_DWORD *)a3 + 21) & 0x40) != 0 )
  {
    v25 = *((_DWORD *)a3 + 20);
    if ( (v25 & 0x2000) == 0 )
    {
      if ( (v25 & 0x40000) == 0 && (**((_DWORD **)a3 + 62) & 0x10020008) == 0 )
        goto LABEL_42;
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(**((unsigned int **)a3 + 62));
      this = (VIDMM_GLOBAL *)**((unsigned int **)a3 + 62);
      if ( ((unsigned int)this & 0x4000000) == 0 || !*((_DWORD *)a3 + 93) )
      {
        if ( (*((_DWORD *)a3 + 20) & 0x44000) == 0x44000 )
        {
          v26 = (void *)*((_QWORD *)a3 + 65);
          if ( v26 )
          {
            VIDMM_PROCESS::UnmapHostAddressesFromGuest(
              *((VIDMM_PROCESS **)a3 + 63),
              v26,
              *((_QWORD *)a3 + 66),
              *((_QWORD *)a3 + 1),
              1);
            LODWORD(this) = **((_DWORD **)a3 + 62);
          }
        }
        if ( ((unsigned int)this & 0x20008) != 0 )
          MmUnmapViewInSystemSpace(*((PVOID *)a3 + 45));
        VidMmDereferenceObjectAsync(*((PVOID *)a3 + 44));
        *((_QWORD *)a3 + 44) = 0LL;
      }
      else
      {
LABEL_42:
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(this);
      }
    }
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(1584LL * (*((_DWORD *)a3 + 19) & 0x3F) + *((_QWORD *)v8 + 5027) + 1552),
      -*((_QWORD *)a3 + 1));
    *((_DWORD *)a3 + 21) &= ~0x40u;
  }
  VidMmiClosePartition(**((volatile signed __int32 ***)a3 + 60));
  v29 = (KSPIN_LOCK *)*((_QWORD *)a3 + 61);
  if ( v29 )
  {
    VIDMM_GLOBAL::FreeCrossAdapterDataDpc((VIDMM_GLOBAL *)v27, v29, a3);
    v27 = (unsigned int)_InterlockedDecrement(*((volatile signed __int32 **)a3 + 61));
    if ( (_DWORD)v27 )
    {
      if ( (int)v27 < 0 )
      {
        v31 = (int *)*((_QWORD *)a3 + 61);
        v32 = *v31;
        v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v30);
        v33[3] = 270LL;
        v33[4] = 66LL;
        v33[5] = v31;
        v33[6] = v32;
        v33[7] = 0LL;
        WdLogEvent5_WdCriticalError(v33);
      }
    }
    else
    {
      VIDMM_GLOBAL::DestroyCrossAdapterAllocation((VIDMM_GLOBAL *)v27, *((struct _VIDMM_CROSSADAPTER_ALLOC **)a3 + 61));
    }
    *((_QWORD *)a3 + 61) = 0LL;
  }
  if ( bTracingEnabled )
  {
    v27 = *((_QWORD *)a3 + 62);
    if ( *(_WORD *)(v27 + 4) && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LOBYTE(v55) = *((_BYTE *)a3 + 424);
      *(_BYTE *)&v54[0].0 = *(_WORD *)(v27 + 4);
      McTemplateK0puu_EtwWriteTransfer(v27, &EventReportOfferAllocation, v28, a3, *(_QWORD *)&v54[0].0, v55);
      v27 = *((_QWORD *)a3 + 62);
    }
    v34 = *(_DWORD *)v27;
    if ( bTracingEnabled )
    {
      v35 = *((_QWORD *)a3 + 5);
      v36 = v35 ? *(int **)(v35 + 24) : 0LL;
      if ( v9 )
      {
        v37 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL);
        v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 40) + 64LL) + 72LL);
      }
      else
      {
        LOBYTE(v37) = 0;
        v38 = 0LL;
      }
      LOBYTE(v39) = 0;
      LOBYTE(v40) = 0;
      LOBYTE(v41) = 0;
      v27 = *((unsigned int *)a3 + 18);
      LOBYTE(v62) = 0;
      LOBYTE(v61) = 0;
      LOBYTE(v60) = 0;
      LOBYTE(v59) = 0;
      v58 = 0;
      if ( v36 )
      {
        v39 = *v36;
        v40 = v36[1];
        v41 = v36[2];
        v4 = v36[3];
        v62 = v36[4];
        v61 = v36[5];
        v60 = v36[6];
        v59 = v36[7];
        v42 = v36[8];
        v28 = (unsigned int)v36[9];
        v58 = v42;
      }
      else
      {
        v28 = 0LL;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
          *((_QWORD *)a3 + 2),
          (__int64)&EventDestroyAdapterAllocation,
          v28,
          v38,
          v9,
          v37,
          v34,
          *((_QWORD *)a3 + 2),
          *((_DWORD *)a3 + 8),
          v56,
          *((_DWORD *)a3 + 17),
          v27,
          v57,
          *((_DWORD *)a3 + 16),
          *((_DWORD *)a3 + 92),
          (char)a3,
          v35,
          0,
          v39,
          v40,
          v41,
          v4,
          v62,
          v61,
          v60,
          v59,
          v58,
          v28,
          (*((_DWORD *)a3 + 21) & 2) != 0,
          *((_QWORD *)a3 + 44),
          *((_DWORD *)a3 + 19) & 0x3F,
          BYTE1(*((_DWORD *)a3 + 19)) & 1);
    }
  }
  *((_QWORD *)v8 + 958) += *((_QWORD *)a3 + 2);
  ++*((_DWORD *)v8 + 1914);
  v43 = *((_QWORD *)a3 + 2);
  if ( (**((_DWORD **)a3 + 62) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)v8 + 1946);
    *((_QWORD *)v8 + 974) += v43;
  }
  else
  {
    ++*((_DWORD *)v8 + 1950);
    *((_QWORD *)v8 + 976) += v43;
  }
  *((_QWORD *)v8 + 5023) -= *((_QWORD *)a3 + 2);
  v44 = *((_QWORD *)a3 + 39);
  if ( v44 )
  {
    if ( *(_QWORD *)(v44 + 16) )
    {
      v45 = WdLogNewEntry5_WdAssertion(v27, v43, v28);
      *(_QWORD *)(v45 + 24) = 639LL;
      WdLogEvent5_WdAssertion(v45);
    }
    if ( *(_DWORD *)(v44 + 24) )
    {
      v46 = WdLogNewEntry5_WdAssertion(v27, v43, v28);
      *(_QWORD *)(v46 + 24) = 640LL;
      WdLogEvent5_WdAssertion(v46);
    }
    operator delete((void *)v44);
  }
  v47 = *((_QWORD *)a3 + 62);
  if ( v47 )
  {
    if ( *(_QWORD *)(v47 + 24) )
    {
      for ( i = 0LL; i < 16; i += 8LL )
      {
        v49 = *(void **)(i + *(_QWORD *)(v47 + 24));
        v50 = v47;
        if ( v49 )
        {
          VidSchDestroySyncObject(v49);
          *(_QWORD *)(i + *(_QWORD *)(*((_QWORD *)a3 + 62) + 24LL)) = 0LL;
          v47 = *((_QWORD *)a3 + 62);
          v50 = v47;
        }
        else
        {
          v47 = *((_QWORD *)a3 + 62);
        }
      }
      operator delete(*(void **)(v50 + 24));
      *(_QWORD *)(*((_QWORD *)a3 + 62) + 24LL) = 0LL;
      v47 = *((_QWORD *)a3 + 62);
    }
    v51 = *(int **)(v47 + 16);
    if ( v51 )
    {
      if ( _InterlockedExchangeAdd(v51, 0xFFFFFFFF) == 1 )
      {
        if ( v51[2] )
        {
          v52 = v51[2];
          v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v47);
          v53[3] = 270LL;
          v53[4] = 42LL;
          v53[5] = v51;
          v53[6] = v52;
          v53[7] = 0LL;
          WdLogEvent5_WdCriticalError(v53);
        }
        operator delete(v51);
      }
      *(_QWORD *)(*((_QWORD *)a3 + 62) + 16LL) = 0LL;
    }
  }
  if ( !*((_DWORD *)a3 + 93) )
  {
    operator delete(*((void **)a3 + 62));
    *((_DWORD *)a3 + 19) |= 0x200000u;
    _VIDMM_GLOBAL_ALLOC::~_VIDMM_GLOBAL_ALLOC(a3);
    operator delete(a3);
  }
}
