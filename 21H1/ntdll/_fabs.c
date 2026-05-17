/*
 * XREFs of _fabs @ 0x4B2F83F0
 * Callers:
 *     <none>
 * Callees:
 *     __except1 @ 0x4B2FD7DF (__except1.c)
 *     __handle_qnan1 @ 0x4B2FDA94 (__handle_qnan1.c)
 *     __sptype @ 0x4B2FDF5D (__sptype.c)
 *     __ctrlfp @ 0x4B2FDFCC (__ctrlfp.c)
 */

double __cdecl fabs(double X)
{
  int v1; // esi
  int v2; // eax
  int v3; // eax
  double result; // st7

  v1 = _ctrlfp(4927, 0xFFFF);
  if ( (HIWORD(X) & 0x7FF0) == 0x7FF0 )
  {
    v2 = _sptype(LODWORD(X), HIDWORD(X)) - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        result = X;
        if ( v3 == 1 )
          _handle_qnan1(21, X, v1);
        else
          return _except1(
                   8,
                   21,
                   LODWORD(X),
                   HIDWORD(X),
                   COERCE_UNSIGNED_INT64(X + 1.0),
                   HIDWORD(COERCE_UNSIGNED_INT64(X + 1.0)),
                   v1);
      }
      else
      {
        _ctrlfp(v1, 0xFFFF);
        return -X;
      }
    }
    else
    {
      _ctrlfp(v1, 0xFFFF);
      return X;
    }
  }
  else
  {
    _ctrlfp(v1, 0xFFFF);
    *(_QWORD *)&result = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  }
  return result;
}
