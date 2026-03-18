/*
 * XREFs of MiInsertPageInList @ 0x1402A9F50
 * Callers:
 *     MiRelinkStandbyPage @ 0x140265740 (MiRelinkStandbyPage.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A9540 (MiPfnReferenceCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x1402A9610 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnShareCountIsZero @ 0x1402A98E0 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MiOutSwapWorkingSetPte @ 0x1402B02C0 (MiOutSwapWorkingSetPte.c)
 *     MiDeletePteList @ 0x1402C0040 (MiDeletePteList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 *     MiGatherMappedPages @ 0x140344824 (MiGatherMappedPages.c)
 *     MiActOnPte @ 0x1403476D0 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1403486C0 (MiReservePageFileSpaceForPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140349C1C (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiCreateDecayPfn @ 0x140351B30 (MiCreateDecayPfn.c)
 *     MiReplaceTransitionPage @ 0x140351C54 (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384340 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x140386698 (MiBuildReservationCluster.c)
 *     MiReturnBadPagesToBadList @ 0x14052D4F8 (MiReturnBadPagesToBadList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052DE30 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMarkFileOnlyPfnBad @ 0x14053FC08 (MiMarkFileOnlyPfnBad.c)
 *     MiFreeModifiedReservations @ 0x140541C24 (MiFreeModifiedReservations.c)
 *     MiHandleForkTransitionPte @ 0x140558F94 (MiHandleForkTransitionPte.c)
 *     MiTransferPartitionPageRun @ 0x140561340 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x140561E64 (MiMakePageBad.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MiPageToChannel @ 0x1402F2478 (MiPageToChannel.c)
 *     MiInsertDecayClusterTimer @ 0x14030F6BC (MiInsertDecayClusterTimer.c)
 *     MiUpdatePfnOnSlabStandbyList @ 0x140314A80 (MiUpdatePfnOnSlabStandbyList.c)
 *     MiWakeModifiedPageWriter @ 0x14033B240 (MiWakeModifiedPageWriter.c)
 *     MiRestoreTransitionPte @ 0x140346AA0 (MiRestoreTransitionPte.c)
 *     MiClearPfnImageVerified @ 0x140349B58 (MiClearPfnImageVerified.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     MiUpdateAvailableEvents @ 0x1403B5404 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiWakeFileOnlyReaper @ 0x140540DB4 (MiWakeFileOnlyReaper.c)
 *     MiSetPfnRemovalRequested @ 0x14054D928 (MiSetPfnRemovalRequested.c)
 *     MiGetSlabAllocatorStandbyList @ 0x1405513B4 (MiGetSlabAllocatorStandbyList.c)
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
  _QWORD *v25; // rdx
  _KSPIN_LOCK_QUEUE *v26; // r11
  __int64 v27; // rax
  __int64 v28; // r12
  int v29; // eax
  _KSPIN_LOCK_QUEUE *v30; // r11
  __int64 v31; // rcx
  unsigned __int64 *v32; // r15
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  int v35; // eax
  _QWORD *v36; // rdx
  unsigned __int16 v37; // cx
  char v38; // al
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rbx
  struct _KPRCB *v42; // rcx
  _DWORD *v43; // rdx
  int v44; // eax
  _QWORD *v45; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int64 v47; // r8
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
  _QWORD *v66; // r9
  unsigned __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v72; // rcx
  _DWORD *v73; // rdx
  int v74; // eax
  signed __int32 v75[8]; // [rsp+0h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v76; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v79; // [rsp+A0h] [rbp+8h]
  unsigned int v80; // [rsp+A8h] [rbp+10h]
  __int64 v81; // [rsp+B8h] [rbp+20h]

  v80 = a2;
  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2;
  memset(&v76, 0, sizeof(v76));
  v5 = *(ULONG_PTR **)(qword_140C4E4C8 + 8 * ((v2 >> 39) & 0x3FF));
  v6 = (__int64)(a1 + 0x58000000000LL) / 48;
  v7 = (v2 & 0x2000000000000LL) != 0;
  if ( v6 < qword_140C4E820 || v6 >= qword_140C4E820 + 2048 )
  {
    if ( byte_140C51EDE && _bittest64((const signed __int64 *)qword_140C52408, v6 >> 9) )
      v7 |= 2u;
  }
  else
  {
    v7 |= 8u;
  }
  v8 = v7;
  if ( (a2 & 8) != 0 && (v7 & 1) != 0 && byte_140C4DD68 )
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
      v9 = &qword_140C4C940;
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
  v11 = *((_DWORD *)v9 + 2);
  v79 = v11;
  if ( (v7 & 1) == 0 )
  {
    _InterlockedOr(v75, 0);
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  }
  v81 = 0LL;
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
            KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v5 + 616);
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
      v21 = v80;
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
          v24 = SchedulerAssist[6];
          SchedulerAssist[6] = v24 + 1;
          if ( v24 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v76, v9 + 4);
      }
      else
      {
        v25 = (_QWORD *)_InterlockedExchange64(v9 + 4, (__int64)&v76);
        if ( v25 )
          KxWaitForLockOwnerShip((__int64)&v76, v25);
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
      if ( qword_140C4DDC0 && (v27 & 0x10) == 0 )
        v27 &= ~qword_140C4DDC0;
      v28 = *(_QWORD *)(v27 >> 16);
      v81 = v28;
      v29 = MI_PFN_IS_PROTO(a1);
      v31 = 544LL;
      if ( !v29 )
        v31 = 632LL;
      _InterlockedIncrement64((volatile signed __int64 *)&v5[v31]);
      v76.LockQueue.Next = v30;
      v76.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 4);
      KxAcquireQueuedSpinLock((__int64)&v76, v9 + 4);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v28 + 72));
      if ( (*(_DWORD *)(v28 + 56) & 8) != 0 )
        goto LABEL_117;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v28 + 72));
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v76);
      v8 = v7;
      v26 = 0LL;
      v79 = 3;
LABEL_72:
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 936);
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
      {
        v41 = *(unsigned int *)(v5[856] + 24);
        v76.LockQueue.Next = v26;
        v9 = (__int64 *)&v5[4 * v41 + 432 + v41];
        v76.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 4);
        v42 = KeGetCurrentPrcb();
        v43 = v42->SchedulerAssist;
        if ( v43 )
        {
          if ( v42->NestingLevel <= 1u )
          {
            v44 = v43[6];
            v43[6] = v44 + 1;
            if ( v44 == -1 )
              KiRemoveSystemWorkPriorityKick(v42);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v76, v9 + 4);
        }
        else
        {
          v45 = (_QWORD *)_InterlockedExchange64(v9 + 4, (__int64)&v76);
          if ( v45 )
            KxWaitForLockOwnerShip((__int64)&v76, v45);
        }
        *(_BYTE *)(a1 + 39) ^= (*(_BYTE *)(a1 + 39) ^ v41) & 0xF;
      }
      else
      {
        if ( (v80 & 0x80u) == 0 )
        {
          v32 = (unsigned __int64 *)(v9 + 4);
          v76.LockQueue.Next = v26;
          v76.LockQueue.Lock = v32;
          v33 = KeGetCurrentPrcb();
          v34 = v33->SchedulerAssist;
          if ( v34 )
          {
            if ( v33->NestingLevel <= 1u )
            {
              v35 = v34[6];
              v34[6] = v35 + 1;
              if ( v35 == -1 )
                KiRemoveSystemWorkPriorityKick(v33);
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&v76, v32);
          }
          else
          {
            v36 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v32, (__int64)&v76);
            if ( v36 )
              KxWaitForLockOwnerShip((__int64)&v76, v36);
          }
        }
        v37 = *(_QWORD *)(a1 + 16);
        v38 = (unsigned __int8)v37 >> 1;
        v39 = v37 >> 12;
        if ( (v38 & 1) != 0 || (_DWORD)v39 == *((_DWORD *)v5 + 289) )
          v9 = (__int64 *)&v5[4 * v39 + 352 + v39];
        else
          v9 = (__int64 *)(v5 + 344);
        v40 = *v9;
        ++v5[950];
        v7 = v8 | 4;
        if ( v40 )
          v7 = v8;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      ++*(_DWORD *)&Process[1].Spare2[7];
      v47 = v5[888];
      if ( v47 < 0x420 )
      {
        v48 = (unsigned __int16 **)(v5 + 525);
        v49 = 0LL;
        while ( 1 )
        {
          v50 = *v48;
          v51 = 0;
          if ( dword_140C4DD7C )
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
          v47 += *v50;
          if ( v47 >= 0x420 )
            break;
          ++v51;
          v50 += 8;
          if ( v51 >= dword_140C4DD7C )
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
    if ( v9 != &qword_140C4C940 )
      MiClearPfnImageVerified(a1, 12LL);
    v76.LockQueue.Lock = v5 + 516;
    v76.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock((__int64)&v76, (volatile __int64 *)v5 + 516);
    if ( v9 == &qword_140C4C940 )
      goto LABEL_117;
  }
  *(_QWORD *)(a1 + 8) = -4LL;
LABEL_117:
  v21 = v80;
LABEL_118:
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 || (v53 = (v7 & 2) != 0) && (v21 & 0x800) == 0 && v79 == 2 )
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
    v9[2] = v6;
  else
    *(_QWORD *)(48 * v54 - 0x58000000000LL) ^= (v6 ^ *(_QWORD *)(48 * v54 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
  v55 = *(_BYTE *)(a1 + 34);
  if ( v9 == &qword_140C4C940 )
  {
    *(_BYTE *)(a1 + 34) = v55 & 0xF8 | 2;
    *(_BYTE *)(a1 + 35) |= 0x10u;
    MiWakeFileOnlyReaper();
  }
  else
  {
    *(_BYTE *)(a1 + 34) = v55 ^ (v55 ^ v79) & 7;
  }
  v9[3] = v6;
  v56 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a1 |= 0xFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 24) = v54 & 0xFFFFFFFFFLL | v56 & 0xFFFFFFF000000000uLL;
  if ( v79 != 2 )
    goto LABEL_156;
  if ( v53 )
  {
    v57 = v80;
    MiUpdatePfnOnSlabStandbyList(a1, (v80 >> 11) & 1);
    goto LABEL_157;
  }
  v58 = *(_BYTE *)(a1 + 35);
  if ( (v58 & 8) != 0 )
    goto LABEL_156;
  v59 = dword_140C4DD08;
  v60 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
  if ( dword_140C4DD04 <= (unsigned int)dword_140C4DD08 )
  {
    v61 = (char *)qword_140C4DD48 + 16 * dword_140C4DD04;
    if ( v6 >= *(_QWORD *)v61 && (dword_140C4DD04 == dword_140C4DD08 || v6 < *((_QWORD *)v61 + 2)) )
      goto LABEL_149;
  }
  v62 = 0;
  if ( dword_140C4DD08 < 0 )
LABEL_173:
    KeBugCheckEx(0x1Au, 0x6201uLL, v6, 0LL, 0LL);
  while ( 1 )
  {
    v63 = (v62 + v59) >> 1;
    v61 = (char *)qword_140C4DD48 + 16 * v63;
    if ( v6 < *(_QWORD *)v61 )
    {
      if ( !v63 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v6, (ULONG_PTR)qword_140C4DD48, 0LL);
      v59 = v63 - 1;
      goto LABEL_146;
    }
    if ( v63 == dword_140C4DD08 || v6 < *((_QWORD *)v61 + 2) )
      break;
    v62 = v63 + 1;
LABEL_146:
    if ( v59 < v62 )
      goto LABEL_173;
  }
  dword_140C4DD04 = (v62 + v59) >> 1;
LABEL_149:
  v64 = *((unsigned int *)v61 + 2);
  if ( qword_140C4DD50 )
    v65 = MiPageToChannel(v6);
  else
    v65 = 0;
  v66 = (_QWORD *)(*(_QWORD *)(v60 + 16) + 4544 * v64 + 24 * ((v58 & 7) + 8LL * v65));
  ++v66[407];
  v67 = v66[409];
  if ( v67 == 0xFFFFFFFFFLL )
  {
    v66[408] = v6;
  }
  else
  {
    v68 = 48 * v67 - 0x58000000000LL;
    v69 = (*(_QWORD *)v68 ^ (v6 << 28)) & 0xFFFFFFFFFLL;
    *(_BYTE *)(v68 + 39) = v6;
    *(_QWORD *)v68 = (v6 << 28) ^ v69;
  }
  *(_QWORD *)a1 |= 0xFFFFFFF000000000uLL;
  *(_WORD *)(a1 + 36) = v67;
  v70 = (*(_QWORD *)(a1 + 24) ^ (v67 >> 16 << 36)) & 0xFFFFF000000000LL;
  *(_BYTE *)(a1 + 39) = -1;
  *(_QWORD *)(a1 + 24) ^= v70;
  v66[409] = v6;
LABEL_156:
  v57 = v80;
LABEL_157:
  if ( v81 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v81 + 72));
  if ( v57 >= 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v76, retaddr);
      goto LABEL_166;
    }
    _m_prefetchw(&v76);
    Next = v76.LockQueue.Next;
    if ( v76.LockQueue.Next )
    {
LABEL_165:
      v76.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
    }
    else if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                              (volatile signed __int64 *)v76.LockQueue.Lock,
                                              0LL,
                                              (signed __int64)&v76) != &v76 )
    {
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&v76);
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
