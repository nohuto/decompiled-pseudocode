/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x140A739D8
 * Callers:
 *     KiVerifyXcpt15 @ 0x140A1B320 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x140A1BB5C (KeFreeInitializationCode.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 * Callees:
 *     <none>
 */

__int64 MmStrongCodeGuaranteesEnforced()
{
  return BYTE2(MiFlags) & 1;
}
