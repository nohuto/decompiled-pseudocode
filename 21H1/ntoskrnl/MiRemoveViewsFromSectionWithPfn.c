/*
 * XREFs of MiRemoveViewsFromSectionWithPfn @ 0x1402BB49C
 * Callers:
 *     MiDereferenceDataSubsections @ 0x14054F338 (MiDereferenceDataSubsections.c)
 *     MiPfPrepareSequentialReadList @ 0x14062E990 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14062F350 (MiPfPrepareReadList.c)
 *     MiMapViewOfDataSection @ 0x140632720 (MiMapViewOfDataSection.c)
 *     MiReleaseReadListResources @ 0x14063E46C (MiReleaseReadListResources.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveViewsFromSection @ 0x1402A31B0 (MiRemoveViewsFromSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054F5FC (MiReturnCrossPartitionSectionCharges.c)
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
             *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)),
             v7,
             v9);
  return result;
}
