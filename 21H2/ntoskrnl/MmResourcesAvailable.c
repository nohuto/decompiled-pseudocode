/*
 * XREFs of MmResourcesAvailable @ 0x14033E660
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x14033C0E0 (ExAllocatePoolWithTagPriority.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KePulseEvent @ 0x140271AC0 (KePulseEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiFreeExcessSegments @ 0x140314D50 (MiFreeExcessSegments.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiIssuePageExtendRequest @ 0x140543944 (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MmResourcesAvailable(char a1, unsigned __int64 a2, int a3)
{
  ULONG_PTR *v3; // rbx
  unsigned int v4; // esi
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // r9
  int v10; // ebp
  __int64 v11; // r10
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // r10
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rax
  ULONG_PTR v18; // rax
  ULONG_PTR v19; // r8
  struct _KEVENT *v20; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // edx
  bool v26; // zf
  struct _KTHREAD *CurrentThread; // rdi
  struct _KEVENT *v29; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = &MiSystemPartition;
  v4 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v9 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
  v10 = a1 & 1;
  if ( (a1 & 1) == 0 )
  {
    v11 = MiState[0] - qword_140C4C8C8;
LABEL_8:
    v16 = v11 << 12;
    goto LABEL_9;
  }
  if ( (a1 & 0x20) == 0 )
  {
    v11 = qword_140C4EF38 - qword_140C4EF28;
    goto LABEL_8;
  }
  v12 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
  v13 = (__int64)*(int *)(v12 + 868) << 21;
  v14 = *(_QWORD *)(v12 + 184) << 12;
  v15 = v13 - v14;
  if ( v13 <= v14 )
    v15 = 0LL;
  v16 = ((0x10000LL - *(unsigned int *)(v12 + 872)) << 21) + v15;
  v3 = *(ULONG_PTR **)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(v9 + 430));
LABEL_9:
  v17 = a2 + 0x80000;
  if ( a3 != 16 )
    v17 = a2 + 0x200000;
  if ( v17 <= v16 )
  {
    if ( (a1 & 1) == 0 )
      goto LABEL_30;
    v18 = 0LL;
    v19 = v3[933];
    if ( v19 <= v3[777] )
      v18 = v3[777] - v19;
    if ( v8 > v18 )
    {
      MiIssuePageExtendRequest(v3, v8, 2LL, 0LL);
    }
    else
    {
LABEL_30:
      if ( a2 + 10485760 < v16 || v3[866] < 0x40000 )
        return 1LL;
      v4 = 1;
    }
  }
  if ( (a1 & 0x20) == 0 )
  {
    if ( v10 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4EF18, 0LL);
      v29 = (struct _KEVENT *)v3[31];
      if ( !v29->Header.SignalState )
        KePulseEvent(v29, 0, 0);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4EF18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C4EF18);
      KeAbPostRelease((ULONG_PTR)&qword_140C4EF18);
      KiLeaveGuardedRegionUnsafe(CurrentThread);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock(v3 + 616, &LockHandle);
      v20 = (struct _KEVENT *)v3[33];
      if ( !v20->Header.SignalState )
        KePulseEvent(v20, 0, 0);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v26 = (v25 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v25;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    MiFreeExcessSegments();
  }
  return v4;
}
