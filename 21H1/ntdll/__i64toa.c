/*
 * XREFs of __i64toa @ 0x4B2F6B10
 * Callers:
 *     <none>
 * Callees:
 *     x64toa @ 0x4B2F6A85 (x64toa.c)
 */

char *__cdecl _i64toa(__int64 Value, char *Buffer, int Radix)
{
  BOOL v3; // eax

  v3 = 0;
  if ( Radix == 10 && SHIDWORD(Value) <= 0 )
    v3 = Value < 0;
  x64toa(Buffer, Radix, Value, v3);
  return Buffer;
}
