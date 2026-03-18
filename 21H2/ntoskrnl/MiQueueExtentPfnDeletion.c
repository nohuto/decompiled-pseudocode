/*
 * XREFs of MiQueueExtentPfnDeletion @ 0x1405A0964
 * Callers:
 *     MiWorkingSetManager @ 0x140267320 (MiWorkingSetManager.c)
 *     MiClearFileOnlyPfn @ 0x14059DA64 (MiClearFileOnlyPfn.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiWakeFileOnlyReaper @ 0x1405A1CC0 (MiWakeFileOnlyReaper.c)
 */

void __fastcall MiQueueExtentPfnDeletion(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf

  if ( a1 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C56920);
    *a1 = qword_140C4F2A0;
    qword_140C4F2A0 = (__int64)a1;
    MiWakeFileOnlyReaper();
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
  }
  else
  {
    v2 = ExAcquireSpinLockExclusive(&dword_140C56920);
    MiWakeFileOnlyReaper();
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v7 = (v6 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v6;
          if ( v7 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
}
