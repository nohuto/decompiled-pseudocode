/*
 * XREFs of __ceil_default @ 0x4B2FD662
 * Callers:
 *     _ceil @ 0x4B2F82F0 (_ceil.c)
 * Callees:
 *     __except1 @ 0x4B2FD7DF (__except1.c)
 *     __handle_qnan1 @ 0x4B2FDA94 (__handle_qnan1.c)
 *     __sptype @ 0x4B2FDF5D (__sptype.c)
 *     __ctrlfp @ 0x4B2FDFCC (__ctrlfp.c)
 *     __frnd @ 0x4B2FEC9A (__frnd.c)
 */

double __cdecl _ceil_default(double a1)
{
  double result; // st7
  int v2; // ebx
  int v3; // eax

  result = a1;
  v2 = _ctrlfp(dword_4B3A3890, 0xFFFF);
  if ( (HIWORD(a1) & 0x7FF0) == 0x7FF0 )
  {
    v3 = _sptype(LODWORD(a1), HIDWORD(a1));
    if ( v3 > 0 )
    {
      if ( v3 <= 2 )
      {
        _ctrlfp(v2, 0xFFFF);
        return a1;
      }
      if ( v3 == 3 )
      {
        result = a1;
        _handle_qnan1(12, a1, v2);
        return result;
      }
    }
    return _except1(
             8,
             12,
             LODWORD(a1),
             HIDWORD(a1),
             COERCE_UNSIGNED_INT64(a1 + 1.0),
             HIDWORD(COERCE_UNSIGNED_INT64(a1 + 1.0)),
             v2);
  }
  else
  {
    _frnd(a1);
    _ctrlfp(v2, 0xFFFF);
  }
  return result;
}
