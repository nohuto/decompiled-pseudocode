/*
 * XREFs of MiDerefPageFileSpaceBitmaps @ 0x1402C3CA0
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140266950 (MiStoreWriteModifiedPages.c)
 *     MiStoreEvictPageFile @ 0x1402C3A18 (MiStoreEvictPageFile.c)
 *     MiFindPageFileWriteCluster @ 0x1402D1C28 (MiFindPageFileWriteCluster.c)
 *     MiBuildReservationCluster @ 0x140386DF0 (MiBuildReservationCluster.c)
 *     MiExtendPagingFileMaximum @ 0x140543090 (MiExtendPagingFileMaximum.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

_DWORD *__fastcall MiDerefPageFileSpaceBitmaps(__int64 a1, _DWORD **a2, int a3)
{
  _DWORD *v3; // r14
  volatile LONG *v4; // rdi
  __int64 v5; // rbx
  KIRQL v7; // si
  int v8; // r15d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  v3 = *a2;
  v4 = (volatile LONG *)(a1 + 232);
  v5 = 0LL;
  if ( a3 )
    v7 = 0;
  else
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  v8 = --*v3;
  if ( !a3 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << (v7 + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
  }
  if ( !v8 )
    return v3;
  return (_DWORD *)v5;
}
