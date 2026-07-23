/*
 * XREFs of __itoa_s @ 0x4B2FF0C0
 * Callers:
 *     <none>
 * Callees:
 *     xtoa_s @ 0x4B2FF14A (xtoa_s.c)
 */

errno_t __cdecl _itoa_s(int Value, char *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = HIDWORD(BufferCount) == 10 && Value < 0;
  return xtoa_s(Value, Buffer, BufferCount, HIDWORD(BufferCount), v4);
}
