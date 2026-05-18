/*
 * XREFs of sub_18009824C @ 0x18009824C
 * Callers:
 *     sub_180094738 @ 0x180094738 (sub_180094738.c)
 *     sub_18009489C @ 0x18009489C (sub_18009489C.c)
 * Callees:
 *     sub_180094740 @ 0x180094740 (sub_180094740.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18009824C(_QWORD *a1)
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
        sub_180094740(v4);
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
        JUMPOUT(0x180098300LL);
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
