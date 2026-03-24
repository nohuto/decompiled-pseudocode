/*
 * XREFs of MiGetSubsectionHoldingCrossPartitionReferences @ 0x14025C6E4
 * Callers:
 *     MiGetSubsectionCrossPartitionReferences @ 0x14025C6C4 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiUpdateLastSubsectionSize @ 0x1402A1728 (MiUpdateLastSubsectionSize.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402B7EC0 (MiUpdateControlAreaCommitCount.c)
 *     MiDecrementSubsectionViewCount @ 0x140315170 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x140315DE0 (MiIncrementSubsectionViewCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionHoldingCrossPartitionReferences(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0xA0) != 0x80 )
    return *(_QWORD *)a1 + 128LL;
  return a1;
}
