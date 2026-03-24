/*
 * XREFs of MiInsertPageInList @ 0x140326800
 * Callers:
 *     MiDeletePteList @ 0x140231820 (MiDeletePteList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234F10 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeletePteRun @ 0x140236C60 (MiDeletePteRun.c)
 *     MiActOnPte @ 0x14023C5F0 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x14023D660 (MiReservePageFileSpaceForPage.c)
 *     MiGatherMappedPages @ 0x140255BC8 (MiGatherMappedPages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402696C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReplaceTransitionPage @ 0x14026D370 (MiReplaceTransitionPage.c)
 *     MiRelinkStandbyPage @ 0x140271FD8 (MiRelinkStandbyPage.c)
 *     MiCreateDecayPfn @ 0x1402AECD8 (MiCreateDecayPfn.c)
 *     MiPfnReferenceCountIsZero @ 0x140325DF0 (MiPfnReferenceCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140325EC0 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnShareCountIsZero @ 0x140326190 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     MiOutSwapWorkingSetPte @ 0x14032CEB0 (MiOutSwapWorkingSetPte.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385120 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x140386DF0 (MiBuildReservationCluster.c)
 *     MiReturnBadPagesToBadList @ 0x14052EFF8 (MiReturnBadPagesToBadList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052F930 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMarkFileOnlyPfnBad @ 0x140541708 (MiMarkFileOnlyPfnBad.c)
 *     MiFreeModifiedReservations @ 0x140543724 (MiFreeModifiedReservations.c)
 *     MiHandleForkTransitionPte @ 0x14055AA64 (MiHandleForkTransitionPte.c)
 *     MiTransferPartitionPageRun @ 0x140562E10 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x140563934 (MiMakePageBad.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022EEA0 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     MiRestoreTransitionPte @ 0x1402A2DD0 (MiRestoreTransitionPte.c)
 *     MiClearPfnImageVerified @ 0x1402A3214 (MiClearPfnImageVerified.c)
 *     MiInsertDecayClusterTimer @ 0x1402B01D4 (MiInsertDecayClusterTimer.c)
 *     MiUpdatePfnOnSlabStandbyList @ 0x1402B7E80 (MiUpdatePfnOnSlabStandbyList.c)
 *     MiPageToChannel @ 0x1402FF108 (MiPageToChannel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140314D90 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     MiWakeModifiedPageWriter @ 0x14035BB54 (MiWakeModifiedPageWriter.c)
 *     MiUpdateAvailableEvents @ 0x1403B6A44 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1405163CC (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051648C (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiWakeFileOnlyReaper @ 0x1405428B4 (MiWakeFileOnlyReaper.c)
 *     MiSetPfnRemovalRequested @ 0x14054F428 (MiSetPfnRemovalRequested.c)
 *     MiGetSlabAllocatorStandbyList @ 0x140552E84 (MiGetSlabAllocatorStandbyList.c)
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
  unsigned __int64 v11; // r8
  char v12; // cl
  __int64 v13; // rax
  int v14; // eax
  _KSPIN_LOCK_QUEUE *v15; // r11
  __int64 v16; // rcx
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  struct _KEVENT *v19; // rbx
  unsigned __int64 v20; // r12
  __int64 v21; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v24; // eax
  _QWORD *v25; // rdx
  _KSPIN_LOCK_QUEUE *v26; // r11
  __int64 v27; // rax
  __int64 v28; // r12
  int v29; // eax
  __int64 v30; // r8
  _KSPIN_LOCK_QUEUE *v31; // r11
  __int64 v32; // rcx
  unsigned __int64 *v33; // r15
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  int v36; // eax
  _QWORD *v37; // rdx
  unsigned __int16 v38; // cx
  char v39; // al
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rbx
  struct _KPRCB *v43; // rcx
  _DWORD *v44; // rdx
  int v45; // eax
  _QWORD *v46; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int16 **v48; // r10
  __int64 v49; // r11
  unsigned __int16 *v50; // rcx
  unsigned int v51; // edx
  unsigned __int64 v52; // rbx
  BOOL v53; // ebx
  __int64 v54; // r12
  char v55; // al
  __int64 v56; // rax
  char v57; // r12
  char v58; // r15
  int v59; // edx
  __int64 v60; // r12
  char *v61; // rax
  int v62; // r8d
  int v63; // ecx
  __int64 v64; // rbx
  unsigned int v65; // r8d
  unsigned __int64 v66; // r8
  __int64 v67; // rcx
  __int64 Next; // rax
  struct _KPRCB *v69; // rcx
  _DWORD *v70; // rdx
  int v71; // eax
  signed __int32 v72[8]; // [rsp+0h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v73; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v76; // [rsp+A0h] [rbp+8h]
  unsigned int v77; // [rsp+A8h] [rbp+10h]
  __int64 v78; // [rsp+B8h] [rbp+20h]

  v77 = a2;
  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2;
  memset(&v73, 0, sizeof(v73));
  v5 = *(ULONG_PTR **)(qword_140C4E648 + 8 * ((v2 >> 39) & 0x3FF));
  v6 = (__int64)(a1 + 0x58000000000LL) / 48;
  v7 = (v2 & 0x2000000000000LL) != 0;
  if ( v6 < qword_140C4E9A0 || v6 >= qword_140C4E9A0 + 2048 )
  {
    if ( byte_140C5205E && _bittest64((const signed __int64 *)qword_140C52588, v6 >> 9) )
      v7 |= 2u;
  }
  else
  {
    v7 |= 8u;
  }
  v8 = v7;
  if ( (a2 & 8) != 0 && (v7 & 1) != 0 && byte_140C4DEE8 )
  {
    v3 = a2 & 0xFFF3 | 4;
    v77 = a2 & 0xFFFFFFF3 | 4;
    *(_BYTE *)(a1 + 34) &= ~0x10u;
  }
  if ( (v3 & 4) != 0 )
  {
    v9 = (__int64 *)(v5 + 296);
    if ( (v7 & 1) != 0 && (*(_BYTE *)(a1 + 35) & 0x40) != 0 )
    {
      v5 = &MiSystemPartition;
      v9 = &qword_140C4CAC0;
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
    v3 = v77;
    v9 = (__int64 *)SlabAllocatorStandbyList;
  }
  else
  {
    v9 = (__int64 *)(v5 + 512);
  }
  v11 = *((unsigned int *)v9 + 2);
  v76 = *((_DWORD *)v9 + 2);
  if ( (v7 & 1) == 0 )
  {
    _InterlockedOr(v72, 0);
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  }
  v78 = 0LL;
  switch ( (_DWORD)v11 )
  {
    case 2:
      v12 = *(_BYTE *)(a1 + 35);
      if ( (v12 & 0x40) != 0 && (v7 & 2) == 0 )
      {
        MiRestoreTransitionPte(a1, 0);
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
      v16 = 544LL;
      if ( !v14 )
        v16 = 632LL;
      _InterlockedIncrement64((volatile signed __int64 *)&v5[v16]);
      memset(&LockHandle, 0, sizeof(LockHandle));
      v17 = _InterlockedIncrement64((volatile signed __int64 *)v5 + 888);
      if ( v17 <= 0x420 )
      {
        switch ( v17 )
        {
          case 0xA0uLL:
            v18 = 621LL;
LABEL_47:
            LockHandle.LockQueue.Next = v15;
            LockHandle.LockQueue.Lock = v5 + 616;
            v19 = (struct _KEVENT *)&v5[v18];
            KxAcquireQueuedSpinLock(&LockHandle, v5 + 616, v11);
            KeSetEvent(v19, 0, 0);
            ++v19[1].Header.LockNV;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            break;
          case 0x420uLL:
            v18 = 625LL;
            goto LABEL_47;
          case 0x22uLL:
            v18 = 617LL;
            goto LABEL_47;
        }
      }
      v20 = v17 - 1;
      if ( v20 == v5[646] || v20 == v5[647] )
        MiUpdateAvailableEvents(v5);
LABEL_51:
      v21 = v77;
      if ( (v77 & 0x80u) != 0 )
        goto LABEL_118;
      v73.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 4);
      v73.LockQueue.Next = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v24 = SchedulerAssist[6];
          SchedulerAssist[6] = v24 + 1;
          if ( v24 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v73, v9 + 4);
      }
      else
      {
        v25 = (_QWORD *)_InterlockedExchange64(v9 + 4, (__int64)&v73);
        if ( v25 )
          KxWaitForLockOwnerShip((__int64)&v73, v25);
      }
      goto LABEL_117;
    case 3:
      if ( (unsigned int)MI_PFN_IS_PROTO(a1) )
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 544);
      else
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 632);
      goto LABEL_72;
    case 4:
      v27 = *(_QWORD *)(a1 + 16);
      if ( qword_140C4DF40 && (v27 & 0x10) == 0 )
        v27 &= ~qword_140C4DF40;
      v28 = *(_QWORD *)(v27 >> 16);
      v78 = v28;
      v29 = MI_PFN_IS_PROTO(a1);
      v32 = 544LL;
      if ( !v29 )
        v32 = 632LL;
      _InterlockedIncrement64((volatile signed __int64 *)&v5[v32]);
      v73.LockQueue.Next = v31;
      v73.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 4);
      KxAcquireQueuedSpinLock(&v73, v9 + 4, v30);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v28 + 72));
      if ( (*(_DWORD *)(v28 + 56) & 8) != 0 )
        goto LABEL_117;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v28 + 72));
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v73);
      v8 = v7;
      v26 = 0LL;
      v76 = 3;
LABEL_72:
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 936);
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
      {
        v42 = *(unsigned int *)(v5[856] + 24);
        v73.LockQueue.Next = v26;
        v9 = (__int64 *)&v5[4 * v42 + 432 + v42];
        v73.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 4);
        v43 = KeGetCurrentPrcb();
        v44 = v43->SchedulerAssist;
        if ( v44 )
        {
          if ( v43->NestingLevel <= 1u )
          {
            v45 = v44[6];
            v44[6] = v45 + 1;
            if ( v45 == -1 )
              KiRemoveSystemWorkPriorityKick(v43);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v73, v9 + 4);
        }
        else
        {
          v46 = (_QWORD *)_InterlockedExchange64(v9 + 4, (__int64)&v73);
          if ( v46 )
            KxWaitForLockOwnerShip((__int64)&v73, v46);
        }
        *(_BYTE *)(a1 + 39) ^= (*(_BYTE *)(a1 + 39) ^ v42) & 0xF;
      }
      else
      {
        if ( (v77 & 0x80u) == 0 )
        {
          v33 = (unsigned __int64 *)(v9 + 4);
          v73.LockQueue.Next = v26;
          v73.LockQueue.Lock = v33;
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          if ( v35 )
          {
            if ( v34->NestingLevel <= 1u )
            {
              v36 = v35[6];
              v35[6] = v36 + 1;
              if ( v36 == -1 )
                KiRemoveSystemWorkPriorityKick(v34);
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&v73, v33);
          }
          else
          {
            v37 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v33, (__int64)&v73);
            if ( v37 )
              KxWaitForLockOwnerShip((__int64)&v73, v37);
          }
        }
        v38 = *(_QWORD *)(a1 + 16);
        v39 = (unsigned __int8)v38 >> 1;
        v40 = v38 >> 12;
        if ( (v39 & 1) != 0 || (_DWORD)v40 == *((_DWORD *)v5 + 289) )
          v9 = (__int64 *)&v5[4 * v40 + 352 + v40];
        else
          v9 = (__int64 *)(v5 + 344);
        v41 = *v9;
        ++v5[950];
        v7 = v8 | 4;
        if ( v41 )
          v7 = v8;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      ++*(_DWORD *)&Process[1].Spare2[7];
      v11 = v5[888];
      if ( v11 < 0x420 )
      {
        v2 = (unsigned int)dword_140C4DEFC;
        v48 = (unsigned __int16 **)(v5 + 525);
        v49 = 0LL;
        while ( 1 )
        {
          v50 = *v48;
          v51 = 0;
          if ( dword_140C4DEFC )
            break;
LABEL_103:
          ++v49;
          ++v48;
          if ( v49 > 1 )
          {
            v52 = v5[950];
            if ( v52 >= 0x10 )
              MiWakeModifiedPageWriter(v5, -1LL);
            if ( v5[936] - v52 >= 0x10 )
              KeSetEvent((PRKEVENT)v5 + 33, 0, 0);
            goto LABEL_108;
          }
        }
        while ( 1 )
        {
          v11 += *v50;
          if ( v11 >= 0x420 )
            break;
          ++v51;
          v50 += 8;
          if ( v51 >= dword_140C4DEFC )
            goto LABEL_103;
        }
      }
LABEL_108:
      v78 = 0LL;
      goto LABEL_117;
  }
  if ( (*(_BYTE *)(a1 + 35) & 0x40) != 0 )
    MiSetPfnRemovalRequested(a1, 0LL);
  if ( (v77 & 0x100) != 0 )
  {
    v73.LockQueue.Next = 0LL;
    v73.LockQueue.Lock = v5 + 524;
    KxAcquireQueuedSpinLock(&v73, v5 + 524, v11);
  }
  else
  {
    if ( v9 != &qword_140C4CAC0 )
      MiClearPfnImageVerified(a1, 12LL, v11);
    v73.LockQueue.Lock = v5 + 516;
    v73.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock(&v73, v5 + 516, v11);
    if ( v9 == &qword_140C4CAC0 )
      goto LABEL_117;
  }
  *(_QWORD *)(a1 + 8) = -4LL;
LABEL_117:
  v21 = v77;
LABEL_118:
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 || (v53 = (v7 & 2) != 0) && (v21 & 0x800) == 0 && v76 == 2 )
  {
    v53 = (v7 & 2) != 0;
    if ( (v7 & 2) == 0 )
      MiInsertDecayClusterTimer(a1);
  }
  else
  {
    ++*v9;
  }
  v54 = v9[3];
  if ( v54 == 0xFFFFFFFFFLL )
  {
    v9[2] = v6;
  }
  else
  {
    v21 = 48 * v54 - 0x58000000000LL;
    *(_QWORD *)v21 ^= (v6 ^ *(_QWORD *)v21) & 0xFFFFFFFFFLL;
  }
  v55 = *(_BYTE *)(a1 + 34);
  if ( v9 == &qword_140C4CAC0 )
  {
    *(_BYTE *)(a1 + 34) = v55 & 0xF8 | 2;
    *(_BYTE *)(a1 + 35) |= 0x10u;
    MiWakeFileOnlyReaper();
  }
  else
  {
    *(_BYTE *)(a1 + 34) = v55 ^ (v55 ^ v76) & 7;
  }
  v9[3] = v6;
  v56 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a1 |= 0xFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 24) = v54 & 0xFFFFFFFFFLL | v56 & 0xFFFFFFF000000000uLL;
  if ( v76 != 2 )
    goto LABEL_156;
  if ( v53 )
  {
    v57 = v77;
    MiUpdatePfnOnSlabStandbyList((unsigned __int64 *)a1, (v77 >> 11) & 1);
    goto LABEL_157;
  }
  v58 = *(_BYTE *)(a1 + 35);
  if ( (v58 & 8) != 0 )
    goto LABEL_156;
  v59 = dword_140C4DE88;
  v60 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
  if ( dword_140C4DE84 <= (unsigned int)dword_140C4DE88 )
  {
    v61 = (char *)qword_140C4DEC8 + 16 * dword_140C4DE84;
    if ( v6 >= *(_QWORD *)v61 && (dword_140C4DE84 == dword_140C4DE88 || v6 < *((_QWORD *)v61 + 2)) )
      goto LABEL_149;
  }
  v62 = 0;
  if ( dword_140C4DE88 < 0 )
LABEL_173:
    KeBugCheckEx(0x1Au, 0x6201uLL, v6, 0LL, 0LL);
  while ( 1 )
  {
    v63 = (v62 + v59) >> 1;
    v61 = (char *)qword_140C4DEC8 + 16 * v63;
    if ( v6 < *(_QWORD *)v61 )
    {
      if ( !v63 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v6, (ULONG_PTR)qword_140C4DEC8, 0LL);
      v59 = v63 - 1;
      goto LABEL_146;
    }
    if ( v63 == dword_140C4DE88 || v6 < *((_QWORD *)v61 + 2) )
      break;
    v62 = v63 + 1;
LABEL_146:
    if ( v59 < v62 )
      goto LABEL_173;
  }
  dword_140C4DE84 = (v62 + v59) >> 1;
LABEL_149:
  v64 = *((unsigned int *)v61 + 2);
  if ( qword_140C4DED0 )
    v65 = MiPageToChannel(v6);
  else
    v65 = 0;
  v21 = *(_QWORD *)(v60 + 16) + 4544 * v64;
  v2 = v21 + 24 * ((v58 & 7) + 8LL * v65);
  ++*(_QWORD *)(v2 + 3256);
  v66 = *(_QWORD *)(v2 + 3272);
  if ( v66 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v2 + 3264) = v6;
  }
  else
  {
    v21 = 48 * v66 - 0x58000000000LL;
    v67 = (*(_QWORD *)v21 ^ (v6 << 28)) & 0xFFFFFFFFFLL;
    *(_BYTE *)(v21 + 39) = v6;
    *(_QWORD *)v21 = (v6 << 28) ^ v67;
  }
  *(_QWORD *)a1 |= 0xFFFFFFF000000000uLL;
  *(_WORD *)(a1 + 36) = v66;
  v11 = (*(_QWORD *)(a1 + 24) ^ (v66 >> 16 << 36)) & 0xFFFFF000000000LL;
  *(_BYTE *)(a1 + 39) = -1;
  *(_QWORD *)(a1 + 24) ^= v11;
  *(_QWORD *)(v2 + 3272) = v6;
LABEL_156:
  v57 = v77;
LABEL_157:
  if ( v78 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v78 + 72));
  if ( v57 >= 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v73, retaddr);
      goto LABEL_166;
    }
    _m_prefetchw(&v73);
    Next = (__int64)v73.LockQueue.Next;
    if ( v73.LockQueue.Next )
    {
LABEL_165:
      v73.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    }
    else if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                              (volatile signed __int64 *)v73.LockQueue.Lock,
                                              0LL,
                                              (signed __int64)&v73) != &v73 )
    {
      Next = KxWaitForLockChainValid((__int64 *)&v73, v21, v11, v2);
      goto LABEL_165;
    }
LABEL_166:
    v69 = KeGetCurrentPrcb();
    v70 = v69->SchedulerAssist;
    if ( v70 )
    {
      if ( v69->NestingLevel <= 1u )
      {
        v71 = v70[6] - 1;
        v70[6] = v71;
        if ( !v71 )
          KiRemoveSystemWorkPriorityKick(v69);
      }
    }
  }
  if ( (v7 & 4) != 0 )
    KeSetEvent((PRKEVENT)(v5 + 110), 0, 0);
}
