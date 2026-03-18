/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x140A70620
 * Callers:
 *     KiVerifyXcpt15 @ 0x140A18320 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x140A18B5C (KeFreeInitializationCode.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     <none>
 */

__int64 MmStrongCodeGuaranteesEnforced()
{
  return BYTE2(MiFlags) & 1;
}
