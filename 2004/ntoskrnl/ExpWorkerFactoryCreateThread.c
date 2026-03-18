/*
 * XREFs of ExpWorkerFactoryCreateThread @ 0x140266C58
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x1402661E0 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402826A0 (ExpWorkerFactoryCheckCreate.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwSetInformationThread @ 0x1403F3760 (ZwSetInformationThread.c)
 *     ZwResumeThread @ 0x1403F4000 (ZwResumeThread.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     RtlpCreateUserThreadEx @ 0x14060D1A8 (RtlpCreateUserThreadEx.c)
 */

__int64 __fastcall ExpWorkerFactoryCreateThread(__int64 a1)
{
  int v1; // r15d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // r14d
  unsigned int v4; // r15d
  struct _EX_RUNDOWN_REF *v6; // r13
  int v7; // r12d
  unsigned __int64 OldIrql; // r14
  int UserThread; // eax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
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
      v7 = *(_DWORD *)(a1 + 312);
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
            v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v17 = (v16 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v16;
            if ( v17 )
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
        if ( (v7 & 0x8000) == 0 )
        {
          KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
          *(_DWORD *)(a1 + 312) |= 0x8000u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v11 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v18 = KeGetCurrentIrql();
              if ( v18 <= 0xFu && LockHandle.OldIrql <= 0xFu && v18 >= 2u )
              {
                v19 = KeGetCurrentPrcb();
                v20 = v19->SchedulerAssist;
                v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v17 = (v21 & v20[5]) == 0;
                v20[5] &= v21;
                if ( v17 )
                  KiRemoveSystemWorkPriorityKick(v19);
              }
            }
          }
          __writecr8(v11);
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
    v12 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v22 = KeGetCurrentIrql();
        if ( v22 <= 0xFu && LockHandle.OldIrql <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          v24 = v23->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v17 = (v25 & v24[5]) == 0;
          v24[5] &= v25;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
    }
    __writecr8(v12);
    goto LABEL_11;
  }
LABEL_12:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
