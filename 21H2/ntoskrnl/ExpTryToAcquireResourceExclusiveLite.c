/*
 * XREFs of ExpTryToAcquireResourceExclusiveLite @ 0x1405B5B2C
 * Callers:
 *     ExTryToAcquireResourceExclusiveLite @ 0x1405B5750 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpTryAcquireResourceExclusive @ 0x140358470 (ExpTryAcquireResourceExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405AAFBC (PerfLogExecutiveResourceAcquire.c)
 */

char __fastcall ExpTryToAcquireResourceExclusiveLite(__int64 a1)
{
  unsigned int v2; // esi
  struct _KTHREAD *CurrentThread; // r14
  int v4; // r12d
  int v5; // ebp
  int v6; // r15d
  char v7; // di
  int v8; // ecx
  unsigned int v9; // eax
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = DWORD1(PerfGlobalGroupMask) & 0x20000;
  v6 = 65537;
  __incgsdword(0x86E0u);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
  v7 = ExpTryAcquireResourceExclusive(a1);
  if ( v7 )
  {
    v8 = *(_DWORD *)(a1 + 56) & 7;
    *(_QWORD *)(a1 + 48) = CurrentThread;
    *(_DWORD *)(a1 + 56) = v8 | 8;
    if ( v5 )
    {
      v2 = 1;
      v6 = 65569;
      v4 = *(_DWORD *)(a1 + 68);
    }
  }
  else if ( *(char *)(a1 + 26) < 0 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
  {
    v9 = *(_DWORD *)(a1 + 56) + 8;
    *(_DWORD *)(a1 + 56) = v9;
    if ( v5 )
    {
      v4 = *(_DWORD *)(a1 + 68);
      v2 = v9 >> 3;
      v6 = 65585;
    }
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
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
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v7 )
  {
    __incgsdword(0x86E4u);
    __incgsdword(0x8664u);
  }
  if ( v5 )
    PerfLogExecutiveResourceAcquire(v6, a1, v2, v4);
  return v7;
}
