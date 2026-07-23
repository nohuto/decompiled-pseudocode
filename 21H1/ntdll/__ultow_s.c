/*
 * XREFs of __ultow_s @ 0x4B2FF420
 * Callers:
 *     <none>
 * Callees:
 *     xtow_s @ 0x4B2FF43A (xtow_s.c)
 */

errno_t __cdecl _ultow_s(unsigned int Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  return xtow_s(Value, Buffer, BufferCount, HIDWORD(BufferCount), 0);
}
