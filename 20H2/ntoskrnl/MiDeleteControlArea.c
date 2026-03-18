/*
 * XREFs of MiDeleteControlArea @ 0x1402D2584
 * Callers:
 *     MiDereferenceControlAreaProbe @ 0x1402D104C (MiDereferenceControlAreaProbe.c)
 *     MiDeleteCachedSubsection @ 0x1405272CC (MiDeleteCachedSubsection.c)
 *     MiDeleteControlAreaList @ 0x140527BE4 (MiDeleteControlAreaList.c)
 *     MiFlushControlArea @ 0x140527CB4 (MiFlushControlArea.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x14022BF20 (MiDecrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementControlAreaCount @ 0x1402D2688 (MiDecrementControlAreaCount.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055361C (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1405536FC (MiUpdateSubsectionCrossPartitionRefs.c)
 *     MiDeleteFileExtents @ 0x140681F54 (MiDeleteFileExtents.c)
 *     MiFreeRelocations @ 0x140767008 (MiFreeRelocations.c)
 *     SeReleaseImageValidationContext @ 0x14078AAA4 (SeReleaseImageValidationContext.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteControlArea(PVOID P)
{
  int v2; // ecx
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // r13
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  v2 = *((_DWORD *)P + 14);
  v3 = 0LL;
  v4 = *(_QWORD *)(qword_140C4E4C8 + 8LL * (*((_WORD *)P + 30) & 0x3FF));
  v5 = v4 + 1352;
  if ( (v2 & 0x20) != 0 )
  {
    v8 = *((_QWORD *)P + 12);
    if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
      SeReleaseImageValidationContext(*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF8uLL);
    MiFreeRelocations(P, *(_QWORD *)(v8 + 32));
  }
  else
  {
    if ( (v2 & 0x80u) != 0 )
    {
      v6 = *((_QWORD *)P + 18);
      if ( !v6 )
        goto LABEL_6;
      do
      {
        v7 = *(_QWORD *)(v6 + 16);
        if ( (*(_BYTE *)(v6 + 34) & 1) != 0 && (*(_DWORD *)(v6 + 48) & 0x3FFFFFFF) != 0 )
        {
          MiUpdateSubsectionCrossPartitionRefs(v6, 1LL);
          v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)P + 18);
          v3 += MiDecrementSubsectionViewCount((_QWORD *)v6, 24);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)P + 18);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
                v14 = (v13 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v13;
                if ( v14 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v9);
          *(_WORD *)(v6 + 34) &= ~1u;
        }
        ExFreePoolWithTag((PVOID)v6, 0);
        v6 = v7;
      }
      while ( v7 );
    }
    else
    {
      v5 = v4 + 1360;
    }
    if ( v3 )
      MiReturnCrossPartitionSectionCharges(v4, 1LL, v3);
  }
LABEL_6:
  MiDecrementControlAreaCount(v4, v5);
  MiDeleteFileExtents(P);
  ExFreePoolWithTag(P, 0);
}
