/*
 * XREFs of CcMapAndCopyInToCache @ 0x14033C9C0
 * Callers:
 *     CcCopyWriteEx @ 0x1402D0830 (CcCopyWriteEx.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmUpdateSectionIoAttribution @ 0x140207338 (MmUpdateSectionIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x140207954 (IoDiskIoAttributionDereference.c)
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     FsRtlIsNtstatusExpected @ 0x1402406E0 (FsRtlIsNtstatusExpected.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     PsGetBaseIoPriorityThread @ 0x1402D0980 (PsGetBaseIoPriorityThread.c)
 *     CcFlushCachePriv @ 0x1402D13F0 (CcFlushCachePriv.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402D1E50 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     CcFreeWorkQueueEntry @ 0x140301A0C (CcFreeWorkQueueEntry.c)
 *     CcCanIWriteStreamEx @ 0x14031E220 (CcCanIWriteStreamEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     CcGetVirtualAddress @ 0x14032BC60 (CcGetVirtualAddress.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x14033C250 (MmCopyToCachedPage.c)
 *     MmGetControlAreaPartition @ 0x14033D860 (MmGetControlAreaPartition.c)
 *     CcSetDirtyInMask @ 0x1403411C0 (CcSetDirtyInMask.c)
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CcCopyReadExceptionFilter @ 0x1404EA214 (CcCopyReadExceptionFilter.c)
 *     CcLockSystemCacheBuffer @ 0x1404EA6E8 (CcLockSystemCacheBuffer.c)
 *     RtlWriteNonVolatileMemory @ 0x14058D080 (RtlWriteNonVolatileMemory.c)
 *     HviCopyMemory @ 0x14059480C (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x140594888 (HviCopyMemoryNonTemporal.c)
 */

