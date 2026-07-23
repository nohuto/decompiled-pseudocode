/*
 * XREFs of CcMapAndCopyInToCache @ 0x14027BC80
 * Callers:
 *     CcCopyWriteEx @ 0x14027B120 (CcCopyWriteEx.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     CcFlushCachePriv @ 0x14022C120 (CcFlushCachePriv.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcCanIWriteStreamEx @ 0x14022E440 (CcCanIWriteStreamEx.c)
 *     CcFreeWorkQueueEntry @ 0x14023175C (CcFreeWorkQueueEntry.c)
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     ObDereferenceObjectDeferDelete @ 0x14024A1D0 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsGetBaseIoPriorityThread @ 0x14027B270 (PsGetBaseIoPriorityThread.c)
 *     CcSetDirtyInMask @ 0x14027B2A0 (CcSetDirtyInMask.c)
 *     MmGetControlAreaPartition @ 0x14027CB20 (MmGetControlAreaPartition.c)
 *     MmCopyToCachedPage @ 0x14027CC60 (MmCopyToCachedPage.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402814C0 (ExAcquireSpinLockShared.c)
 *     CcGetVirtualAddress @ 0x140288400 (CcGetVirtualAddress.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     IoFreeMdl @ 0x1402C0A80 (IoFreeMdl.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402DAA90 (KeReleaseInStackQueuedSpinLock.c)
 *     IoDiskIoAttributionDereference @ 0x1402DB1B4 (IoDiskIoAttributionDereference.c)
 *     MmUpdateSectionIoAttribution @ 0x1402DCBA4 (MmUpdateSectionIoAttribution.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     FsRtlIsNtstatusExpected @ 0x140312560 (FsRtlIsNtstatusExpected.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     CcCopyReadExceptionFilter @ 0x1404E4904 (CcCopyReadExceptionFilter.c)
 *     CcLockSystemCacheBuffer @ 0x1404E4DD8 (CcLockSystemCacheBuffer.c)
 *     RtlWriteNonVolatileMemory @ 0x1405873B0 (RtlWriteNonVolatileMemory.c)
 *     HviCopyMemory @ 0x14058EA00 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x14058EA7C (HviCopyMemoryNonTemporal.c)
 */

