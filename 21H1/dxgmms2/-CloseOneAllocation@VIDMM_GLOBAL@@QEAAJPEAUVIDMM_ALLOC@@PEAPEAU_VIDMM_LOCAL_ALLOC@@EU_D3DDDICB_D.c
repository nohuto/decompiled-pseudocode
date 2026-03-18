/*
 * XREFs of ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006A500
 * Callers:
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005E964 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C005EE74 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005F664 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00689A0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006A3A0 (-CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDI.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C006B870 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0089940 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0089BB8 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C008A8A4 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C008AE4C (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     McTemplateK0pppppppppppp_EtwWriteTransfer @ 0x1C0024374 (McTemplateK0pppppppppppp_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E80 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0064DD4 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1C0069B80 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C007080C (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0074A7C (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0086DB4 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0088504 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CloseOneAllocation(
        VIDMM_GLOBAL *this,
        struct _KEVENT *a2,
        struct _VIDMM_LOCAL_ALLOC **a3,
        char a4,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a5,
        struct _KEVENT **a6)
{
  __int64 *v6; // rax
  struct _LIST_ENTRY *v7; // r12
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v12; // rsi
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v15; // rcx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  struct _LIST_ENTRY *v27; // rdx
  struct _LIST_ENTRY ***v28; // rcx
  __int64 v29; // rdi
  BOOL v30; // ebp
  __int64 v31; // r13
  __int64 v32; // r14
  int v34; // ecx
  struct _LIST_ENTRY **v35; // rdx
  __int64 v36; // rdi
  int v37; // eax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  struct _LIST_ENTRY *v42; // rax
  struct _LIST_ENTRY *v43; // rcx
  struct _LIST_ENTRY *v44; // r14
  struct _LIST_ENTRY *v45; // rdi
  __int64 v46; // rbp
  HANDLE CurrentProcessId; // rax
  struct _LIST_ENTRY *v48; // rdi
  struct _LIST_ENTRY **p_Blink; // rdi
  __int64 v50; // rcx
  __int64 v51; // r8
  struct _LIST_ENTRY **v52; // rax
  struct _LIST_ENTRY *v53; // rdx
  struct _LIST_ENTRY *v54; // rcx
  __int64 result; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  struct _LIST_ENTRY *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  int v62; // r9d
  __int64 v63; // rcx
  int v64; // r9d
  int v65; // eax
  __int64 v66; // rax
  struct _LIST_ENTRY *v67; // rdx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v69; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 Blink_low; // rdi
  _QWORD *v81; // rax
  struct _LIST_ENTRY *v82; // [rsp+80h] [rbp-B8h]
  __int64 v83; // [rsp+88h] [rbp-B0h]
  __int64 v84; // [rsp+90h] [rbp-A8h]
  _QWORD v85[12]; // [rsp+A0h] [rbp-98h] BYREF
  unsigned int v86; // [rsp+148h] [rbp+10h]
  unsigned int v87; // [rsp+150h] [rbp+18h]

  v6 = *(__int64 **)&a2->Header.Lock;
  v7 = 0LL;
  v87 = 0;
  Flink = a2->Header.WaitListHead.Flink;
  v82 = Flink;
  v12 = *v6;
  v86 = 0;
  v84 = 0LL;
  v83 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v66 = WdLogNewEntry5_WdTrace(this);
    Flink = v82;
    *(_QWORD *)(v66 + 24) = a2;
  }
  if ( a3 )
    *a3 = *(struct _VIDMM_LOCAL_ALLOC **)&a2->Header.Lock;
  if ( bTracingEnabled )
  {
    Blink = a2->Header.WaitListHead.Blink;
    if ( Blink )
    {
      v87 = (unsigned int)Blink[1].Flink;
      v15 = Blink[2].Blink;
      if ( v15 )
      {
        v86 = (unsigned int)v15[1].Flink;
        v84 = (__int64)v15[3].Flink;
      }
    }
    if ( (**(_DWORD **)(v12 + 496) & 8) != 0 )
      v16 = *(_QWORD *)(v12 + 360);
    else
      v16 = *(_QWORD *)(*(_QWORD *)&a2->Header.Lock + 16LL);
    v83 = v16;
  }
  v17 = (int)a2[1].Header.WaitListHead.Flink;
  if ( (v17 & 1) != 0 )
    goto LABEL_13;
  v58 = a2->Header.WaitListHead.Flink;
  if ( v58 && v58[1].Blink || (*(_DWORD *)(v12 + 84) & 4) != 0 )
  {
    if ( (*(_DWORD *)(v12 + 84) & 4) == 0 )
    {
      VIDMM_GLOBAL::TerminateOneAllocation(this, (struct VIDMM_ALLOC *)a2, (unsigned int)a3, a5, 0LL);
      goto LABEL_13;
    }
    a2[1].Header.SignalState |= 4u;
    LODWORD(a2[1].Header.WaitListHead.Flink) = v17 | 1;
  }
  else
  {
    a2[1].Header.SignalState |= 4u;
    if ( (a2[1].Header.SignalState & 3) == 1 )
    {
      v67 = a2[2].Header.WaitListHead.Flink;
      p_WaitListHead = &a2[2].Header.WaitListHead;
      if ( v67->Blink != &a2[2].Header.WaitListHead )
        goto LABEL_115;
      v69 = a2[2].Header.WaitListHead.Blink;
      if ( v69->Flink != p_WaitListHead )
        goto LABEL_115;
      v69->Flink = v67;
      v67->Blink = v69;
      a2[1].Header.SignalState &= 0xFFFFFFFC;
      Flink = v82;
      a2[2].Header.WaitListHead.Blink = 0LL;
      p_WaitListHead->Flink = 0LL;
    }
    if ( (*(_DWORD *)(v12 + 76) & 0x100) != 0 && (struct _KEVENT *)Flink[15].Blink == a2 )
      Flink[15].Blink = 0LL;
  }
  KeSetEvent(a2 + 3, 0, 0);
LABEL_13:
  if ( a4 && ((__int64)a2[1].Header.WaitListHead.Flink & 1) != 0 && !KeReadStateEvent(a2 + 3) )
  {
    v61 = WdLogNewEntry5_WdEvent(v60, v59);
    *(_QWORD *)(v61 + 24) = a2;
    *(_QWORD *)(v61 + 32) = -1071775486LL;
    WdLogEvent5_WdEvent(v61);
    result = 3223191810LL;
    *a6 = a2 + 3;
    return result;
  }
  KeWaitForSingleObject(&a2[3], Executive, 0, 0, 0LL);
  VIDMM_GLOBAL::xWaitForAllPagingEngines(
    this,
    (struct _VIDSCH_SYNC_OBJECT **)this + (*(_DWORD *)(v12 + 76) & 0x3F) + 747,
    (const unsigned __int64 *)(v12 + 168),
    1u,
    (const unsigned __int64 *)this + (*(_DWORD *)(v12 + 76) & 0x3F) + 683,
    *(_DWORD *)(v12 + 76) & 0x3F);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v18) + 24) = a2;
  v19 = *(_QWORD *)&a2[6].Header.Lock;
  if ( v19 )
  {
    if ( (**(_DWORD **)(v12 + 496) & 0x10000008) != 0 )
      MmUnmapViewOfSection(**(_QWORD **)(*(_QWORD *)&a2->Header.Lock + 8LL), v19);
    *(_QWORD *)&a2[6].Header.Lock = 0LL;
  }
  if ( a2[5].Header.WaitListHead.Flink != &a2[5].Header.WaitListHead )
  {
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
    {
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  *(VIDMM_PROCESS **)(*(_QWORD *)&a2->Header.Lock + 8LL),
                                  *(_DWORD *)(*((_QWORD *)this + 3) + 232LL),
                                  *(_DWORD *)(v12 + 76) & 0x3F);
      CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VirtualAddressAllocator, (struct VIDMM_ALLOC *)a2);
    }
    else
    {
      memset(v85, 0, 0x58uLL);
      v85[0] = -4294967175LL;
      v85[2] = a2;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v85);
    }
  }
  v20 = *(_QWORD *)(v12 + 312);
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v20 + 16) == KeGetCurrentThread() )
  {
    v65 = *(_DWORD *)(v20 + 24);
    if ( v65 <= 0 )
    {
      v71 = WdLogNewEntry5_WdAssertion(v22, v21, v23);
      *(_QWORD *)(v71 + 24) = 659LL;
      WdLogEvent5_WdAssertion(v71);
      v65 = *(_DWORD *)(v20 + 24);
    }
    v26 = v65 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v20, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v64 = *(_DWORD *)(v20 + 28);
        if ( v64 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v25, &EventBlockThread, v23, v64);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v20 + 8));
      ExAcquirePushLockExclusiveEx(v20, 0LL);
    }
    if ( *(_QWORD *)(v20 + 16) )
    {
      v72 = WdLogNewEntry5_WdAssertion(v25, v24, v23);
      *(_QWORD *)(v72 + 24) = 683LL;
      WdLogEvent5_WdAssertion(v72);
    }
    if ( *(_DWORD *)(v20 + 24) )
    {
      v73 = WdLogNewEntry5_WdAssertion(v25, v24, v23);
      *(_QWORD *)(v73 + 24) = 684LL;
      WdLogEvent5_WdAssertion(v73);
    }
    *(_QWORD *)(v20 + 16) = KeGetCurrentThread();
    v26 = 1;
  }
  *(_DWORD *)(v20 + 24) = v26;
  v27 = a2[1].Header.WaitListHead.Blink;
  if ( (struct _LIST_ENTRY **)v27->Blink != &a2[1].Header.WaitListHead.Blink )
    goto LABEL_115;
  v28 = *(struct _LIST_ENTRY ****)&a2[2].Header.Lock;
  if ( *v28 != &a2[1].Header.WaitListHead.Blink )
    goto LABEL_115;
  *v28 = &v27->Flink;
  v27->Blink = (struct _LIST_ENTRY *)v28;
  v29 = *(_QWORD *)&a2->Header.Lock;
  v30 = a3 == 0LL;
  v31 = *(_QWORD *)(*(_QWORD *)&a2->Header.Lock + 24LL);
  v32 = **(_QWORD **)&a2->Header.Lock;
  if ( g_IsInternalReleaseOrDbg )
  {
    v74 = WdLogNewEntry5_WdTrace(v28);
    v28 = (struct _LIST_ENTRY ***)*(unsigned int *)(v29 + 36);
    *(_QWORD *)(v74 + 24) = v28;
  }
  if ( !v30 )
  {
    *(_DWORD *)(v32 + 84) |= 1u;
    ++*(_DWORD *)(v29 + 72);
    ++*(_DWORD *)(v32 + 372);
  }
  if ( (*(_DWORD *)(v29 + 36))-- == 1 )
  {
    v34 = *(_DWORD *)(v29 + 76);
    if ( v34 )
    {
      v63 = (unsigned int)-v34;
      if ( (int)v63 + _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 336), v63) < 0 )
      {
        if ( g_IsInternalRelease )
        {
          v75 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v63, v27);
          v75[3] = 270LL;
          v75[4] = 9LL;
          v75[5] = 0LL;
          v75[6] = 0LL;
          v75[7] = 0LL;
          WdLogEvent5_WdCriticalError(v75);
        }
      }
    }
    if ( (*(_DWORD *)(v32 + 84) & 0x40) != 0 )
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)v29, v30);
    --*(_DWORD *)(v32 + 304);
    v35 = *(struct _LIST_ENTRY ***)(v29 + 56);
    if ( v35[1] != (struct _LIST_ENTRY *)(v29 + 56) )
      goto LABEL_115;
    v28 = *(struct _LIST_ENTRY ****)(v29 + 64);
    if ( *v28 != (struct _LIST_ENTRY **)(v29 + 56) )
      goto LABEL_115;
    *v28 = v35;
    v35[1] = (struct _LIST_ENTRY *)v28;
    if ( *(_DWORD *)(v32 + 120) )
    {
      v28 = *(struct _LIST_ENTRY ****)(*(_QWORD *)(v29 + 8) + 16LL);
      v23 = (__int64)v28[*(unsigned int *)(*((_QWORD *)this + 3) + 232LL)];
      v56 = *(_QWORD *)(v23 + 48) + 296LL * (*(_DWORD *)(v32 + 76) & 0x3F);
      v57 = *(_QWORD *)(v32 + 16);
      if ( (*(_DWORD *)(*(_QWORD *)(v32 + 128) + 80LL) & 0x1001) != 0 )
        *(_QWORD *)(v56 + 240) -= v57;
      else
        *(_QWORD *)(v56 + 232) -= v57;
    }
    v27 = *(struct _LIST_ENTRY **)v29;
    if ( (**(_DWORD **)(*(_QWORD *)v29 + 496LL) & 0x20000000) != 0
      && (struct _LIST_ENTRY *)v29 == v27[6].Flink
      && (HIDWORD(v27[5].Flink) & 4) == 0 )
    {
      v76 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27);
      v76[3] = 270LL;
      v76[4] = 26LL;
      v76[5] = v29;
      v76[6] = 0LL;
      v76[7] = 0LL;
      WdLogEvent5_WdCriticalError(v76);
    }
    if ( v30 )
    {
      *(_BYTE *)(v29 + 32) |= 4u;
      operator delete((void *)v29);
    }
  }
  v36 = *(_QWORD *)(v12 + 312);
  if ( *(struct _KTHREAD **)(v36 + 16) != KeGetCurrentThread() )
  {
    v77 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27);
    v77[3] = 275LL;
    v77[4] = 4LL;
    v77[5] = v36;
    v77[6] = 0LL;
    v77[7] = 0LL;
    WdLogEvent5_WdCriticalError(v77);
  }
  v37 = *(_DWORD *)(v36 + 24);
  if ( v37 <= 0 )
  {
    v78 = WdLogNewEntry5_WdAssertion(v28, v27, v23);
    *(_QWORD *)(v78 + 24) = 703LL;
    WdLogEvent5_WdAssertion(v78);
    v37 = *(_DWORD *)(v36 + 24);
  }
  v38 = v37 - 1;
  *(_DWORD *)(v36 + 24) = v38;
  if ( !v38 )
  {
    *(_QWORD *)(v36 + 16) = 0LL;
    ExReleasePushLockExclusiveEx(v36, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( bTracingEnabled )
  {
    v42 = a2->Header.WaitListHead.Blink;
    if ( v42 )
    {
      v43 = v42[2].Blink;
      if ( v43 )
        v7 = v43[3].Blink;
      v44 = v42[2].Blink;
    }
    else
    {
      v44 = 0LL;
    }
    v45 = v82;
    if ( v82 )
      v45 = v82[1].Blink;
    v46 = *((_QWORD *)this + 3);
    CurrentProcessId = PsGetCurrentProcessId();
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0pppppppppppp_EtwWriteTransfer(
        v86,
        &EventDestroyDeviceAllocation,
        v84,
        CurrentProcessId,
        v45,
        v46,
        a2,
        v12,
        v44,
        v7,
        v87,
        v86,
        v84,
        v83,
        v31);
  }
  *((_QWORD *)this + 962) += *(_QWORD *)(v12 + 16);
  ++*((_DWORD *)this + 1922);
  v48 = a2->Header.WaitListHead.Flink[1].Flink;
  if ( !v48 )
    goto LABEL_67;
  p_Blink = &v48[22].Blink;
  if ( p_Blink && p_Blink[1] == (struct _LIST_ENTRY *)KeGetCurrentThread() )
  {
    v79 = WdLogNewEntry5_WdAssertion(v40, v39, v41);
    *(_QWORD *)(v79 + 24) = 1569LL;
    WdLogEvent5_WdAssertion(v79);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(p_Blink, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v62 = *((_DWORD *)p_Blink + 6);
      if ( v62 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v50, &EventBlockThread, v51, v62);
    }
    ExAcquirePushLockExclusiveEx(p_Blink, 0LL);
  }
  p_Blink[1] = (struct _LIST_ENTRY *)KeGetCurrentThread();
  v52 = &a2[4].Header.WaitListHead.Blink;
  v53 = a2[4].Header.WaitListHead.Blink;
  if ( (struct _LIST_ENTRY **)v53->Blink != &a2[4].Header.WaitListHead.Blink
    || (v54 = *(struct _LIST_ENTRY **)&a2[5].Header.Lock, (struct _LIST_ENTRY **)v54->Flink != v52) )
  {
LABEL_115:
    __fastfail(3u);
  }
  v54->Flink = v53;
  v53->Blink = v54;
  *(_QWORD *)&a2[5].Header.Lock = 0LL;
  *v52 = 0LL;
  p_Blink[1] = 0LL;
  ExReleasePushLockExclusiveEx(p_Blink, 0LL);
  KeLeaveCriticalRegion();
LABEL_67:
  if ( LODWORD(a2[6].Header.WaitListHead.Blink) )
  {
    Blink_low = SLODWORD(a2[6].Header.WaitListHead.Blink);
    v81 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v39);
    v81[3] = 270LL;
    v81[4] = 56LL;
    v81[5] = a2;
    v81[6] = Blink_low;
    v81[7] = 0LL;
    WdLogEvent5_WdCriticalError(v81);
  }
  operator delete(a2);
  return 0LL;
}
