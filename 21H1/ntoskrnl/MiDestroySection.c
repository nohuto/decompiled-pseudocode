/*
 * XREFs of MiDestroySection @ 0x14037C14C
 * Callers:
 *     MiCleanSection @ 0x14037C0AC (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x1405230B8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1405232AC (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x140524498 (MiProcessDeleteOnClose.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDrainControlAreaWrites @ 0x1402B9840 (MiDrainControlAreaWrites.c)
 *     MiClearFilePointer @ 0x1402F1578 (MiClearFilePointer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1405EE29C (FsRtlReleaseFileForCcFlush.c)
 *     MiSegmentDelete @ 0x14063E304 (MiSegmentDelete.c)
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
