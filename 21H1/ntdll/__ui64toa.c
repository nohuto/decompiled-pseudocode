/*
 * XREFs of __ui64toa @ 0x4B2F6B90
 * Callers:
 *     <none>
 * Callees:
 *     x64toa @ 0x4B2F6A85 (x64toa.c)
 */

char *__cdecl _ui64toa(unsigned __int64 Value, char *Buffer, int Radix)
{
  x64toa(Buffer, Radix, Value, 0);
  return Buffer;
}
