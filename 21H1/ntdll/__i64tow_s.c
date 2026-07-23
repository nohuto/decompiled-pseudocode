/*
 * XREFs of __i64tow_s @ 0x4B2FF370
 * Callers:
 *     <none>
 * Callees:
 *     x64tow_s @ 0x4B2FF23E (x64tow_s.c)
 */

errno_t __cdecl _i64tow_s(__int64 Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( HIDWORD(BufferCount) == 10 && SHIDWORD(Value) <= 0 )
    v4 = Value < 0;
  return x64tow_s(Buffer, BufferCount, Value, HIDWORD(BufferCount), v4);
}
