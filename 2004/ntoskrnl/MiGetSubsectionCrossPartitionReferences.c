/*
 * XREFs of MiGetSubsectionCrossPartitionReferences @ 0x140265AF0
 * Callers:
 *     MiChargeSegmentCommit @ 0x14060BEA0 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x140265B10 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 */

__int64 __fastcall MiGetSubsectionCrossPartitionReferences(__int64 a1)
{
  return *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(a1) + 48) & 0x3FFFFFFF;
}
