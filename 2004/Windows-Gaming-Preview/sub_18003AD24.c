/*
 * XREFs of sub_18003AD24 @ 0x18003AD24
 * Callers:
 *     sub_1800296C0 @ 0x1800296C0 (sub_1800296C0.c)
 *     sub_180029A70 @ 0x180029A70 (sub_180029A70.c)
 * Callees:
 *     sub_18001F108 @ 0x18001F108 (sub_18001F108.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

_QWORD *__fastcall sub_18003AD24(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rsi
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 *v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx

  if ( a1 != a2 )
  {
    v4 = (_QWORD *)*a1;
    v5 = *(__int64 **)(*a1 + 8LL);
    while ( !*((_BYTE *)v5 + 25) )
    {
      sub_18001F108((__int64)a1, (__int64)a1, (__int64 *)v5[2]);
      v7 = v5;
      v5 = (__int64 *)*v5;
      v8 = v7[6];
      if ( v8 )
        j_j__o_free(v8, v6);
      j_j__o_free(v7, 56LL);
    }
    v4[1] = v4;
    *v4 = v4;
    v4[2] = v4;
    a1[1] = 0LL;
    v9 = *a1;
    *a1 = *a2;
    v10 = a2[1];
    *a2 = v9;
    v11 = a1[1];
    a1[1] = v10;
    a2[1] = v11;
  }
  return a1;
}
