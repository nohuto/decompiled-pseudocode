/*
 * XREFs of __i64tow @ 0x4B2F6CE0
 * Callers:
 *     <none>
 * Callees:
 *     x64tow @ 0x4B2F6C3E (x64tow.c)
 */

wchar_t *__cdecl _i64tow(__int64 Value, wchar_t *Buffer, int Radix)
{
  BOOL v3; // eax

  v3 = 0;
  if ( Radix == 10 && SHIDWORD(Value) <= 0 )
    v3 = Value < 0;
  x64tow((__int16 *)Buffer, Radix, Value, v3);
  return Buffer;
}
