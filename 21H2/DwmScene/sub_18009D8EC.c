/*
 * XREFs of sub_18009D8EC @ 0x18009D8EC
 * Callers:
 *     sub_1800998A4 @ 0x1800998A4 (sub_1800998A4.c)
 * Callees:
 *     sub_18009A010 @ 0x18009A010 (sub_18009A010.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18009D8EC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v9; // rbp
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 result; // rax

  v4 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(_QWORD **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        sub_18009A010(v4);
        v4 += 11;
      }
      while ( v4 != v9 );
      v4 = *(_QWORD **)a1;
    }
    v10 = 88 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v4) / 88LL);
    if ( v10 >= 0x1000 )
    {
      v11 = *(v4 - 1);
      v12 = v10 + 39;
      if ( (unsigned __int64)v4 - v11 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v12);
        JUMPOUT(0x18009D9BCLL);
      }
      v4 = (_QWORD *)*(v4 - 1);
    }
    j_j__o_free(v4);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 88 * a3;
  result = a2 + 88 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