char __fastcall CcMapAndCopyInToCache(
        __int64 a1,
        char *a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        char a8,
        struct _KTHREAD *a9)
{
  __int64 v9; // r12
  char v10; // r10
  void *v11; // r15
  bool v12; // bl
  unsigned int v13; // r13d
  _SLIST_ENTRY *v14; // rdi
  char v15; // si
  unsigned __int64 *v16; // rbx
  int BaseIoPriorityThread; // eax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rsi
  struct _KTHREAD *v21; // r14
  _QWORD *Object; // rdi
  _KPROCESS *Process; // rbx
  NTSTATUS v24; // ebx
  volatile signed __int32 *v25; // rbx
  __int64 v26; // rsi
  int v27; // r14d
  __int64 VirtualAddress; // rax
  unsigned int v29; // esi
  unsigned int v30; // edx
  ULONG_PTR v31; // r10
  unsigned int v32; // esi
  int v33; // eax
  int v34; // ebx
  unsigned int v35; // ecx
  BOOL v36; // edi
  int v37; // eax
  int v38; // r12d
  unsigned int v39; // r12d
  unsigned int v40; // esi
  NTSTATUS v41; // edi
  unsigned int v42; // r14d
  NTSTATUS v43; // eax
  __int64 v44; // rbx
  struct _KEVENT *v45; // rcx
  NTSTATUS v46; // eax
  struct _MDL *v47; // r14
  __int64 v48; // rcx
  bool v49; // r8
  void *v50; // r10
  int v51; // ecx
  unsigned int v52; // ecx
  signed int v53; // esi
  bool v54; // di
  unsigned int v55; // ecx
  struct _KTHREAD *v56; // rdx
  struct _KTHREAD *v57; // rax
  char v58; // al
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v60; // ecx
  __int64 v61; // r8
  NTSTATUS v62; // edi
  BOOLEAN v63; // al
  NTSTATUS v64; // ecx
  unsigned int v65; // ecx
  struct _KTHREAD *v66; // rdx
  unsigned int v68; // r8d
  unsigned __int64 v69; // rbx
  __int64 v70; // r8
  __int64 v71; // r9
  unsigned __int64 v72; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v74; // rsi
  unsigned __int64 v75; // rbx
  unsigned __int64 v76; // rbx
  __int64 v77; // rdi
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v79; // rax
  struct _KEVENT *v80; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v84; // edx
  bool v85; // zf
  unsigned __int8 v86; // al
  struct _KPRCB *v87; // r10
  _DWORD *v88; // r9
  int v89; // eax
  unsigned __int8 v90; // al
  struct _KPRCB *v91; // r10
  _DWORD *v92; // r9
  int v93; // eax
  unsigned __int8 v94; // al
  struct _KPRCB *v95; // r10
  _DWORD *v96; // r9
  int v97; // eax
  unsigned __int8 v98; // al
  struct _KPRCB *v99; // r9
  _DWORD *v100; // r8
  int v101; // eax
  BOOLEAN v102; // al
  NTSTATUS v103; // ecx
  char v104; // [rsp+68h] [rbp-168h]
  bool v105; // [rsp+69h] [rbp-167h]
  char v106; // [rsp+6Ah] [rbp-166h]
  char v107; // [rsp+6Bh] [rbp-165h]
  bool v108; // [rsp+6Ch] [rbp-164h]
  char v109; // [rsp+6Dh] [rbp-163h]
  unsigned int v110; // [rsp+70h] [rbp-160h]
  char v111; // [rsp+74h] [rbp-15Ch] BYREF
  bool v112; // [rsp+75h] [rbp-15Bh]
  char v113; // [rsp+76h] [rbp-15Ah]
  char v114; // [rsp+77h] [rbp-159h]
  char v115; // [rsp+78h] [rbp-158h]
  char v116; // [rsp+79h] [rbp-157h]
  unsigned int v117; // [rsp+7Ch] [rbp-154h]
  unsigned int v118; // [rsp+84h] [rbp-14Ch]
  NTSTATUS Exception; // [rsp+88h] [rbp-148h]
  unsigned int v120; // [rsp+8Ch] [rbp-144h] BYREF
  __int64 v121; // [rsp+90h] [rbp-140h] BYREF
  int v122; // [rsp+9Ch] [rbp-134h]
  ULONG_PTR v123; // [rsp+A0h] [rbp-130h]
  volatile signed __int32 *v124; // [rsp+A8h] [rbp-128h] BYREF
  unsigned int v125; // [rsp+B0h] [rbp-120h]
  int v126; // [rsp+B4h] [rbp-11Ch]
  unsigned int v127; // [rsp+B8h] [rbp-118h]
  int v128; // [rsp+BCh] [rbp-114h]
  NTSTATUS Status; // [rsp+C0h] [rbp-110h] BYREF
  signed int v130; // [rsp+C4h] [rbp-10Ch]
  NTSTATUS v131[4]; // [rsp+C8h] [rbp-108h] BYREF
  __int64 v132; // [rsp+D8h] [rbp-F8h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-F0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-E8h] BYREF
  int v135; // [rsp+100h] [rbp-D0h]
  BOOL v136; // [rsp+104h] [rbp-CCh]
  int v137; // [rsp+108h] [rbp-C8h]
  unsigned int v138; // [rsp+10Ch] [rbp-C4h]
  NTSTATUS v139; // [rsp+110h] [rbp-C0h]
  unsigned int v140; // [rsp+118h] [rbp-B8h]
  int v141; // [rsp+120h] [rbp-B0h]
  struct _MDL *v142; // [rsp+128h] [rbp-A8h] BYREF
  unsigned __int64 v143; // [rsp+130h] [rbp-A0h]
  struct _KLOCK_QUEUE_HANDLE v144; // [rsp+138h] [rbp-98h] BYREF
  BOOL v145; // [rsp+150h] [rbp-80h]
  NTSTATUS v146; // [rsp+154h] [rbp-7Ch]
  __int64 v147; // [rsp+158h] [rbp-78h]
  __int64 v148; // [rsp+160h] [rbp-70h]
  __int64 v149; // [rsp+168h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE v150; // [rsp+170h] [rbp-60h] BYREF
  unsigned int v154; // [rsp+1F0h] [rbp+20h]

