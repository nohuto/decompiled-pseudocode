/*
 * XREFs of MmQueryCommitReleaseState @ 0x1403145B8
 * Callers:
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeForceAttachProcess @ 0x1402A680C (KeForceAttachProcess.c)
 *     MiAttachThreadDone @ 0x1402CFF94 (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x1402D0024 (MiPrepareAttachThread.c)
 *     KeForceDetachProcess @ 0x140308594 (KeForceDetachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MmQueryCommitReleaseState(ULONG_PTR a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // rsi
  LONG *SharedVm; // rax
  _DWORD *v8; // rdx
  _QWORD *v9; // r8
  _QWORD *v10; // r9
  _QWORD *v11; // r10
  int v12; // ecx
  int v13; // ebx
  LONG *v14; // r15
  __int64 v15; // r12
  __int64 v16; // rdi
  __int64 v17; // r13
  char v18; // cl
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // al
  __int64 v26; // r8
  _DWORD *v27; // r9
  int v29; // [rsp+20h] [rbp-71h]
  int v30; // [rsp+24h] [rbp-6Dh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-41h] BYREF
  _OWORD v36[3]; // [rsp+68h] [rbp-29h] BYREF

  v5 = a1 + 1664;
  memset(v36, 0, sizeof(v36));
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedVm = MiGetSharedVm(a1 + 1664);
  v12 = *(_DWORD *)(v5 + 184);
  v13 = 0;
  v14 = SharedVm;
  HIBYTE(v29) = HIBYTE(v12);
  v15 = 0LL;
  v16 = *((_QWORD *)SharedVm + 1);
  v17 = 0LL;
  if ( dword_140CFB1D0 == 1 )
  {
    v18 = HIBYTE(v12);
    v16 = 0LL;
  }
  else
  {
    if ( (HIBYTE(v12) & 0x60) == 0x40 )
    {
      KeAcquireInStackQueuedSpinLock(&qword_140C4ED80, &LockHandle);
      v30 = MiPrepareAttachThread(a1, v5);
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
            v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v24 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( v30 )
      {
        KeForceAttachProcess(a1, (__int64)v36);
        v25 = MiLockWorkingSetShared(v5);
        v29 = *(_DWORD *)(v5 + 184);
        if ( (HIBYTE(v29) & 0x60) == 0x40 )
        {
          v17 = *((_QWORD *)v14 + 2);
          v15 = *(_QWORD *)(*((_QWORD *)v14 + 4) + 32LL);
        }
        MiUnlockWorkingSetShared(v5, v25);
        KeForceDetachProcess(v36, 0, v26, v27);
        MiAttachThreadDone(v5);
      }
      v11 = a5;
      v10 = a4;
      v9 = a3;
      v8 = a2;
    }
    v18 = HIBYTE(v29);
    LOBYTE(SharedVm) = HIBYTE(v29) & 0x60;
    if ( (HIBYTE(v29) & 0x60u) < 0x40 )
      v16 = 0LL;
  }
  LOBYTE(v13) = (v18 & 0x60u) >= 0x20;
  *v8 = v13;
  *v9 = v16;
  *v10 = v15;
  *v11 = v17;
  return (char)SharedVm;
}
