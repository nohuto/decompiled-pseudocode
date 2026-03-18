/*
 * XREFs of MiRemoveViewsFromSectionWithPfn @ 0x14026246C
 * Callers:
 *     MiDereferenceDataSubsections @ 0x14054F988 (MiDereferenceDataSubsections.c)
 *     MiPfPrepareSequentialReadList @ 0x1405F9950 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1405FA310 (MiPfPrepareReadList.c)
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 *     MiReleaseReadListResources @ 0x14060931C (MiReleaseReadListResources.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveViewsFromSection @ 0x14024A180 (MiRemoveViewsFromSection.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054FC4C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiRemoveViewsFromSectionWithPfn(__int64 *BugCheckParameter2, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  BOOL v7; // r12d
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf

  v3 = *BugCheckParameter2;
  v7 = *(_QWORD *)(*BugCheckParameter2 + 64) != 0LL;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v9 = MiRemoveViewsFromSection((ULONG_PTR)BugCheckParameter2, a2, a3);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v14 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  if ( v9 )
    return MiReturnCrossPartitionSectionCharges(
             *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)),
             v7,
             v9);
  return result;
}
