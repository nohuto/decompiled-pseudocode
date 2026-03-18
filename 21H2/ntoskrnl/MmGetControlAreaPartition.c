/*
 * XREFs of MmGetControlAreaPartition @ 0x14027FC48
 * Callers:
 *     CcNotifyOfMappedWriteComplete @ 0x1402590D8 (CcNotifyOfMappedWriteComplete.c)
 *     CcPurgeCacheSection @ 0x14027F0E0 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x14027FB60 (CcGetFlushedValidData.c)
 *     CcDeleteSectionsForPartition @ 0x14053DDB8 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __fastcall MmGetControlAreaPartition(__int64 a1)
{
  unsigned __int64 v2; // rdi
  ULONG_PTR *v3; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v8; // edx
  bool v9; // zf

  v2 = ExAcquireSpinLockExclusive(&dword_140C4F100);
  if ( *(_QWORD *)a1 )
    v3 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  else
    v3 = &MiSystemPartition;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return v3[22];
}
