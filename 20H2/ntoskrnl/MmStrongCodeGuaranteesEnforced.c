/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x140A76A58
 * Callers:
 *     KiVerifyXcpt15 @ 0x140A1E320 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x140A1EB5C (KeFreeInitializationCode.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 * Callees:
 *     <none>
 */

__int64 MmStrongCodeGuaranteesEnforced()
{
  return BYTE2(MiFlags) & 1;
}
