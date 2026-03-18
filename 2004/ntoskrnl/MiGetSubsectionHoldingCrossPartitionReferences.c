/*
 * XREFs of MiGetSubsectionHoldingCrossPartitionReferences @ 0x140265B10
 * Callers:
 *     MiIncrementSubsectionViewCount @ 0x140249480 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x14024A370 (MiDecrementSubsectionViewCount.c)
 *     MiUpdateControlAreaCommitCount @ 0x140263B7C (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x140265AF0 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiUpdateLastSubsectionSize @ 0x140359034 (MiUpdateLastSubsectionSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionHoldingCrossPartitionReferences(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0xA0) != 0x80 )
    return *(_QWORD *)a1 + 128LL;
  return a1;
}
