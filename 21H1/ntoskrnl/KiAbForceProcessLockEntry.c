/*
 * XREFs of KiAbForceProcessLockEntry @ 0x14038C554
 * Callers:
 *     KeAbMarkCrossThreadReleasable @ 0x14038C4B4 (KeAbMarkCrossThreadReleasable.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140269870 (KiAbEntryGetLockedHeadEntry.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     KiAbIoBoostOwners @ 0x1402DCE74 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x1402DCF78 (KiAbCpuBoostOwners.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1402DD848 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1402DD91C (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1402DD964 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1402DDA58 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiEndThreadCycleAccumulation @ 0x140330660 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140359A48 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
 */

unsigned __int8 __fastcall KiAbForceProcessLockEntry(char *Node)
{
  unsigned __int8 CurrentIrql; // r13
  char v3; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  char *LockedHeadEntry; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  unsigned __int8 result; // al
  _DWORD *v10; // r9
  _DWORD *SchedulerAssist; // r9
  __int64 v12; // rax
  char v13; // r15
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  char CpuPriorityKey; // si
  int v19; // r10d
  ULONG_PTR CurrentThread; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  struct _KPRCB *v24; // rdi
  _DWORD *v25; // rcx
  int v26; // eax
  _DWORD *v27; // rcx
  int v28; // eax
  _KTHREAD *NextThread; // rdi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r8
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  bool v35; // zf
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  __int64 v39; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  int v41; // [rsp+A0h] [rbp+50h] BYREF
  int v42; // [rsp+A8h] [rbp+58h]

  v39 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = 15;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v42 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  LockedHeadEntry = KiAbEntryGetLockedHeadEntry(Node, 1, &LockHandle);
  v8 = (__int64)LockedHeadEntry;
  if ( LockedHeadEntry )
  {
    if ( (Node[25] & 1) == 0 )
    {
LABEL_4:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_5;
    }
    if ( Node != LockedHeadEntry )
      KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)Node, (_RTL_RB_TREE *)LockedHeadEntry);
    v12 = *(_QWORD *)(v8 + 56);
    if ( v12 )
      v3 = *(_BYTE *)(v12 + 48);
    v13 = v3;
    if ( (*(_BYTE *)(v8 + 25) & 1) == 0 )
    {
      v14 = KiAbOwnerComputeCpuPriorityKey(v8);
      if ( v14 < v3 )
        v13 = v14;
    }
    KiAbTryIncrementIoWaiterCounts((unsigned __int8 *)Node, v8);
    CpuPriorityKey = KiAbEntryGetCpuPriorityKey((unsigned __int8 *)Node, v15, v16, v17);
    if ( v13 < CpuPriorityKey )
    {
      if ( !v19 )
      {
LABEL_25:
        KiAbCpuBoostOwners(v8, CpuPriorityKey, (int)&v39, 0, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
        goto LABEL_4;
      }
    }
    else if ( !v19 )
    {
      goto LABEL_4;
    }
    KiAbIoBoostOwners(v8, v19, (int)&v39, 0, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
    goto LABEL_25;
  }
LABEL_5:
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v39, v6, v7);
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
    v24 = KeGetCurrentPrcb();
    v41 = 0;
    while ( 1 )
    {
      v25 = v24->SchedulerAssist;
      if ( v25 )
      {
        if ( v24->NestingLevel <= 1u )
        {
          v26 = v25[6];
          v25[6] = v26 + 1;
          if ( v26 == -1 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      v27 = v24->SchedulerAssist;
      if ( v27 )
      {
        if ( v24->NestingLevel <= 1u )
        {
          v28 = v27[6] - 1;
          v27[6] = v28;
          if ( !v28 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
      do
        KeYieldProcessorEx(&v41, v21, v22, v23);
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
    KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v30, v31);
    LOBYTE(v32) = CurrentIrql;
    if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v32) )
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
      v33 = KeGetCurrentPrcb();
      v34 = v33->SchedulerAssist;
      v35 = (v34[5] & 0xFFFF0003) == 0;
      v34[5] &= 0xFFFF0003;
      if ( v35 )
        KiRemoveSystemWorkPriorityKick(v33);
    }
  }
LABEL_52:
  __writecr8(1uLL);
  *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
  KiDeliverApc(0, 0LL, 0LL, v10);
LABEL_53:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v36 = KeGetCurrentPrcb();
      v37 = v36->SchedulerAssist;
      v38 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v35 = (v38 & v37[5]) == 0;
      v37[5] &= v38;
      if ( v35 )
        KiRemoveSystemWorkPriorityKick(v36);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
