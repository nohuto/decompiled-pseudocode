/*
 * XREFs of MiUnlockControlAreaSectionExtend @ 0x1402BEE3C
 * Callers:
 *     MmExtendSection @ 0x140641C24 (MmExtendSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiBuildWakeList @ 0x140281784 (MiBuildWakeList.c)
 *     KeSignalGate @ 0x1403247B0 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiUnlockControlAreaSectionExtend(ULONG_PTR a1, __int64 a2)
{
  int v2; // r14d
  unsigned __int64 v5; // rsi
  __int64 *v6; // rax
  volatile LONG *v7; // rcx
  __int64 *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 SchedulerAssist; // r9
  __int64 *v12; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v17; // eax
  bool v18; // zf

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
        v9 = -1LL << ((unsigned __int8)v5 + 1);
        SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)v9;
        v18 = (v17 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
        v10 = (unsigned int)v17 & *(_DWORD *)(SchedulerAssist + 20);
        *(_DWORD *)(SchedulerAssist + 20) = v10;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  if ( v8 )
  {
    do
    {
      v12 = (__int64 *)*v8;
      if ( v8 != (__int64 *)a2 )
        KeSignalGate(v8 + 2, 1LL);
      v8 = v12;
    }
    while ( v12 );
  }
  CurrentThread = KeGetCurrentThread();
  if ( v2 == 16 )
    return (_QWORD *)KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v9, v10, SchedulerAssist);
  else
    return KeLeaveCriticalRegionThread((__int64)CurrentThread, v9, v10, SchedulerAssist);
}
