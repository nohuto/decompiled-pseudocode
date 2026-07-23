/*
 * XREFs of __i64toa_s @ 0x4B2FF080
 * Callers:
 *     <none>
 * Callees:
 *     x64toa_s @ 0x4B2FEF5E (x64toa_s.c)
 */

errno_t __cdecl _i64toa_s(__int64 Value, char *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( HIDWORD(BufferCount) == 10 && SHIDWORD(Value) <= 0 )
    v4 = Value < 0;
  return x64toa_s(Buffer, BufferCount, Value, HIDWORD(BufferCount), v4);
}
