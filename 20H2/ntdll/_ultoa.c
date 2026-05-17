/*
 * XREFs of _ultoa @ 0x18008CD70
 * Callers:
 *     <none>
 * Callees:
 *     xtoa @ 0x18008CE0C (xtoa.c)
 */

char *__cdecl ultoa(unsigned int Value, char *Buffer, int Radix)
{
  xtoa(Value, Buffer, Radix, 0LL);
  return Buffer;
}
