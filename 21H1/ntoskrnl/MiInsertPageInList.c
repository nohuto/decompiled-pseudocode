/*
 * XREFs of MiInsertPageInList @ 0x14028EB00
 * Callers:
 *     MiReservePageFileSpaceForPage @ 0x140227DE0 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x140228A50 (MiActOnPte.c)
 *     MiRelinkStandbyPage @ 0x14023F234 (MiRelinkStandbyPage.c)
 *     MiPfnReferenceCountIsZero @ 0x14028D5B0 (MiPfnReferenceCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14028D680 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnShareCountIsZero @ 0x14028E490 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MiOutSwapWorkingSetPte @ 0x140290570 (MiOutSwapWorkingSetPte.c)
 *     MiDeletePteList @ 0x1402939C0 (MiDeletePteList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeletePteRun @ 0x140298E00 (MiDeletePteRun.c)
 *     MiCreateDecayPfn @ 0x1402FF368 (MiCreateDecayPfn.c)
 *     MiReplaceTransitionPage @ 0x14034B1EC (MiReplaceTransitionPage.c)
 *     MiGatherMappedPages @ 0x14035131C (MiGatherMappedPages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403524CC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140381E20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x140383580 (MiBuildReservationCluster.c)
 *     MiReturnBadPagesToBadList @ 0x1405294D8 (MiReturnBadPagesToBadList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140529E10 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMarkFileOnlyPfnBad @ 0x14053BBE8 (MiMarkFileOnlyPfnBad.c)
 *     MiFreeModifiedReservations @ 0x14053DC04 (MiFreeModifiedReservations.c)
 *     MiHandleForkTransitionPte @ 0x140554F74 (MiHandleForkTransitionPte.c)
 *     MiTransferPartitionPageRun @ 0x14055D320 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x14055DE44 (MiMakePageBad.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWakeModifiedPageWriter @ 0x1402D0644 (MiWakeModifiedPageWriter.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     MiInsertDecayClusterTimer @ 0x14030009C (MiInsertDecayClusterTimer.c)
 *     MiUpdatePfnOnSlabStandbyList @ 0x140305BA0 (MiUpdatePfnOnSlabStandbyList.c)
 *     MiPageToChannel @ 0x140346578 (MiPageToChannel.c)
 *     MiRestoreTransitionPte @ 0x140352BF0 (MiRestoreTransitionPte.c)
 *     MiClearPfnImageVerified @ 0x140353638 (MiClearPfnImageVerified.c)
 *     MiUpdateAvailableEvents @ 0x1403ACE14 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiWakeFileOnlyReaper @ 0x14053CD94 (MiWakeFileOnlyReaper.c)
 *     MiSetPfnRemovalRequested @ 0x140549908 (MiSetPfnRemovalRequested.c)
 *     MiGetSlabAllocatorStandbyList @ 0x14054D394 (MiGetSlabAllocatorStandbyList.c)
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
  __int64 v12; // rdx
  char v13; // cl
  __int64 v14; // rax
  int v15; // eax
  _KSPIN_LOCK_QUEUE *v16; // r11
  __int64 v17; // rcx
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  struct _KEVENT *v20; // rbx
  unsigned __int64 v21; // r12
  __int64 v22; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v25; // eax
  _QWORD *v26; // rdx
  _KSPIN_LOCK_QUEUE *v27; // r11
  __int64 v28; // rax
  __int64 v29; // r12
  int v30; // eax
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
  unsigned __int64 v48; // r8
  unsigned __int16 **v49; // r10
  __int64 v50; // r11
  unsigned __int16 *v51; // rcx
  unsigned int v52; // edx
  unsigned __int64 v53; // rbx
  BOOL v54; // ebx
  __int64 v55; // r12
  char v56; // al
  __int64 v57; // rax
  char v58; // r12
  char v59; // r15
  int v60; // edx
  __int64 v61; // r12
  char *v62; // rax
  int v63; // r8d
  int v64; // ecx
  __int64 v65; // rbx
  unsigned int v66; // r8d
  _QWORD *v67; // r9
  unsigned __int64 v68; // r8
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 Next; // rax
  struct _KPRCB *v72; // rcx
  _DWORD *v73; // rdx
  int v74; // eax
  signed __int32 v75[8]; // [rsp+0h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v76; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]
  int v79; // [rsp+A0h] [rbp+8h]
  unsigned int v80; // [rsp+A8h] [rbp+10h]
  __int64 v81; // [rsp+B8h] [rbp+20h]

  v80 = a2;
  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2;
  memset(&v76, 0, sizeof(v76));
  v5 = *(ULONG_PTR **)(qword_140C4E588 + 8 * ((v2 >> 39) & 0x3FF));
  v6 = (__int64)(a1 + 0x58000000000LL) / 48;
  v7 = (v2 & 0x2000000000000LL) != 0;
  if ( v6 < qword_140C4E8E0 || v6 >= qword_140C4E8E0 + 2048 )
  {
    if ( byte_140C51F5E && _bittest64((const signed __int64 *)qword_140C52488, v6 >> 9) )
      v7 |= 2u;
  }
  else
  {
    v7 |= 8u;
  }
  v8 = v7;
  if ( (a2 & 8) != 0 && (v7 & 1) != 0 && byte_140C4DE28 )
  {
    v3 = a2 & 0xFFF3 | 4;
    v80 = a2 & 0xFFFFFFF3 | 4;
    *(_BYTE *)(a1 + 34) &= ~0x10u;
  }
  if ( (v3 & 4) != 0 )
  {
    v9 = (__int64 *)(v5 + 296);
    if ( (v7 & 1) != 0 && (*(_BYTE *)(a1 + 35) & 0x40) != 0 )
    {
      v5 = &MiSystemPartition;
      v9 = &qword_140C4CA00;
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
    v3 = v80;
    v9 = (__int64 *)SlabAllocatorStandbyList;
  }
  else
  {
    v9 = (__int64 *)(v5 + 512);
  }
  v11 = *((unsigned int *)v9 + 2);
  v79 = *((_DWORD *)v9 + 2);
  v12 = v7 & 1;
  if ( (v7 & 1) == 0 )
  {
    _InterlockedOr(v75, v12);
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  }
  v81 = 0LL;
  switch ( (_DWORD)v11 )
  {
    case 2:
      v13 = *(_BYTE *)(a1 + 35);
      if ( (v13 & 0x40) != 0 && (v7 & 2) == 0 )
      {
        MiRestoreTransitionPte(a1);
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
      v14 = (v13 & 8) != 0 ? 5LL : v13 & 7;
      v9 = (__int64 *)&v5[4 * v14 + 304 + v14];
      if ( (v13 & 8) != 0 || (v7 & 2) != 0 )
        goto LABEL_51;
      v15 = MI_PFN_IS_PROTO(a1, v12, v11);
      v17 = 544LL;
      if ( !v15 )
        v17 = 632LL;
      _InterlockedIncrement64((volatile signed __int64 *)&v5[v17]);
      memset(&LockHandle, 0, sizeof(LockHandle));
      v18 = _InterlockedIncrement64((volatile signed __int64 *)v5 + 888);
      if ( v18 <= 0x420 )
      {
        switch ( v18 )
        {
          case 0xA0uLL:
            v19 = 621LL;
LABEL_47:
            LockHandle.LockQueue.Next = v16;
            LockHandle.LockQueue.Lock = v5 + 616;
            v20 = (struct _KEVENT *)&v5[v19];
            KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v5 + 616);
            KeSetEvent(v20, 0, 0);
            ++v20[1].Header.LockNV;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            break;
          case 0x420uLL:
            v19 = 625LL;
            goto LABEL_47;
          case 0x22uLL:
            v19 = 617LL;
            goto LABEL_47;
        }
      }
      v21 = v18 - 1;
      if ( v21 == v5[646] || v21 == v5[647] )
        MiUpdateAvailableEvents(v5);
LABEL_51:
      LOWORD(v22) = v80;
      if ( (v80 & 0x80u) != 0 )
        goto LABEL_118;
      v76.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 4);
      v76.LockQueue.Next = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v25 = SchedulerAssist[6];
          SchedulerAssist[6] = v25 + 1;
          if ( v25 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v76, v9 + 4);
      }
      else
      {
        v26 = (_QWORD *)_InterlockedExchange64(v9 + 4, (__int64)&v76);
        if ( v26 )
          KxWaitForLockOwnerShip((__int64)&v76, v26);
      }
      goto LABEL_117;
    case 3:
      if ( (unsigned int)MI_PFN_IS_PROTO(a1, v12, v11) )
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 544);
      else
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 632);
      goto LABEL_72;
    case 4:
      v28 = *(_QWORD *)(a1 + 16);
      if ( qword_140C4DE80 && (v28 & 0x10) == 0 )
        v28 &= ~qword_140C4DE80;
      v29 = *(_QWORD *)(v28 >> 16);
      v81 = v29;
      v30 = MI_PFN_IS_PROTO(a1, v12, v11);
      v32 = 544LL;
      if ( !v30 )
        v32 = 632LL;
      _InterlockedIncrement64((volatile signed __int64 *)&v5[v32]);
      v76.LockQueue.Next = v31;
      v76.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 4);
      KxAcquireQueuedSpinLock((__int64)&v76, v9 + 4);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v29 + 72));
      if ( (*(_DWORD *)(v29 + 56) & 8) != 0 )
        goto LABEL_117;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v29 + 72));
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v76);
      v8 = v7;
      v27 = 0LL;
      v79 = 3;
LABEL_72:
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 936);
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
      {
        v42 = *(unsigned int *)(v5[856] + 24);
        v76.LockQueue.Next = v27;
        v9 = (__int64 *)&v5[4 * v42 + 432 + v42];
        v76.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 4);
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
          KiAcquireQueuedSpinLockInstrumented(&v76, v9 + 4);
        }
        else
        {
          v46 = (_QWORD *)_InterlockedExchange64(v9 + 4, (__int64)&v76);
          if ( v46 )
            KxWaitForLockOwnerShip((__int64)&v76, v46);
        }
        *(_BYTE *)(a1 + 39) ^= (*(_BYTE *)(a1 + 39) ^ v42) & 0xF;
      }
      else
      {
        if ( (v80 & 0x80u) == 0 )
        {
          v33 = (unsigned __int64 *)(v9 + 4);
          v76.LockQueue.Next = v27;
          v76.LockQueue.Lock = v33;
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
            KiAcquireQueuedSpinLockInstrumented(&v76, v33);
          }
          else
          {
            v37 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v33, (__int64)&v76);
            if ( v37 )
              KxWaitForLockOwnerShip((__int64)&v76, v37);
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
      v48 = v5[888];
      if ( v48 < 0x420 )
      {
        v49 = (unsigned __int16 **)(v5 + 525);
        v50 = 0LL;
        while ( 1 )
        {
          v51 = *v49;
          v52 = 0;
          if ( dword_140C4DE3C )
            break;
LABEL_103:
          ++v50;
          ++v49;
          if ( v50 > 1 )
          {
            v53 = v5[950];
            if ( v53 >= 0x10 )
              MiWakeModifiedPageWriter(v5, -1LL);
            if ( v5[936] - v53 >= 0x10 )
              KeSetEvent((PRKEVENT)v5 + 33, 0, 0);
            goto LABEL_108;
          }
        }
        while ( 1 )
        {
          v48 += *v51;
          if ( v48 >= 0x420 )
            break;
          ++v52;
          v51 += 8;
          if ( v52 >= dword_140C4DE3C )
            goto LABEL_103;
        }
      }
LABEL_108:
      v81 = 0LL;
      goto LABEL_117;
  }
  if ( (*(_BYTE *)(a1 + 35) & 0x40) != 0 )
    MiSetPfnRemovalRequested(a1, 0LL);
  if ( (v80 & 0x100) != 0 )
  {
    v76.LockQueue.Next = 0LL;
    v76.LockQueue.Lock = v5 + 524;
    KxAcquireQueuedSpinLock((__int64)&v76, (volatile __int64 *)v5 + 524);
  }
  else
  {
    if ( v9 != &qword_140C4CA00 )
      MiClearPfnImageVerified(a1, 12LL);
    v76.LockQueue.Lock = v5 + 516;
    v76.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock((__int64)&v76, (volatile __int64 *)v5 + 516);
    if ( v9 == &qword_140C4CA00 )
      goto LABEL_117;
  }
  *(_QWORD *)(a1 + 8) = -4LL;
LABEL_117:
  LOWORD(v22) = v80;
LABEL_118:
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 || (v54 = (v7 & 2) != 0) && (v22 & 0x800) == 0 && v79 == 2 )
  {
    v54 = (v7 & 2) != 0;
    if ( (v7 & 2) == 0 )
      MiInsertDecayClusterTimer(a1);
  }
  else
  {
    ++*v9;
  }
  v55 = v9[3];
  if ( v55 == 0xFFFFFFFFFLL )
  {
    v9[2] = v6;
  }
  else
  {
    v22 = 48 * v55 - 0x58000000000LL;
    *(_QWORD *)v22 ^= (v6 ^ *(_QWORD *)v22) & 0xFFFFFFFFFLL;
  }
  v56 = *(_BYTE *)(a1 + 34);
  if ( v9 == &qword_140C4CA00 )
  {
    *(_BYTE *)(a1 + 34) = v56 & 0xF8 | 2;
    *(_BYTE *)(a1 + 35) |= 0x10u;
    MiWakeFileOnlyReaper();
  }
  else
  {
    *(_BYTE *)(a1 + 34) = v56 ^ (v56 ^ v79) & 7;
  }
  v9[3] = v6;
  v57 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a1 |= 0xFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 24) = v55 & 0xFFFFFFFFFLL | v57 & 0xFFFFFFF000000000uLL;
  if ( v79 != 2 )
    goto LABEL_156;
  if ( v54 )
  {
    v58 = v80;
    MiUpdatePfnOnSlabStandbyList(a1, (v80 >> 11) & 1);
    goto LABEL_157;
  }
  v59 = *(_BYTE *)(a1 + 35);
  if ( (v59 & 8) != 0 )
    goto LABEL_156;
  v60 = dword_140C4DDC8;
  v61 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
  if ( dword_140C4DDC4 <= (unsigned int)dword_140C4DDC8 )
  {
    v62 = (char *)qword_140C4DE08 + 16 * dword_140C4DDC4;
    if ( v6 >= *(_QWORD *)v62 && (dword_140C4DDC4 == dword_140C4DDC8 || v6 < *((_QWORD *)v62 + 2)) )
      goto LABEL_149;
  }
  v63 = 0;
  if ( dword_140C4DDC8 < 0 )
LABEL_173:
    KeBugCheckEx(0x1Au, 0x6201uLL, v6, 0LL, 0LL);
  while ( 1 )
  {
    v64 = (v63 + v60) >> 1;
    v62 = (char *)qword_140C4DE08 + 16 * v64;
    if ( v6 < *(_QWORD *)v62 )
    {
      if ( !v64 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v6, (ULONG_PTR)qword_140C4DE08, 0LL);
      v60 = v64 - 1;
      goto LABEL_146;
    }
    if ( v64 == dword_140C4DDC8 || v6 < *((_QWORD *)v62 + 2) )
      break;
    v63 = v64 + 1;
LABEL_146:
    if ( v60 < v63 )
      goto LABEL_173;
  }
  dword_140C4DDC4 = (v63 + v60) >> 1;
LABEL_149:
  v65 = *((unsigned int *)v62 + 2);
  if ( qword_140C4DE10 )
    v66 = MiPageToChannel(v6);
  else
    v66 = 0;
  v22 = *(_QWORD *)(v61 + 16) + 4544 * v65;
  v67 = (_QWORD *)(v22 + 24 * ((v59 & 7) + 8LL * v66));
  ++v67[407];
  v68 = v67[409];
  if ( v68 == 0xFFFFFFFFFLL )
  {
    v67[408] = v6;
  }
  else
  {
    v22 = 48 * v68 - 0x58000000000LL;
    v69 = (*(_QWORD *)v22 ^ (v6 << 28)) & 0xFFFFFFFFFLL;
    *(_BYTE *)(v22 + 39) = v6;
    *(_QWORD *)v22 = (v6 << 28) ^ v69;
  }
  *(_QWORD *)a1 |= 0xFFFFFFF000000000uLL;
  *(_WORD *)(a1 + 36) = v68;
  v70 = (*(_QWORD *)(a1 + 24) ^ (v68 >> 16 << 36)) & 0xFFFFF000000000LL;
  *(_BYTE *)(a1 + 39) = -1;
  *(_QWORD *)(a1 + 24) ^= v70;
  v67[409] = v6;
LABEL_156:
  v58 = v80;
LABEL_157:
  if ( v81 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v81 + 72));
  if ( v58 >= 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v76, retaddr);
      goto LABEL_166;
    }
    _m_prefetchw(&v76);
    Next = (__int64)v76.LockQueue.Next;
    if ( v76.LockQueue.Next )
    {
LABEL_165:
      v76.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    }
    else if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                              (volatile signed __int64 *)v76.LockQueue.Lock,
                                              0LL,
                                              (signed __int64)&v76) != &v76 )
    {
      Next = KxWaitForLockChainValid(&v76, v22);
      goto LABEL_165;
    }
LABEL_166:
    v72 = KeGetCurrentPrcb();
    v73 = v72->SchedulerAssist;
    if ( v73 )
    {
      if ( v72->NestingLevel <= 1u )
      {
        v74 = v73[6] - 1;
        v73[6] = v74;
        if ( !v74 )
          KiRemoveSystemWorkPriorityKick(v72);
      }
    }
  }
  if ( (v7 & 4) != 0 )
    KeSetEvent((PRKEVENT)(v5 + 110), 0, 0);
}