char __fastcall CcMapAndCopyInToCache(
        __int64 a1,
        char *a2,
        __int64 *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        char a8,
        struct _KTHREAD *a9)
{
  __int64 v9; // r12
  char v10; // r10
  __int64 *v11; // r15
  bool v12; // bl
  int v13; // r13d
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
  __int64 v25; // rbx
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
  int v38; // esi
  NTSTATUS v39; // edi
  unsigned int v40; // r14d
  NTSTATUS v41; // eax
  __int64 v42; // rbx
  struct _KEVENT *v43; // rcx
  NTSTATUS v44; // eax
  struct _MDL *v45; // r14
  __int64 v46; // rcx
  bool v47; // r8
  void *v48; // r10
  int v49; // ecx
  unsigned int v50; // ecx
  signed int v51; // esi
  bool v52; // di
  unsigned int v53; // ecx
  struct _KTHREAD *v54; // rdx
  struct _KTHREAD *v55; // rax
  char v56; // al
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v58; // ecx
  __int64 v59; // r8
  NTSTATUS v60; // edi
  BOOLEAN v61; // al
  NTSTATUS v62; // ecx
  unsigned int v63; // ecx
  struct _KTHREAD *v64; // rdx
  unsigned int v66; // r8d
  unsigned __int64 v67; // rbx
  unsigned __int64 v68; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v70; // rsi
  unsigned __int64 v71; // rbx
  unsigned __int64 v72; // rbx
  __int64 v73; // rdi
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v75; // rax
  struct _KEVENT *v76; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v80; // edx
  bool v81; // zf
  unsigned __int8 v82; // al
  struct _KPRCB *v83; // r10
  _DWORD *v84; // r9
  int v85; // eax
  unsigned __int8 v86; // al
  struct _KPRCB *v87; // r10
  _DWORD *v88; // r9
  int v89; // eax
  unsigned __int8 v90; // al
  struct _KPRCB *v91; // r10
  _DWORD *v92; // r9
  int v93; // eax
  unsigned __int8 v94; // al
  struct _KPRCB *v95; // r9
  _DWORD *v96; // r8
  int v97; // eax
  BOOLEAN v98; // al
  NTSTATUS v99; // ecx
  char v100; // [rsp+68h] [rbp-168h]
  bool v101; // [rsp+69h] [rbp-167h]
  char v102; // [rsp+6Ah] [rbp-166h]
  char v103; // [rsp+6Bh] [rbp-165h]
  bool v104; // [rsp+6Ch] [rbp-164h]
  char v105; // [rsp+6Dh] [rbp-163h]
  int v106; // [rsp+70h] [rbp-160h]
  char v107; // [rsp+74h] [rbp-15Ch] BYREF
  bool v108; // [rsp+75h] [rbp-15Bh]
  char v109; // [rsp+76h] [rbp-15Ah]
  char v110; // [rsp+77h] [rbp-159h]
  char v111; // [rsp+78h] [rbp-158h]
  char v112; // [rsp+79h] [rbp-157h]
  unsigned int v113; // [rsp+7Ch] [rbp-154h]
  unsigned int v114; // [rsp+84h] [rbp-14Ch]
  NTSTATUS Exception; // [rsp+88h] [rbp-148h]
  unsigned int v116; // [rsp+8Ch] [rbp-144h] BYREF
  __int64 v117; // [rsp+90h] [rbp-140h] BYREF
  int v118; // [rsp+9Ch] [rbp-134h]
  ULONG_PTR v119; // [rsp+A0h] [rbp-130h]
  __int64 v120; // [rsp+A8h] [rbp-128h] BYREF
  unsigned int v121; // [rsp+B0h] [rbp-120h]
  int v122; // [rsp+B4h] [rbp-11Ch]
  unsigned int v123; // [rsp+B8h] [rbp-118h]
  int v124; // [rsp+BCh] [rbp-114h]
  NTSTATUS Status; // [rsp+C0h] [rbp-110h] BYREF
  signed int v126; // [rsp+C4h] [rbp-10Ch]
  NTSTATUS v127[4]; // [rsp+C8h] [rbp-108h] BYREF
  __int64 v128; // [rsp+D8h] [rbp-F8h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-F0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-E8h] BYREF
  unsigned int v131; // [rsp+100h] [rbp-D0h]
  BOOL v132; // [rsp+104h] [rbp-CCh]
  int v133; // [rsp+108h] [rbp-C8h]
  unsigned int v134; // [rsp+10Ch] [rbp-C4h]
  NTSTATUS v135; // [rsp+110h] [rbp-C0h]
  int v136; // [rsp+118h] [rbp-B8h]
  int v137; // [rsp+120h] [rbp-B0h]
  struct _MDL *v138; // [rsp+128h] [rbp-A8h] BYREF
  unsigned __int64 v139; // [rsp+130h] [rbp-A0h]
  struct _KLOCK_QUEUE_HANDLE v140; // [rsp+138h] [rbp-98h] BYREF
  BOOL v141; // [rsp+150h] [rbp-80h]
  NTSTATUS v142; // [rsp+154h] [rbp-7Ch]
  __int64 v143; // [rsp+158h] [rbp-78h]
  __int64 v144; // [rsp+160h] [rbp-70h]
  __int64 v145; // [rsp+168h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE v146; // [rsp+170h] [rbp-60h] BYREF
  unsigned int v150; // [rsp+1F0h] [rbp+20h]

