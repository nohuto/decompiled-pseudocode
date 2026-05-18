/*
 * XREFs of sub_1800F3598 @ 0x1800F3598
 * Callers:
 *     sub_1800F0E44 @ 0x1800F0E44 (sub_1800F0E44.c)
 * Callees:
 *     sub_18006B3C4 @ 0x18006B3C4 (sub_18006B3C4.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800F3598(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  __int64 *v9; // rbp
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 result; // rax

  v4 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(__int64 **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        sub_18006B3C4(v4, 0);
        v4 += 7;
      }
      while ( v4 != v9 );
      v4 = *(__int64 **)a1;
    }
    v10 = 56 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v4) / 56LL);
    if ( v10 >= 0x1000 )
    {
      v11 = *(v4 - 1);
      v12 = v10 + 39;
      if ( (unsigned __int64)v4 - v11 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v12);
        JUMPOUT(0x1800F366ALL);
      }
      v4 = (__int64 *)*(v4 - 1);
    }
    j_j__o_free(v4);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 56 * a3;
  result = a2 + 56 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
