/*
 * XREFs of MiGetSubsectionHoldingCrossPartitionReferences @ 0x140303D04
 * Callers:
 *     MiDecrementSubsectionViewCount @ 0x14022BF20 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x14022CF40 (MiIncrementSubsectionViewCount.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402D57DC (MiUpdateControlAreaCommitCount.c)
 *     MiUpdateLastSubsectionSize @ 0x140303B98 (MiUpdateLastSubsectionSize.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x140303CE4 (MiGetSubsectionCrossPartitionReferences.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionHoldingCrossPartitionReferences(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0xA0) != 0x80 )
    return *(_QWORD *)a1 + 128LL;
  return a1;
}
