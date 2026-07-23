/*
 * XREFs of ExpWorkerFactoryCreateThread @ 0x1402BFC88
 * Callers:
 *     ExpWorkerFactoryCheckCreate @ 0x140245EC0 (ExpWorkerFactoryCheckCreate.c)
 *     NtSetInformationWorkerFactory @ 0x1402BF210 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwSetInformationThread @ 0x1403F24D0 (ZwSetInformationThread.c)
 *     ZwResumeThread @ 0x1403F2D70 (ZwResumeThread.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     RtlpCreateUserThreadEx @ 0x1406422F8 (RtlpCreateUserThreadEx.c)
 */

__int64 __fastcall ExpWorkerFactoryCreateThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // r14d
  struct _EX_RUNDOWN_REF *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r12d
  unsigned __int64 OldIrql; // r14
  int UserThread; // eax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  int v27; // [rsp+30h] [rbp-29h]
  __int64 v28[2]; // [rsp+60h] [rbp+7h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp+17h] BYREF
  HANDLE ThreadHandle; // [rsp+C0h] [rbp+67h] BYREF

  ThreadHandle = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v2 = 128;
  --CurrentThread->KernelApcDisable;
  *(_OWORD *)v28 = 0LL;
  v4 = (struct _EX_RUNDOWN_REF *)(a1 + 104);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 104)) )
  {
    KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 33LL) )
    {
      ++*(_DWORD *)(a1 + 296);
      v8 = *(_DWORD *)(a1 + 312);
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
            v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v18 = (v17 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v17;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      UserThread = RtlpCreateUserThreadEx(
                     *(HANDLE *)(a1 + 40),
                     *(_QWORD *)(a1 + 56),
                     *(_QWORD *)(a1 + 64),
                     v27,
                     *(PUSER_THREAD_START_ROUTINE *)(a1 + 24),
                     *(PVOID *)(a1 + 32),
                     (__int64)&ThreadHandle,
                     (__int64)v28);
      *(_DWORD *)(a1 + 320) = UserThread;
      v2 = UserThread;
      if ( UserThread >= 0 )
      {
        if ( (v8 & 0x8000) == 0 )
        {
          KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
          *(_DWORD *)(a1 + 312) |= 0x8000u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v12 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v19 = KeGetCurrentIrql();
              if ( v19 <= 0xFu && LockHandle.OldIrql <= 0xFu && v19 >= 2u )
              {
                v20 = KeGetCurrentPrcb();
                v21 = v20->SchedulerAssist;
                v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v18 = (v22 & v21[5]) == 0;
                v21[5] &= v22;
                if ( v18 )
                  KiRemoveSystemWorkPriorityKick(v20);
              }
            }
          }
          __writecr8(v12);
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
        ExReleaseRundownProtection_0(v4);
        goto LABEL_12;
      }
      KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
      --*(_DWORD *)(a1 + 296);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v13 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && LockHandle.OldIrql <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v18 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
    }
    __writecr8(v13);
    goto LABEL_11;
  }
LABEL_12:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
  return v2;
}
