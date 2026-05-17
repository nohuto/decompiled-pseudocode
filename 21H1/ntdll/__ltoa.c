/*
 * XREFs of __ltoa @ 0x4B2F6B50
 * Callers:
 *     <none>
 * Callees:
 *     xtoa @ 0x4B2F6BDA (xtoa.c)
 */

char *__cdecl _ltoa(int Value, char *Buffer, int Radix)
{
  BOOL v3; // eax

  v3 = Radix == 10 && Value < 0;
  xtoa(Value, Buffer, Radix, v3);
  return Buffer;
}
