/*
 * XREFs of __ultoa_s @ 0x4B2FF130
 * Callers:
 *     <none>
 * Callees:
 *     xtoa_s @ 0x4B2FF14A (xtoa_s.c)
 */

errno_t __cdecl _ultoa_s(unsigned int Value, char *Buffer, size_t BufferCount, int Radix)
{
  return xtoa_s(Value, Buffer, BufferCount, HIDWORD(BufferCount), 0);
}