  v150 = a4;
  v123 = a4;
  v9 = a1;
  v10 = a8;
  v11 = 0LL;
  v116 = 0;
  v113 = 0;
  v128 = 0LL;
  *(_OWORD *)v127 = 0LL;
  v12 = (*(_DWORD *)(a6 + 80) & 0x10) != 0;
  v100 = v12;
  v134 = a4;
  v114 = *(_DWORD *)a3 & 0xFFF;
  v120 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0;
  v106 = 0;
  v110 = 0;
  v103 = 0;
  v14 = 0LL;
  v139 = 0LL;
  v107 = 1;
  v102 = 0;
  v105 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v140, 0, sizeof(v140));
  v104 = (*(_DWORD *)(a1 + 152) & 0x1000) != 0;
  v117 = *a3;
  v122 = BYTE4(CurrentThread[1].Queue) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v133 = v122;
  v15 = v12;
  v109 = v12;
  v112 = v12;
  if ( !v12 )
  {
    v109 = 0;
    memset(&v146, 0, sizeof(v146));
    v16 = *(unsigned __int64 **)(a1 + 528);
    if ( *(_QWORD *)(a1 + 168)
      && v16 != *(unsigned __int64 **)(MmGetControlAreaPartition(*(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                           + 0x28))
                                     + 8) )
    {
      KeBugCheckEx(0x34u, 0x1311uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    }
    if ( (*(_DWORD *)(a6 + 80) & 0x1000000) == 0 || CcCanIWriteStreamEx(v16, a6, v150, 0, 0, 0LL) )
    {
      BaseIoPriorityThread = PsGetBaseIoPriorityThread((__int64)KeGetCurrentThread());
      if ( BaseIoPriorityThread < 2 && (struct _KTHREAD *)v18 == KeGetCurrentThread() && *(_DWORD *)(v18 + 1360)
        || BaseIoPriorityThread > 0
        || (*(_DWORD *)(a6 + 80) & 0x8000) != 0 )
      {
        v13 = 0;
LABEL_8:
        v112 = v15;
        v12 = v100;
        v10 = a8;
        goto LABEL_9;
      }
      v13 = 0;
    }
    v15 = 1;
    v109 = 1;
    if ( (*(_DWORD *)(v9 + 152) & 0x400) == 0 )
    {
      KeAcquireInStackQueuedSpinLock(v16 + 16, &v146);
      *(_DWORD *)(v9 + 152) |= 0x400u;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v146);
      OldIrql = v146.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v146.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v80 = ~(unsigned __int16)(-1LL << (v146.OldIrql + 1));
            v81 = (v80 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v80;
            if ( v81 )
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
  v131 = v19;
  v20 = *(_QWORD *)(v9 + 528);
  v144 = v20;
  if ( *(_QWORD *)(v9 + 168)
    && v20 != *(_QWORD *)(MmGetControlAreaPartition(*(_QWORD *)((*(_QWORD *)(v9 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28))
                        + 8) )
  {
    KeBugCheckEx(0x34u, 0x1311uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  v145 = v20;
  if ( v12 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v20 + 128), &LockHandle);
    if ( (*(_DWORD *)(v9 + 152) & 0x20) != 0 )
    {
      v140.LockQueue.Lock = (unsigned __int64 *volatile)(v20 + 192);
      v140.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&v140, (volatile __int64 *)(v20 + 192));
      v14 = *(_SLIST_ENTRY **)(v9 + 496);
      if ( !v14 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v140);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
        RtlRaiseStatus(-1073741608);
      }
      Next = v14->Next;
      v75 = (_SLIST_ENTRY **)*((_QWORD *)&v14->Next + 1);
      if ( *(&v14->Next->Next + 1) != v14 || *v75 != v14 )
        __fastfail(3u);
      *v75 = Next;
      *((_QWORD *)&Next->Next + 1) = v75;
      *((_QWORD *)&v14->Next + 1) = 0LL;
      v14->Next = 0LL;
      *(_QWORD *)(v9 + 496) = 0LL;
      *(_DWORD *)(v9 + 152) &= ~0x20u;
      v103 = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v140);
    }
    ++*(_DWORD *)(v9 + 516);
    v110 = 1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v68 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v82 = KeGetCurrentIrql();
        if ( v82 <= 0xFu && LockHandle.OldIrql <= 0xFu && v82 >= 2u )
        {
          v83 = KeGetCurrentPrcb();
          v84 = v83->SchedulerAssist;
          v85 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v81 = (v85 & v84[5]) == 0;
          v84[5] &= v85;
          if ( v81 )
            KiRemoveSystemWorkPriorityKick(v83);
          v13 = 0;
        }
      }
    }
    __writecr8(v68);
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
  v124 = 0;
  if ( !Object )
    goto LABEL_20;
  if ( v21 != KeGetCurrentThread() )
  {
    v72 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Object = v21[1].WaitBlock[1].Object;
    if ( Object )
    {
      ObfReferenceObjectWithTag(v21[1].WaitBlock[1].Object, 0x746C6644u);
      v124 = 1;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v86 = KeGetCurrentIrql();
        if ( v86 <= 0xFu && (unsigned __int8)v72 <= 0xFu && v86 >= 2u )
        {
          v87 = KeGetCurrentPrcb();
          v88 = v87->SchedulerAssist;
          v89 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v72 + 1));
          v81 = (v89 & v88[5]) == 0;
          v88[5] &= v89;
          if ( v81 )
            KiRemoveSystemWorkPriorityKick(v87);
        }
      }
    }
    __writecr8(v72);
  }
  v13 = 0;
  if ( Object )
    Process = (_KPROCESS *)Object[68];
  else