  v154 = a4;
  v127 = a4;
  v9 = a1;
  v10 = a8;
  v11 = 0LL;
  v120 = 0;
  v117 = 0;
  v132 = 0LL;
  *(_OWORD *)v131 = 0LL;
  v12 = (*(_DWORD *)(a6 + 80) & 0x10) != 0;
  v104 = v12;
  v138 = a4;
  v118 = *a3 & 0xFFF;
  v124 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0;
  v110 = 0;
  v114 = 0;
  v107 = 0;
  v14 = 0LL;
  v143 = 0LL;
  v111 = 1;
  v106 = 0;
  v109 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v144, 0, sizeof(v144));
  v108 = (*(_DWORD *)(a1 + 152) & 0x1000) != 0;
  v121 = *(_QWORD *)a3;
  v126 = BYTE4(CurrentThread[1].Queue) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v137 = v126;
  v15 = v12;
  v113 = v12;
  v116 = v12;
  if ( !v12 )
  {
    v113 = 0;
    memset(&v150, 0, sizeof(v150));
    v16 = *(unsigned __int64 **)(a1 + 528);
    if ( *(_QWORD *)(a1 + 168)
      && v16 != *(unsigned __int64 **)(MmGetControlAreaPartition(*(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                           + 0x28))
                                     + 8) )
    {
      KeBugCheckEx(0x34u, 0x1314uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    }
    if ( (*(_DWORD *)(a6 + 80) & 0x1000000) == 0 || CcCanIWriteStreamEx(v16, a6, v154, 0, 0, 0LL) )
    {
      BaseIoPriorityThread = PsGetBaseIoPriorityThread((__int64)KeGetCurrentThread());
      if ( BaseIoPriorityThread < 2 && (struct _KTHREAD *)v18 == KeGetCurrentThread() && *(_DWORD *)(v18 + 1360)
        || BaseIoPriorityThread > 0
        || (*(_DWORD *)(a6 + 80) & 0x8000) != 0 )
      {
        v13 = 0;
LABEL_8:
        v116 = v15;
        v12 = v104;
        v10 = a8;
        goto LABEL_9;
      }
      v13 = 0;
    }
    v15 = 1;
    v113 = 1;
    if ( (*(_DWORD *)(v9 + 152) & 0x400) == 0 )
    {
      KeAcquireInStackQueuedSpinLock(v16 + 16, &v150);
      *(_DWORD *)(v9 + 152) |= 0x400u;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v150);
      OldIrql = v150.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v150.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v84 = ~(unsigned __int16)(-1LL << (v150.OldIrql + 1));
            v85 = (v84 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v84;
            if ( v85 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v13 = 0;
          }
        }
      }
      __writecr8(OldIrql);
    }
    goto LABEL_8;
  }
LABEL_9:
  if ( v15 && !v10 )
    return 0;
  v19 = 6;
  if ( v10 )
    v19 = 4;
  v135 = v19;
  v20 = *(_QWORD *)(v9 + 528);
  v148 = v20;
  if ( *(_QWORD *)(v9 + 168)
    && v20 != *(_QWORD *)(MmGetControlAreaPartition(*(_QWORD *)((*(_QWORD *)(v9 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28))
                        + 8) )
  {
    KeBugCheckEx(0x34u, 0x1314uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  v149 = v20;
  if ( v12 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v20 + 128), &LockHandle);
    if ( (*(_DWORD *)(v9 + 152) & 0x20) != 0 )
    {
      v144.LockQueue.Lock = (unsigned __int64 *volatile)(v20 + 192);
      v144.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock(&v144, v20 + 192, v70, v71);
      v14 = *(_SLIST_ENTRY **)(v9 + 496);
      if ( !v14 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v144);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
        RtlRaiseStatus(-1073741608);
      }
      Next = v14->Next;
      v79 = (_SLIST_ENTRY **)*((_QWORD *)&v14->Next + 1);
      if ( *(&v14->Next->Next + 1) != v14 || *v79 != v14 )
        __fastfail(3u);
      *v79 = Next;
      *((_QWORD *)&Next->Next + 1) = v79;
      *((_QWORD *)&v14->Next + 1) = 0LL;
      v14->Next = 0LL;
      *(_QWORD *)(v9 + 496) = 0LL;
      *(_DWORD *)(v9 + 152) &= ~0x20u;
      v107 = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v144);
    }
    ++*(_DWORD *)(v9 + 516);
    v114 = 1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v72 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v86 = KeGetCurrentIrql();
        if ( v86 <= 0xFu && LockHandle.OldIrql <= 0xFu && v86 >= 2u )
        {
          v87 = KeGetCurrentPrcb();
          v88 = v87->SchedulerAssist;
          v89 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v85 = (v89 & v88[5]) == 0;
          v88[5] &= v89;
          if ( v85 )
            KiRemoveSystemWorkPriorityKick(v87);
          v13 = 0;
        }
      }
    }
    __writecr8(v72);
  }
  if ( v14 )
    CcFreeWorkQueueEntry(v14);
  v21 = a9;
  if ( !a9 )
  {
    v21 = KeGetCurrentThread();
    a9 = v21;
    v13 = 0;
  }
  Object = v21[1].WaitBlock[1].Object;
  v128 = 0;
  if ( !Object )
    goto LABEL_20;
  if ( v21 != KeGetCurrentThread() )
  {
    v76 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Object = v21[1].WaitBlock[1].Object;
    if ( Object )
    {
      ObfReferenceObjectWithTag(v21[1].WaitBlock[1].Object, 0x746C6644u);
      v128 = 1;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v90 = KeGetCurrentIrql();
        if ( v90 <= 0xFu && (unsigned __int8)v76 <= 0xFu && v90 >= 2u )
        {
          v91 = KeGetCurrentPrcb();
          v92 = v91->SchedulerAssist;
          v93 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v76 + 1));
          v85 = (v93 & v92[5]) == 0;
          v92[5] &= v93;
          if ( v85 )
            KiRemoveSystemWorkPriorityKick(v91);
        }
      }
    }
    __writecr8(v76);
  }
  v13 = 0;
  if ( Object )
    Process = (_KPROCESS *)Object[68];
  else
