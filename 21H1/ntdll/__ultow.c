/*
 * XREFs of __ultow @ 0x4B2F6D90
 * Callers:
 *     <none>
 * Callees:
 *     xtow @ 0x4B2F6DAA (xtow.c)
 */

wchar_t *__cdecl _ultow(unsigned int Value, wchar_t *Buffer, int Radix)
{
  xtow(Value, Buffer, Radix, 0);
  return Buffer;
}
