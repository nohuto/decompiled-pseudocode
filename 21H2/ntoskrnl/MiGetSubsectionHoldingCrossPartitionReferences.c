/*
 * XREFs of MiGetSubsectionHoldingCrossPartitionReferences @ 0x14022CF78
 * Callers:
 *     MiUpdateLastSubsectionSize @ 0x14022CE0C (MiUpdateLastSubsectionSize.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x14022CF58 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiUpdateControlAreaCommitCount @ 0x14026EC38 (MiUpdateControlAreaCommitCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1402869C0 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x140286EC0 (MiIncrementSubsectionViewCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionHoldingCrossPartitionReferences(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0xA0) != 0x80 )
    return *(_QWORD *)a1 + 128LL;
  return a1;
}
