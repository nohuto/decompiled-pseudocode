/*
 * XREFs of MiInsertPageInList @ 0x140331550
 * Callers:
 *     MiCreateDecayPfn @ 0x14022D038 (MiCreateDecayPfn.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140257660 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReplaceTransitionPage @ 0x14025B310 (MiReplaceTransitionPage.c)
 *     MiRelinkStandbyPage @ 0x14025FF78 (MiRelinkStandbyPage.c)
 *     MiGatherMappedPages @ 0x140277138 (MiGatherMappedPages.c)
 *     MiDeletePteList @ 0x1402D6070 (MiDeletePteList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeletePteRun @ 0x1402DB4B0 (MiDeletePteRun.c)
 *     MiActOnPte @ 0x1402E0E40 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1402E1EB0 (MiReservePageFileSpaceForPage.c)
 *     MiPfnReferenceCountIsZero @ 0x140330B40 (MiPfnReferenceCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140330C10 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnShareCountIsZero @ 0x140330EE0 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiOutSwapWorkingSetPte @ 0x140337C00 (MiOutSwapWorkingSetPte.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385270 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x140386F40 (MiBuildReservationCluster.c)
 *     MiReturnBadPagesToBadList @ 0x14052F238 (MiReturnBadPagesToBadList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052FB70 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMarkFileOnlyPfnBad @ 0x140541948 (MiMarkFileOnlyPfnBad.c)
 *     MiFreeModifiedReservations @ 0x140543964 (MiFreeModifiedReservations.c)
 *     MiHandleForkTransitionPte @ 0x14055ACA4 (MiHandleForkTransitionPte.c)
 *     MiTransferPartitionPageRun @ 0x140563050 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x140563B74 (MiMakePageBad.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     MiRestoreTransitionPte @ 0x140220210 (MiRestoreTransitionPte.c)
 *     MiClearPfnImageVerified @ 0x140220654 (MiClearPfnImageVerified.c)
 *     MiInsertDecayClusterTimer @ 0x14022E534 (MiInsertDecayClusterTimer.c)
 *     MiUpdatePfnOnSlabStandbyList @ 0x140236090 (MiUpdatePfnOnSlabStandbyList.c)
 *     MiWakeModifiedPageWriter @ 0x1402A0A84 (MiWakeModifiedPageWriter.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     MiPageToChannel @ 0x140309E58 (MiPageToChannel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MiUpdateAvailableEvents @ 0x1403B6BB4 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiWakeFileOnlyReaper @ 0x140542AF4 (MiWakeFileOnlyReaper.c)
 *     MiSetPfnRemovalRequested @ 0x14054F668 (MiSetPfnRemovalRequested.c)
 *     MiGetSlabAllocatorStandbyList @ 0x1405530C4 (MiGetSlabAllocatorStandbyList.c)
 */

