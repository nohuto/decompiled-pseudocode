/*
 * XREFs of MiGetSubsectionHoldingCrossPartitionReferences @ 0x1402BEB40
 * Callers:
 *     MiIncrementSubsectionViewCount @ 0x1402A24B0 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1402A33A0 (MiDecrementSubsectionViewCount.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402BCBAC (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x1402BEB20 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiUpdateLastSubsectionSize @ 0x14031B464 (MiUpdateLastSubsectionSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionHoldingCrossPartitionReferences(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0xA0) != 0x80 )
    return *(_QWORD *)a1 + 128LL;
  return a1;
}
