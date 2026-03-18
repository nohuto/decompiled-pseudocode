/*
 * XREFs of PspAddPartitionToGlobalList @ 0x1403C9F5C
 * Callers:
 *     PspAllocatePartition @ 0x1407C7FE8 (PspAllocatePartition.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PspAddPartitionToGlobalList(__int64 a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  v2 = ExAcquireSpinLockExclusive(&PspActivePartitionListLock);
  v3 = off_140C02B18[0];
  v4 = a1 + 40;
  if ( *(_UNKNOWN ***)off_140C02B18[0] != &PspActivePartitionListHead )
    __fastfail(3u);
  *(_QWORD *)v4 = &PspActivePartitionListHead;
  *(_QWORD *)(v4 + 8) = v3;
  *v3 = v4;
  off_140C02B18[0] = (_UNKNOWN **)v4;
  ExReleaseSpinLockExclusiveFromDpcLevel(&PspActivePartitionListLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