void __fastcall MiInsertPageInList(ULONG_PTR a1, unsigned int a2)
{
  unsigned __int64 v2; // r9
  __int16 v3; // r10
  ULONG_PTR *v5; // r14
  ULONG_PTR v6; // r13
  char v7; // di
  char v8; // bl
  __int64 *v9; // r15
  __int64 SlabAllocatorStandbyList; // rax
  __int64 v11; // r8
  char v12; // cl
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  _KSPIN_LOCK_QUEUE *v17; // r11
  __int64 v18; // rcx
  unsigned __int64 v19; // r12
  __int64 v20; // rax
  struct _KEVENT *v21; // rbx
  unsigned __int64 v22; // r12
  __int16 v23; // dx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v26; // eax
  _QWORD *v27; // rdx
  _KSPIN_LOCK_QUEUE *v28; // r11
  __int64 v29; // rax
  __int64 v30; // r12
  int v31; // eax
  __int64 v32; // r8
  __int64 v33; // r9
  _KSPIN_LOCK_QUEUE *v34; // r11
  __int64 v35; // rcx
  unsigned __int64 *v36; // r15
  struct _KPRCB *v37; // rcx
  _DWORD *v38; // rdx
  int v39; // eax
  _QWORD *v40; // rdx
  unsigned __int16 v41; // cx
  char v42; // al
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rbx
  struct _KPRCB *v46; // rcx
  _DWORD *v47; // rdx
  int v48; // eax
  _QWORD *v49; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int64 v51; // r8
  unsigned __int16 **v52; // r10
  __int64 v53; // r11
  unsigned __int16 *v54; // rcx
  unsigned int v55; // edx
  unsigned __int64 v56; // rbx
  BOOL v57; // ebx
  __int64 v58; // r12
  char v59; // al
  __int64 v60; // rax
  char v61; // r12
  char v62; // r15
  int v63; // edx
  __int64 v64; // r12
  char *v65; // rax
  int v66; // r8d
  int v67; // ecx
  __int64 v68; // rbx
  unsigned int v69; // r8d
  _QWORD *v70; // r9
  unsigned __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 Next; // rax
  struct _KPRCB *v76; // rcx
  _DWORD *v77; // rdx
  int v78; // eax
  signed __int32 v79[8]; // [rsp+0h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v80; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v83; // [rsp+A0h] [rbp+8h]
  unsigned int v84; // [rsp+A8h] [rbp+10h]
  __int64 v85; // [rsp+B8h] [rbp+20h]

  v84 = a2;
  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2;
  memset(&v80, 0, sizeof(v80));
  v5 = *(ULONG_PTR **)(qword_140C4E688 + 8 * ((v2 >> 39) & 0x3FF));
  v6 = (__int64)(a1 + 0x58000000000LL) / 48;
  v7 = (v2 & 0x2000000000000LL) != 0;
  if ( v6 < qword_140C4E9E0 || v6 >= qword_140C4E9E0 + 2048 )
  {
    if ( byte_140C5209E && _bittest64((const signed __int64 *)qword_140C525C8, v6 >> 9) )
      v7 |= 2u;
  }
  else
  {
    v7 |= 8u;
  }
  v8 = v7;
  if ( (a2 & 8) != 0 && (v7 & 1) != 0 && byte_140C4DF28 )
  {
    v3 = a2 & 0xFFF3 | 4;
    v84 = a2 & 0xFFFFFFF3 | 4;
    *(_BYTE *)(a1 + 34) &= ~0x10u;
  }
  if ( (v3 & 4) != 0 )
  {
    v9 = (__int64 *)(v5 + 296);
    if ( (v7 & 1) != 0 && (*(_BYTE *)(a1 + 35) & 0x40) != 0 )
    {
      v5 = &MiSystemPartition;
      v9 = &qword_140C4CB00;
    }
  }
  else if ( (v3 & 8) != 0 )
  {
    v9 = (__int64 *)(v5 + 936);
  }
  else if ( (v3 & 0x10) != 0 )
  {
    v9 = (__int64 *)(v5 + 944);
  }
  else if ( (v3 & 0x100) != 0 )
  {
    v9 = (__int64 *)(v5 + 520);
  }
  else if ( (v3 & 0x800) != 0 )
  {
    SlabAllocatorStandbyList = MiGetSlabAllocatorStandbyList(a1, 1LL);
    v3 = v84;
    v9 = (__int64 *)SlabAllocatorStandbyList;
  }
  else
  {
    v9 = (__int64 *)(v5 + 512);
  }
  v11 = *((unsigned int *)v9 + 2);
  v83 = *((_DWORD *)v9 + 2);
  if ( (v7 & 1) == 0 )
  {
    _InterlockedOr(v79, 0);
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  }
  v85 = 0LL;
  switch ( (_DWORD)v11 )
  {
    case 2:
      v12 = *(_BYTE *)(a1 + 35);
      if ( (v12 & 0x40) != 0 && (v7 & 2) == 0 )
      {
        MiRestoreTransitionPte(a1, 0LL, v11);
        MiInsertPageInList(a1, 32LL);
        return;
      }
      if ( (v7 & 1) != 0 )
      {
        *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 2;
        return;
      }
      if ( (v3 & 0x800) != 0 )
        goto LABEL_51;
      v13 = (v12 & 8) != 0 ? 5LL : v12 & 7;
      v9 = (__int64 *)&v5[4 * v13 + 304 + v13];
      if ( (v12 & 8) != 0 || (v7 & 2) != 0 )
        goto LABEL_51;
      v14 = MI_PFN_IS_PROTO(a1);
      v18 = 544LL;
      if ( !v14 )
        v18 = 632LL;
      _InterlockedIncrement64((volatile signed __int64 *)&v5[v18]);
      memset(&LockHandle, 0, sizeof(LockHandle));
      v19 = _InterlockedIncrement64((volatile signed __int64 *)v5 + 888);
      if ( v19 <= 0x420 )
      {
        switch ( v19 )
        {
          case 0xA0uLL:
            v20 = 621LL;
LABEL_47:
            LockHandle.LockQueue.Next = v17;
            LockHandle.LockQueue.Lock = v5 + 616;
            v21 = (struct _KEVENT *)&v5[v20];
            KxAcquireQueuedSpinLock(&LockHandle, v5 + 616, v15, v16);
            KeSetEvent(v21, 0, 0);
            ++v21[1].Header.LockNV;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            break;
          case 0x420uLL:
            v20 = 625LL;
            goto LABEL_47;
          case 0x22uLL:
            v20 = 617LL;
            goto LABEL_47;
        }
      }
      v22 = v19 - 1;
      if ( v22 == v5[646] || v22 == v5[647] )
        MiUpdateAvailableEvents(v5);
LABEL_51:
      v23 = v84;
      if ( (v84 & 0x80u) != 0 )
        goto LABEL_118;
      v80.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 4);
      v80.LockQueue.Next = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v26 = SchedulerAssist[6];
          SchedulerAssist[6] = v26 + 1;
          if ( v26 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v80, v9 + 4);
      }
      else
      {
        v27 = (_QWORD *)_InterlockedExchange64(v9 + 4, (__int64)&v80);
        if ( v27 )
          KxWaitForLockOwnerShip((__int64)&v80, v27);
      }
      goto LABEL_117;
    case 3:
      if ( (unsigned int)MI_PFN_IS_PROTO(a1) )
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 544);
      else
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 632);
      goto LABEL_72;
    case 4:
      v29 = *(_QWORD *)(a1 + 16);
      if ( qword_140C4DF80 && (v29 & 0x10) == 0 )
        v29 &= ~qword_140C4DF80;
      v30 = *(_QWORD *)(v29 >> 16);
      v85 = v30;
      v31 = MI_PFN_IS_PROTO(a1);
      v35 = 544LL;
      if ( !v31 )
        v35 = 632LL;
      _InterlockedIncrement64((volatile signed __int64 *)&v5[v35]);
      v80.LockQueue.Next = v34;
      v80.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 4);
      KxAcquireQueuedSpinLock(&v80, v9 + 4, v32, v33);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v30 + 72));
      if ( (*(_DWORD *)(v30 + 56) & 8) != 0 )
        goto LABEL_117;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v30 + 72));
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v80);
      v8 = v7;
      v28 = 0LL;
      v83 = 3;
