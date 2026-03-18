/*
 * XREFs of MiDestroySection @ 0x14037EAEC
 * Callers:
 *     MiCleanSection @ 0x14037EA4C (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x1405270D8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1405272CC (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1405284B8 (MiProcessDeleteOnClose.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDrainControlAreaWrites @ 0x1402D284C (MiDrainControlAreaWrites.c)
 *     MiClearFilePointer @ 0x140300A58 (MiClearFilePointer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiSegmentDelete @ 0x140681F74 (MiSegmentDelete.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407080AC (FsRtlReleaseFileForCcFlush.c)
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
    HalPutDmaAdapter((PADAPTER_OBJECT)a3);
  }
  return MiSegmentDelete(a1);
}
