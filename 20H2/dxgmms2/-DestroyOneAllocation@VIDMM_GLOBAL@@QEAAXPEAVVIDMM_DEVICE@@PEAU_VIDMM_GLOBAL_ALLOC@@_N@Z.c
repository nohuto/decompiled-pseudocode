/*
 * XREFs of ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0073180
 * Callers:
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C006A598 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0073168 (-DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0083D0C (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00899A0 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0089C18 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C008A914 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C008AEBC (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011A64 (--3@YAXPEAX@Z.c)
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0012040 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0023200 (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x1C0023F00 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     McTemplateK0puu_EtwWriteTransfer @ 0x1C0024B2C (McTemplateK0puu_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024BB4 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C006F4F0 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006FBAC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0070990 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0071F34 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ??1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1C0073B00 (--1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0073C90 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     VidSchDestroySyncObject @ 0x1C007FB60 (VidSchDestroySyncObject.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C008754C (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x1C00AFDD0 (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B3F48 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00BB7E4 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
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
  int v26; // ecx
  void *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  KSPIN_LOCK *v30; // rdx
  __int64 v31; // rdx
  int *v32; // rdi
  __int64 v33; // rsi
  _QWORD *v34; // rax
  int v35; // eax
  __int64 v36; // r9
  int *v37; // r8
  __int64 v38; // r10
  __int64 v39; // r11
  int v40; // edi
  int v41; // esi
  int v42; // r12d
  int v43; // edx
  __int64 v44; // rdx
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 i; // rdi
  void *v50; // rcx
  __int64 v51; // rax
  int *v52; // rsi
  __int64 v53; // rdi
  _QWORD *v54; // rax
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v55[2]; // [rsp+20h] [rbp-208h]
  struct _KEVENT **v56; // [rsp+28h] [rbp-200h]
  int v57; // [rsp+48h] [rbp-1E0h]
  int v58; // [rsp+60h] [rbp-1C8h]
  char v59; // [rsp+100h] [rbp-128h]
  int v60; // [rsp+104h] [rbp-124h]
  int v61; // [rsp+108h] [rbp-120h]
  int v62; // [rsp+10Ch] [rbp-11Ch]
  int v63; // [rsp+110h] [rbp-118h]
  int v64; // [rsp+150h] [rbp-D8h] BYREF
  __int64 v65; // [rsp+154h] [rbp-D4h]
  int v66; // [rsp+15Ch] [rbp-CCh]
  __int128 v67; // [rsp+160h] [rbp-C8h]
  __int64 v68; // [rsp+170h] [rbp-B8h]
  struct _VIDMM_GLOBAL_ALLOC *v69; // [rsp+178h] [rbp-B0h]
  __int128 v70; // [rsp+180h] [rbp-A8h]
  __int128 v71; // [rsp+190h] [rbp-98h]
  __int64 v72; // [rsp+1A0h] [rbp-88h]
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
      *(_QWORD *)(v12 + 24) = 1571LL;
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
      v72 = 0LL;
      v21 = *((_DWORD *)a3 + 19);
      v66 = 0;
      v64 = 112;
      v68 = 0LL;
      v65 = v21 & 0x3F;
      v70 = 0LL;
      v69 = a3;
      v67 = 0LL;
      LODWORD(v70) = 0;
      v71 = 0LL;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(v8, (struct _VIDMM_SYSTEM_COMMAND *)&v64);
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
      this = (VIDMM_GLOBAL *)**((unsigned int **)a3 + 62);
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(this);
      if ( (**((_DWORD **)a3 + 62) & 0x4000000) == 0 || !*((_DWORD *)a3 + 93) )
      {
        v26 = *((_DWORD *)a3 + 20);
        if ( (v26 & 0x44000) == 0x44000 )
        {
          v27 = (void *)*((_QWORD *)a3 + 65);
          if ( v27 )
          {
            VIDMM_PROCESS::UnmapHostAddressesFromGuest(
              *((VIDMM_PROCESS **)a3 + 63),
              v27,
              *((_QWORD *)a3 + 66),
              *((_QWORD *)a3 + 1),
              1);
            v26 = *((_DWORD *)a3 + 20);
          }
        }
        if ( (v26 & 0x800000) != 0 )
        {
          MmUnmapViewInSystemSpace(*((PVOID *)a3 + 45));
          *((_DWORD *)a3 + 20) &= ~0x800000u;
          *((_QWORD *)a3 + 45) = 0LL;
        }
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
  v30 = (KSPIN_LOCK *)*((_QWORD *)a3 + 61);
  if ( v30 )
  {
    VIDMM_GLOBAL::FreeCrossAdapterDataDpc((VIDMM_GLOBAL *)v28, v30, a3);
    v28 = (unsigned int)_InterlockedDecrement(*((volatile signed __int32 **)a3 + 61));
    if ( (_DWORD)v28 )
    {
      if ( (int)v28 < 0 )
      {
        v32 = (int *)*((_QWORD *)a3 + 61);
        v33 = *v32;
        v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v31);
        v34[3] = 270LL;
        v34[4] = 66LL;
        v34[5] = v32;
        v34[6] = v33;
        v34[7] = 0LL;
        WdLogEvent5_WdCriticalError(v34);
      }
    }
    else
    {
      VIDMM_GLOBAL::DestroyCrossAdapterAllocation((VIDMM_GLOBAL *)v28, *((struct _VIDMM_CROSSADAPTER_ALLOC **)a3 + 61));
    }
    *((_QWORD *)a3 + 61) = 0LL;
  }
  if ( bTracingEnabled )
  {
    v28 = *((_QWORD *)a3 + 62);
    if ( *(_WORD *)(v28 + 4) && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LOBYTE(v56) = *((_BYTE *)a3 + 424);
      *(_BYTE *)&v55[0].0 = *(_WORD *)(v28 + 4);
      McTemplateK0puu_EtwWriteTransfer(v28, &EventReportOfferAllocation, v29, a3, *(_QWORD *)&v55[0].0, v56);
      v28 = *((_QWORD *)a3 + 62);
    }
    v35 = *(_DWORD *)v28;
    if ( bTracingEnabled )
    {
      v36 = *((_QWORD *)a3 + 5);
      v37 = v36 ? *(int **)(v36 + 24) : 0LL;
      if ( v9 )
      {
        v38 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL);
        v39 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 40) + 64LL) + 72LL);
      }
      else
      {
        LOBYTE(v38) = 0;
        v39 = 0LL;
      }
      LOBYTE(v40) = 0;
      LOBYTE(v41) = 0;
      LOBYTE(v42) = 0;
      v28 = *((unsigned int *)a3 + 18);
      LOBYTE(v63) = 0;
      LOBYTE(v62) = 0;
      LOBYTE(v61) = 0;
      LOBYTE(v60) = 0;
      v59 = 0;
      if ( v37 )
      {
        v40 = *v37;
        v41 = v37[1];
        v42 = v37[2];
        v4 = v37[3];
        v63 = v37[4];
        v62 = v37[5];
        v61 = v37[6];
        v60 = v37[7];
        v43 = v37[8];
        v29 = (unsigned int)v37[9];
        v59 = v43;
      }
      else
      {
        v29 = 0LL;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
          *((_QWORD *)a3 + 2),
          &EventDestroyAdapterAllocation,
          v29,
          v39,
          v9,
          v38,
          v35,
          *((_QWORD *)a3 + 2),
          *((_DWORD *)a3 + 8),
          v57,
          *((_DWORD *)a3 + 17),
          v28,
          v58,
          *((_DWORD *)a3 + 16),
          *((_DWORD *)a3 + 92),
          (char)a3,
          v36,
          0,
          v40,
          v41,
          v42,
          v4,
          v63,
          v62,
          v61,
          v60,
          v59,
          v29,
          (*((_DWORD *)a3 + 21) & 2) != 0,
          *((_QWORD *)a3 + 44),
          *((_DWORD *)a3 + 19) & 0x3F,
          BYTE1(*((_DWORD *)a3 + 19)) & 1);
    }
  }
  *((_QWORD *)v8 + 958) += *((_QWORD *)a3 + 2);
  ++*((_DWORD *)v8 + 1914);
  v44 = *((_QWORD *)a3 + 2);
  if ( (**((_DWORD **)a3 + 62) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)v8 + 1946);
    *((_QWORD *)v8 + 974) += v44;
  }
  else
  {
    ++*((_DWORD *)v8 + 1950);
    *((_QWORD *)v8 + 976) += v44;
  }
  *((_QWORD *)v8 + 5023) -= *((_QWORD *)a3 + 2);
  v45 = *((_QWORD *)a3 + 39);
  if ( v45 )
  {
    if ( *(_QWORD *)(v45 + 16) )
    {
      v46 = WdLogNewEntry5_WdAssertion(v28, v44, v29);
      *(_QWORD *)(v46 + 24) = 641LL;
      WdLogEvent5_WdAssertion(v46);
    }
    if ( *(_DWORD *)(v45 + 24) )
    {
      v47 = WdLogNewEntry5_WdAssertion(v28, v44, v29);
      *(_QWORD *)(v47 + 24) = 642LL;
      WdLogEvent5_WdAssertion(v47);
    }
    operator delete((void *)v45);
  }
  v48 = *((_QWORD *)a3 + 62);
  if ( v48 )
  {
    if ( *(_QWORD *)(v48 + 24) )
    {
      for ( i = 0LL; i < 16; i += 8LL )
      {
        v50 = *(void **)(i + *(_QWORD *)(v48 + 24));
        v51 = v48;
        if ( v50 )
        {
          VidSchDestroySyncObject(v50);
          *(_QWORD *)(i + *(_QWORD *)(*((_QWORD *)a3 + 62) + 24LL)) = 0LL;
          v48 = *((_QWORD *)a3 + 62);
          v51 = v48;
        }
        else
        {
          v48 = *((_QWORD *)a3 + 62);
        }
      }
      operator delete(*(void **)(v51 + 24));
      *(_QWORD *)(*((_QWORD *)a3 + 62) + 24LL) = 0LL;
      v48 = *((_QWORD *)a3 + 62);
    }
    v52 = *(int **)(v48 + 16);
    if ( v52 )
    {
      if ( _InterlockedExchangeAdd(v52, 0xFFFFFFFF) == 1 )
      {
        if ( v52[2] )
        {
          v53 = v52[2];
          v54 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v48);
          v54[3] = 270LL;
          v54[4] = 42LL;
          v54[5] = v52;
          v54[6] = v53;
          v54[7] = 0LL;
          WdLogEvent5_WdCriticalError(v54);
        }
        operator delete(v52);
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