LABEL_20:
    Process = v21->Process;
  if ( Process[2].Affinity.Bitmap[18] )
  {
    v74 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
    v75 = Process[2].Affinity.Bitmap[18];
    if ( v75 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v75 + 32)) <= 1 )
        __fastfail(0xEu);
      v143 = v75;
      v13 = 0;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v94 = KeGetCurrentIrql();
        if ( v94 <= 0xFu && (unsigned __int8)v74 <= 0xFu && v94 >= 2u )
        {
          v95 = KeGetCurrentPrcb();
          v96 = v95->SchedulerAssist;
          v97 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v74 + 1));
          v85 = (v97 & v96[5]) == 0;
          v96[5] &= v97;
          if ( v85 )
            KiRemoveSystemWorkPriorityKick(v95);
          v13 = 0;
        }
      }
    }
    __writecr8(v74);
    if ( v75 )
      v24 = 0;
    else
      v24 = -1073741275;
  }
  else
  {
    v24 = -1073741275;
  }
  if ( v128 )
    ObDereferenceObjectDeferDelete(Object);
  Exception = v24;
  if ( v24 >= 0 )
  {
    MmUpdateSectionIoAttribution(*(_QWORD *)(a6 + 40), v143);
    IoDiskIoAttributionDereference(v143);
  }
  v25 = v124;
  LODWORD(v26) = v117;
  while ( v154 )
  {
    if ( v108 )
    {
      v27 = 0;
      a5 = 0;
    }
    else
    {
      v27 = a5;
    }
    v117 = 0;
    VirtualAddress = CcGetVirtualAddress(v9, v121, &v124, &v120, 0, 0);
    v123 = VirtualAddress;
    v29 = v120;
    if ( v120 > v154 )
    {
      v29 = v154;
      v120 = v154;
    }
    v117 = v29;
    v154 -= v29;
    v30 = v118;
    v31 = VirtualAddress - v118;
    v123 = v31;
    v32 = v118 + v29;
    v125 = v32;
    v120 = v32;
    v33 = 1;
    v122 = 1;
    HIDWORD(v132) = HIDWORD(v121);
    v34 = v121 - v118;
    LODWORD(v132) = v121 - v118;
    v106 = 0;
    v105 = 0;
    v35 = v32;
    while ( 1 )
    {
      v111 = 1;
      v36 = v35 > 0x1000;
      v136 = v36;
      v145 = v36;
      Exception = 0;
      if ( (v33 & v27) != 0 )
      {
        if ( v132 >= *a7 )
        {
          v13 |= 1u;
          v110 = v13;
        }
        v37 = *(_DWORD *)(v9 + 152);
        if ( (v37 & 0x40) != 0 )
        {
          v13 |= 2u;
          v110 = v13;
        }
        if ( (v37 & 0x40000000) != 0 )
        {
          v58 = 0;
          if ( v35 <= 0x1000 )
            v58 = v32;
          if ( (((unsigned __int8)v30 | (unsigned __int8)(v58 - v30)) & 0x3F) != 0 )
          {
            v13 &= 0xFFFFFFF3;
            v110 = v13;
            v105 = 1;
          }
          else
          {
            v13 |= 4u;
            v110 = v13;
            if ( v104 )
            {
              v13 |= 8u;
              v110 = v13;
            }
          }
        }
        v38 = 4096;
        if ( v35 <= 0x1000 )
          v38 = v32;
        v39 = v38 - v30;
        v40 = v13;
        v140 = v13;
        v41 = 0;
        v139 = 0;
        v42 = 1;
        v141 = 1;
        while ( v42 <= 2 )
        {
          v43 = MmCopyToCachedPage(v31, a2, v30, v39, v40);
          v41 = v43;
          v139 = v43;
          if ( (v40 & 8) == 0 || v43 != -1073741670 )
          {
            v30 = v118;
            break;
          }
          v40 &= 0xFFFFFFF3;
          v140 = v40;
          v141 = ++v42;
          v30 = v118;
          v31 = v123;
        }
        v112 = (v40 & 4) == 0;
        Exception = v41;
        if ( v41 < 0 )
        {
          IsNtstatusExpected = FsRtlIsNtstatusExpected(v41);
          v60 = -1073741592;
          if ( IsNtstatusExpected )
            v60 = v41;
          RtlRaiseStatus(v60);
        }
        v106 = 1;
        if ( !v105 )
          v105 = (v40 & 4) == 0;
        v9 = a1;
      }
      else
      {
        if ( v35 > 0x1000 && (v27 & 4) != 0 )
        {
          v57 = CurrentThread;
          BYTE4(CurrentThread[1].Queue) = 1;
          if ( !LODWORD(v57[1].WaitListEntry.Flink) )
            LODWORD(v57[1].WaitListEntry.Flink) = 1;
        }
        v46 = MmCheckCachedPageStates(v31, 1LL, v135, &v111);
        v146 = v46;
        if ( !v111 && !a8 )
        {
          v115 = 0;
          v25 = v124;
          v21 = a9;
          LODWORD(v26) = v117;
          goto LABEL_122;
        }
        v47 = 0LL;
        v142 = 0LL;
        v48 = 0LL;
        v147 = 0LL;
        Status = 0;
        if ( v46 < 0 )
          RtlRaiseStatus(v46);
        v49 = v108;
        if ( v108 )
        {
          v61 = v32;
          if ( v36 )
            v61 = 4096LL;
          v48 = CcLockSystemCacheBuffer(v123, &v142, v61, 1LL, &Status);
          v147 = v48;
          if ( !v48 )
            RtlRaiseStatus(Status);
          v47 = v142;
          v49 = v108;
        }
        if ( v49 )
          v50 = (void *)(v118 + v48);
        else
          v50 = (void *)(v118 + v123);
        if ( v36 )
          v51 = 4096;
        else
          v51 = v32;
        v52 = v51 - v118;
        v53 = 0;
        v130 = 0;
        v54 = (*(_DWORD *)(v9 + 152) & 0x40000000) != 0;
        if ( v49 )
        {
          if ( (*(_DWORD *)(v9 + 152) & 0x40000000) != 0 )
          {
            v53 = HviCopyMemoryNonTemporal(v50, a2, v52);
            v130 = v53;
          }
          else
          {
            HviCopyMemory(v50, a2, v52);
          }
        }
        else if ( (*(_DWORD *)(v9 + 152) & 0x40000000) != 0 )
        {
          v53 = RtlWriteNonVolatileMemory((PVOID)0xFFFFFFFFFFFFFFFFLL, v50, a2, v52, 2u);
          v130 = v53;
        }
        else
        {
          memmove(v50, a2, v52);
        }
        if ( v53 < 0 )
          RtlRaiseStatus(v53);
        v112 = !v54;
        v106 = 1;
        if ( !v105 )
          v105 = !v54;
        if ( v47 )
        {
          MmUnlockPages(v47);
          IoFreeMdl(v47);
          v142 = 0LL;
        }
        v55 = v126;
        v56 = CurrentThread;
        BYTE4(CurrentThread[1].Queue) = v126 & 3;
        LODWORD(v56[1].WaitListEntry.Flink) = v55 >> 2;
        v30 = v118;
      }
      a2 += 4096 - v30;
      v30 = 0;
      v118 = 0;
      if ( !v136 )
        break;
      v31 = v123 + 4096;
      v123 += 4096LL;
      v32 = v125 - 4096;
      v125 = v32;
      v35 = v32;
      v120 = v32;
      v34 += 4096;
      LODWORD(v132) = v34;
      if ( v154 )
      {
        v33 = 2;
      }
      else if ( v32 <= 0x1000 )
      {
        v33 = 4;
      }
      else
      {
        v33 = 2;
      }
      v122 = v33;
      v27 = a5;
    }
    v106 = 0;
    v44 = *((_QWORD *)v124 + 1);
    if ( !(unsigned __int16)_InterlockedDecrement(v124 + 4) )
    {
      v45 = *(struct _KEVENT **)(v44 + 184);
      if ( v45 )
        KeSetEvent(v45, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v44 + 544));
    }
    v25 = 0LL;
    v124 = 0LL;
    v21 = a9;
    v26 = v117;
    CcSetDirtyInMask(v9, &v121, v117, a9);
    if ( (*(_DWORD *)(v9 + 152) & 0x40000000) == 0 && v127 - v154 > 0x1000000
      || (*(_DWORD *)(v9 + 152) & 0x40000000) != 0 && v105 )
    {
      CcFlushCachePriv(*(_QWORD *)(a6 + 40), &v121, v26, 0LL, v104, (__int128 *)v131);
      v62 = v131[0];
      if ( v131[0] < 0 )
      {
        v63 = FsRtlIsNtstatusExpected(v131[0]);
        v64 = -1073741591;
        if ( v63 )
          v64 = v62;
        RtlRaiseStatus(v64);
      }
    }
    if ( v154 >= 0x1000 )
    {
      a5 |= 1u;
    }
    else if ( (a5 & 4) == 0 )
    {
      a5 = 0;
    }
    v121 += v26;
    v13 = v110;
  }
  v115 = 1;
