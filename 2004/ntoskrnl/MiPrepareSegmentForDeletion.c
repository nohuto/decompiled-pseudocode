/*
 * XREFs of MiPrepareSegmentForDeletion @ 0x140260768
 * Callers:
 *     MiSegmentDelete @ 0x1406091B4 (MiSegmentDelete.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x14022865C (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x140228734 (MiBuildWakeList.c)
 *     MiIncrementSubsectionViewCount @ 0x140249480 (MiIncrementSubsectionViewCount.c)
 *     MiRemoveUnusedSubsection @ 0x14024C568 (MiRemoveUnusedSubsection.c)
 *     MiDrainControlAreaWrites @ 0x140260810 (MiDrainControlAreaWrites.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 *__fastcall MiPrepareSegmentForDeletion(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rbp
  KIRQL v5; // al
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 *v8; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  v2 = (volatile LONG *)(a1 + 72);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = v5;
  LOBYTE(v7) = v5;
  MiDrainControlAreaWrites(a1, v7);
  MiRemoveUnusedSegment(a1);
  v8 = MiBuildWakeList(a1, 1);
  while ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(a2);
    MiIncrementSubsectionViewCount((_QWORD *)a2, 0LL);
    a2 = *(_QWORD *)(a2 + 16);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return v8;
}
