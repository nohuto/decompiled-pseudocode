/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x140B31590
 * Callers:
 *     KiVerifyXcpt15 @ 0x140AD6320 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x140AD6B50 (KeFreeInitializationCode.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     <none>
 */

__int64 MmStrongCodeGuaranteesEnforced()
{
  return ((unsigned int)MiFlags >> 15) & 1;
}
