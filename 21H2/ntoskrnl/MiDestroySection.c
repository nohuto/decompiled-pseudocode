/*
 * XREFs of MiDestroySection @ 0x14038868C
 * Callers:
 *     MiCleanSection @ 0x1403885EC (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x14058A4E8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x14058A6D4 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x14058B784 (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiClearFilePointer @ 0x140220A44 (MiClearFilePointer.c)
 *     MiDrainControlAreaWrites @ 0x140270228 (MiDrainControlAreaWrites.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiSegmentDelete @ 0x1406F4904 (MiSegmentDelete.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407F0748 (FsRtlReleaseFileForCcFlush.c)
 */

__int64 __fastcall MiDestroySection(__int64 a1, KIRQL a2, struct _FILE_OBJECT *a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  *(_DWORD *)(a1 + 56) |= 9u;
  v4 = a2;
  MiDrainControlAreaWrites(a1, a2);
  MiClearFilePointer(a1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  if ( a3 )
  {
    FsRtlReleaseFileForCcFlush(a3);
    ObfDereferenceObjectWithTag(a3, 0x63536D4Du);
  }
  return MiSegmentDelete(a1);
}