LABEL_122:
  v65 = v126;
  v66 = CurrentThread;
  BYTE4(CurrentThread[1].Queue) = v126 & 3;
  LODWORD(v66[1].WaitListEntry.Flink) = v65 >> 2;
  if ( v25 )
  {
    v77 = *((_QWORD *)v25 + 1);
    if ( !(unsigned __int16)_InterlockedDecrement(v25 + 4) )
    {
      v80 = *(struct _KEVENT **)(v77 + 184);
      if ( v80 )
        KeSetEvent(v80, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v77 + 544));
    }
    LODWORD(v26) = v117;
  }
  if ( v106 && (_DWORD)v26 )
    CcSetDirtyInMask(v9, &v121, (unsigned int)v26, v21);
  if ( CcRemoteFileDPInlineFlushThreshold != -1
    && (*(_DWORD *)(a6 + 80) & 0x1000000) != 0
    && !v104
    && *(_DWORD *)(v9 + 112) >= (unsigned int)CcRemoteFileDPInlineFlushThreshold )
  {
    v107 = 1;
    v109 = 1;
  }
  if ( v113 || v109 )
  {
    v131[0] = 0;
    if ( !v104 || (*(_DWORD *)(v9 + 152) & 0x40000000) == 0 )
    {
      v68 = 0;
      if ( !v107 )
      {
        v68 = v127;
        v11 = a3;
      }
      CcFlushCachePriv(*(_QWORD *)(a6 + 40), v11, v68, 0LL, v104, (__int128 *)v131);
      LODWORD(v11) = v131[0];
    }
    if ( v114 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v148 + 128), &LockHandle);
      --*(_DWORD *)(v9 + 516);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v69 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v98 = KeGetCurrentIrql();
          if ( v98 <= 0xFu && LockHandle.OldIrql <= 0xFu && v98 >= 2u )
          {
            v99 = KeGetCurrentPrcb();
            v100 = v99->SchedulerAssist;
            v101 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v85 = (v101 & v100[5]) == 0;
            v100[5] &= v101;
            if ( v85 )
              KiRemoveSystemWorkPriorityKick(v99);
          }
        }
      }
      __writecr8(v69);
      LODWORD(v11) = v131[0];
    }
    if ( (int)v11 < 0 )
    {
      v102 = FsRtlIsNtstatusExpected((NTSTATUS)v11);
      v103 = -1073741591;
      if ( v102 )
        v103 = (int)v11;
      RtlRaiseStatus(v103);
    }
  }
  return v115;
}
