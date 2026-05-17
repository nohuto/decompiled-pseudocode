/*
 * XREFs of __ui64tow @ 0x4B2F6D60
 * Callers:
 *     <none>
 * Callees:
 *     x64tow @ 0x4B2F6C3E (x64tow.c)
 */

wchar_t *__cdecl _ui64tow(unsigned __int64 Value, wchar_t *Buffer, int Radix)
{
  x64tow((__int16 *)Buffer, Radix, Value, 0);
  return Buffer;
}
