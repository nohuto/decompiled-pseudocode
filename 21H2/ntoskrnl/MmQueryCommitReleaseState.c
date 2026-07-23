/*
 * XREFs of MmQueryCommitReleaseState @ 0x140242448
 * Callers:
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeForceDetachProcess @ 0x140238598 (KeForceDetachProcess.c)
 *     KeForceAttachProcess @ 0x14027D7E8 (KeForceAttachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiPrepareAttachThread @ 0x1402FA124 (MiPrepareAttachThread.c)
 *     MiAttachThreadDone @ 0x1402FA198 (MiAttachThreadDone.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MmQueryCommitReleaseState(ULONG_PTR a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  ULONG_PTR v5; // rsi
  __int64 SharedVm; // rax
  _DWORD *v8; // rdx
  _QWORD *v9; // r8
  _QWORD *v10; // r9
  _QWORD *v11; // r10
  int v12; // ecx
  int v13; // ebx
  __int64 v14; // r15
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
  char v25; // al
  __int64 v26; // rdx
  unsigned int v28; // [rsp+20h] [rbp-71h]
  int v29; // [rsp+24h] [rbp-6Dh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-41h] BYREF
  _OWORD v35[3]; // [rsp+68h] [rbp-29h] BYREF

  v5 = a1 + 1664;
  memset(v35, 0, sizeof(v35));
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedVm = MiGetSharedVm(a1 + 1664, a2);
  v12 = *(_DWORD *)(v5 + 184);
  v13 = 0;
  v14 = SharedVm;
  HIBYTE(v28) = HIBYTE(v12);
  v15 = 0LL;
  v16 = *(_QWORD *)(SharedVm + 8);
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
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      v29 = MiPrepareAttachThread(a1, v5);
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
      if ( v29 )
      {
        KeForceAttachProcess(a1);
        v25 = MiLockWorkingSetShared(v5);
        v28 = *(_DWORD *)(v5 + 184);
        v26 = HIBYTE(v28);
        if ( (HIBYTE(v28) & 0x60) == 0x40 )
        {
          v26 = *(_QWORD *)(v14 + 32);
          v17 = *(_QWORD *)(v14 + 16);
          v15 = *(_QWORD *)(v26 + 32);
        }
        LOBYTE(v26) = v25;
        MiUnlockWorkingSetShared(v5, v26);
        KeForceDetachProcess(v35, 0);
        MiAttachThreadDone(v5);
      }
      v11 = a5;
      v10 = a4;
      v9 = a3;
      v8 = a2;
    }
    v18 = HIBYTE(v28);
    LOBYTE(SharedVm) = HIBYTE(v28) & 0x60;
    if ( (HIBYTE(v28) & 0x60u) < 0x40 )
      v16 = 0LL;
  }
  LOBYTE(v13) = (v18 & 0x60u) >= 0x20;
  *v8 = v13;
  *v9 = v16;
  *v10 = v15;
  *v11 = v17;
  return SharedVm;
}
