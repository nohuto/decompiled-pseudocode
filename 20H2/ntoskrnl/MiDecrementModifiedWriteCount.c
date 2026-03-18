/*
 * XREFs of MiDecrementModifiedWriteCount @ 0x14029F534
 * Callers:
 *     MiUnlockFlushMdl @ 0x14029F3E4 (MiUnlockFlushMdl.c)
 *     MiTrimSharedPage @ 0x14031F424 (MiTrimSharedPage.c)
 *     MiWriteComplete @ 0x140346420 (MiWriteComplete.c)
 *     MiReleasePageFileSectionInfo @ 0x14038732C (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSubsection @ 0x1405272CC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140527CB4 (MiFlushControlArea.c)
 *     MiFlushComplete @ 0x14053B660 (MiFlushComplete.c)
 *     MiPurgeBadFileOnlyPages @ 0x14053FDF0 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiBuildWakeList @ 0x14029F5AC (MiBuildWakeList.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDecrementModifiedWriteCount(__int64 a1, int a2)
{
  volatile LONG *v2; // rdi
  KIRQL v4; // bl
  __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v2 = (volatile LONG *)(a1 + 72);
  if ( a2 == 1 )
    v4 = 17;
  else
    v4 = ExAcquireSpinLockExclusive(v2);
  --*(_DWORD *)(a1 + 76);
  v5 = MiBuildWakeList(a1, 8LL);
  if ( v4 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << (v4 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
  }
  return v5;
}