LABEL_72:
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 936);
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
      {
        v45 = *(unsigned int *)(v5[856] + 24);
        v80.LockQueue.Next = v28;
        v9 = (__int64 *)&v5[4 * v45 + 432 + v45];
        v80.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 4);
        v46 = KeGetCurrentPrcb();
        v47 = v46->SchedulerAssist;
        if ( v47 )
        {
          if ( v46->NestingLevel <= 1u )
          {
            v48 = v47[6];
            v47[6] = v48 + 1;
            if ( v48 == -1 )
              KiRemoveSystemWorkPriorityKick(v46);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v80, v9 + 4);
        }
        else
        {
          v49 = (_QWORD *)_InterlockedExchange64(v9 + 4, (__int64)&v80);
          if ( v49 )
            KxWaitForLockOwnerShip((__int64)&v80, v49);
        }
        *(_BYTE *)(a1 + 39) ^= (*(_BYTE *)(a1 + 39) ^ v45) & 0xF;
      }
      else
      {
        if ( (v84 & 0x80u) == 0 )
        {
          v36 = (unsigned __int64 *)(v9 + 4);
          v80.LockQueue.Next = v28;
          v80.LockQueue.Lock = v36;
          v37 = KeGetCurrentPrcb();
          v38 = v37->SchedulerAssist;
          if ( v38 )
          {
            if ( v37->NestingLevel <= 1u )
            {
              v39 = v38[6];
              v38[6] = v39 + 1;
              if ( v39 == -1 )
                KiRemoveSystemWorkPriorityKick(v37);
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&v80, v36);
          }
          else
          {
            v40 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v36, (__int64)&v80);
            if ( v40 )
              KxWaitForLockOwnerShip((__int64)&v80, v40);
          }
        }
        v41 = *(_QWORD *)(a1 + 16);
        v42 = (unsigned __int8)v41 >> 1;
        v43 = v41 >> 12;
        if ( (v42 & 1) != 0 || (_DWORD)v43 == *((_DWORD *)v5 + 289) )
          v9 = (__int64 *)&v5[4 * v43 + 352 + v43];
        else
          v9 = (__int64 *)(v5 + 344);
        v44 = *v9;
        ++v5[950];
        v7 = v8 | 4;
        if ( v44 )
          v7 = v8;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      ++*(_DWORD *)&Process[1].Spare2[7];
      v51 = v5[888];
      if ( v51 < 0x420 )
      {
        v52 = (unsigned __int16 **)(v5 + 525);
        v53 = 0LL;
        while ( 1 )
        {
          v54 = *v52;
          v55 = 0;
          if ( dword_140C4DF3C )
            break;
LABEL_103:
          ++v53;
          ++v52;
          if ( v53 > 1 )
          {
            v56 = v5[950];
            if ( v56 >= 0x10 )
              MiWakeModifiedPageWriter((__int64)v5, -1LL);
            if ( v5[936] - v56 >= 0x10 )
              KeSetEvent((PRKEVENT)v5 + 33, 0, 0);
            goto LABEL_108;
          }
        }
        while ( 1 )
        {
          v51 += *v54;
          if ( v51 >= 0x420 )
            break;
          ++v55;
          v54 += 8;
          if ( v55 >= dword_140C4DF3C )
            goto LABEL_103;
        }
      }
