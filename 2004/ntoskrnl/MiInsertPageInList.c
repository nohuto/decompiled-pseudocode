/*
 * XREFs of MiInsertPageInList @ 0x140235AB0
 * Callers:
 *     MiPfnReferenceCountIsZero @ 0x140234560 (MiPfnReferenceCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140234630 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnShareCountIsZero @ 0x140235440 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     MiOutSwapWorkingSetPte @ 0x140237520 (MiOutSwapWorkingSetPte.c)
 *     MiDeletePteList @ 0x14023A990 (MiDeletePteList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 *     MiReservePageFileSpaceForPage @ 0x1402BAA60 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x1402BB6D0 (MiActOnPte.c)
 *     MiRelinkStandbyPage @ 0x1402D1FBC (MiRelinkStandbyPage.c)
 *     MiGatherMappedPages @ 0x1402F5340 (MiGatherMappedPages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402F64EC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReplaceTransitionPage @ 0x14031BEAC (MiReplaceTransitionPage.c)
 *     MiCreateDecayPfn @ 0x14033BC68 (MiCreateDecayPfn.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140382660 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x1403844EC (MiBuildReservationCluster.c)
 *     MiReturnBadPagesToBadList @ 0x140529B28 (MiReturnBadPagesToBadList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052A460 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMarkFileOnlyPfnBad @ 0x14053C238 (MiMarkFileOnlyPfnBad.c)
 *     MiFreeModifiedReservations @ 0x14053E254 (MiFreeModifiedReservations.c)
 *     MiHandleForkTransitionPte @ 0x1405555C4 (MiHandleForkTransitionPte.c)
 *     MiTransferPartitionPageRun @ 0x14055D970 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x14055E494 (MiMakePageBad.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     MiRestoreTransitionPte @ 0x1402F6C10 (MiRestoreTransitionPte.c)
 *     MiClearPfnImageVerified @ 0x1402F7658 (MiClearPfnImageVerified.c)
 *     MiWakeModifiedPageWriter @ 0x140310698 (MiWakeModifiedPageWriter.c)
 *     MiPageToChannel @ 0x140317238 (MiPageToChannel.c)
 *     MiInsertDecayClusterTimer @ 0x14033C99C (MiInsertDecayClusterTimer.c)
 *     MiUpdatePfnOnSlabStandbyList @ 0x140343650 (MiUpdatePfnOnSlabStandbyList.c)
 *     MiUpdateAvailableEvents @ 0x1403B2A94 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiWakeFileOnlyReaper @ 0x14053D3E4 (MiWakeFileOnlyReaper.c)
 *     MiSetPfnRemovalRequested @ 0x140549F58 (MiSetPfnRemovalRequested.c)
 *     MiGetSlabAllocatorStandbyList @ 0x14054D9E4 (MiGetSlabAllocatorStandbyList.c)
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
  int v11; // r8d
  char v12; // cl
  __int64 v13; // rax
  int v14; // eax
  _KSPIN_LOCK_QUEUE *v15; // r11
  __int64 v16; // rcx
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  struct _KEVENT *v19; // rbx
  unsigned __int64 v20; // r12
  __int16 v21; // dx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v24; // eax
  _KSPIN_LOCK_QUEUE *v25; // r11
  __int64 v26; // rax
  __int64 v27; // r12
  int v28; // eax
  _KSPIN_LOCK_QUEUE *v29; // r11
  __int64 v30; // rcx
  unsigned __int64 *v31; // r15
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  int v34; // eax
  unsigned __int16 v35; // cx
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rbx
  struct _KPRCB *v40; // rcx
  _DWORD *v41; // rdx
  int v42; // eax
  _KPROCESS *Process; // rcx
  unsigned __int64 v44; // r8
  unsigned __int16 **v45; // r10
  __int64 v46; // r11
  unsigned __int16 *v47; // rcx
  unsigned int v48; // edx
  unsigned __int64 v49; // rbx
  BOOL v50; // ebx
  __int64 v51; // r12
  char v52; // al
  __int64 v53; // rax
  char v54; // r12
  char v55; // r15
  int v56; // edx
  __int64 v57; // r12
  char *v58; // rax
  int v59; // r8d
  int v60; // ecx
  __int64 v61; // rbx
  unsigned int v62; // r8d
  _QWORD *v63; // r9
  unsigned __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 Next; // rax
  struct _KPRCB *v69; // rcx
  _DWORD *v70; // rdx
  int v71; // eax
  signed __int32 v72[8]; // [rsp+0h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v73; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]
  int v76; // [rsp+A0h] [rbp+8h]
  unsigned int v77; // [rsp+A8h] [rbp+10h]
  __int64 v78; // [rsp+B8h] [rbp+20h]

  v77 = a2;
  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2;
  memset(&v73, 0, sizeof(v73));
  v5 = *(ULONG_PTR **)(qword_140C4E448 + 8 * ((v2 >> 39) & 0x3FF));
  v6 = (__int64)(a1 + 0x58000000000LL) / 48;
  v7 = (v2 & 0x2000000000000LL) != 0;
  if ( v6 < qword_140C4E7A0 || v6 >= qword_140C4E7A0 + 2048 )
  {
    if ( byte_140C51E5E && _bittest64((const signed __int64 *)qword_140C52388, v6 >> 9) )
      v7 |= 2u;
  }
  else
  {
    v7 |= 8u;
  }
  v8 = v7;
  if ( (a2 & 8) != 0 && (v7 & 1) != 0 && byte_140C4DCE8 )
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
      v9 = &qword_140C4C8C0;
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
  v11 = *((_DWORD *)v9 + 2);
  v76 = v11;
  if ( (v7 & 1) == 0 )
  {
    _InterlockedOr(v72, 0);
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  }
  v78 = 0LL;
  switch ( v11 )
  {
    case 2:
      v12 = *(_BYTE *)(a1 + 35);
      if ( (v12 & 0x40) != 0 && (v7 & 2) == 0 )
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
            KxAcquireQueuedSpinLock(&LockHandle);
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
      else if ( _InterlockedExchange64(v9 + 4, (__int64)&v73) )
      {
        KxWaitForLockOwnerShip(&v73);
      }
      goto LABEL_117;
    case 3:
      if ( (unsigned int)MI_PFN_IS_PROTO(a1) )
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 544);
      else
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 632);
      goto LABEL_72;
    case 4:
      v26 = *(_QWORD *)(a1 + 16);
      if ( qword_140C4DD40 && (v26 & 0x10) == 0 )
        v26 &= ~qword_140C4DD40;
      v27 = *(_QWORD *)(v26 >> 16);
      v78 = v27;
      v28 = MI_PFN_IS_PROTO(a1);
      v30 = 544LL;
      if ( !v28 )
        v30 = 632LL;
      _InterlockedIncrement64((volatile signed __int64 *)&v5[v30]);
      v73.LockQueue.Next = v29;
      v73.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 4);
      KxAcquireQueuedSpinLock(&v73);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v27 + 72));
      if ( (*(_DWORD *)(v27 + 56) & 8) != 0 )
        goto LABEL_117;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v27 + 72));
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v73);
      v8 = v7;
      v25 = 0LL;
      v76 = 3;
LABEL_72:
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 936);
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
      {
        v39 = *(unsigned int *)(v5[856] + 24);
        v73.LockQueue.Next = v25;
        v9 = (__int64 *)&v5[4 * v39 + 432 + v39];
        v73.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 4);
        v40 = KeGetCurrentPrcb();
        v41 = v40->SchedulerAssist;
        if ( v41 )
        {
          if ( v40->NestingLevel <= 1u )
          {
            v42 = v41[6];
            v41[6] = v42 + 1;
            if ( v42 == -1 )
              KiRemoveSystemWorkPriorityKick(v40);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v73, v9 + 4);
        }
        else if ( _InterlockedExchange64(v9 + 4, (__int64)&v73) )
        {
          KxWaitForLockOwnerShip(&v73);
        }
        *(_BYTE *)(a1 + 39) ^= (*(_BYTE *)(a1 + 39) ^ v39) & 0xF;
      }
      else
      {
        if ( (v77 & 0x80u) == 0 )
        {
          v31 = (unsigned __int64 *)(v9 + 4);
          v73.LockQueue.Next = v25;
          v73.LockQueue.Lock = v31;
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          if ( v33 )
          {
            if ( v32->NestingLevel <= 1u )
            {
              v34 = v33[6];
              v33[6] = v34 + 1;
              if ( v34 == -1 )
                KiRemoveSystemWorkPriorityKick(v32);
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&v73, v31);
          }
          else if ( _InterlockedExchange64((volatile __int64 *)v31, (__int64)&v73) )
          {
            KxWaitForLockOwnerShip(&v73);
          }
        }
        v35 = *(_QWORD *)(a1 + 16);
        v36 = (unsigned __int8)v35 >> 1;
        v37 = v35 >> 12;
        if ( (v36 & 1) != 0 || (_DWORD)v37 == *((_DWORD *)v5 + 289) )
          v9 = (__int64 *)&v5[4 * v37 + 352 + v37];
        else
          v9 = (__int64 *)(v5 + 344);
        v38 = *v9;
        ++v5[950];
        v7 = v8 | 4;
        if ( v38 )
          v7 = v8;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      ++*(_DWORD *)&Process[1].Spare2[7];
      v44 = v5[888];
      if ( v44 < 0x420 )
      {
        v45 = (unsigned __int16 **)(v5 + 525);
        v46 = 0LL;
        while ( 1 )
        {
          v47 = *v45;
          v48 = 0;
          if ( dword_140C4DCFC )
            break;
LABEL_103:
          ++v46;
          ++v45;
          if ( v46 > 1 )
          {
            v49 = v5[950];
            if ( v49 >= 0x10 )
              MiWakeModifiedPageWriter(v5, -1LL);
            if ( v5[936] - v49 >= 0x10 )
              KeSetEvent((PRKEVENT)v5 + 33, 0, 0);
            goto LABEL_108;
          }
        }
        while ( 1 )
        {
          v44 += *v47;
          if ( v44 >= 0x420 )
            break;
          ++v48;
          v47 += 8;
          if ( v48 >= dword_140C4DCFC )
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
    KxAcquireQueuedSpinLock(&v73);
  }
  else
  {
    if ( v9 != &qword_140C4C8C0 )
      MiClearPfnImageVerified(a1, 12LL);
    v73.LockQueue.Lock = v5 + 516;
    v73.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock(&v73);
    if ( v9 == &qword_140C4C8C0 )
      goto LABEL_117;
  }
  *(_QWORD *)(a1 + 8) = -4LL;
LABEL_117:
  v21 = v77;
LABEL_118:
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 || (v50 = (v7 & 2) != 0) && (v21 & 0x800) == 0 && v76 == 2 )
  {
    v50 = (v7 & 2) != 0;
    if ( (v7 & 2) == 0 )
      MiInsertDecayClusterTimer(a1);
  }
  else
  {
    ++*v9;
  }
  v51 = v9[3];
  if ( v51 == 0xFFFFFFFFFLL )
    v9[2] = v6;
  else
    *(_QWORD *)(48 * v51 - 0x58000000000LL) ^= (v6 ^ *(_QWORD *)(48 * v51 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
  v52 = *(_BYTE *)(a1 + 34);
  if ( v9 == &qword_140C4C8C0 )
  {
    *(_BYTE *)(a1 + 34) = v52 & 0xF8 | 2;
    *(_BYTE *)(a1 + 35) |= 0x10u;
    MiWakeFileOnlyReaper();
  }
  else
  {
    *(_BYTE *)(a1 + 34) = v52 ^ (v52 ^ v76) & 7;
  }
  v9[3] = v6;
  v53 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a1 |= 0xFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 24) = v51 & 0xFFFFFFFFFLL | v53 & 0xFFFFFFF000000000uLL;
  if ( v76 != 2 )
    goto LABEL_156;
  if ( v50 )
  {
    v54 = v77;
    MiUpdatePfnOnSlabStandbyList(a1, (v77 >> 11) & 1);
    goto LABEL_157;
  }
  v55 = *(_BYTE *)(a1 + 35);
  if ( (v55 & 8) != 0 )
    goto LABEL_156;
  v56 = dword_140C4DC88;
  v57 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
  if ( dword_140C4DC84 <= (unsigned int)dword_140C4DC88 )
  {
    v58 = (char *)qword_140C4DCC8 + 16 * dword_140C4DC84;
    if ( v6 >= *(_QWORD *)v58 && (dword_140C4DC84 == dword_140C4DC88 || v6 < *((_QWORD *)v58 + 2)) )
      goto LABEL_149;
  }
  v59 = 0;
  if ( dword_140C4DC88 < 0 )
LABEL_173:
    KeBugCheckEx(0x1Au, 0x6201uLL, v6, 0LL, 0LL);
  while ( 1 )
  {
    v60 = (v59 + v56) >> 1;
    v58 = (char *)qword_140C4DCC8 + 16 * v60;
    if ( v6 < *(_QWORD *)v58 )
    {
      if ( !v60 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v6, (ULONG_PTR)qword_140C4DCC8, 0LL);
      v56 = v60 - 1;
      goto LABEL_146;
    }
    if ( v60 == dword_140C4DC88 || v6 < *((_QWORD *)v58 + 2) )
      break;
    v59 = v60 + 1;
LABEL_146:
    if ( v56 < v59 )
      goto LABEL_173;
  }
  dword_140C4DC84 = (v59 + v56) >> 1;
LABEL_149:
  v61 = *((unsigned int *)v58 + 2);
  if ( qword_140C4DCD0 )
    v62 = MiPageToChannel(v6);
  else
    v62 = 0;
  v63 = (_QWORD *)(*(_QWORD *)(v57 + 16) + 4544 * v61 + 24 * ((v55 & 7) + 8LL * v62));
  ++v63[407];
  v64 = v63[409];
  if ( v64 == 0xFFFFFFFFFLL )
  {
    v63[408] = v6;
  }
  else
  {
    v65 = 48 * v64 - 0x58000000000LL;
    v66 = (*(_QWORD *)v65 ^ (v6 << 28)) & 0xFFFFFFFFFLL;
    *(_BYTE *)(v65 + 39) = v6;
    *(_QWORD *)v65 = (v6 << 28) ^ v66;
  }
  *(_QWORD *)a1 |= 0xFFFFFFF000000000uLL;
  *(_WORD *)(a1 + 36) = v64;
  v67 = (*(_QWORD *)(a1 + 24) ^ (v64 >> 16 << 36)) & 0xFFFFF000000000LL;
  *(_BYTE *)(a1 + 39) = -1;
  *(_QWORD *)(a1 + 24) ^= v67;
  v63[409] = v6;
LABEL_156:
  v54 = v77;
LABEL_157:
  if ( v78 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v78 + 72));
  if ( v54 >= 0 )
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
      Next = KxWaitForLockChainValid(&v73);
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
