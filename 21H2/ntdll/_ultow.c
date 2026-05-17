/*
 * XREFs of _ultow @ 0x18008D510
 * Callers:
 *     <none>
 * Callees:
 *     xtow @ 0x18008D5C8 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Buffer, int Radix)
{
  xtow(Value, Buffer, Radix, 0LL);
  return Buffer;
}
