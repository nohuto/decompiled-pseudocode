/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x140A749D8
 * Callers:
 *     KiVerifyXcpt15 @ 0x140A1C320 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x140A1CB5C (KeFreeInitializationCode.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 * Callees:
 *     <none>
 */

__int64 MmStrongCodeGuaranteesEnforced()
{
  return BYTE2(MiFlags) & 1;
}
