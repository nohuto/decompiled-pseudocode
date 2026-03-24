/*
 * XREFs of KiAbForceProcessLockEntry @ 0x14038FA84
 * Callers:
 *     KeAbMarkCrossThreadReleasable @ 0x14038F9E4 (KeAbMarkCrossThreadReleasable.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022E080 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x140230D60 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x14024A750 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiQueueReadyThread @ 0x1402593B0 (KiQueueReadyThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRequestSoftwareInterrupt @ 0x140293E54 (KiRequestSoftwareInterrupt.c)
 *     KiAbIoBoostOwners @ 0x1402F0D60 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x1402F0E64 (KiAbCpuBoostOwners.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402F2040 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1402F261C (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1402F26F0 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1402F2738 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1402F282C (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbProcessContextSwitch @ 0x140347C50 (KiAbProcessContextSwitch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406470 (KiSwapContext.c)
 */

unsigned __int8 __fastcall KiAbForceProcessLockEntry(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // r13
  char v3; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 LockedHeadEntry; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  unsigned __int8 result; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rax
  char v12; // r15
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  char CpuPriorityKey; // si
  int v17; // r10d
  ULONG_PTR CurrentThread; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _KPRCB *v22; // rdi
  _DWORD *v23; // rcx
  int v24; // eax
  _DWORD *v25; // rcx
  int v26; // eax
  _KTHREAD *NextThread; // rdi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  bool v33; // zf
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  int v36; // eax
  _QWORD *v37; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  int v39; // [rsp+A0h] [rbp+50h] BYREF
  int v40; // [rsp+A8h] [rbp+58h]

  v37 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = 15;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v40 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  LockedHeadEntry = KiAbEntryGetLockedHeadEntry((__int64)a1, 1, &LockHandle);
  v8 = LockedHeadEntry;
  if ( LockedHeadEntry )
  {
    if ( (a1[25] & 1) == 0 )
    {
LABEL_4:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_5;
    }
    if ( a1 != (unsigned __int8 *)LockedHeadEntry )
      KiAbEntryUpdateWaiterTreePosition((__int64)a1, LockedHeadEntry, v6, v7);
    v11 = *(_QWORD *)(v8 + 56);
    if ( v11 )
      v3 = *(_BYTE *)(v11 + 48);
    v12 = v3;
    if ( (*(_BYTE *)(v8 + 25) & 1) == 0 )
    {
      v13 = KiAbOwnerComputeCpuPriorityKey(v8);
      if ( v13 < v3 )
        v12 = v13;
    }
    KiAbTryIncrementIoWaiterCounts(a1, v8);
    CpuPriorityKey = KiAbEntryGetCpuPriorityKey(a1, v14, v15);
    if ( v12 < CpuPriorityKey )
    {
      if ( !v17 )
      {
LABEL_25:
        KiAbCpuBoostOwners(v8, CpuPriorityKey, (int)&v37, 0, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
        goto LABEL_4;
      }
    }
    else if ( !v17 )
    {
      goto LABEL_4;
    }
    KiAbIoBoostOwners(v8, v17, (int)&v37, 0, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
    goto LABEL_25;
  }
LABEL_5:
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v37);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
        return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
    return result;
  }
  CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
    v22 = KeGetCurrentPrcb();
    v39 = 0;
    while ( 1 )
    {
      v23 = v22->SchedulerAssist;
      if ( v23 )
      {
        if ( v22->NestingLevel <= 1u )
        {
          v24 = v23[6];
          v23[6] = v24 + 1;
          if ( v24 == -1 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      v25 = v22->SchedulerAssist;
      if ( v25 )
      {
        if ( v22->NestingLevel <= 1u )
        {
          v26 = v25[6] - 1;
          v25[6] = v26;
          if ( !v26 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
      do
        KeYieldProcessorEx(&v39, v19, v20, v21);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
      NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(CurrentThread + 643) = 32;
    *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
    KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v28, v29);
    LOBYTE(v30) = CurrentIrql;
    if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v30) )
      goto LABEL_53;
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
      goto LABEL_52;
    goto LABEL_49;
  }
  if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
    goto LABEL_53;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
  {
LABEL_49:
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v31 = KeGetCurrentPrcb();
      v32 = v31->SchedulerAssist;
      v33 = (v32[5] & 0xFFFF0003) == 0;
      v32[5] &= 0xFFFF0003;
      if ( v33 )
        KiRemoveSystemWorkPriorityKick(v31);
    }
  }
LABEL_52:
  __writecr8(1uLL);
  *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
  KiDeliverApc(0, 0, 0LL);
LABEL_53:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v34 = KeGetCurrentPrcb();
      v35 = v34->SchedulerAssist;
      v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v33 = (v36 & v35[5]) == 0;
      v35[5] &= v36;
      if ( v33 )
        KiRemoveSystemWorkPriorityKick(v34);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
