/*
 * XREFs of sub_18009DB1C @ 0x18009DB1C
 * Callers:
 *     sub_18009A008 @ 0x18009A008 (sub_18009A008.c)
 *     sub_18009A16C @ 0x18009A16C (sub_18009A16C.c)
 * Callees:
 *     sub_18009A010 @ 0x18009A010 (sub_18009A010.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18009DB1C(_QWORD *a1)
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
        sub_18009A010(v4);
        v4 += 11;
      }
      while ( v4 != v3 );
    }
    v5 = 88 * ((a1[2] - (_QWORD)v1) / 88LL);
    if ( v5 >= 0x1000 )
    {
      v6 = *(v1 - 1);
      v7 = v5 + 39;
      if ( (unsigned __int64)v1 - v6 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v7);
        JUMPOUT(0x18009DBD0LL);
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
