/*
 * XREFs of MmOutSwapProcess @ 0x1402EECE4
 * Callers:
 *     KiOutSwapProcesses @ 0x1402EEB00 (KiOutSwapProcesses.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForGate @ 0x14022A4E4 (KeWaitForGate.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KeFlushProcessTb @ 0x140274364 (KeFlushProcessTb.c)
 *     MiEmptyPageAccessLog @ 0x14027D1E0 (MiEmptyPageAccessLog.c)
 *     MiLockAndDecrementShareCount @ 0x140287230 (MiLockAndDecrementShareCount.c)
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiMakeTransitionPte @ 0x140339700 (MiMakeTransitionPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseCommitForResetPages @ 0x14052C794 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052C948 (MiReleaseOutSwappedProcessCommit.c)
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
  bool v28; // zf
  unsigned __int64 OldIrql; // rbx
  bool v30; // cf
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  __int16 v35; // [rsp+38h] [rbp-18h] BYREF
  char v36; // [rsp+3Ah] [rbp-16h]
  char v37; // [rsp+3Bh] [rbp-15h]
  int v38; // [rsp+3Ch] [rbp-14h]
  _QWORD v39[2]; // [rsp+40h] [rbp-10h] BYREF
  char v40; // [rsp+90h] [rbp+40h] BYREF
  int v41; // [rsp+98h] [rbp+48h] BYREF
  int v42; // [rsp+A0h] [rbp+50h] BYREF

  v1 = &dword_140C4F7C0;
  v2 = 0;
  v3 = *(_BYTE *)(a1 + 1848) & 7;
  v37 = 0;
  v40 = 0;
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
  v35 = 263;
  v39[1] = v39;
  v36 = 6;
  v39[0] = v39;
  v38 = 0;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
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
      v30 = (unsigned __int8)v6 < 2u;
      goto LABEL_63;
    }
    *(_QWORD *)(a1 + 1768) = &v35;
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
          v28 = (v21 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v21;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v17);
    KeWaitForGate((__int64)&v35, 0x12u);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
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
        v28 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v28 )
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
  v41 = 0;
  while ( !(unsigned int)KeIsEmptyAffinityEx((_WORD *)(a1 + 368)) )
    KeYieldProcessorEx(&v41);
  KeFlushProcessTb(*(_QWORD *)(a1 + 40));
  if ( *(_QWORD *)(a1 + 1928) )
    KeFlushProcessTb(*(_QWORD *)(a1 + 904));
  v22 = *(_QWORD *)(a1 + 40) >> 12;
  v23 = 48 * v22 - 0x58000000000LL;
  v24 = (unsigned __int64 *)(MiMapPageInHyperSpaceWorker(v22, &v40, 0x80000000LL)
                           + 8LL * ((*(_DWORD *)(v23 + 8) >> 3) & 0x1FF));
  TransitionPte = MiMakeTransitionPte(v22, 4LL);
  v26 = TransitionPte;
  if ( (unsigned int)MiPteInShadowRange(v24) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v2 = 1;
      if ( !HIBYTE(word_140C4E048) )
      {
        v28 = (TransitionPte & 1) == 0;
        goto LABEL_45;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v28 = (TransitionPte & 1) == 0;
LABEL_45:
      if ( !v28 )
        v26 = TransitionPte | 0x8000000000000000uLL;
    }
  }
  *v24 = v26;
  if ( v2 )
    MiWritePteShadow((__int64)v24, v26);
  LOBYTE(v27) = v40;
  MiUnmapPageInHyperSpaceWorker(v24, v27, 0x80000000LL);
  MiLockAndDecrementShareCount(v23, 0);
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v42 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v42);
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
        v30 = (unsigned __int8)v6 < 2u;
LABEL_63:
        if ( !v30 )
        {
          v31 = KeGetCurrentPrcb();
          v32 = v31->SchedulerAssist;
          LODWORD(v6) = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v28 = ((unsigned int)v6 & v32[5]) == 0;
          v32[5] &= v6;
          if ( v28 )
            LOBYTE(v6) = KiRemoveSystemWorkPriorityKick(v31);
        }
      }
    }
  }
LABEL_66:
  __writecr8(OldIrql);
  return v6;
}
