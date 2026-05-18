/*
 * XREFs of sub_180089ED4 @ 0x180089ED4
 * Callers:
 *     sub_18008A104 @ 0x18008A104 (sub_18008A104.c)
 * Callees:
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_180089ED4(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // rdx
  unsigned __int64 i; // r10
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  _QWORD *j; // rax
  _QWORD *v12; // rdx
  __int64 v13; // r10
  _QWORD *v14; // rdx
  _QWORD *v15; // r8

  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v7 = *((unsigned __int8 *)a3 + i);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v8 = a1[3];
  v9 = 2 * (v5 & a1[6]);
  v10 = a1[1];
  for ( j = *(_QWORD **)(v8 + 16 * (v5 & a1[6])); ; j = (_QWORD *)*j )
  {
    v12 = *(_QWORD *)(v8 + 8 * v9) == v10 ? (_QWORD *)a1[1] : **(_QWORD ***)(v8 + 8 * v9 + 8);
    if ( j == v12 )
      break;
    v13 = *a3;
    if ( j[2] == *a3 )
    {
      v14 = j;
      while ( 1 )
      {
        v15 = *(_QWORD *)(v8 + 8 * v9) == v10 ? (_QWORD *)a1[1] : **(_QWORD ***)(v8 + 8 * v9 + 8);
        if ( j == v15 || v13 != j[2] )
          break;
        j = (_QWORD *)*j;
      }
      if ( v14 != j )
      {
        *a2 = v14;
        a2[1] = j;
        return a2;
      }
      break;
    }
  }
  *a2 = v10;
  a2[1] = v10;
  return a2;
}
