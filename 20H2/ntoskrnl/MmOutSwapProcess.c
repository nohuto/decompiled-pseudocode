/*
 * XREFs of MmOutSwapProcess @ 0x1402DD934
 * Callers:
 *     KiOutSwapProcesses @ 0x1402DD750 (KiOutSwapProcesses.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiEmptyPageAccessLog @ 0x1402331B0 (MiEmptyPageAccessLog.c)
 *     MiLockAndDecrementShareCount @ 0x140250E00 (MiLockAndDecrementShareCount.c)
 *     KeFlushProcessTb @ 0x140263464 (KeFlushProcessTb.c)
 *     KeIsEmptyAffinityEx @ 0x140286FE0 (KeIsEmptyAffinityEx.c)
 *     MiDecrementShareCount @ 0x140290770 (MiDecrementShareCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiMakeTransitionPte @ 0x1402B1DC0 (MiMakeTransitionPte.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KeWaitForGate @ 0x1402F5308 (KeWaitForGate.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseCommitForResetPages @ 0x14052AA54 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052AC08 (MiReleaseOutSwappedProcessCommit.c)
 */

char __fastcall MmOutSwapProcess(__int64 a1)
{
  LONG *v1; // rbx
  int v2; // r13d
  char v3; // al
  char v5; // cl
  __int64 v6; // rax
  char v7; // cl
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r10
  _DWORD *v14; // r9
  int v15; // eax
  PVOID *v16; // rcx
  unsigned __int64 v17; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // r14
  unsigned __int64 *v24; // r12
  __int64 TransitionPte; // rdi
  unsigned __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  bool v31; // zf
  unsigned __int64 OldIrql; // rbx
  bool v33; // cf
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  __int16 v38; // [rsp+38h] [rbp-18h] BYREF
  char v39; // [rsp+3Ah] [rbp-16h]
  char v40; // [rsp+3Bh] [rbp-15h]
  int v41; // [rsp+3Ch] [rbp-14h]
  _QWORD v42[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 v43; // [rsp+90h] [rbp+40h] BYREF
  int v44; // [rsp+98h] [rbp+48h] BYREF
  int v45; // [rsp+A0h] [rbp+50h] BYREF

  v1 = &dword_140C4F600;
  v2 = 0;
  v3 = *(_BYTE *)(a1 + 1848) & 7;
  v40 = 0;
  v43 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v3 != 2 )
    v1 = (LONG *)(a1 + 1856);
  _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x40u);
  v5 = *(_BYTE *)(a1 + 1851);
  LOBYTE(v6) = v5 & 0x60;
  if ( (v5 & 0x60) == 0x20 )
  {
    LOBYTE(v6) = MiReleaseOutSwappedProcessCommit(a1);
  }
  else if ( (v5 & 0x60) == 0x40 )
  {
    v6 = *((_QWORD *)v1 + 4);
    if ( *(_QWORD *)(v6 + 40) )
      LOBYTE(v6) = MiReleaseCommitForResetPages(a1);
  }
  if ( *(_QWORD *)(a1 + 1800) != 1LL || (*(_BYTE *)(a1 + 1851) & 2) != 0 )
    return v6;
  v38 = 263;
  v42[1] = v42;
  v39 = 6;
  v42[0] = v42;
  v41 = 0;
  KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, &LockHandle);
  while ( 1 )
  {
    v7 = *(_BYTE *)(a1 + 1849) >> 4;
    if ( (*(_BYTE *)(a1 + 1849) & 6) == 0 && !v7 )
      break;
    if ( v7 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      LOBYTE(v6) = KiIrqlFlags;
      OldIrql = LockHandle.OldIrql;
      if ( !KiIrqlFlags )
        goto LABEL_66;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_66;
      LOBYTE(v6) = KeGetCurrentIrql();
      if ( (unsigned __int8)v6 > 0xFu || LockHandle.OldIrql > 0xFu )
        goto LABEL_66;
      v33 = (unsigned __int8)v6 < 2u;
      goto LABEL_63;
    }
    *(_QWORD *)(a1 + 1768) = &v38;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v17 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v31 = (v21 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v21;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v17);
    KeWaitForGate(&v38, 18LL);
    KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, &LockHandle);
    *(_QWORD *)(a1 + 1768) = 0LL;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x80u);
  v8 = (_QWORD *)(a1 + 1688);
  v9 = *(_QWORD *)(a1 + 1688);
  v10 = *(_QWORD **)(a1 + 1696);
  if ( *(_QWORD *)(v9 + 8) != a1 + 1688 || (_QWORD *)*v10 != v8 )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  *v8 = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v11 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && LockHandle.OldIrql <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = v13->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v31 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
  }
  __writecr8(v11);
  v16 = (PVOID *)*((_QWORD *)v1 + 5);
  if ( v16 )
  {
    MiEmptyPageAccessLog(v16);
    *((_QWORD *)v1 + 5) = 0LL;
  }
  v44 = 0;
  while ( !(unsigned int)KeIsEmptyAffinityEx((_WORD *)(a1 + 368)) )
    KeYieldProcessorEx(&v44);
  KeFlushProcessTb(*(_QWORD *)(a1 + 40));
  if ( *(_QWORD *)(a1 + 1928) )
    KeFlushProcessTb(*(_QWORD *)(a1 + 904));
  v22 = *(_QWORD *)(a1 + 40) >> 12;
  v23 = 48 * v22 - 0x58000000000LL;
  v24 = (unsigned __int64 *)(MiMapPageInHyperSpaceWorker(v22, &v43, 0x80000000LL)
                           + 8LL * ((*(_DWORD *)(v23 + 8) >> 3) & 0x1FF));
  TransitionPte = MiMakeTransitionPte(v22, 4);
  v26 = TransitionPte;
  if ( MiPteInShadowRange((unsigned __int64)v24) )
  {
    if ( (unsigned int)MiPteHasShadow(v28, v27, v29, v30) )
    {
      v2 = 1;
      if ( !HIBYTE(word_140C4DE88) )
      {
        v31 = (TransitionPte & 1) == 0;
        goto LABEL_45;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v31 = (TransitionPte & 1) == 0;
LABEL_45:
      if ( !v31 )
        v26 = TransitionPte | 0x8000000000000000uLL;
    }
  }
  *v24 = v26;
  if ( v2 )
    MiWritePteShadow(v24, v26);
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v24, v43, 0x80000000);
  MiLockAndDecrementShareCount(v23, 0);
  KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, &LockHandle);
  v45 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v45);
    while ( *(__int64 *)(v23 + 24) < 0 );
  }
  *(_QWORD *)(v23 + 8) = a1 + 1432;
  *(_QWORD *)(a1 + 1432) = TransitionPte;
  *(_QWORD *)(a1 + 1784) = 0LL;
  *(_QWORD *)(a1 + 1792) = 0LL;
  *(_QWORD *)(a1 + 1800) = 0LL;
  *(_QWORD *)(a1 + 1808) = 0LL;
  MiDecrementShareCount(v23);
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  LOBYTE(v6) = KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      LOBYTE(v6) = KeGetCurrentIrql();
      if ( (unsigned __int8)v6 <= 0xFu && LockHandle.OldIrql <= 0xFu )
      {
        v33 = (unsigned __int8)v6 < 2u;
LABEL_63:
        if ( !v33 )
        {
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          LODWORD(v6) = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v31 = ((unsigned int)v6 & v35[5]) == 0;
          v35[5] &= v6;
          if ( v31 )
            LOBYTE(v6) = KiRemoveSystemWorkPriorityKick(v34);
        }
      }
    }
  }
LABEL_66:
  __writecr8(OldIrql);
  return v6;
}
