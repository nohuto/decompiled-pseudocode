/*
 * XREFs of __ui64toa_s @ 0x4B2FF100
 * Callers:
 *     <none>
 * Callees:
 *     x64toa_s @ 0x4B2FEF5E (x64toa_s.c)
 */

errno_t __cdecl _ui64toa_s(unsigned __int64 Value, char *Buffer, size_t BufferCount, int Radix)
{
  return x64toa_s(Buffer, BufferCount, Value, HIDWORD(BufferCount), 0);
}
