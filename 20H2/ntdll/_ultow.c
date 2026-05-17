/*
 * XREFs of _ultow @ 0x18008CF10
 * Callers:
 *     <none>
 * Callees:
 *     xtow @ 0x18008CFC8 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Buffer, int Radix)
{
  xtow(Value, Buffer, Radix, 0LL);
  return Buffer;
}
