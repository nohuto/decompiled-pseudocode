/*
 * XREFs of MiRemoveUnusedSubsection @ 0x1402A5598
 * Callers:
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     MiReferenceSubsection @ 0x1402A1C2C (MiReferenceSubsection.c)
 *     MiReferenceActiveSubsection @ 0x1402A23D0 (MiReferenceActiveSubsection.c)
 *     MiPrepareSegmentForDeletion @ 0x1402B9798 (MiPrepareSegmentForDeletion.c)
 *     MmPurgeSection @ 0x1402CF7C0 (MmPurgeSection.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402F1320 (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReduceUnusedSubsectionCount @ 0x1402A5624 (MiReduceUnusedSubsectionCount.c)
 */

void __fastcall MiRemoveUnusedSubsection(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // rdx

  v2 = *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
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
