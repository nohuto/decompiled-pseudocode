/*
 * XREFs of _controlfp @ 0x1800946F4
 * Callers:
 *     atan @ 0x18008EA20 (atan.c)
 *     atan2 @ 0x18008EC80 (atan2.c)
 *     cos @ 0x18008F6F0 (cos.c)
 *     sin @ 0x18008FB10 (sin.c)
 *     tan @ 0x180091E60 (tan.c)
 * Callees:
 *     <none>
 */

unsigned int __cdecl controlfp(unsigned int NewValue, unsigned int Mask)
{
  return control87(NewValue, Mask & 0xFFF7FFFF);
}