LABEL_20:
    Process = v21->Process;
  if ( Process[2].Affinity.Bitmap[18] )
  {
    v70 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
    v71 = Process[2].Affinity.Bitmap[18];
    if ( v71 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v71 + 32)) <= 1 )
        __fastfail(0xEu);
      v139 = v71;
      v13 = 0;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v90 = KeGetCurrentIrql();
        if ( v90 <= 0xFu && (unsigned __int8)v70 <= 0xFu && v90 >= 2u )
        {
          v91 = KeGetCurrentPrcb();
          v92 = v91->SchedulerAssist;
          v93 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v70 + 1));
          v81 = (v93 & v92[5]) == 0;
          v92[5] &= v93;
          if ( v81 )
            KiRemoveSystemWorkPriorityKick(v91);
          v13 = 0;
        }
      }
    }
    __writecr8(v70);
    if ( v71 )
      v24 = 0;
    else
      v24 = -1073741275;
  }
  else
  {
    v24 = -1073741275;
  }
  if ( v124 )
    ObDereferenceObjectDeferDelete(Object);
  Exception = v24;
  if ( v24 >= 0 )
  {
    MmUpdateSectionIoAttribution(*(_QWORD *)(a6 + 40), v139);
    IoDiskIoAttributionDereference(v139);
  }
  v25 = v120;
  LODWORD(v26) = v113;
  while ( v150 )
  {
    if ( v104 )
    {
      v27 = 0;
      a5 = 0;
    }
    else
    {
      v27 = a5;
    }
    v113 = 0;
    VirtualAddress = CcGetVirtualAddress(v9, v117, (unsigned int)&v120, (unsigned int)&v116, 0, 0);
    v119 = VirtualAddress;
    v29 = v116;
    if ( v116 > v150 )
    {
      v29 = v150;
      v116 = v150;
    }
    v113 = v29;
    v150 -= v29;
    v30 = v114;
    v31 = VirtualAddress - v114;
    v119 = v31;
    v32 = v114 + v29;
    v121 = v32;
    v116 = v32;
    v33 = 1;
    v118 = 1;
    HIDWORD(v128) = HIDWORD(v117);
    v34 = v117 - v114;
    LODWORD(v128) = v117 - v114;
    v102 = 0;
    v101 = 0;
    v35 = v32;
    while ( 1 )
    {
      v107 = 1;
      v36 = v35 > 0x1000;
      v132 = v36;
      v141 = v36;
      Exception = 0;
      if ( (v33 & v27) != 0 )
      {
        if ( v128 >= *a7 )
        {
          v13 |= 1u;
          v106 = v13;
        }
        v37 = *(_DWORD *)(v9 + 152);
        if ( (v37 & 0x40) != 0 )
        {
          v13 |= 2u;
          v106 = v13;
        }
        if ( (v37 & 0x40000000) != 0 )
        {
          v56 = 0;
          if ( v35 <= 0x1000 )
            v56 = v32;
          if ( (((unsigned __int8)v30 | (unsigned __int8)(v56 - v30)) & 0x3F) != 0 )
          {
            v13 &= 0xFFFFFFF3;
            v106 = v13;
            v101 = 1;
          }
          else
          {
            v13 |= 4u;
            v106 = v13;
            if ( v100 )
            {
              v13 |= 8u;
              v106 = v13;
            }
          }
        }
        v38 = v13;
        v136 = v13;
        v39 = 0;
        v135 = 0;
        v40 = 1;
        v137 = 1;
        while ( v40 <= 2 )
        {
          v41 = MmCopyToCachedPage(v31, v38);
          v39 = v41;
          v135 = v41;
          if ( (v38 & 8) == 0 || v41 != -1073741670 )
          {
            v30 = v114;
            break;
          }
          v38 &= 0xFFFFFFF3;
          v136 = v38;
          v137 = ++v40;
          v30 = v114;
          v31 = v119;
        }
        v108 = (v38 & 4) == 0;
        Exception = v39;
        if ( v39 < 0 )
        {
          IsNtstatusExpected = FsRtlIsNtstatusExpected(v39);
          v58 = -1073741592;
          if ( IsNtstatusExpected )
            v58 = v39;
          RtlRaiseStatus(v58);
        }
        v102 = 1;
        if ( !v101 )
          v101 = (v38 & 4) == 0;
        v9 = a1;
      }
      else
      {
        if ( v35 > 0x1000 && (v27 & 4) != 0 )
        {
          v55 = CurrentThread;
          BYTE4(CurrentThread[1].Queue) = 1;
          if ( !LODWORD(v55[1].WaitListEntry.Flink) )
            LODWORD(v55[1].WaitListEntry.Flink) = 1;
        }
        v44 = MmCheckCachedPageStates(v31, 1LL, v131, &v107);
        v142 = v44;
        if ( !v107 && !a8 )
        {
          v111 = 0;
          v25 = v120;
          v21 = a9;
          LODWORD(v26) = v113;
          goto LABEL_120;
        }
        v45 = 0LL;
        v138 = 0LL;
        v46 = 0LL;
        v143 = 0LL;
        Status = 0;
        if ( v44 < 0 )
          RtlRaiseStatus(v44);
        v47 = v104;
        if ( v104 )
        {
          v59 = v32;
          if ( v36 )
            v59 = 4096LL;
          v46 = CcLockSystemCacheBuffer(v119, &v138, v59, 1LL, &Status);
          v143 = v46;
          if ( !v46 )
            RtlRaiseStatus(Status);
          v45 = v138;
          v47 = v104;
        }
        if ( v47 )
          v48 = (void *)(v114 + v46);
        else
          v48 = (void *)(v114 + v119);
        if ( v36 )
          v49 = 4096;
        else
          v49 = v32;
        v50 = v49 - v114;
        v51 = 0;
        v126 = 0;
        v52 = (*(_DWORD *)(v9 + 152) & 0x40000000) != 0;
        if ( v47 )
        {
          if ( (*(_DWORD *)(v9 + 152) & 0x40000000) != 0 )
          {
            v51 = HviCopyMemoryNonTemporal(v48, a2, v50);
            v126 = v51;
          }
          else
          {
            HviCopyMemory(v48, a2, v50);
          }
        }
        else if ( (*(_DWORD *)(v9 + 152) & 0x40000000) != 0 )
        {
          v51 = RtlWriteNonVolatileMemory((PVOID)0xFFFFFFFFFFFFFFFFLL, v48, a2, v50, 2u);
          v126 = v51;
        }
        else
        {
          memmove(v48, a2, v50);
        }
        if ( v51 < 0 )
          RtlRaiseStatus(v51);
        v108 = !v52;
        v102 = 1;
        if ( !v101 )
          v101 = !v52;
        if ( v45 )
        {
          MmUnlockPages(v45);
          IoFreeMdl(v45);
          v138 = 0LL;
        }
        v53 = v122;
        v54 = CurrentThread;
        BYTE4(CurrentThread[1].Queue) = v122 & 3;
        LODWORD(v54[1].WaitListEntry.Flink) = v53 >> 2;
        v30 = v114;
      }
      a2 += 4096 - v30;
      v30 = 0;
      v114 = 0;
      if ( !v132 )
        break;
      v31 = v119 + 4096;
      v119 += 4096LL;
      v32 = v121 - 4096;
      v121 = v32;
      v35 = v32;
      v116 = v32;
      v34 += 4096;
      LODWORD(v128) = v34;
      if ( v150 )
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
      v118 = v33;
      v27 = a5;
    }
    v102 = 0;
    v42 = *(_QWORD *)(v120 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v120 + 16)) )
    {
      v43 = *(struct _KEVENT **)(v42 + 184);
      if ( v43 )
        KeSetEvent(v43, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v42 + 544));
    }
    v25 = 0LL;
    v120 = 0LL;
    v21 = a9;
    v26 = v113;
    CcSetDirtyInMask(v9, &v117, v113, a9);
    if ( (*(_DWORD *)(v9 + 152) & 0x40000000) == 0 && v123 - v150 > 0x1000000
      || (*(_DWORD *)(v9 + 152) & 0x40000000) != 0 && v101 )
    {
      CcFlushCachePriv(*(_QWORD *)(a6 + 40), &v117, v26, 0LL, v100, (unsigned int *)v127);
      v60 = v127[0];
      if ( v127[0] < 0 )
      {
        v61 = FsRtlIsNtstatusExpected(v127[0]);
        v62 = -1073741591;
        if ( v61 )
          v62 = v60;
        RtlRaiseStatus(v62);
      }
    }
    if ( v150 >= 0x1000 )
    {
      a5 |= 1u;
    }
    else if ( (a5 & 4) == 0 )
    {
      a5 = 0;
    }
    v117 += v26;
    v13 = v106;
  }
  v111 = 1;
