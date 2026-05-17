/*
 * XREFs of __ultoa @ 0x4B2F6BC0
 * Callers:
 *     <none>
 * Callees:
 *     xtoa @ 0x4B2F6BDA (xtoa.c)
 */

char *__cdecl _ultoa(unsigned int Value, char *Buffer, int Radix)
{
  xtoa(Value, Buffer, Radix, 0);
  return Buffer;
}
