/*
 * XREFs of sub_18008A270 @ 0x18008A270
 * Callers:
 *     sub_1800862F4 @ 0x1800862F4 (sub_1800862F4.c)
 *     sub_180086F58 @ 0x180086F58 (sub_180086F58.c)
 *     sub_180088464 @ 0x180088464 (sub_180088464.c)
 * Callees:
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_18008A270(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // r9
  unsigned __int64 i; // r10
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r10
  _QWORD *j; // rax
  _QWORD *v13; // rcx

  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v7 = *((unsigned __int8 *)a3 + i);
    v4 = 0x100000001B3LL * (v7 ^ v4);
  }
  v8 = v4 & a1[6];
  v9 = a1[3];
  v10 = a1[1];
  v11 = 2 * v8;
  for ( j = *(_QWORD **)(v9 + 16 * v8); ; j = (_QWORD *)*j )
  {
    v13 = *(_QWORD *)(v9 + 8 * v11) == v10 ? (_QWORD *)v10 : **(_QWORD ***)(v9 + 8 * v11 + 8);
    if ( j == v13 )
      break;
    if ( j[2] == *a3 )
    {
      *a2 = j;
      return a2;
    }
  }
  *a2 = v10;
  return a2;
}