LABEL_120:
  v63 = v122;
  v64 = CurrentThread;
  BYTE4(CurrentThread[1].Queue) = v122 & 3;
  LODWORD(v64[1].WaitListEntry.Flink) = v63 >> 2;
  if ( v25 )
  {
    v73 = *(_QWORD *)(v25 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v25 + 16)) )
    {
      v76 = *(struct _KEVENT **)(v73 + 184);
      if ( v76 )
        KeSetEvent(v76, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v73 + 544));
    }
    LODWORD(v26) = v113;
  }
  if ( v102 && (_DWORD)v26 )
    CcSetDirtyInMask(v9, &v117, v26, v21);
  if ( CcRemoteFileDPInlineFlushThreshold != -1
    && (*(_DWORD *)(a6 + 80) & 0x1000000) != 0
    && !v100
    && *(_DWORD *)(v9 + 112) >= (unsigned int)CcRemoteFileDPInlineFlushThreshold )
  {
    v103 = 1;
    v105 = 1;
  }
  if ( v109 || v105 )
  {
    v127[0] = 0;
    if ( !v100 || (*(_DWORD *)(v9 + 152) & 0x40000000) == 0 )
    {
      v66 = 0;
      if ( !v103 )
      {
        v66 = v123;
        v11 = a3;
      }
      CcFlushCachePriv(*(_QWORD *)(a6 + 40), v11, v66, 0LL, v100, (unsigned int *)v127);
      LODWORD(v11) = v127[0];
    }
    if ( v110 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v144 + 128), &LockHandle);
      --*(_DWORD *)(v9 + 516);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v67 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v94 = KeGetCurrentIrql();
          if ( v94 <= 0xFu && LockHandle.OldIrql <= 0xFu && v94 >= 2u )
          {
            v95 = KeGetCurrentPrcb();
            v96 = v95->SchedulerAssist;
            v97 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v81 = (v97 & v96[5]) == 0;
            v96[5] &= v97;
            if ( v81 )
              KiRemoveSystemWorkPriorityKick(v95);
          }
        }
      }
      __writecr8(v67);
      LODWORD(v11) = v127[0];
    }
    if ( (int)v11 < 0 )
    {
      v98 = FsRtlIsNtstatusExpected((NTSTATUS)v11);
      v99 = -1073741591;
      if ( v98 )
        v99 = (int)v11;
      RtlRaiseStatus(v99);
    }
  }
  return v111;
}
