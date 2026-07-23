/*
 * XREFs of MiRemoveUnusedSubsection @ 0x140303854
 * Callers:
 *     MiDereferenceControlAreaPfnList @ 0x140284F70 (MiDereferenceControlAreaPfnList.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x1402DD3F0 (MmPurgeSection.c)
 *     MiPrepareSegmentForDeletion @ 0x140302A54 (MiPrepareSegmentForDeletion.c)
 *     MiReferenceSubsection @ 0x1403202AC (MiReferenceSubsection.c)
 *     MiReferenceActiveSubsection @ 0x140320A50 (MiReferenceActiveSubsection.c)
 * Callees:
 *     MiReduceUnusedSubsectionCount @ 0x1403038E0 (MiReduceUnusedSubsectionCount.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiRemoveUnusedSubsection(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // rdx

  v2 = *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
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
