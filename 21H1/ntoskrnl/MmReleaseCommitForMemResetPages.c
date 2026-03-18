/*
 * XREFs of MmReleaseCommitForMemResetPages @ 0x1405271D4
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     KeForceAttachProcess @ 0x1402A680C (KeForceAttachProcess.c)
 *     MiAttachThreadDone @ 0x1402CFF94 (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x1402D0024 (MiPrepareAttachThread.c)
 *     KeForceDetachProcess @ 0x140308594 (KeForceDetachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeRetryOutswapProcess @ 0x14050DE08 (KeRetryOutswapProcess.c)
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
  __int64 v16; // r8
  _DWORD *v17; // r9
  unsigned __int8 v18; // si
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  _DWORD *v22; // r9
  __int64 v23; // r8
  _DWORD *v24; // r9
  __int64 Object; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v27[2]; // [rsp+40h] [rbp-31h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-21h] BYREF
  _OWORD v29[3]; // [rsp+68h] [rbp-9h] BYREF

  Object = 393216LL;
  v27[1] = v27;
  v3 = (__int64)(BugCheckParameter1 + 416);
  v27[0] = v27;
  memset(v29, 0, sizeof(v29));
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedVm = MiGetSharedVm((__int64)(BugCheckParameter1 + 416));
  if ( (*(_BYTE *)(v3 + 187) & 0x60) == 0x40 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C4ED80, &LockHandle);
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
      KeForceAttachProcess((ULONG_PTR)BugCheckParameter1, (__int64)v29);
      v14 = MiGetSharedVm(v3);
      v15 = ExAcquireSpinLockExclusive(v14);
      v14[1] = 0;
      v18 = v15;
      if ( (*(_BYTE *)(v3 + 187) & 0x60) == 0x40 )
      {
        v19 = *((_QWORD *)SharedVm + 4);
        if ( *(_QWORD *)(v19 + 40) )
        {
          v6 = -1073740682;
        }
        else
        {
          *(_QWORD *)(v19 + 40) = &Object;
          *(_DWORD *)(v19 + 48) = *(_DWORD *)(v19 + 48) & 0xFFFFFFFE | (a2 != 0);
          MiUnlockWorkingSetExclusive(v3, v15);
          v18 = 17;
          KeRetryOutswapProcess(BugCheckParameter1, v20, v21, v22);
          KeForceDetachProcess(v29, 0, v23, v24);
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
      if ( v18 != 17 )
        MiUnlockWorkingSetExclusive(v3, v18);
      if ( v7 )
      {
        KeForceDetachProcess(v29, 0, v16, v17);
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
