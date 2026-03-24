/*
 * XREFs of MiGetSubsectionCrossPartitionReferences @ 0x14025C6C4
 * Callers:
 *     MiChargeSegmentCommit @ 0x14061FED0 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14025C6E4 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 */

__int64 MiGetSubsectionCrossPartitionReferences()
{
  return *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences() + 48) & 0x3FFFFFFF;
}
