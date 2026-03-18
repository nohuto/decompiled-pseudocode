/*
 * XREFs of MiDecrementModifiedWriteCount @ 0x14028170C
 * Callers:
 *     MiUnlockFlushMdl @ 0x1402815BC (MiUnlockFlushMdl.c)
 *     MiTrimSharedPage @ 0x1402CDD9C (MiTrimSharedPage.c)
 *     MiWriteComplete @ 0x1403539D0 (MiWriteComplete.c)
 *     MiReleasePageFileSectionInfo @ 0x140384214 (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSubsection @ 0x1405232AC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140523C94 (MiFlushControlArea.c)
 *     MiFlushComplete @ 0x140537640 (MiFlushComplete.c)
 *     MiPurgeBadFileOnlyPages @ 0x14053BDD0 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiBuildWakeList @ 0x140281784 (MiBuildWakeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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
