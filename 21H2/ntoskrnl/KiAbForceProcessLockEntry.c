/*
 * XREFs of KiAbForceProcessLockEntry @ 0x14038FBD4
 * Callers:
 *     KeAbMarkCrossThreadReleasable @ 0x14038FB34 (KeAbMarkCrossThreadReleasable.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAbIoBoostOwners @ 0x1402FBAB0 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x1402FBBB4 (KiAbCpuBoostOwners.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402FCD90 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1402FD36C (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1402FD440 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1402FD488 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1402FD57C (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 */

unsigned __int8 __fastcall KiAbForceProcessLockEntry(char *Node, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // r13
  char v6; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  char *LockedHeadEntry; // rax
  __int64 v9; // rdi
  unsigned __int8 result; // al
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
  __int64 v29; // r8
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  bool v32; // zf
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  _QWORD *v36; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  int v38; // [rsp+A0h] [rbp+50h] BYREF
  int v39; // [rsp+A8h] [rbp+58h]

  v36 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = 15;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v39 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  LockedHeadEntry = KiAbEntryGetLockedHeadEntry(Node, 1, &LockHandle, (__int64)SchedulerAssist);
  v9 = (__int64)LockedHeadEntry;
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
    v11 = *(_QWORD *)(v9 + 56);
    if ( v11 )
      v6 = *(_BYTE *)(v11 + 48);
    v12 = v6;
    if ( (*(_BYTE *)(v9 + 25) & 1) == 0 )
    {
      v13 = KiAbOwnerComputeCpuPriorityKey(v9);
      if ( v13 < v6 )
        v12 = v13;
    }
    KiAbTryIncrementIoWaiterCounts((unsigned __int8 *)Node, v9);
    CpuPriorityKey = KiAbEntryGetCpuPriorityKey((unsigned __int8 *)Node, v14, v15);
    if ( v12 < CpuPriorityKey )
    {
      if ( !v17 )
      {
LABEL_25:
        KiAbCpuBoostOwners(v9, CpuPriorityKey, (int)&v36, 0, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
        goto LABEL_4;
      }
    }
    else if ( !v17 )
    {
      goto LABEL_4;
    }
    KiAbIoBoostOwners(v9, v17, (int)&v36, 0, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
    goto LABEL_25;
  }
LABEL_5:
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v36);
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
    v38 = 0;
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
        KeYieldProcessorEx(&v38, v19, v20, v21);
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
    KiQueueReadyThread(CurrentPrcb, CurrentThread, v28);
    LOBYTE(v29) = CurrentIrql;
    if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v29) )
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
      v30 = KeGetCurrentPrcb();
      v31 = v30->SchedulerAssist;
      v32 = (v31[5] & 0xFFFF0003) == 0;
      v31[5] &= 0xFFFF0003;
      if ( v32 )
        KiRemoveSystemWorkPriorityKick(v30);
    }
  }
LABEL_52:
  __writecr8(1uLL);
  *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
  KiDeliverApc(0, 0LL, 0LL);
LABEL_53:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v33 = KeGetCurrentPrcb();
      v34 = v33->SchedulerAssist;
      v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v32 = (v35 & v34[5]) == 0;
      v34[5] &= v35;
      if ( v32 )
        KiRemoveSystemWorkPriorityKick(v33);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
