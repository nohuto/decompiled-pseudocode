/*
 * XREFs of KiAbForceProcessLockEntry @ 0x14039C4BC
 * Callers:
 *     KeAbMarkCrossThreadReleasable @ 0x14039C41C (KeAbMarkCrossThreadReleasable.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x14033E1B0 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14034F230 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbIoBoostOwners @ 0x14035A160 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14035A264 (KiAbCpuBoostOwners.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14035A6C8 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14035A718 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14035A7F8 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 */

char __fastcall KiAbForceProcessLockEntry(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  __int128 *LockedHeadEntry; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rdi
  char v7; // si
  char result; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rax
  char v11; // r14
  char v12; // al
  char v13; // dl
  char CpuPriorityKey; // si
  int v15; // r10d
  ULONG_PTR CurrentThread; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KPRCB *v20; // rdi
  _DWORD *v21; // rcx
  int v22; // eax
  _DWORD *v23; // rcx
  int v24; // eax
  _KTHREAD *NextThread; // rdi
  __int64 v26; // r8
  __int64 v27; // r8
  bool v28; // zf
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  int v35[6]; // [rsp+48h] [rbp-18h] BYREF
  int v36; // [rsp+A8h] [rbp+48h] BYREF
  _QWORD *v37; // [rsp+B8h] [rbp+58h] BYREF

  v37 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  memset(&LockHandle, 0, sizeof(LockHandle));
  LockedHeadEntry = KiAbEntryGetLockedHeadEntry((__int128 *)a1, 1, &LockHandle);
  v5 = (__int64)LockedHeadEntry;
  if ( LockedHeadEntry )
  {
    if ( !*(_BYTE *)(a1 + 17) )
    {
LABEL_4:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_5;
    }
    if ( (__int128 *)a1 != LockedHeadEntry )
      KiAbEntryUpdateWaiterTreePosition(a1, (__int64)LockedHeadEntry);
    v10 = *(_QWORD *)(v5 + 56);
    if ( v10 )
      v11 = *(_BYTE *)(v10 + 24);
    else
      v11 = 30;
    if ( !*(_BYTE *)(v5 + 17) )
    {
      v12 = KiAbOwnerComputeCpuPriorityKey(v5);
      v13 = v11;
      if ( v12 < v11 )
        v13 = v12;
      v11 = v13;
    }
    KiAbTryIncrementIoWaiterCounts((unsigned __int8 *)a1, v5);
    CpuPriorityKey = KiAbEntryGetCpuPriorityKey((unsigned __int8 *)a1);
    if ( v11 < CpuPriorityKey )
    {
      if ( !v15 )
      {
LABEL_31:
        KiAbCpuBoostOwners(v5, CpuPriorityKey, (int)&v37, 0, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
        goto LABEL_4;
      }
    }
    else if ( !v15 )
    {
      goto LABEL_4;
    }
    KiAbIoBoostOwners(v5, v15, (int)&v37, 0, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
    goto LABEL_31;
  }
LABEL_5:
  v6 = v37;
  v7 = 0;
  if ( v37 )
  {
    v37 = (_QWORD *)*v37;
    do
    {
      KiDeferredReadySingleThread((__int64)CurrentPrcb, (ULONG_PTR)(v6 - 27), (__int64)&v37);
      v6 = v37;
      ++v7;
      if ( v37 )
        v37 = (_QWORD *)*v37;
      if ( (v7 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
    }
    while ( v6 );
  }
  result = KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
  if ( CurrentIrql < 2u )
  {
    CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v20 = KeGetCurrentPrcb();
      v36 = 0;
      while ( 1 )
      {
        v21 = v20->SchedulerAssist;
        if ( v21 )
        {
          if ( v20->NestingLevel <= 1u )
          {
            v22 = v21[6];
            v21[6] = v22 + 1;
            if ( v22 == -1 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v23 = v20->SchedulerAssist;
        if ( v23 )
        {
          if ( v20->NestingLevel <= 1u )
          {
            v24 = v23[6] - 1;
            v23[6] = v24;
            if ( !v24 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
        do
          KeYieldProcessorEx(&v36, v17, v18, v19);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      LOBYTE(v19) = 1;
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL, v19);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v26 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v26 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v26);
      LOBYTE(v27) = CurrentIrql;
      v28 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v27) == 0;
    }
    else
    {
      v28 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v28 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v28 = (v30[5] & 0xFFFF0003) == 0;
          v30[5] &= 0xFFFF0003;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v28 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else if ( CurrentPrcb->NextThread )
  {
    result = CurrentPrcb->DpcRoutineActive;
    if ( !result )
    {
      if ( CurrentPrcb->NestingLevel )
      {
        CurrentPrcb->InterruptRequest = 1;
      }
      else
      {
        v35[0] = 5;
        *(_OWORD *)&v35[1] = 0LL;
        return HalpInterruptSendIpi(v35, 0x2Fu);
      }
    }
  }
  return result;
}
