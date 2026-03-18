/*
 * XREFs of MiPrepareSegmentForDeletion @ 0x1402D27A4
 * Callers:
 *     MiSegmentDelete @ 0x140681F74 (MiSegmentDelete.c)
 * Callees:
 *     MiIncrementSubsectionViewCount @ 0x14022CF40 (MiIncrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x14029F4D4 (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x14029F5AC (MiBuildWakeList.c)
 *     MiDrainControlAreaWrites @ 0x1402D284C (MiDrainControlAreaWrites.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveUnusedSubsection @ 0x140300DB4 (MiRemoveUnusedSubsection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
    MiIncrementSubsectionViewCount((_QWORD *)a2, 0);
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
