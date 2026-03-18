/*
 * XREFs of MiControlAreaExemptFromCrossPartitionCharges @ 0x140287428
 * Callers:
 *     MiDecrementSubsectionViewCount @ 0x1402869C0 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x140286EC0 (MiIncrementSubsectionViewCount.c)
 *     MiControlAreaRequiresCharge @ 0x140287380 (MiControlAreaRequiresCharge.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiControlAreaExemptFromCrossPartitionCharges(__int64 a1)
{
  return (*(_BYTE *)(a1 + 62) & 0xC) != 0 || !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 92) & 0x10000) != 0;
}
