/*
 * XREFs of MiDecrementModifiedWriteCount @ 0x140287A8C
 * Callers:
 *     MiTrimSharedPage @ 0x14023F658 (MiTrimSharedPage.c)
 *     MiWriteComplete @ 0x14028C230 (MiWriteComplete.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     MiDeleteCachedSubsection @ 0x14058A6D4 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x14058B0C8 (MiFlushControlArea.c)
 *     MiFlushComplete @ 0x140597ED0 (MiFlushComplete.c)
 *     MiLocateSharedPageViews @ 0x14059854C (MiLocateSharedPageViews.c)
 *     MiReleasePageFileSectionInfo @ 0x14059D028 (MiReleasePageFileSectionInfo.c)
 *     MiPurgeBadFileOnlyPages @ 0x1405A032C (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     MiBuildWakeList @ 0x140287B04 (MiBuildWakeList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDecrementModifiedWriteCount(__int64 a1, int a2)
{
  volatile LONG *v2; // rsi
  KIRQL v4; // bl
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v2 = (volatile LONG *)(a1 + 72);
  if ( a2 )
    v4 = 17;
  else
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
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