LABEL_108:
      v85 = 0LL;
      goto LABEL_117;
  }
  if ( (*(_BYTE *)(a1 + 35) & 0x40) != 0 )
    MiSetPfnRemovalRequested(a1, 0LL);
  if ( (v84 & 0x100) != 0 )
  {
    v80.LockQueue.Next = 0LL;
    v80.LockQueue.Lock = v5 + 524;
    KxAcquireQueuedSpinLock(&v80, v5 + 524, v11, v2);
  }
  else
  {
    if ( v9 != &qword_140C4CB00 )
      MiClearPfnImageVerified(a1, 12);
    v80.LockQueue.Lock = v5 + 516;
    v80.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock(&v80, v5 + 516, v11, v2);
    if ( v9 == &qword_140C4CB00 )
      goto LABEL_117;
  }
  *(_QWORD *)(a1 + 8) = -4LL;
LABEL_117:
  v23 = v84;
LABEL_118:
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 || (v57 = (v7 & 2) != 0) && (v23 & 0x800) == 0 && v83 == 2 )
  {
    v57 = (v7 & 2) != 0;
    if ( (v7 & 2) == 0 )
      MiInsertDecayClusterTimer(a1);
  }
  else
  {
    ++*v9;
  }
  v58 = v9[3];
  if ( v58 == 0xFFFFFFFFFLL )
    v9[2] = v6;
  else
    *(_QWORD *)(48 * v58 - 0x58000000000LL) ^= (v6 ^ *(_QWORD *)(48 * v58 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
  v59 = *(_BYTE *)(a1 + 34);
  if ( v9 == &qword_140C4CB00 )
  {
    *(_BYTE *)(a1 + 34) = v59 & 0xF8 | 2;
    *(_BYTE *)(a1 + 35) |= 0x10u;
    MiWakeFileOnlyReaper();
  }
  else
  {
    *(_BYTE *)(a1 + 34) = v59 ^ (v59 ^ v83) & 7;
  }
  v9[3] = v6;
  v60 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a1 |= 0xFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 24) = v58 & 0xFFFFFFFFFLL | v60 & 0xFFFFFFF000000000uLL;
  if ( v83 != 2 )
    goto LABEL_156;
  if ( v57 )
  {
    v61 = v84;
    MiUpdatePfnOnSlabStandbyList((unsigned __int64 *)a1, (v84 >> 11) & 1);
    goto LABEL_157;
  }
  v62 = *(_BYTE *)(a1 + 35);
  if ( (v62 & 8) != 0 )
    goto LABEL_156;
  v63 = dword_140C4DEC8;
  v64 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
  if ( dword_140C4DEC4 <= (unsigned int)dword_140C4DEC8 )
  {
    v65 = (char *)qword_140C4DF08 + 16 * dword_140C4DEC4;
    if ( v6 >= *(_QWORD *)v65 && (dword_140C4DEC4 == dword_140C4DEC8 || v6 < *((_QWORD *)v65 + 2)) )
      goto LABEL_149;
  }
  v66 = 0;
  if ( dword_140C4DEC8 < 0 )
LABEL_173:
    KeBugCheckEx(0x1Au, 0x6201uLL, v6, 0LL, 0LL);
  while ( 1 )
  {
    v67 = (v66 + v63) >> 1;
    v65 = (char *)qword_140C4DF08 + 16 * v67;
    if ( v6 < *(_QWORD *)v65 )
    {
      if ( !v67 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v6, (ULONG_PTR)qword_140C4DF08, 0LL);
      v63 = v67 - 1;
      goto LABEL_146;
    }
    if ( v67 == dword_140C4DEC8 || v6 < *((_QWORD *)v65 + 2) )
      break;
    v66 = v67 + 1;
LABEL_146:
    if ( v63 < v66 )
      goto LABEL_173;
  }
  dword_140C4DEC4 = (v66 + v63) >> 1;
LABEL_149:
  v68 = *((unsigned int *)v65 + 2);
  if ( qword_140C4DF10 )
    v69 = MiPageToChannel(v6);
  else
    v69 = 0;
  v70 = (_QWORD *)(*(_QWORD *)(v64 + 16) + 4544 * v68 + 24 * ((v62 & 7) + 8LL * v69));
  ++v70[407];
  v71 = v70[409];
  if ( v71 == 0xFFFFFFFFFLL )
  {
    v70[408] = v6;
  }
  else
  {
    v72 = 48 * v71 - 0x58000000000LL;
    v73 = (*(_QWORD *)v72 ^ (v6 << 28)) & 0xFFFFFFFFFLL;
    *(_BYTE *)(v72 + 39) = v6;
    *(_QWORD *)v72 = (v6 << 28) ^ v73;
  }
  *(_QWORD *)a1 |= 0xFFFFFFF000000000uLL;
  *(_WORD *)(a1 + 36) = v71;
  v74 = (*(_QWORD *)(a1 + 24) ^ (v71 >> 16 << 36)) & 0xFFFFF000000000LL;
  *(_BYTE *)(a1 + 39) = -1;
  *(_QWORD *)(a1 + 24) ^= v74;
  v70[409] = v6;
LABEL_156:
  v61 = v84;
LABEL_157:
  if ( v85 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v85 + 72));
  if ( v61 >= 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v80, retaddr);
      goto LABEL_166;
    }
    _m_prefetchw(&v80);
    Next = (__int64)v80.LockQueue.Next;
    if ( v80.LockQueue.Next )
    {
LABEL_165:
      v80.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    }
    else if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                              (volatile signed __int64 *)v80.LockQueue.Lock,
                                              0LL,
                                              (signed __int64)&v80) != &v80 )
    {
      Next = KxWaitForLockChainValid((__int64 *)&v80);
      goto LABEL_165;
    }
LABEL_166:
    v76 = KeGetCurrentPrcb();
    v77 = v76->SchedulerAssist;
    if ( v77 )
    {
      if ( v76->NestingLevel <= 1u )
      {
        v78 = v77[6] - 1;
        v77[6] = v78;
        if ( !v78 )
          KiRemoveSystemWorkPriorityKick(v76);
      }
    }
  }
  if ( (v7 & 4) != 0 )
    KeSetEvent((PRKEVENT)(v5 + 110), 0, 0);
}
