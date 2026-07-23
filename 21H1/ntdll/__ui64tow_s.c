/*
 * XREFs of __ui64tow_s @ 0x4B2FF3F0
 * Callers:
 *     <none>
 * Callees:
 *     x64tow_s @ 0x4B2FF23E (x64tow_s.c)
 */

errno_t __cdecl _ui64tow_s(unsigned __int64 Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  return x64tow_s(Buffer, BufferCount, Value, HIDWORD(BufferCount), 0);
}
