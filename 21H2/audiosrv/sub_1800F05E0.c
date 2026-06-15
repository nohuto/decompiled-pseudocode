/*
 * XREFs of sub_1800F05E0 @ 0x1800F05E0
 * Callers:
 *     sub_1800F08F0 @ 0x1800F08F0 (sub_1800F08F0.c)
 * Callees:
 *     sub_1800F0804 @ 0x1800F0804 (sub_1800F0804.c)
 */

_QWORD *__fastcall sub_1800F05E0(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *i; // rsi
  _QWORD *j; // rbp
  _QWORD *result; // rax

  for ( i = a2; i != a3; ++i )
  {
    if ( *i == *a4 )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      if ( *j != *a4 )
        sub_1800F0804(i++, j);
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
