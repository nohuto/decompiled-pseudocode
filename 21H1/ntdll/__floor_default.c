/*
 * XREFs of __floor_default @ 0x4B2FE05F
 * Callers:
 *     _floor @ 0x4B2F84B0 (_floor.c)
 * Callees:
 *     __except1 @ 0x4B2FD7DF (__except1.c)
 *     __handle_qnan1 @ 0x4B2FDA94 (__handle_qnan1.c)
 *     __sptype @ 0x4B2FDF5D (__sptype.c)
 *     __ctrlfp @ 0x4B2FDFCC (__ctrlfp.c)
 *     __frnd @ 0x4B2FEC9A (__frnd.c)
 */

double __cdecl _floor_default(double a1)
{
  double result; // st7
  int v2; // ebx
  int v3; // eax
  int savedregs; // [esp+24h] [ebp+0h] BYREF

  result = a1;
  v2 = _ctrlfp();
  if ( (HIWORD(a1) & 0x7FF0) == 0x7FF0 )
  {
    v3 = _sptype(SLODWORD(a1), SHIDWORD(a1));
    if ( v3 > 0 )
    {
      if ( v3 <= 2 )
      {
        _ctrlfp();
        return a1;
      }
      if ( v3 == 3 )
        return _handle_qnan1(11, a1, v2);
    }
    return _except1((int)&savedregs, 8, 11, a1, a1 + 1.0, v2);
  }
  else
  {
    _frnd(a1);
    _ctrlfp();
  }
  return result;
}
