/*
 * XREFs of sub_18009D9C0 @ 0x18009D9C0
 * Callers:
 *     sub_180099644 @ 0x180099644 (sub_180099644.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18009A010 @ 0x18009A010 (sub_18009A010.c)
 *     sub_18009DBD4 @ 0x18009DBD4 (sub_18009DBD4.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18009D9C0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // r9
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 result; // rax

  v2 = a2;
  if ( a2 > 0x2E8BA2E8BA2E8BALL )
    std::vector<void *>::_Xlen();
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD **)a1;
  v6 = (v4 - *(_QWORD *)a1) / 88;
  if ( v6 <= 0x2E8BA2E8BA2E8BALL - (v6 >> 1) )
  {
    v7 = v6 + (v6 >> 1);
    if ( v7 < v2 )
      v7 = v2;
    v2 = v7;
  }
  if ( v5 )
  {
    v8 = *(_QWORD **)(a1 + 8);
    if ( v5 != v8 )
    {
      do
      {
        sub_18009A010(v5);
        v5 += 11;
      }
      while ( v5 != v8 );
      v4 = *(_QWORD *)(a1 + 16);
      v5 = *(_QWORD **)a1;
    }
    v9 = 88 * ((v4 - (__int64)v5) / 88);
    if ( v9 >= 0x1000 )
    {
      v10 = *(v5 - 1);
      v11 = v9 + 39;
      if ( (unsigned __int64)v5 - v10 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v10, v11);
        __debugbreak();
      }
      v5 = (_QWORD *)*(v5 - 1);
    }
    j_j__o_free(v5);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  result = sub_18009DBD4(a1, v2);
  *(_QWORD *)a1 = result;
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a1 + 16) = result + 88 * v2;
  return result;
}
