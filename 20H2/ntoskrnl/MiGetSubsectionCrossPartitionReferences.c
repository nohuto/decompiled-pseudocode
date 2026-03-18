/*
 * XREFs of MiGetSubsectionCrossPartitionReferences @ 0x140303CE4
 * Callers:
 *     MiChargeSegmentCommit @ 0x1406B2AF0 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x140303D04 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 */

__int64 __fastcall MiGetSubsectionCrossPartitionReferences(__int64 a1)
{
  return *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(a1) + 48) & 0x3FFFFFFF;
}
