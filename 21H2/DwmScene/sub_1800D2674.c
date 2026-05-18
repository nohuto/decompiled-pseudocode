/*
 * XREFs of sub_1800D2674 @ 0x1800D2674
 * Callers:
 *     sub_1800D1880 @ 0x1800D1880 (sub_1800D1880.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18006B3C4 @ 0x18006B3C4 (sub_18006B3C4.c)
 *     sub_1800B3B30 @ 0x1800B3B30 (sub_1800B3B30.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 *__fastcall sub_1800D2674(__int64 **a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 *v4; // r9
  __int64 *v5; // rbx
  signed __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 *v9; // rbp
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 *result; // rax

  v2 = a2;
  if ( a2 > 0x555555555555555LL )
    std::vector<void *>::_Xlen();
  v4 = a1[2];
  v5 = *a1;
  v6 = (char *)v4 - (char *)*a1;
  v7 = (unsigned __int64)(v6 / 48) >> 1;
  if ( v6 / 48 <= 0x555555555555555LL - v7 )
  {
    v8 = v6 / 48 + v7;
    if ( v8 < a2 )
      v8 = a2;
    v2 = v8;
  }
  if ( v5 )
  {
    v9 = a1[1];
    if ( v5 != v9 )
    {
      do
      {
        sub_18006B3C4(v5, 0);
        v5 += 6;
      }
      while ( v5 != v9 );
      v4 = a1[2];
      v5 = *a1;
    }
    v10 = 48 * (((char *)v4 - (char *)v5) / 48);
    if ( v10 >= 0x1000 )
    {
      v11 = *(v5 - 1);
      v12 = v10 + 39;
      if ( (unsigned __int64)v5 - v11 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v12);
        __debugbreak();
      }
      v5 = (__int64 *)*(v5 - 1);
    }
    j_j__o_free(v5);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  result = sub_1800B3B30((__int64)a1, v2);
  *a1 = result;
  a1[2] = &result[6 * v2];
  a1[1] = result;
  return result;
}
