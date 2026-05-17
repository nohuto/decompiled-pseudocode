/*
 * XREFs of __ltow @ 0x4B2F6D20
 * Callers:
 *     <none>
 * Callees:
 *     xtow @ 0x4B2F6DAA (xtow.c)
 */

wchar_t *__cdecl _ltow(int Value, wchar_t *Buffer, int Radix)
{
  BOOL v3; // eax

  v3 = Radix == 10 && Value < 0;
  xtow(Value, Buffer, Radix, v3);
  return Buffer;
}
