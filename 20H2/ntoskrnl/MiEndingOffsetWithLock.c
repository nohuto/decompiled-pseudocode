/*
 * XREFs of MiEndingOffsetWithLock @ 0x140297080
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x1402326FC (MiFinishMdlForMappedFileFault.c)
 *     MiReadyFlushMdlToWrite @ 0x14029F6FC (MiReadyFlushMdlToWrite.c)
 *     MiViewMayContainPage @ 0x14035484C (MiViewMayContainPage.c)
 *     MiCopyImageExtentContents @ 0x14053E634 (MiCopyImageExtentContents.c)
 *     MiPfPrepareSequentialReadList @ 0x1406253C0 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x1406585B0 (MiPfAllocateMdls.c)
 *     MiPfPrepareReadList @ 0x140680D90 (MiPfPrepareReadList.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiEndingOffset @ 0x140297130 (MiEndingOffset.c)
 *     ExAcquireSpinLockShared @ 0x1402D2DC0 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiEndingOffsetWithLock(__int64 *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  v1 = *a1;
  v3 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(*a1 + 72));
  v4 = MiEndingOffset(a1);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return v4;
}
