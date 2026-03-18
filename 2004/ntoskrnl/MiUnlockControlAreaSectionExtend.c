/*
 * XREFs of MiUnlockControlAreaSectionExtend @ 0x140265E0C
 * Callers:
 *     MmExtendSection @ 0x14060CAD4 (MmExtendSection.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiBuildWakeList @ 0x140228734 (MiBuildWakeList.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KeSignalGate @ 0x140350B20 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiUnlockControlAreaSectionExtend(ULONG_PTR a1, __int64 a2)
{
  int v2; // r14d
  unsigned __int64 v5; // rsi
  __int64 *v6; // rax
  volatile LONG *v7; // rcx
  __int64 *v8; // rdi
  __int64 *v9; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

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
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  if ( v8 )
  {
    do
    {
      v9 = (__int64 *)*v8;
      if ( v8 != (__int64 *)a2 )
        KeSignalGate(v8 + 2, 1LL);
      v8 = v9;
    }
    while ( v9 );
  }
  CurrentThread = KeGetCurrentThread();
  if ( v2 == 16 )
    return (_QWORD *)KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  else
    return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
