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
  int v1; // r15d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // r14d
  unsigned int v4; // r15d
  struct _EX_RUNDOWN_REF *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r12d
  unsigned __int64 OldIrql; // r14
  int UserThread; // eax
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp+17h] BYREF

  v1 = *(_DWORD *)(a1 + 312);
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v3 = 128;
  v4 = (v1 & 0x800 | 0x80u) >> 7;
  --CurrentThread->KernelApcDisable;
  v6 = (struct _EX_RUNDOWN_REF *)(a1 + 104);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 104)) )
  {
    KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 33LL) )
    {
      ++*(_DWORD *)(a1 + 296);
      v10 = *(_DWORD *)(a1 + 312);
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
            v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v20 = (v19 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v19;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      UserThread = RtlpCreateUserThreadEx(*(_QWORD *)(a1 + 40), 0, v4, 0, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64));
      *(_DWORD *)(a1 + 320) = UserThread;
      v3 = UserThread;
      if ( UserThread >= 0 )
      {
        if ( (v10 & 0x8000) == 0 )
        {
          KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
          *(_DWORD *)(a1 + 312) |= 0x8000u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v14 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v21 = KeGetCurrentIrql();
              if ( v21 <= 0xFu && LockHandle.OldIrql <= 0xFu && v21 >= 2u )
              {
                v22 = KeGetCurrentPrcb();
                v23 = v22->SchedulerAssist;
                v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v20 = (v24 & v23[5]) == 0;
                v23[5] &= v24;
                if ( v20 )
                  KiRemoveSystemWorkPriorityKick(v22);
              }
            }
          }
          __writecr8(v14);
        }
        if ( *(_DWORD *)(a1 + 316) )
          ZwSetInformationThread(0LL, ThreadBasePriority, (PVOID)(a1 + 316), 4u);
        if ( (*(_DWORD *)(a1 + 312) & 0x4000) != 0 )
          ZwSetInformationThread(
            0LL,
            ThreadSuspendCount|ThreadAffinityMask,
            (PVOID)(a1 + 120),
            8 * (unsigned __int16)KiActiveGroups);
        v3 = ZwResumeThread(0LL, 0LL);
        ObCloseHandle(0LL, 0);
LABEL_11:
        ExReleaseRundownProtection_0(v6);
        goto LABEL_12;
      }
      KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
      --*(_DWORD *)(a1 + 296);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v15 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && LockHandle.OldIrql <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v20 = (v28 & v27[5]) == 0;
          v27[5] &= v28;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
    }
    __writecr8(v15);
    goto LABEL_11;
  }
LABEL_12:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
  return v3;
}
