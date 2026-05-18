/*
 * XREFs of sub_1800B36BC @ 0x1800B36BC
 * Callers:
 *     sub_1800ABA08 @ 0x1800ABA08 (sub_1800ABA08.c)
 *     sub_1800AC6B4 @ 0x1800AC6B4 (sub_1800AC6B4.c)
 * Callees:
 *     sub_1800AD490 @ 0x1800AD490 (sub_1800AD490.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800B36BC(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      do
      {
        sub_1800AD490(v4, 0);
        v4 += 48LL;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    v10 = 48 * ((a1[2] - v4) / 48);
    if ( v10 >= 0x1000 )
    {
      v11 = *(_QWORD *)(v4 - 8);
      v12 = v10 + 39;
      if ( (unsigned __int64)(v4 - v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v12);
        JUMPOUT(0x1800B379ALL);
      }
      v4 = *(_QWORD *)(v4 - 8);
    }
    j_j__o_free(v4);
  }
  *a1 = a2;
  a1[1] = a2 + 48 * a3;
  result = a2 + 48 * a4;
  a1[2] = result;
  return result;
}
