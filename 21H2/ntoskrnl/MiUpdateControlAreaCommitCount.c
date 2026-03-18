/*
 * XREFs of MiUpdateControlAreaCommitCount @ 0x14026EC38
 * Callers:
 *     MiSetPagesModified @ 0x14058D310 (MiSetPagesModified.c)
 *     MiChargeSegmentCommit @ 0x1406A4140 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x1406F3A44 (MiCreatePagingFileMap.c)
 *     MiCreateFileOnlyImageFixupList @ 0x14097023C (MiCreateFileOnlyImageFixupList.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14022CF78 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
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
    (volatile signed __int64 *)(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)) + 17528LL),
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
