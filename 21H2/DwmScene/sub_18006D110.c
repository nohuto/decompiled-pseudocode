/*
 * XREFs of sub_18006D110 @ 0x18006D110
 * Callers:
 *     sub_180069994 @ 0x180069994 (sub_180069994.c)
 *     sub_180069D50 @ 0x180069D50 (sub_180069D50.c)
 *     sub_1800D6818 @ 0x1800D6818 (sub_1800D6818.c)
 * Callees:
 *     sub_180069FBC @ 0x180069FBC (sub_180069FBC.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006D110(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v9; // r14
  __int64 *v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      v10 = (__int64 *)(v4 + 136);
      do
      {
        sub_180069FBC(v10, (__int64)v10);
        v4 += 152LL;
        v10 += 19;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    v11 = 152 * ((a1[2] - v4) / 152);
    if ( v11 >= 0x1000 )
    {
      v12 = *(_QWORD *)(v4 - 8);
      v13 = v11 + 39;
      if ( (unsigned __int64)(v4 - v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v13);
        JUMPOUT(0x18006D1FDLL);
      }
      v4 = *(_QWORD *)(v4 - 8);
    }
    j_j__o_free(v4);
  }
  *a1 = a2;
  a1[1] = a2 + 152 * a3;
  result = a2 + 152 * a4;
  a1[2] = result;
  return result;
}
