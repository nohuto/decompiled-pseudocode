/*
 * XREFs of MiUpdateControlAreaCommitCount @ 0x1402D57DC
 * Callers:
 *     MiSetPagesModified @ 0x1405335B0 (MiSetPagesModified.c)
 *     MiCreatePagingFileMap @ 0x1406826EC (MiCreatePagingFileMap.c)
 *     MiChargeSegmentCommit @ 0x1406B2AF0 (MiChargeSegmentCommit.c)
 *     MiRelocateImage @ 0x14070B8DC (MiRelocateImage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x140303D04 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateControlAreaCommitCount(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  bool v12; // zf

  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)) + 7624LL),
    a2);
  if ( *(_QWORD *)(a1 + 64) )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 16LL) += a2;
    return 0LL;
  }
  else
  {
    v4 = (volatile LONG *)(a1 + 72);
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    *(_QWORD *)(a1 + 120) ^= (*(_QWORD *)(a1 + 120) ^ (*(_QWORD *)(a1 + 120) + a2)) & 0xFFFFFFFFFLL;
    v6 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(a1 + 128) + 48) & 0x3FFFFFFF;
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
    return v6;
  }
}
