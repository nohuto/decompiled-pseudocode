/*
 * XREFs of MiUnlockControlAreaSectionExtend @ 0x140355E04
 * Callers:
 *     MmExtendSection @ 0x140708C5C (MmExtendSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiBuildWakeList @ 0x14029F5AC (MiBuildWakeList.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KeSignalGate @ 0x1403331D0 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiUnlockControlAreaSectionExtend(ULONG_PTR a1, __int64 a2)
{
  int v2; // r14d
  unsigned __int64 v5; // rsi
  __int64 *v6; // rax
  volatile LONG *v7; // rcx
  __int64 *v8; // rdi
  __int64 v9; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 *v11; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v16; // eax
  bool v17; // zf

  v2 = *(_DWORD *)(a2 + 8);
  KeAbPostRelease(a1);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = MiBuildWakeList(a1, *(_DWORD *)(a2 + 8));
  v7 = (volatile LONG *)(a1 + 72);
  v8 = v6;
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        v9 = (unsigned int)v16 & SchedulerAssist[5];
        SchedulerAssist[5] = v9;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  if ( v8 )
  {
    do
    {
      v11 = (__int64 *)*v8;
      if ( v8 != (__int64 *)a2 )
        KeSignalGate((__int64)(v8 + 2), 1LL, v9, SchedulerAssist);
      v8 = v11;
    }
    while ( v11 );
  }
  CurrentThread = KeGetCurrentThread();
  if ( v2 == 16 )
    return (_QWORD *)KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  else
    return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
