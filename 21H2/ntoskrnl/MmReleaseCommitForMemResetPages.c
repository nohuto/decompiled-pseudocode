/*
 * XREFs of MmReleaseCommitForMemResetPages @ 0x140581748
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     KeForceAttachProcess @ 0x1402393FC (KeForceAttachProcess.c)
 *     KeForceDetachProcess @ 0x140241980 (KeForceDetachProcess.c)
 *     MiAttachThreadDone @ 0x14027D8DC (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x14027D9E8 (MiPrepareAttachThread.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeRetryOutswapProcess @ 0x14056C540 (KeRetryOutswapProcess.c)
 */

__int64 __fastcall MmReleaseCommitForMemResetPages(volatile signed __int32 *BugCheckParameter1, int a2)
{
  __int64 v3; // rsi
  unsigned int v5; // edi
  _QWORD *SharedVm; // r13
  int v7; // r15d
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  volatile LONG *v14; // rbx
  KIRQL v15; // cl
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  __int64 Object; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-31h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-21h] BYREF
  _OWORD v24[3]; // [rsp+68h] [rbp-9h] BYREF

  Object = 393216LL;
  v22[1] = v22;
  v3 = (__int64)(BugCheckParameter1 + 416);
  v22[0] = v22;
  memset(v24, 0, sizeof(v24));
  v5 = 0;
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
      KeForceAttachProcess((ULONG_PTR)BugCheckParameter1, (__int64)v24);
      v14 = (volatile LONG *)MiGetSharedVm(v3);
      v15 = ExAcquireSpinLockExclusive(v14);
      *((_DWORD *)v14 + 1) = 0;
      if ( (*(_BYTE *)(v3 + 187) & 0x60) == 0x40 )
      {
        v16 = SharedVm[4];
        if ( !*(_QWORD *)(v16 + 40) )
        {
          *(_QWORD *)(v16 + 40) = &Object;
          *(_DWORD *)(v16 + 48) = *(_DWORD *)(v16 + 48) & 0xFFFFFFFE | (a2 != 0);
          MiUnlockWorkingSetExclusive(v3, v15);
          KeRetryOutswapProcess(BugCheckParameter1, v17, v18, v19);
          KeForceDetachProcess(v24, 0);
          MiAttachThreadDone(v3);
          KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
          return v5;
        }
        v5 = -1073740682;
      }
      else
      {
        v5 = -1073741431;
      }
      if ( v15 != 17 )
        MiUnlockWorkingSetExclusive(v3, v15);
      KeForceDetachProcess(v24, 0);
      MiAttachThreadDone(v3);
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
  return v5;
}
