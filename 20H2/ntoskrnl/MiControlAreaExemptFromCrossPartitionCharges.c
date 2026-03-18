/*
 * XREFs of MiControlAreaExemptFromCrossPartitionCharges @ 0x14022D030
 * Callers:
 *     MiDecrementSubsectionViewCount @ 0x14022BF20 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x14022CF40 (MiIncrementSubsectionViewCount.c)
 *     MiControlAreaRequiresCharge @ 0x140232D6C (MiControlAreaRequiresCharge.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiControlAreaExemptFromCrossPartitionCharges(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 0x40000000) != 0 || !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 92) & 0x10000) != 0;
}
