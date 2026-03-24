/*
 * XREFs of MmReleaseCommitForMemResetPages @ 0x14052CCF4
 * Callers:
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAE0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeForceAttachProcess @ 0x14025C278 (KeForceAttachProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeForceDetachProcess @ 0x1402BA388 (KeForceDetachProcess.c)
 *     MiPrepareAttachThread @ 0x1402EF3D4 (MiPrepareAttachThread.c)
 *     MiAttachThreadDone @ 0x1402EF448 (MiAttachThreadDone.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeRetryOutswapProcess @ 0x1405138C8 (KeRetryOutswapProcess.c)
 */

__int64 __fastcall MmReleaseCommitForMemResetPages(volatile signed __int32 *BugCheckParameter1, int a2)
{
  __int64 v3; // rdi
  LONG *SharedVm; // r13
  unsigned int v6; // ebx
  int v7; // r14d
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  LONG *v14; // rbx
  KIRQL v15; // al
  unsigned __int8 v16; // si
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r9
  __int64 Object; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-31h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-21h] BYREF
  _OWORD v25[3]; // [rsp+68h] [rbp-9h] BYREF

  Object = 393216LL;
  v23[1] = v23;
  v3 = (__int64)(BugCheckParameter1 + 416);
  v23[0] = v23;
  memset(v25, 0, sizeof(v25));
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedVm = MiGetSharedVm((__int64)(BugCheckParameter1 + 416));
  if ( (*(_BYTE *)(v3 + 187) & 0x60) == 0x40 )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v7 = MiPrepareAttachThread((__int64)BugCheckParameter1, v3);
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
          v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v13 = (v12 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v7 )
    {
      KeForceAttachProcess((ULONG_PTR)BugCheckParameter1, (__int64)v25);
      v14 = MiGetSharedVm(v3);
      v15 = ExAcquireSpinLockExclusive(v14);
      v14[1] = 0;
      v16 = v15;
      if ( (*(_BYTE *)(v3 + 187) & 0x60) == 0x40 )
      {
        v17 = *((_QWORD *)SharedVm + 4);
        if ( *(_QWORD *)(v17 + 40) )
        {
          v6 = -1073740682;
        }
        else
        {
          *(_QWORD *)(v17 + 40) = &Object;
          *(_DWORD *)(v17 + 48) = *(_DWORD *)(v17 + 48) & 0xFFFFFFFE | (a2 != 0);
          MiUnlockWorkingSetExclusive(v3, v15);
          v16 = 17;
          KeRetryOutswapProcess(BugCheckParameter1, v18, v19, v20);
          KeForceDetachProcess(v25, 0);
          MiAttachThreadDone(v3);
          v7 = 0;
          KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
          v6 = 0;
        }
      }
      else
      {
        v6 = -1073741431;
      }
      if ( v16 != 17 )
        MiUnlockWorkingSetExclusive(v3, v16);
      if ( v7 )
      {
        KeForceDetachProcess(v25, 0);
        MiAttachThreadDone(v3);
      }
    }
    else
    {
      return (unsigned int)-1073700861;
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v6;
}
