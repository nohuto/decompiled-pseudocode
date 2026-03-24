/*
 * XREFs of ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006A030
 * Callers:
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C0060FB4 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0069520 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0069ED0 (-CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDI.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C0079510 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0088250 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0088D2C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C008CA80 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C008CCF8 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C008D9F4 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C008DF9C (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001618 (--3@YAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0001B5C (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z @ 0x1C0017914 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z.c)
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00179EC (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 *     Feature_Servicing_VARangeRaceCondition__private_IsEnabledDeviceUsage @ 0x1C0017A94 (Feature_Servicing_VARangeRaceCondition__private_IsEnabledDeviceUsage.c)
 *     McTemplateK0pppppppppppp_EtwWriteTransfer @ 0x1C0024030 (McTemplateK0pppppppppppp_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IsVidMmWorkerThread@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C0066A3C (-IsVidMmWorkerThread@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0066B28 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0068080 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1C006B580 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006F95C (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0089CA8 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C008B644 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CloseOneAllocation(
        VIDMM_GLOBAL *this,
        struct _KEVENT *a2,
        struct _VIDMM_LOCAL_ALLOC **a3,
        char a4,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a5,
        struct _KEVENT **a6)
{
  char v6; // si
  struct _LIST_ENTRY *Flink; // r8
  __int64 v11; // r13
  __int64 v13; // rax
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v15; // rcx
  __int64 v16; // rax
  int v17; // ecx
  struct _LIST_ENTRY *v18; // rax
  struct _LIST_ENTRY *v19; // rdx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 result; // rax
  int v26; // r15d
  __int64 v27; // rcx
  struct CVirtualAddressAllocator *v28; // rax
  struct _KTHREAD **v29; // rbx
  VIDMM_GLOBAL *v30; // rcx
  struct _KTHREAD **VirtualAddressAllocator; // rcx
  VIDMM_GLOBAL *v32; // rcx
  VIDMM_GLOBAL *v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // r9d
  __int64 v43; // rax
  __int64 v44; // rax
  struct _LIST_ENTRY *v45; // rdx
  struct _LIST_ENTRY ***v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // rsi
  __int64 v49; // rax
  int v51; // ecx
  __int64 v52; // rcx
  _QWORD *v53; // rax
  struct _LIST_ENTRY **v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rbx
  _QWORD *v59; // rax
  int v60; // eax
  __int64 v61; // rax
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  struct _LIST_ENTRY *v66; // rax
  struct _LIST_ENTRY *v67; // rcx
  struct _LIST_ENTRY *v68; // r15
  struct _LIST_ENTRY *v69; // rsi
  __int64 v70; // rbx
  __int64 v71; // r12
  HANDLE CurrentProcessId; // rax
  struct _LIST_ENTRY *v73; // rbx
  struct _LIST_ENTRY **p_Blink; // rbx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // r8
  int v78; // r9d
  struct _LIST_ENTRY **v79; // rax
  struct _LIST_ENTRY *v80; // rdx
  struct _LIST_ENTRY *v81; // rcx
  __int64 Flink_low; // rbx
  _QWORD *v83; // rax
  __int64 v84; // [rsp+80h] [rbp-80h]
  unsigned int v85[2]; // [rsp+88h] [rbp-78h]
  __int64 v86; // [rsp+90h] [rbp-70h]
  __int64 v87; // [rsp+A0h] [rbp-60h]
  _OWORD v88[5]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v89; // [rsp+100h] [rbp+0h]
  _OWORD v90[5]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v91; // [rsp+160h] [rbp+60h]
  _OWORD v92[5]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v93; // [rsp+1C0h] [rbp+C0h]
  _BYTE v94[80]; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v95; // [rsp+238h] [rbp+138h]
  unsigned int v96; // [rsp+240h] [rbp+140h]

  v6 = 0;
  v96 = 0;
  Flink = a2->Header.WaitListHead.Flink;
  *(_QWORD *)v85 = Flink;
  v11 = **(_QWORD **)&a2->Header.Lock;
  v95 = 0;
  v86 = 0LL;
  v84 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v13 = WdLogNewEntry5_WdTrace(this);
    Flink = *(struct _LIST_ENTRY **)v85;
    *(_QWORD *)(v13 + 24) = a2;
  }
  if ( a3 )
    *a3 = *(struct _VIDMM_LOCAL_ALLOC **)&a2->Header.Lock;
  if ( bTracingEnabled )
  {
    Blink = a2->Header.WaitListHead.Blink;
    if ( Blink )
    {
      v96 = (unsigned int)Blink[1].Flink;
      v15 = Blink[2].Blink;
      if ( v15 )
      {
        v95 = (unsigned int)v15[1].Flink;
        v86 = (__int64)v15[3].Flink;
      }
    }
    if ( (**(_DWORD **)(v11 + 512) & 8) != 0 )
      v16 = *(_QWORD *)(v11 + 376);
    else
      v16 = *(_QWORD *)(*(_QWORD *)&a2->Header.Lock + 16LL);
    v84 = v16;
  }
  v17 = (int)a2[1].Header.WaitListHead.Flink;
  if ( (v17 & 1) == 0 )
  {
    v18 = a2->Header.WaitListHead.Flink;
    if ( v18 && v18[1].Blink || (*(_DWORD *)(v11 + 84) & 4) != 0 )
    {
      if ( (*(_DWORD *)(v11 + 84) & 4) == 0 )
      {
        VIDMM_GLOBAL::TerminateOneAllocation(this, (struct VIDMM_ALLOC *)a2, (unsigned int)Flink, a5, 0LL);
        goto LABEL_28;
      }
      a2[1].Header.SignalState |= 4u;
      LODWORD(a2[1].Header.WaitListHead.Flink) = v17 | 1;
    }
    else
    {
      a2[1].Header.SignalState |= 4u;
      if ( (a2[1].Header.SignalState & 3) == 1 )
      {
        v19 = a2[2].Header.WaitListHead.Flink;
        p_WaitListHead = &a2[2].Header.WaitListHead;
        if ( v19->Blink != &a2[2].Header.WaitListHead )
          goto LABEL_131;
        v21 = a2[2].Header.WaitListHead.Blink;
        if ( v21->Flink != p_WaitListHead )
          goto LABEL_131;
        v21->Flink = v19;
        v19->Blink = v21;
        a2[1].Header.SignalState &= 0xFFFFFFFC;
        a2[2].Header.WaitListHead.Blink = 0LL;
        p_WaitListHead->Flink = 0LL;
      }
      if ( (*(_DWORD *)(v11 + 76) & 0x100) != 0 && (struct _KEVENT *)Flink[15].Blink == a2 )
        Flink[15].Blink = 0LL;
    }
    KeSetEvent(a2 + 3, 0, 0);
  }
LABEL_28:
  if ( a4 && ((__int64)a2[1].Header.WaitListHead.Flink & 1) != 0 && !KeReadStateEvent(a2 + 3) )
  {
    v24 = WdLogNewEntry5_WdEvent(v23, v22);
    *(_QWORD *)(v24 + 24) = a2;
    *(_QWORD *)(v24 + 32) = -1071775486LL;
    WdLogEvent5_WdEvent(v24);
    result = 3223191810LL;
    *a6 = a2 + 3;
    return result;
  }
  KeWaitForSingleObject(&a2[3], Executive, 0, 0, 0LL);
  v26 = 1;
  VIDMM_GLOBAL::xWaitForAllPagingEngines(
    this,
    (struct _VIDSCH_SYNC_OBJECT **)this + (*(_DWORD *)(v11 + 76) & 0x3F) + 747,
    (const unsigned __int64 *)(v11 + 168),
    1u,
    (const unsigned __int64 *)this + (*(_DWORD *)(v11 + 76) & 0x3F) + 683,
    *(_DWORD *)(v11 + 76) & 0x3F);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v27) + 24) = a2;
  if ( a2[6].Header.WaitListHead.Blink )
  {
    if ( (**(_DWORD **)(v11 + 512) & 0x10000008) != 0 )
      MmUnmapViewOfSection(**(_QWORD **)(*(_QWORD *)&a2->Header.Lock + 8LL));
    a2[6].Header.WaitListHead.Blink = 0LL;
  }
  if ( !(unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage() )
  {
    if ( a2[5].Header.WaitListHead.Flink == &a2[5].Header.WaitListHead )
      goto LABEL_57;
    if ( !VIDMM_GLOBAL::IsVidMmWorkerThread(this) )
    {
      v92[0] = 0xFFFFFFFF00000079uLL;
      v92[1] = (unsigned __int64)a2;
      memset(&v92[2], 0, 48);
      v93 = 0LL;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(v33, (struct _VIDMM_SYSTEM_COMMAND *)v92);
      goto LABEL_57;
    }
LABEL_55:
    VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                    *(VIDMM_PROCESS **)(*(_QWORD *)&a2->Header.Lock + 8LL),
                                                    *(_DWORD *)(*((_QWORD *)this + 3) + 232LL),
                                                    *(_DWORD *)(v11 + 76) & 0x3F);
    goto LABEL_56;
  }
  if ( !(unsigned int)Feature_Servicing_VARangeRaceCondition__private_IsEnabledDeviceUsage() )
  {
    if ( a2[5].Header.WaitListHead.Flink == &a2[5].Header.WaitListHead
      && *(struct _KEVENT **)&a2[6].Header.Lock == &a2[6] )
    {
      goto LABEL_57;
    }
    if ( !VIDMM_GLOBAL::IsVidMmWorkerThread(this) )
    {
      v90[0] = 0xFFFFFFFF00000079uLL;
      v90[1] = (unsigned __int64)a2;
      memset(&v90[2], 0, 48);
      v91 = 0LL;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(v32, (struct _VIDMM_SYSTEM_COMMAND *)v90);
      goto LABEL_57;
    }
    goto LABEL_55;
  }
  v28 = VIDMM_PROCESS::GetVirtualAddressAllocator(
          *(VIDMM_PROCESS **)(*(_QWORD *)&a2->Header.Lock + 8LL),
          *(_DWORD *)(*((_QWORD *)this + 3) + 232LL),
          *(_DWORD *)(**(_QWORD **)&a2->Header.Lock + 76LL) & 0x3F);
  v29 = (struct _KTHREAD **)v28;
  if ( !v28 )
    goto LABEL_57;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v94,
    (struct CVirtualAddressAllocator *)((char *)v28 + 56),
    *((_QWORD *)v28 + 8) != (_QWORD)KeGetCurrentThread());
  if ( a2[5].Header.WaitListHead.Flink != &a2[5].Header.WaitListHead || *(struct _KEVENT **)&a2[6].Header.Lock != &a2[6] )
    v6 = 1;
  DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v94);
  if ( !v6 )
    goto LABEL_57;
  if ( VIDMM_GLOBAL::IsVidMmWorkerThread(this) )
  {
    VirtualAddressAllocator = v29;
LABEL_56:
    CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VirtualAddressAllocator, (struct VIDMM_ALLOC *)a2);
    goto LABEL_57;
  }
  v88[0] = 0xFFFFFFFF00000079uLL;
  v88[1] = (unsigned __int64)a2;
  memset(&v88[2], 0, 48);
  v89 = 0LL;
  VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(v30, (struct _VIDMM_SYSTEM_COMMAND *)v88);
LABEL_57:
  v34 = *(_QWORD *)(v11 + 312);
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v34 + 16) == KeGetCurrentThread() )
  {
    v38 = *(_DWORD *)(v34 + 24);
    if ( v38 <= 0 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v36, v35, v37);
      *(_QWORD *)(v39 + 24) = 661LL;
      WdLogEvent5_WdAssertion(v39);
      v38 = *(_DWORD *)(v34 + 24);
    }
    v26 = v38 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v34, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v42 = *(_DWORD *)(v34 + 28);
        if ( v42 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v41, (const EVENT_DESCRIPTOR *)"g", v37, v42);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v34 + 8));
      ExAcquirePushLockExclusiveEx(v34, 0LL);
    }
    if ( *(_QWORD *)(v34 + 16) )
    {
      v43 = WdLogNewEntry5_WdAssertion(v41, v40, v37);
      *(_QWORD *)(v43 + 24) = 685LL;
      WdLogEvent5_WdAssertion(v43);
    }
    if ( *(_DWORD *)(v34 + 24) )
    {
      v44 = WdLogNewEntry5_WdAssertion(v41, v40, v37);
      *(_QWORD *)(v44 + 24) = 686LL;
      WdLogEvent5_WdAssertion(v44);
    }
    *(_QWORD *)(v34 + 16) = KeGetCurrentThread();
  }
  *(_DWORD *)(v34 + 24) = v26;
  v45 = a2[1].Header.WaitListHead.Blink;
  if ( (struct _LIST_ENTRY **)v45->Blink != &a2[1].Header.WaitListHead.Blink )
    goto LABEL_131;
  v46 = *(struct _LIST_ENTRY ****)&a2[2].Header.Lock;
  if ( *v46 != &a2[1].Header.WaitListHead.Blink )
    goto LABEL_131;
  *v46 = &v45->Flink;
  v45->Blink = (struct _LIST_ENTRY *)v46;
  v47 = *(_QWORD *)&a2->Header.Lock;
  v48 = **(_QWORD **)&a2->Header.Lock;
  v87 = *(_QWORD *)(*(_QWORD *)&a2->Header.Lock + 24LL);
  if ( g_IsInternalReleaseOrDbg )
  {
    v49 = WdLogNewEntry5_WdTrace(v46);
    v46 = (struct _LIST_ENTRY ***)*(unsigned int *)(v47 + 36);
    *(_QWORD *)(v49 + 24) = v46;
  }
  if ( a3 )
  {
    *(_DWORD *)(v48 + 84) |= 1u;
    ++*(_DWORD *)(v47 + 72);
    ++*(_DWORD *)(v48 + 388);
  }
  if ( (*(_DWORD *)(v47 + 36))-- == 1 )
  {
    v51 = *(_DWORD *)(v47 + 76);
    if ( v51 )
    {
      v52 = (unsigned int)-v51;
      if ( (int)v52 + _InterlockedExchangeAdd((volatile signed __int32 *)(v48 + 336), v52) < 0 )
      {
        if ( g_IsInternalRelease )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v52, v45);
          v53[3] = 270LL;
          v53[4] = 9LL;
          v53[5] = 0LL;
          v53[6] = 0LL;
          v53[7] = 0LL;
          WdLogEvent5_WdCriticalError(v53);
        }
      }
    }
    if ( (*(_DWORD *)(v48 + 84) & 0x40) != 0 )
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)v47, a3 == 0LL);
    --*(_DWORD *)(v48 + 304);
    v54 = *(struct _LIST_ENTRY ***)(v47 + 56);
    if ( v54[1] != (struct _LIST_ENTRY *)(v47 + 56) )
      goto LABEL_131;
    v46 = *(struct _LIST_ENTRY ****)(v47 + 64);
    if ( *v46 != (struct _LIST_ENTRY **)(v47 + 56) )
      goto LABEL_131;
    *v46 = v54;
    v54[1] = (struct _LIST_ENTRY *)v46;
    if ( *(_DWORD *)(v48 + 120) )
    {
      v46 = *(struct _LIST_ENTRY ****)(*(_QWORD *)(v47 + 8) + 16LL);
      v37 = (__int64)v46[*(unsigned int *)(*((_QWORD *)this + 3) + 232LL)];
      v55 = *(_QWORD *)(v37 + 48) + 296LL * (*(_DWORD *)(v48 + 76) & 0x3F);
      v56 = *(_QWORD *)(v48 + 16);
      if ( (*(_DWORD *)(*(_QWORD *)(v48 + 128) + 80LL) & 0x1001) != 0 )
        *(_QWORD *)(v55 + 240) -= v56;
      else
        *(_QWORD *)(v55 + 232) -= v56;
    }
    v45 = *(struct _LIST_ENTRY **)v47;
    if ( (**(_DWORD **)(*(_QWORD *)v47 + 512LL) & 0x20000000) != 0
      && (struct _LIST_ENTRY *)v47 == v45[6].Flink
      && (HIDWORD(v45[5].Flink) & 4) == 0 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v46, v45);
      v57[3] = 270LL;
      v57[4] = 26LL;
      v57[5] = v47;
      v57[6] = 0LL;
      v57[7] = 0LL;
      WdLogEvent5_WdCriticalError(v57);
    }
    if ( !a3 )
    {
      *(_BYTE *)(v47 + 32) |= 4u;
      operator delete((void *)v47);
    }
  }
  v58 = *(_QWORD *)(v11 + 312);
  if ( *(struct _KTHREAD **)(v58 + 16) != KeGetCurrentThread() )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v46, v45);
    v59[3] = 275LL;
    v59[4] = 4LL;
    v59[5] = v58;
    v59[6] = 0LL;
    v59[7] = 0LL;
    WdLogEvent5_WdCriticalError(v59);
  }
  v60 = *(_DWORD *)(v58 + 24);
  if ( v60 <= 0 )
  {
    v61 = WdLogNewEntry5_WdAssertion(v46, v45, v37);
    *(_QWORD *)(v61 + 24) = 705LL;
    WdLogEvent5_WdAssertion(v61);
    v60 = *(_DWORD *)(v58 + 24);
  }
  v62 = v60 - 1;
  *(_DWORD *)(v58 + 24) = v62;
  if ( !v62 )
  {
    *(_QWORD *)(v58 + 16) = 0LL;
    ExReleasePushLockExclusiveEx(v58, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( bTracingEnabled )
  {
    v66 = a2->Header.WaitListHead.Blink;
    if ( v66 && (v67 = v66[2].Blink) != 0LL )
      v68 = v67[3].Blink;
    else
      v68 = 0LL;
    v69 = 0LL;
    if ( v66 )
      v69 = v66[2].Blink;
    if ( *(_QWORD *)v85 )
      v70 = *(_QWORD *)(*(_QWORD *)v85 + 24LL);
    else
      v70 = 0LL;
    v71 = *((_QWORD *)this + 3);
    CurrentProcessId = PsGetCurrentProcessId();
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0pppppppppppp_EtwWriteTransfer(
        v95,
        &EventDestroyDeviceAllocation,
        v86,
        CurrentProcessId,
        v70,
        v71,
        a2,
        v11,
        v69,
        v68,
        v96,
        v95,
        v86,
        v84,
        v87);
  }
  *((_QWORD *)this + 962) += *(_QWORD *)(v11 + 16);
  ++*((_DWORD *)this + 1922);
  v73 = a2->Header.WaitListHead.Flink[1].Flink;
  if ( !v73 )
    goto LABEL_128;
  p_Blink = &v73[22].Blink;
  if ( p_Blink && p_Blink[1] == (struct _LIST_ENTRY *)KeGetCurrentThread() )
  {
    v75 = WdLogNewEntry5_WdAssertion(v64, v63, v65);
    *(_QWORD *)(v75 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v75);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(p_Blink, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v78 = *((_DWORD *)p_Blink + 6);
      if ( v78 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v76, (const EVENT_DESCRIPTOR *)"g", v77, v78);
    }
    ExAcquirePushLockExclusiveEx(p_Blink, 0LL);
  }
  p_Blink[1] = (struct _LIST_ENTRY *)KeGetCurrentThread();
  v79 = &a2[4].Header.WaitListHead.Blink;
  v80 = a2[4].Header.WaitListHead.Blink;
  if ( (struct _LIST_ENTRY **)v80->Blink != &a2[4].Header.WaitListHead.Blink
    || (v81 = *(struct _LIST_ENTRY **)&a2[5].Header.Lock, (struct _LIST_ENTRY **)v81->Flink != v79) )
  {
LABEL_131:
    __fastfail(3u);
  }
  v81->Flink = v80;
  v80->Blink = v81;
  *(_QWORD *)&a2[5].Header.Lock = 0LL;
  *v79 = 0LL;
  p_Blink[1] = 0LL;
  ExReleasePushLockExclusiveEx(p_Blink, 0LL);
  KeLeaveCriticalRegion();
LABEL_128:
  if ( LODWORD(a2[7].Header.WaitListHead.Flink) )
  {
    Flink_low = SLODWORD(a2[7].Header.WaitListHead.Flink);
    v83 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v64, v63);
    v83[3] = 270LL;
    v83[4] = 56LL;
    v83[5] = a2;
    v83[6] = Flink_low;
    v83[7] = 0LL;
    WdLogEvent5_WdCriticalError(v83);
  }
  operator delete(a2);
  return 0LL;
}
