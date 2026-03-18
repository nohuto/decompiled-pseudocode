/*
 * XREFs of MiRemoveUnusedSubsection @ 0x14026EF44
 * Callers:
 *     MiDereferenceControlAreaPfnList @ 0x1402206C0 (MiDereferenceControlAreaPfnList.c)
 *     MiPrepareSegmentForDeletion @ 0x140270274 (MiPrepareSegmentForDeletion.c)
 *     MmPurgeSection @ 0x14027F360 (MmPurgeSection.c)
 *     MiReferenceSubsection @ 0x140286D4C (MiReferenceSubsection.c)
 *     MiReferenceActiveSubsection @ 0x140286DE0 (MiReferenceActiveSubsection.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 * Callees:
 *     MiReduceUnusedSubsectionCount @ 0x14026EFD0 (MiReduceUnusedSubsectionCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiRemoveUnusedSubsection(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // rdx

  v2 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
  v3 = (_QWORD *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 80);
  if ( *(_QWORD *)(v4 + 8) != a1 + 80 || (v5 = *(_QWORD **)(a1 + 88), (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  *(_WORD *)(a1 + 34) &= ~8u;
  *(_QWORD *)(a1 + 88) = a1 + 80;
  *v3 = v3;
  MiReduceUnusedSubsectionCount(a1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
}
