/*
 * XREFs of _controlfp @ 0x180093FF4
 * Callers:
 *     atan @ 0x18008E320 (atan.c)
 *     atan2 @ 0x18008E580 (atan2.c)
 *     cos @ 0x18008EFF0 (cos.c)
 *     sin @ 0x18008F410 (sin.c)
 *     tan @ 0x180091760 (tan.c)
 * Callees:
 *     <none>
 */

unsigned int __cdecl controlfp(unsigned int NewValue, unsigned int Mask)
{
  return control87(NewValue, Mask & 0xFFF7FFFF);
}
