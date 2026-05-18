/*
 * XREFs of sub_180062970 @ 0x180062970
 * Callers:
 *     sub_180062AD4 @ 0x180062AD4 (sub_180062AD4.c)
 * Callees:
 *     sub_180020058 @ 0x180020058 (sub_180020058.c)
 *     sub_180062A5C @ 0x180062A5C (sub_180062A5C.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_180062970(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v4; // rsi
  _QWORD *j; // rbx
  __int64 *v9; // rbx
  __int64 *v10; // rcx
  __int64 **v11; // rax
  _QWORD *v12; // r8
  __int64 i; // rax
  __int64 *v14; // rcx
  char v16[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD **)a1;
  j = a3;
  if ( a3 == **(_QWORD ***)a1 && a4 == v4 )
  {
    v9 = (__int64 *)v4[1];
    while ( !*((_BYTE *)v9 + 25) )
    {
      sub_180020058(a1, a1, (__int64 *)v9[2]);
      v10 = v9;
      v9 = (__int64 *)*v9;
      j_j__o_free(v10);
    }
    v4[1] = v4;
    *v4 = v4;
    v4[2] = v4;
    *(_QWORD *)(a1 + 8) = 0LL;
    *a2 = **(_QWORD **)a1;
  }
  else
  {
    while ( j != a4 )
    {
      v11 = (__int64 **)j[2];
      v12 = j;
      if ( *((_BYTE *)v11 + 25) )
      {
        for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          j = (_QWORD *)i;
        j = (_QWORD *)i;
      }
      else
      {
        v14 = *v11;
        for ( j = (_QWORD *)j[2]; !*((_BYTE *)v14 + 25); v14 = (__int64 *)*v14 )
          j = v14;
      }
      sub_180062A5C(a1, v16, v12);
    }
    *a2 = j;
  }
  return a2;
}
