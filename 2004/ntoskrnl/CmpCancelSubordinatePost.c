/*
 * XREFs of CmpCancelSubordinatePost @ 0x1405E20CC
 * Callers:
 *     CmpPostNotify @ 0x1405E5388 (CmpPostNotify.c)
 *     CmNotifyRunDown @ 0x1406B0DF0 (CmNotifyRunDown.c)
 * Callees:
 *     CmpAddToDelayedDeref @ 0x1405E2118 (CmpAddToDelayedDeref.c)
 */

_QWORD *__fastcall CmpCancelSubordinatePost(__int64 a1, __int64 a2)
{
  _QWORD **v2; // rcx
  _QWORD *result; // rax
  _QWORD *v4; // rcx
  __int64 v5; // r8

  v2 = (_QWORD **)(a1 + 32);
  result = *v2;
  if ( *v2 != v2 )
  {
    v4 = result - 4;
    v5 = *(result - 4);
    if ( *(_QWORD **)(v5 + 8) != result - 4 || (result = (_QWORD *)v4[1], (_QWORD *)*result != v4) )
      __fastfail(3u);
    *result = v5;
    *(_QWORD *)(v5 + 8) = result;
    if ( a2 )
      return (_QWORD *)CmpAddToDelayedDeref();
  }
  return result;
}
