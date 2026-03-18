/*
 * XREFs of MiRefillPurgedExtents @ 0x14053CB80
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1402611B0 (MiPfPutPagesInTransition.c)
 *     MiPfPrepareSequentialReadList @ 0x1405F9950 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1405FA310 (MiPfPrepareReadList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiDereferenceControlArea @ 0x140360978 (MiDereferenceControlArea.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiAllocateFileExtents @ 0x1408CBF10 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiRefillPurgedExtents(__int64 *BugCheckParameter2)
{
  __int64 v1; // rdi
  KIRQL v3; // al
  unsigned __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r10
  int v8; // eax
  bool v9; // zf
  unsigned int FileExtents; // ebx

  v1 = *BugCheckParameter2;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  ++*(_QWORD *)(v1 + 40);
  ++*(_QWORD *)(v1 + 48);
  v4 = v3;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  FileExtents = MiAllocateFileExtents((ULONG_PTR)BugCheckParameter2, 2);
  MiDereferenceControlArea(v1);
  return FileExtents;
}
