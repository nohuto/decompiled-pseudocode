/*
 * XREFs of sub_1800CCED4 @ 0x1800CCED4
 * Callers:
 *     sub_1800CC42C @ 0x1800CC42C (sub_1800CC42C.c)
 *     sub_1800CC478 @ 0x1800CC478 (sub_1800CC478.c)
 *     sub_1800CC4C4 @ 0x1800CC4C4 (sub_1800CC4C4.c)
 *     sub_1800CC524 @ 0x1800CC524 (sub_1800CC524.c)
 *     sub_1800CC530 @ 0x1800CC530 (sub_1800CC530.c)
 *     sub_1800CCA38 @ 0x1800CCA38 (sub_1800CCA38.c)
 *     sub_1800CCAB0 @ 0x1800CCAB0 (sub_1800CCAB0.c)
 *     sub_1800D3730 @ 0x1800D3730 (sub_1800D3730.c)
 *     sub_1800D3808 @ 0x1800D3808 (sub_1800D3808.c)
 *     sub_1800D40E0 @ 0x1800D40E0 (sub_1800D40E0.c)
 *     sub_1800F1414 @ 0x1800F1414 (sub_1800F1414.c)
 *     sub_1800F3710 @ 0x1800F3710 (sub_1800F3710.c)
 * Callees:
 *     sub_180065AF4 @ 0x180065AF4 (sub_180065AF4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800CCED4(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rbp
  __int64 *v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    v4 = *a1;
    if ( v1 != v3 )
    {
      do
      {
        sub_180065AF4(v4, 0);
        v4 += 6;
      }
      while ( v4 != v3 );
    }
    v5 = 48 * (((char *)a1[2] - (char *)v1) / 48);
    if ( v5 >= 0x1000 )
    {
      v6 = *(v1 - 1);
      v7 = v5 + 39;
      if ( (unsigned __int64)v1 - v6 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v7);
        JUMPOUT(0x1800CCF92LL);
      }
      v1 = (__int64 *)*(v1 - 1);
    }
    result = j_j__o_free(v1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
