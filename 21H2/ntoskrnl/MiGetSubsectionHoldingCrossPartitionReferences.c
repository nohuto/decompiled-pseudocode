/*
 * XREFs of MiGetSubsectionHoldingCrossPartitionReferences @ 0x14027DC54
 * Callers:
 *     MiUpdateLastSubsectionSize @ 0x14021ECA8 (MiUpdateLastSubsectionSize.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402360D0 (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x14027DC34 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiDecrementSubsectionViewCount @ 0x14031FEC0 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x140320B30 (MiIncrementSubsectionViewCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionHoldingCrossPartitionReferences(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0xA0) != 0x80 )
    return *(_QWORD *)a1 + 128LL;
  return a1;
}
