/*
 * XREFs of ExpWorkerFactoryCreateThread @ 0x140203BC8
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140202E10 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402E7740 (ExpWorkerFactoryCheckCreate.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwSetInformationThread @ 0x1403FA720 (ZwSetInformationThread.c)
 *     ZwResumeThread @ 0x1403FAFC0 (ZwResumeThread.c)
 *     RtlpCreateUserThreadEx @ 0x1405D9C80 (RtlpCreateUserThreadEx.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 */

__int64 __fastcall ExpWorkerFactoryCreateThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // r14d
  struct _EX_RUNDOWN_REF *v4; // r13
  int v5; // r12d
  unsigned __int64 OldIrql; // r14
  int UserThread; // eax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  int v24; // [rsp+30h] [rbp-29h]
  __int64 v25[2]; // [rsp+60h] [rbp+7h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp+17h] BYREF
  HANDLE ThreadHandle; // [rsp+C0h] [rbp+67h] BYREF

  ThreadHandle = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v2 = 128;
  --CurrentThread->KernelApcDisable;
  *(_OWORD *)v25 = 0LL;
  v4 = (struct _EX_RUNDOWN_REF *)(a1 + 104);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 104)) )
  {
    KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 33LL) )
    {
      ++*(_DWORD *)(a1 + 296);
      v5 = *(_DWORD *)(a1 + 312);
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
            v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v15 = (v14 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v14;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      UserThread = RtlpCreateUserThreadEx(
                     *(HANDLE *)(a1 + 40),
                     *(_QWORD *)(a1 + 56),
                     *(_QWORD *)(a1 + 64),
                     v24,
                     *(PUSER_THREAD_START_ROUTINE *)(a1 + 24),
                     *(PVOID *)(a1 + 32),
                     (__int64)&ThreadHandle,
                     (__int64)v25);
      *(_DWORD *)(a1 + 320) = UserThread;
      v2 = UserThread;
      if ( UserThread >= 0 )
      {
        if ( (v5 & 0x8000) == 0 )
        {
          KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
          *(_DWORD *)(a1 + 312) |= 0x8000u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v9 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v16 = KeGetCurrentIrql();
              if ( v16 <= 0xFu && LockHandle.OldIrql <= 0xFu && v16 >= 2u )
              {
                v17 = KeGetCurrentPrcb();
                v18 = v17->SchedulerAssist;
                v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v15 = (v19 & v18[5]) == 0;
                v18[5] &= v19;
                if ( v15 )
                  KiRemoveSystemWorkPriorityKick(v17);
              }
            }
          }
          __writecr8(v9);
        }
        if ( *(_DWORD *)(a1 + 316) )
          ZwSetInformationThread(ThreadHandle, ThreadBasePriority, (PVOID)(a1 + 316), 4u);
        if ( (*(_DWORD *)(a1 + 312) & 0x4000) != 0 )
          ZwSetInformationThread(
            ThreadHandle,
            ThreadSelectedCpuSets,
            (PVOID)(a1 + 120),
            8 * (unsigned __int16)KiActiveGroups);
        v2 = ZwResumeThread(ThreadHandle, 0LL);
        ObCloseHandle(ThreadHandle, 0);
LABEL_11:
        ExReleaseRundownProtection(v4);
        goto LABEL_12;
      }
      KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
      --*(_DWORD *)(a1 + 296);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v10 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 <= 0xFu && LockHandle.OldIrql <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v15 = (v23 & v22[5]) == 0;
          v22[5] &= v23;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
    }
    __writecr8(v10);
    goto LABEL_11;
  }
LABEL_12:
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  return v2;
}
