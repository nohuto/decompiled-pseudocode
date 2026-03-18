/*
 * XREFs of ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C008D5A0
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C009DD78 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C009E880 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C00A0644 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00A540C (-DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00A5624 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00A65D4 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00A9738 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 * Callees:
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C00018B0 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?Feature_GuestAllocMapping__private_IsEnabledPreCheck@@YAHXZ @ 0x1C00027F0 (-Feature_GuestAllocMapping__private_IsEnabledPreCheck@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x1C001D19C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x1C002CC40 (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002DC30 (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     McTemplateK0puu_EtwWriteTransfer @ 0x1C002EECC (McTemplateK0puu_EtwWriteTransfer.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007BB3C (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C007C408 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00856F4 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0085EBC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0089AE0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ??1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1C008DB14 (--1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 *     VidSchDestroySyncObject @ 0x1C0099880 (VidSchDestroySyncObject.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C009BAE4 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00A67B0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x1C00D6148 (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z.c)
 *     ?FreePhysical@VIDMM_GLOBAL@@CAXPEAX@Z @ 0x1C00D73CC (-FreePhysical@VIDMM_GLOBAL@@CAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DestroyOneAllocation(
        struct _KTHREAD **this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        __int64 a4)
{
  char v4; // r14
  __int64 v8; // r15
  char v9; // bp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  VIDMM_GLOBAL *v17; // rcx
  __int64 v18; // r8
  KSPIN_LOCK *v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // r10d
  char v22; // di
  __int64 v23; // r14
  int v24; // r10d
  unsigned int *v25; // r9
  __int64 v26; // r8
  unsigned int v27; // r15d
  unsigned int v28; // r12d
  unsigned int v29; // r13d
  unsigned int v30; // edx
  unsigned int v31; // r9d
  __int64 v32; // rdx
  __int64 v33; // rdi
  int *v34; // rdi
  void *v35; // rdx
  int v36; // r9d
  int v37; // eax
  bool v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rdi
  _QWORD *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  struct _KTHREAD *v44; // rdi
  int v45; // ecx
  __int64 v46; // rdx
  struct _VIDMM_POOL_BLOCK *v47; // rcx
  __int64 i; // r14
  void *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // [rsp+20h] [rbp-208h]
  struct _KEVENT **v52; // [rsp+28h] [rbp-200h]
  int v53; // [rsp+48h] [rbp-1E0h]
  int v54; // [rsp+60h] [rbp-1C8h]
  char v55; // [rsp+100h] [rbp-128h]
  unsigned int v56; // [rsp+104h] [rbp-124h]
  unsigned int v57; // [rsp+108h] [rbp-120h]
  unsigned int v58; // [rsp+10Ch] [rbp-11Ch]
  unsigned int v59; // [rsp+110h] [rbp-118h]
  __int64 v60; // [rsp+128h] [rbp-100h]
  char v61; // [rsp+130h] [rbp-F8h]
  __int64 v62; // [rsp+138h] [rbp-F0h]
  _QWORD v63[12]; // [rsp+150h] [rbp-D8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1B0h] [rbp-78h] BYREF

  v4 = a4;
  if ( a2 )
    v8 = *((_QWORD *)a2 + 3);
  else
    v8 = 0LL;
  v61 = v8;
  if ( g_IsInternalReleaseOrDbg )
  {
    v42 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v42 + 24) = a3;
    *(_QWORD *)(v42 + 32) = a2;
  }
  v9 = 0;
  Feature_GuestAllocMapping__private_IsEnabledPreCheck();
  if ( (*((_DWORD *)a3 + 17) & 0x100) == 0 )
  {
    if ( this != (struct _KTHREAD **)-39976LL && this[4998] == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1425LL);
      v52 = 0LL;
      v51 = 1425LL;
      DxgkLogInternalTriageEvent(v43, 262146LL);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(this + 4997, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v36 = *((_DWORD *)this + 10000);
        if ( v36 != -1 && (byte_1C006E941 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventBlockThread, v13, v36);
      }
      ExAcquirePushLockExclusiveEx(this + 4997, 0LL);
    }
    this[4998] = KeGetCurrentThread();
    v14 = (_QWORD *)((char *)a3 + 416);
    v15 = *((_QWORD *)a3 + 52);
    if ( v15 )
    {
      if ( *(_QWORD **)(v15 + 8) != v14 || (v41 = (_QWORD *)*((_QWORD *)a3 + 53), (_QWORD *)*v41 != v14) )
        __fastfail(3u);
      *v41 = v15;
      *(_QWORD *)(v15 + 8) = v41;
      *v14 = 0LL;
    }
    if ( *((_QWORD *)a3 + 54) )
      VIDMM_GLOBAL::RemoveAllocationFromDecommitList((VIDMM_GLOBAL *)this, a3);
    if ( this[5589] == a3 )
      v9 = 1;
    this[4998] = 0LL;
    ExReleasePushLockExclusiveEx(this + 4997, 0LL);
    KeLeaveCriticalRegion();
  }
  v16 = *((_DWORD *)a3 + 19);
  if ( (v16 & 4) != 0 )
  {
    if ( *((_QWORD *)a3 + 15) || *((_QWORD *)a3 + 30) )
    {
      memset(v63, 0, 0x58uLL);
      v37 = *((_DWORD *)a3 + 17) & 0x3F;
      LODWORD(v63[0]) = 112;
      HIDWORD(v63[0]) = v37;
      v63[5] = a3;
      LODWORD(v63[6]) = 0;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait((VIDMM_GLOBAL *)this, (struct _VIDMM_SYSTEM_COMMAND *)v63, v38);
      v16 = *((_DWORD *)a3 + 19);
      v9 = 0;
    }
    v39 = *((_QWORD *)a3 + 11);
    v40 = *(_QWORD *)(v39 + 40);
    if ( (v16 & 2) != 0 )
    {
      VIDMM_SEGMENT::UnlockAllocationBackingStore((struct VIDMM_GLOBAL *)this, a3, 0LL);
      VIDMM_GLOBAL::ReturnPinnedBackingStore((VIDMM_GLOBAL *)this, *((_QWORD *)a3 + 1));
      *((_DWORD *)a3 + 19) &= ~2u;
      v39 = *((_QWORD *)a3 + 11);
    }
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(**(PRKPROCESS **)(v39 + 8), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation((VIDMM_GLOBAL *)this, (struct _KEVENT *)(v40 - 40), 0LL, 0LL, 0, 0LL);
    KeUnstackDetachProcess(&ApcState);
    *((_QWORD *)a3 + 11) = 0LL;
  }
  if ( v9 )
  {
    v44 = *this;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v44 + 56, 0LL);
    *((_QWORD *)v44 + 8) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v44 + 56, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v4 )
    VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)this, a3);
  if ( (*((_DWORD *)a3 + 19) & 0x20) != 0 )
  {
    LOBYTE(v10) = 1;
    VIDMM_GLOBAL::UncommitGlobalBackingStore((VIDMM_GLOBAL *)this, a3, v10, v11);
  }
  VidMmiClosePartition(**((volatile signed __int32 ***)a3 + 63));
  v19 = (KSPIN_LOCK *)*((_QWORD *)a3 + 64);
  if ( v19 )
  {
    VIDMM_GLOBAL::FreeCrossAdapterDataDpc(v17, v19, a3);
    v45 = _InterlockedDecrement(*((volatile signed __int32 **)a3 + 64));
    if ( v45 )
    {
      if ( v45 < 0 )
        WdLogSingleEntry5(0LL, 270LL, 66LL, *((_QWORD *)a3 + 64), **((int **)a3 + 64), 0LL);
    }
    else
    {
      v46 = *((_QWORD *)a3 + 64);
      v47 = *(struct _VIDMM_POOL_BLOCK **)(v46 + 48);
      if ( v47 )
      {
        VIDMM_GLOBAL::FreePhysical(v47);
        v46 = *((_QWORD *)a3 + 64);
      }
      VIDMM_GLOBAL::DestroyCrossAdapterAllocation(v47, (struct _VIDMM_CROSSADAPTER_ALLOC *)v46);
    }
    *((_QWORD *)a3 + 64) = 0LL;
  }
  if ( bTracingEnabled )
  {
    v20 = *((_QWORD *)a3 + 66);
    if ( *(_WORD *)(v20 + 4) && (byte_1C006E941 & 1) != 0 )
    {
      LOBYTE(v52) = *((_BYTE *)a3 + 448);
      LOBYTE(v51) = *(_WORD *)(v20 + 4);
      McTemplateK0puu_EtwWriteTransfer(v20, &EventReportOfferAllocation, v18, a3, v51, v52);
      v20 = *((_QWORD *)a3 + 66);
    }
    if ( bTracingEnabled )
    {
      v21 = *((_DWORD *)a3 + 17);
      v22 = v21 & 0x3F;
      v23 = *((_QWORD *)a3 + 5);
      v24 = (v21 >> 8) & 1;
      v25 = v23 ? *(unsigned int **)(v23 + 24) : 0LL;
      if ( v8 )
      {
        v60 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL);
        v62 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 40) + 64LL) + 80LL);
      }
      else
      {
        LOBYTE(v60) = 0;
        v62 = 0LL;
      }
      LOBYTE(v59) = 0;
      v26 = 0LL;
      LOBYTE(v58) = 0;
      LOBYTE(v27) = 0;
      LOBYTE(v57) = 0;
      LOBYTE(v28) = 0;
      LOBYTE(v56) = 0;
      LOBYTE(v29) = 0;
      v55 = 0;
      if ( v25 )
      {
        v26 = *v25;
        v27 = v25[1];
        v28 = v25[2];
        v29 = v25[3];
        v59 = v25[4];
        v58 = v25[5];
        v57 = v25[6];
        v56 = v25[7];
        v30 = v25[8];
        v31 = v25[9];
        v55 = v30;
      }
      else
      {
        LOBYTE(v31) = 0;
      }
      if ( (byte_1C006E941 & 8) != 0 )
        McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
          *((_QWORD *)a3 + 2),
          (__int64)&EventDestroyAdapterAllocation,
          v26,
          v62,
          v61,
          v60,
          *(_DWORD *)v20,
          *((_QWORD *)a3 + 2),
          *((_DWORD *)a3 + 8),
          v53,
          *((_DWORD *)a3 + 15),
          *((_DWORD *)a3 + 16),
          v54,
          *((_DWORD *)a3 + 14),
          *((_DWORD *)a3 + 98),
          (char)a3,
          v23,
          0,
          v26,
          v27,
          v28,
          v29,
          v59,
          v58,
          v57,
          v56,
          v55,
          v31,
          (*((_DWORD *)a3 + 19) & 2) != 0,
          *((_QWORD *)a3 + 47),
          v22,
          v24);
    }
  }
  this[959] = (struct _KTHREAD *)((char *)this[959] + *((_QWORD *)a3 + 2));
  ++*((_DWORD *)this + 1916);
  v32 = *((_QWORD *)a3 + 2);
  if ( (**((_DWORD **)a3 + 66) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)this + 1948);
    this[975] = (struct _KTHREAD *)((char *)this[975] + v32);
  }
  else
  {
    ++*((_DWORD *)this + 1952);
    this[977] = (struct _KTHREAD *)((char *)this[977] + v32);
  }
  this[5024] = (struct _KTHREAD *)((char *)this[5024] - *((_QWORD *)a3 + 2));
  v33 = *((_QWORD *)a3 + 66);
  if ( v33 )
  {
    if ( *(_QWORD *)(v33 + 24) )
    {
      for ( i = 0LL; i < 16; i += 8LL )
      {
        v49 = *(void **)(i + *(_QWORD *)(v33 + 24));
        v50 = v33;
        if ( v49 )
        {
          VidSchDestroySyncObject(v49);
          *(_QWORD *)(i + *(_QWORD *)(*((_QWORD *)a3 + 66) + 24LL)) = 0LL;
          v33 = *((_QWORD *)a3 + 66);
          v50 = v33;
        }
        else
        {
          v33 = *((_QWORD *)a3 + 66);
        }
      }
      operator delete(*(void **)(v50 + 24));
      *(_QWORD *)(*((_QWORD *)a3 + 66) + 24LL) = 0LL;
      v33 = *((_QWORD *)a3 + 66);
    }
    v34 = *(int **)(v33 + 16);
    if ( v34 )
    {
      if ( _InterlockedExchangeAdd(v34, 0xFFFFFFFF) == 1 )
      {
        if ( v34[2] )
          WdLogSingleEntry5(0LL, 270LL, 42LL, v34, v34[2], 0LL);
        operator delete(v34);
      }
      *(_QWORD *)(*((_QWORD *)a3 + 66) + 16LL) = 0LL;
    }
  }
  v35 = (void *)*((_QWORD *)a3 + 65);
  if ( v35 )
    SysMmFreeLogicalMemory(*((struct SYSMM_ADAPTER **)this[3] + 28), v35);
  if ( !*((_DWORD *)a3 + 99) )
  {
    operator delete(*((void **)a3 + 66));
    *((_DWORD *)a3 + 17) |= 0x400000u;
    _VIDMM_GLOBAL_ALLOC::~_VIDMM_GLOBAL_ALLOC(a3);
    operator delete(a3);
  }
}
