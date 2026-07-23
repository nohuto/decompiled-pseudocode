/*
 * XREFs of KiAbForceProcessLockEntry @ 0x14038D0C4
 * Callers:
 *     KeAbMarkCrossThreadReleasable @ 0x14038D024 (KeAbMarkCrossThreadReleasable.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140210820 (KiAbEntryGetLockedHeadEntry.c)
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     KiRequestSoftwareInterrupt @ 0x140273DA8 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x1402EB520 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiAbIoBoostOwners @ 0x140329C44 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x140329D48 (KiAbCpuBoostOwners.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14032A618 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14032A6EC (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x14032A734 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14032A828 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FDDE0 (KiSwapContext.c)
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
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rax
  char v12; // r15
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  char CpuPriorityKey; // si
  int v18; // r10d
  ULONG_PTR CurrentThread; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KPRCB *v23; // rdi
  _DWORD *v24; // rcx
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // eax
  _KTHREAD *NextThread; // rdi
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r8
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  bool v34; // zf
  struct _KPRCB *v35; // r9
  _DWORD *v36; // r8
  int v37; // eax
  _QWORD *v38; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  int v40; // [rsp+A0h] [rbp+50h] BYREF
  int v41; // [rsp+A8h] [rbp+58h]

  v38 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = 15;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v41 = 0;
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
    KiAbTryIncrementIoWaiterCounts((unsigned __int8 *)Node, v8);
    CpuPriorityKey = KiAbEntryGetCpuPriorityKey((unsigned __int8 *)Node, v14, v15, v16);
    if ( v12 < CpuPriorityKey )
    {
      if ( !v18 )
      {
LABEL_25:
        KiAbCpuBoostOwners(v8, CpuPriorityKey, (int)&v38, 0, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
        goto LABEL_4;
      }
    }
    else if ( !v18 )
    {
      goto LABEL_4;
    }
    KiAbIoBoostOwners(v8, v18, (int)&v38, 0, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
    goto LABEL_25;
  }
LABEL_5:
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v38, v6, v7);
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
    v23 = KeGetCurrentPrcb();
    v40 = 0;
    while ( 1 )
    {
      v24 = v23->SchedulerAssist;
      if ( v24 )
      {
        if ( v23->NestingLevel <= 1u )
        {
          v25 = v24[6];
          v24[6] = v25 + 1;
          if ( v25 == -1 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      v26 = v23->SchedulerAssist;
      if ( v26 )
      {
        if ( v23->NestingLevel <= 1u )
        {
          v27 = v26[6] - 1;
          v26[6] = v27;
          if ( !v27 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
      do
        KeYieldProcessorEx(&v40, v20, v21, v22);
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
    KiQueueReadyThread(CurrentPrcb, CurrentThread, v29, v30);
    LOBYTE(v31) = CurrentIrql;
    if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v31) )
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
      v32 = KeGetCurrentPrcb();
      v33 = v32->SchedulerAssist;
      v34 = (v33[5] & 0xFFFF0003) == 0;
      v33[5] &= 0xFFFF0003;
      if ( v34 )
        KiRemoveSystemWorkPriorityKick(v32);
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
      v35 = KeGetCurrentPrcb();
      v36 = v35->SchedulerAssist;
      v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v34 = (v37 & v36[5]) == 0;
      v36[5] &= v37;
      if ( v34 )
        KiRemoveSystemWorkPriorityKick(v35);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
