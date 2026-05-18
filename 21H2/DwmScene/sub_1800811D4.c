/*
 * XREFs of sub_1800811D4 @ 0x1800811D4
 * Callers:
 *     sub_180080D80 @ 0x180080D80 (sub_180080D80.c)
 * Callees:
 *     sub_1800784C0 @ 0x1800784C0 (sub_1800784C0.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800811D4(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rbp
  _QWORD *v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v3 = (_QWORD *)a1[1];
    v4 = (_QWORD *)*a1;
    if ( v1 != v3 )
    {
      do
      {
        sub_1800784C0(v4, 0);
        v4 += 7;
      }
      while ( v4 != v3 );
    }
    v5 = 56 * ((a1[2] - (_QWORD)v1) / 56LL);
    if ( v5 >= 0x1000 )
    {
      v6 = *(v1 - 1);
      v7 = v5 + 39;
      if ( (unsigned __int64)v1 - v6 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v7);
        JUMPOUT(0x18008128ALL);
      }
      v1 = (_QWORD *)*(v1 - 1);
    }
    result = j_j__o_free(v1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
