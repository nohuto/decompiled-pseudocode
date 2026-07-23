/*
 * XREFs of CcMapAndCopyInToCache @ 0x1402B4EC0
 * Callers:
 *     CcCopyWriteEx @ 0x14020AAE0 (CcCopyWriteEx.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     IoFreeMdl @ 0x14020A410 (IoFreeMdl.c)
 *     PsGetBaseIoPriorityThread @ 0x14020AC30 (PsGetBaseIoPriorityThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x140219220 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402950F0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcFlushCachePriv @ 0x140296300 (CcFlushCachePriv.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     CcCanIWriteStreamEx @ 0x14029AAB0 (CcCanIWriteStreamEx.c)
 *     CcFreeWorkQueueEntry @ 0x14029EB6C (CcFreeWorkQueueEntry.c)
 *     CcGetVirtualAddress @ 0x1402A4660 (CcGetVirtualAddress.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x1402B4910 (MmCopyToCachedPage.c)
 *     MmGetControlAreaPartition @ 0x1402B5D60 (MmGetControlAreaPartition.c)
 *     CcSetDirtyInMask @ 0x1402B96C0 (CcSetDirtyInMask.c)
 *     ExAcquireSpinLockShared @ 0x1402D2DC0 (ExAcquireSpinLockShared.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     IoDiskIoAttributionDereference @ 0x1402EEE34 (IoDiskIoAttributionDereference.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     FsRtlIsNtstatusExpected @ 0x140320A00 (FsRtlIsNtstatusExpected.c)
 *     MmUpdateSectionIoAttribution @ 0x140355A70 (MmUpdateSectionIoAttribution.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     CcCopyReadExceptionFilter @ 0x1404E8444 (CcCopyReadExceptionFilter.c)
 *     CcLockSystemCacheBuffer @ 0x1404E8918 (CcLockSystemCacheBuffer.c)
 *     RtlWriteNonVolatileMemory @ 0x14058B440 (RtlWriteNonVolatileMemory.c)
 *     HviCopyMemory @ 0x140592B94 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x140592C10 (HviCopyMemoryNonTemporal.c)
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
  unsigned __int64 v70; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v72; // rsi
  unsigned __int64 v73; // rbx
  unsigned __int64 v74; // rbx
  __int64 v75; // rdi
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v77; // rax
  struct _KEVENT *v78; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v82; // edx
  bool v83; // zf
  unsigned __int8 v84; // al
  struct _KPRCB *v85; // r10
  _DWORD *v86; // r9
  int v87; // eax
  unsigned __int8 v88; // al
  struct _KPRCB *v89; // r10
  _DWORD *v90; // r9
  int v91; // eax
  unsigned __int8 v92; // al
  struct _KPRCB *v93; // r10
  _DWORD *v94; // r9
  int v95; // eax
  unsigned __int8 v96; // al
  struct _KPRCB *v97; // r9
  _DWORD *v98; // r8
  int v99; // eax
  BOOLEAN v100; // al
  NTSTATUS v101; // ecx
  char v102; // [rsp+68h] [rbp-168h]
  bool v103; // [rsp+69h] [rbp-167h]
  char v104; // [rsp+6Ah] [rbp-166h]
  char v105; // [rsp+6Bh] [rbp-165h]
  bool v106; // [rsp+6Ch] [rbp-164h]
  char v107; // [rsp+6Dh] [rbp-163h]
  unsigned int v108; // [rsp+70h] [rbp-160h]
  char v109; // [rsp+74h] [rbp-15Ch] BYREF
  bool v110; // [rsp+75h] [rbp-15Bh]
  char v111; // [rsp+76h] [rbp-15Ah]
  char v112; // [rsp+77h] [rbp-159h]
  char v113; // [rsp+78h] [rbp-158h]
  char v114; // [rsp+79h] [rbp-157h]
  unsigned int v115; // [rsp+7Ch] [rbp-154h]
  unsigned int v116; // [rsp+84h] [rbp-14Ch]
  NTSTATUS Exception; // [rsp+88h] [rbp-148h]
  unsigned int v118; // [rsp+8Ch] [rbp-144h] BYREF
  __int64 v119; // [rsp+90h] [rbp-140h] BYREF
  int v120; // [rsp+9Ch] [rbp-134h]
  ULONG_PTR v121; // [rsp+A0h] [rbp-130h]
  volatile signed __int32 *v122; // [rsp+A8h] [rbp-128h] BYREF
  unsigned int v123; // [rsp+B0h] [rbp-120h]
  int v124; // [rsp+B4h] [rbp-11Ch]
  unsigned int v125; // [rsp+B8h] [rbp-118h]
  int v126; // [rsp+BCh] [rbp-114h]
  NTSTATUS Status; // [rsp+C0h] [rbp-110h] BYREF
  signed int v128; // [rsp+C4h] [rbp-10Ch]
  NTSTATUS v129[4]; // [rsp+C8h] [rbp-108h] BYREF
  __int64 v130; // [rsp+D8h] [rbp-F8h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-F0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-E8h] BYREF
  int v133; // [rsp+100h] [rbp-D0h]
  BOOL v134; // [rsp+104h] [rbp-CCh]
  int v135; // [rsp+108h] [rbp-C8h]
  unsigned int v136; // [rsp+10Ch] [rbp-C4h]
  NTSTATUS v137; // [rsp+110h] [rbp-C0h]
  unsigned int v138; // [rsp+118h] [rbp-B8h]
  int v139; // [rsp+120h] [rbp-B0h]
  struct _MDL *v140; // [rsp+128h] [rbp-A8h] BYREF
  unsigned __int64 v141; // [rsp+130h] [rbp-A0h]
  struct _KLOCK_QUEUE_HANDLE v142; // [rsp+138h] [rbp-98h] BYREF
  BOOL v143; // [rsp+150h] [rbp-80h]
  NTSTATUS v144; // [rsp+154h] [rbp-7Ch]
  __int64 v145; // [rsp+158h] [rbp-78h]
  __int64 v146; // [rsp+160h] [rbp-70h]
  __int64 v147; // [rsp+168h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE v148; // [rsp+170h] [rbp-60h] BYREF
  unsigned int v152; // [rsp+1F0h] [rbp+20h]

  v152 = a4;
  v125 = a4;
  v9 = a1;
  v10 = a8;
  v11 = 0LL;
  v118 = 0;
  v115 = 0;
  v130 = 0LL;
  *(_OWORD *)v129 = 0LL;
  v12 = (*(_DWORD *)(a6 + 80) & 0x10) != 0;
  v102 = v12;
  v136 = a4;
  v116 = *a3 & 0xFFF;
  v122 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0;
  v108 = 0;
  v112 = 0;
  v105 = 0;
  v14 = 0LL;
  v141 = 0LL;
  v109 = 1;
  v104 = 0;
  v107 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v142, 0, sizeof(v142));
  v106 = (*(_DWORD *)(a1 + 152) & 0x1000) != 0;
  v119 = *(_QWORD *)a3;
  v124 = BYTE4(CurrentThread[1].Queue) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v135 = v124;
  v15 = v12;
  v111 = v12;
  v114 = v12;
  if ( !v12 )
  {
    v111 = 0;
    memset(&v148, 0, sizeof(v148));
    v16 = *(unsigned __int64 **)(a1 + 528);
    if ( *(_QWORD *)(a1 + 168)
      && v16 != *(unsigned __int64 **)(MmGetControlAreaPartition(*(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                           + 0x28))
                                     + 8) )
    {
      KeBugCheckEx(0x34u, 0x1313uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    }
    if ( (*(_DWORD *)(a6 + 80) & 0x1000000) == 0 || CcCanIWriteStreamEx(v16, a6, v152, 0, 0, 0LL) )
    {
      BaseIoPriorityThread = PsGetBaseIoPriorityThread((__int64)KeGetCurrentThread());
      if ( BaseIoPriorityThread < 2 && (struct _KTHREAD *)v18 == KeGetCurrentThread() && *(_DWORD *)(v18 + 1360)
        || BaseIoPriorityThread > 0
        || (*(_DWORD *)(a6 + 80) & 0x8000) != 0 )
      {
        v13 = 0;
LABEL_8:
        v114 = v15;
        v12 = v102;
        v10 = a8;
        goto LABEL_9;
      }
      v13 = 0;
    }
    v15 = 1;
    v111 = 1;
    if ( (*(_DWORD *)(v9 + 152) & 0x400) == 0 )
    {
      KeAcquireInStackQueuedSpinLock(v16 + 16, &v148);
      *(_DWORD *)(v9 + 152) |= 0x400u;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v148);
      OldIrql = v148.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v148.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v82 = ~(unsigned __int16)(-1LL << (v148.OldIrql + 1));
            v83 = (v82 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v82;
            if ( v83 )
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
  v133 = v19;
  v20 = *(_QWORD *)(v9 + 528);
  v146 = v20;
  if ( *(_QWORD *)(v9 + 168)
    && v20 != *(_QWORD *)(MmGetControlAreaPartition(*(_QWORD *)((*(_QWORD *)(v9 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28))
                        + 8) )
  {
    KeBugCheckEx(0x34u, 0x1313uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  v147 = v20;
  if ( v12 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v20 + 128), &LockHandle);
    if ( (*(_DWORD *)(v9 + 152) & 0x20) != 0 )
    {
      v142.LockQueue.Lock = (unsigned __int64 *volatile)(v20 + 192);
      v142.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&v142, (volatile __int64 *)(v20 + 192));
      v14 = *(_SLIST_ENTRY **)(v9 + 496);
      if ( !v14 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v142);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
        RtlRaiseStatus(-1073741608);
      }
      Next = v14->Next;
      v77 = (_SLIST_ENTRY **)*((_QWORD *)&v14->Next + 1);
      if ( *(&v14->Next->Next + 1) != v14 || *v77 != v14 )
        __fastfail(3u);
      *v77 = Next;
      *((_QWORD *)&Next->Next + 1) = v77;
      *((_QWORD *)&v14->Next + 1) = 0LL;
      v14->Next = 0LL;
      *(_QWORD *)(v9 + 496) = 0LL;
      *(_DWORD *)(v9 + 152) &= ~0x20u;
      v105 = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v142);
    }
    ++*(_DWORD *)(v9 + 516);
    v112 = 1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v70 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v84 = KeGetCurrentIrql();
        if ( v84 <= 0xFu && LockHandle.OldIrql <= 0xFu && v84 >= 2u )
        {
          v85 = KeGetCurrentPrcb();
          v86 = v85->SchedulerAssist;
          v87 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v83 = (v87 & v86[5]) == 0;
          v86[5] &= v87;
          if ( v83 )
            KiRemoveSystemWorkPriorityKick(v85);
          v13 = 0;
        }
      }
    }
    __writecr8(v70);
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
  v126 = 0;
  if ( !Object )
    goto LABEL_20;
  if ( v21 != KeGetCurrentThread() )
  {
    v74 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Object = v21[1].WaitBlock[1].Object;
    if ( Object )
    {
      ObfReferenceObjectWithTag(v21[1].WaitBlock[1].Object, 0x746C6644u);
      v126 = 1;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v88 = KeGetCurrentIrql();
        if ( v88 <= 0xFu && (unsigned __int8)v74 <= 0xFu && v88 >= 2u )
        {
          v89 = KeGetCurrentPrcb();
          v90 = v89->SchedulerAssist;
          v91 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v74 + 1));
          v83 = (v91 & v90[5]) == 0;
          v90[5] &= v91;
          if ( v83 )
            KiRemoveSystemWorkPriorityKick(v89);
        }
      }
    }
    __writecr8(v74);
  }
  v13 = 0;
  if ( Object )
    Process = (_KPROCESS *)Object[68];
  else
LABEL_20:
    Process = v21->Process;
  if ( Process[2].Affinity.Bitmap[18] )
  {
    v72 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
    v73 = Process[2].Affinity.Bitmap[18];
    if ( v73 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v73 + 32)) <= 1 )
        __fastfail(0xEu);
      v141 = v73;
      v13 = 0;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v92 = KeGetCurrentIrql();
        if ( v92 <= 0xFu && (unsigned __int8)v72 <= 0xFu && v92 >= 2u )
        {
          v93 = KeGetCurrentPrcb();
          v94 = v93->SchedulerAssist;
          v95 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v72 + 1));
          v83 = (v95 & v94[5]) == 0;
          v94[5] &= v95;
          if ( v83 )
            KiRemoveSystemWorkPriorityKick(v93);
          v13 = 0;
        }
      }
    }
    __writecr8(v72);
    if ( v73 )
      v24 = 0;
    else
      v24 = -1073741275;
  }
  else
  {
    v24 = -1073741275;
  }
  if ( v126 )
    ObDereferenceObjectDeferDelete(Object);
  Exception = v24;
  if ( v24 >= 0 )
  {
    MmUpdateSectionIoAttribution(*(_QWORD *)(a6 + 40), v141);
    IoDiskIoAttributionDereference(v141);
  }
  v25 = v122;
  LODWORD(v26) = v115;
  while ( v152 )
  {
    if ( v106 )
    {
      v27 = 0;
      a5 = 0;
    }
    else
    {
      v27 = a5;
    }
    v115 = 0;
    VirtualAddress = CcGetVirtualAddress(v9, v119, &v122, &v118, 0, 0);
    v121 = VirtualAddress;
    v29 = v118;
    if ( v118 > v152 )
    {
      v29 = v152;
      v118 = v152;
    }
    v115 = v29;
    v152 -= v29;
    v30 = v116;
    v31 = VirtualAddress - v116;
    v121 = v31;
    v32 = v116 + v29;
    v123 = v32;
    v118 = v32;
    v33 = 1;
    v120 = 1;
    HIDWORD(v130) = HIDWORD(v119);
    v34 = v119 - v116;
    LODWORD(v130) = v119 - v116;
    v104 = 0;
    v103 = 0;
    v35 = v32;
    while ( 1 )
    {
      v109 = 1;
      v36 = v35 > 0x1000;
      v134 = v36;
      v143 = v36;
      Exception = 0;
      if ( (v33 & v27) != 0 )
      {
        if ( v130 >= *a7 )
        {
          v13 |= 1u;
          v108 = v13;
        }
        v37 = *(_DWORD *)(v9 + 152);
        if ( (v37 & 0x40) != 0 )
        {
          v13 |= 2u;
          v108 = v13;
        }
        if ( (v37 & 0x40000000) != 0 )
        {
          v58 = 0;
          if ( v35 <= 0x1000 )
            v58 = v32;
          if ( (((unsigned __int8)v30 | (unsigned __int8)(v58 - v30)) & 0x3F) != 0 )
          {
            v13 &= 0xFFFFFFF3;
            v108 = v13;
            v103 = 1;
          }
          else
          {
            v13 |= 4u;
            v108 = v13;
            if ( v102 )
            {
              v13 |= 8u;
              v108 = v13;
            }
          }
        }
        v38 = 4096;
        if ( v35 <= 0x1000 )
          v38 = v32;
        v39 = v38 - v30;
        v40 = v13;
        v138 = v13;
        v41 = 0;
        v137 = 0;
        v42 = 1;
        v139 = 1;
        while ( v42 <= 2 )
        {
          v43 = MmCopyToCachedPage(v31, a2, v30, v39, v40);
          v41 = v43;
          v137 = v43;
          if ( (v40 & 8) == 0 || v43 != -1073741670 )
          {
            v30 = v116;
            break;
          }
          v40 &= 0xFFFFFFF3;
          v138 = v40;
          v139 = ++v42;
          v30 = v116;
          v31 = v121;
        }
        v110 = (v40 & 4) == 0;
        Exception = v41;
        if ( v41 < 0 )
        {
          IsNtstatusExpected = FsRtlIsNtstatusExpected(v41);
          v60 = -1073741592;
          if ( IsNtstatusExpected )
            v60 = v41;
          RtlRaiseStatus(v60);
        }
        v104 = 1;
        if ( !v103 )
          v103 = (v40 & 4) == 0;
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
        v46 = MmCheckCachedPageStates(v31, 1LL, v133, &v109);
        v144 = v46;
        if ( !v109 && !a8 )
        {
          v113 = 0;
          v25 = v122;
          v21 = a9;
          LODWORD(v26) = v115;
          goto LABEL_122;
        }
        v47 = 0LL;
        v140 = 0LL;
        v48 = 0LL;
        v145 = 0LL;
        Status = 0;
        if ( v46 < 0 )
          RtlRaiseStatus(v46);
        v49 = v106;
        if ( v106 )
        {
          v61 = v32;
          if ( v36 )
            v61 = 4096LL;
          v48 = CcLockSystemCacheBuffer(v121, &v140, v61, 1LL, &Status);
          v145 = v48;
          if ( !v48 )
            RtlRaiseStatus(Status);
          v47 = v140;
          v49 = v106;
        }
        if ( v49 )
          v50 = (void *)(v116 + v48);
        else
          v50 = (void *)(v116 + v121);
        if ( v36 )
          v51 = 4096;
        else
          v51 = v32;
        v52 = v51 - v116;
        v53 = 0;
        v128 = 0;
        v54 = (*(_DWORD *)(v9 + 152) & 0x40000000) != 0;
        if ( v49 )
        {
          if ( (*(_DWORD *)(v9 + 152) & 0x40000000) != 0 )
          {
            v53 = HviCopyMemoryNonTemporal(v50, a2, v52);
            v128 = v53;
          }
          else
          {
            HviCopyMemory(v50, a2, v52);
          }
        }
        else if ( (*(_DWORD *)(v9 + 152) & 0x40000000) != 0 )
        {
          v53 = RtlWriteNonVolatileMemory((PVOID)0xFFFFFFFFFFFFFFFFLL, v50, a2, v52, 2u);
          v128 = v53;
        }
        else
        {
          memmove(v50, a2, v52);
        }
        if ( v53 < 0 )
          RtlRaiseStatus(v53);
        v110 = !v54;
        v104 = 1;
        if ( !v103 )
          v103 = !v54;
        if ( v47 )
        {
          MmUnlockPages(v47);
          IoFreeMdl(v47);
          v140 = 0LL;
        }
        v55 = v124;
        v56 = CurrentThread;
        BYTE4(CurrentThread[1].Queue) = v124 & 3;
        LODWORD(v56[1].WaitListEntry.Flink) = v55 >> 2;
        v30 = v116;
      }
      a2 += 4096 - v30;
      v30 = 0;
      v116 = 0;
      if ( !v134 )
        break;
      v31 = v121 + 4096;
      v121 += 4096LL;
      v32 = v123 - 4096;
      v123 = v32;
      v35 = v32;
      v118 = v32;
      v34 += 4096;
      LODWORD(v130) = v34;
      if ( v152 )
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
      v120 = v33;
      v27 = a5;
    }
    v104 = 0;
    v44 = *((_QWORD *)v122 + 1);
    if ( !(unsigned __int16)_InterlockedDecrement(v122 + 4) )
    {
      v45 = *(struct _KEVENT **)(v44 + 184);
      if ( v45 )
        KeSetEvent(v45, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v44 + 544));
    }
    v25 = 0LL;
    v122 = 0LL;
    v21 = a9;
    v26 = v115;
    CcSetDirtyInMask(v9, &v119, v115, a9);
    if ( (*(_DWORD *)(v9 + 152) & 0x40000000) == 0 && v125 - v152 > 0x1000000
      || (*(_DWORD *)(v9 + 152) & 0x40000000) != 0 && v103 )
    {
      CcFlushCachePriv(*(_QWORD *)(a6 + 40), &v119, v26, 0LL, v102, (__int128 *)v129);
      v62 = v129[0];
      if ( v129[0] < 0 )
      {
        v63 = FsRtlIsNtstatusExpected(v129[0]);
        v64 = -1073741591;
        if ( v63 )
          v64 = v62;
        RtlRaiseStatus(v64);
      }
    }
    if ( v152 >= 0x1000 )
    {
      a5 |= 1u;
    }
    else if ( (a5 & 4) == 0 )
    {
      a5 = 0;
    }
    v119 += v26;
    v13 = v108;
  }
  v113 = 1;
LABEL_122:
  v65 = v124;
  v66 = CurrentThread;
  BYTE4(CurrentThread[1].Queue) = v124 & 3;
  LODWORD(v66[1].WaitListEntry.Flink) = v65 >> 2;
  if ( v25 )
  {
    v75 = *((_QWORD *)v25 + 1);
    if ( !(unsigned __int16)_InterlockedDecrement(v25 + 4) )
    {
      v78 = *(struct _KEVENT **)(v75 + 184);
      if ( v78 )
        KeSetEvent(v78, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v75 + 544));
    }
    LODWORD(v26) = v115;
  }
  if ( v104 && (_DWORD)v26 )
    CcSetDirtyInMask(v9, &v119, (unsigned int)v26, v21);
  if ( CcRemoteFileDPInlineFlushThreshold != -1
    && (*(_DWORD *)(a6 + 80) & 0x1000000) != 0
    && !v102
    && *(_DWORD *)(v9 + 112) >= (unsigned int)CcRemoteFileDPInlineFlushThreshold )
  {
    v105 = 1;
    v107 = 1;
  }
  if ( v111 || v107 )
  {
    v129[0] = 0;
    if ( !v102 || (*(_DWORD *)(v9 + 152) & 0x40000000) == 0 )
    {
      v68 = 0;
      if ( !v105 )
      {
        v68 = v125;
        v11 = a3;
      }
      CcFlushCachePriv(*(_QWORD *)(a6 + 40), v11, v68, 0LL, v102, (__int128 *)v129);
      LODWORD(v11) = v129[0];
    }
    if ( v112 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v146 + 128), &LockHandle);
      --*(_DWORD *)(v9 + 516);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v69 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v96 = KeGetCurrentIrql();
          if ( v96 <= 0xFu && LockHandle.OldIrql <= 0xFu && v96 >= 2u )
          {
            v97 = KeGetCurrentPrcb();
            v98 = v97->SchedulerAssist;
            v99 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v83 = (v99 & v98[5]) == 0;
            v98[5] &= v99;
            if ( v83 )
              KiRemoveSystemWorkPriorityKick(v97);
          }
        }
      }
      __writecr8(v69);
      LODWORD(v11) = v129[0];
    }
    if ( (int)v11 < 0 )
    {
      v100 = FsRtlIsNtstatusExpected((NTSTATUS)v11);
      v101 = -1073741591;
      if ( v100 )
        v101 = (int)v11;
      RtlRaiseStatus(v101);
    }
  }
  return v113;
}
