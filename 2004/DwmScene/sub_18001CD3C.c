/*
 * XREFs of sub_18001CD3C @ 0x18001CD3C
 * Callers:
 *     sub_18001925C @ 0x18001925C (sub_18001925C.c)
 *     sub_1800A13DC @ 0x1800A13DC (sub_1800A13DC.c)
 *     sub_1800E6608 @ 0x1800E6608 (sub_1800E6608.c)
 *     sub_1800EEAD4 @ 0x1800EEAD4 (sub_1800EEAD4.c)
 *     sub_1800FE010 @ 0x1800FE010 (sub_1800FE010.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001D188 @ 0x18001D188 (sub_18001D188.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18001CD3C(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax

  v2 = a2;
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v4 = *a1;
  v5 = (a1[2] - v4) >> 2;
  v6 = v5 >> 1;
  if ( v5 <= 0x3FFFFFFFFFFFFFFFLL - (v5 >> 1) )
  {
    v7 = v6 + v5;
    if ( v6 + v5 < v2 )
      v7 = v2;
    v2 = v7;
  }
  if ( v4 )
  {
    v8 = 4 * v5;
    if ( v8 >= 0x1000 )
    {
      v9 = *(_QWORD *)(v4 - 8);
      v10 = v8 + 39;
      v11 = v4 - v9;
      if ( (unsigned __int64)(v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v10);
        __debugbreak();
      }
      v4 = v9;
    }
    j_j__o_free(v4);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  v12 = sub_18001D188(a1, v2);
  *a1 = v12;
  a1[1] = v12;
  result = v12 + 4 * v2;
  a1[2] = result;
  return result;
}
