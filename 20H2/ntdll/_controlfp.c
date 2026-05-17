/*
 * XREFs of _controlfp @ 0x1800940F4
 * Callers:
 *     atan @ 0x18008E420 (atan.c)
 *     atan2 @ 0x18008E680 (atan2.c)
 *     cos @ 0x18008F0F0 (cos.c)
 *     sin @ 0x18008F510 (sin.c)
 *     tan @ 0x180091860 (tan.c)
 * Callees:
 *     <none>
 */

unsigned int __cdecl controlfp(unsigned int NewValue, unsigned int Mask)
{
  return control87(NewValue, Mask & 0xFFF7FFFF);
}
