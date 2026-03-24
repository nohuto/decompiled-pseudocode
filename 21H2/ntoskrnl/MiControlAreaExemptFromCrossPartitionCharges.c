/*
 * XREFs of MiControlAreaExemptFromCrossPartitionCharges @ 0x140315ED0
 * Callers:
 *     MiControlAreaRequiresCharge @ 0x14025ACBC (MiControlAreaRequiresCharge.c)
 *     MiDecrementSubsectionViewCount @ 0x140315170 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x140315DE0 (MiIncrementSubsectionViewCount.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiControlAreaExemptFromCrossPartitionCharges(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 0x40000000) != 0 || !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 92) & 0x10000) != 0;
}
