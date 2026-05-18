/*
 * XREFs of sub_18008F1C8 @ 0x18008F1C8
 * Callers:
 *     sub_18008F59C @ 0x18008F59C (sub_18008F59C.c)
 *     sub_1800E30A4 @ 0x1800E30A4 (sub_1800E30A4.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180020F10 @ 0x180020F10 (sub_180020F10.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_18008F1C8(__int64 *a1, unsigned __int64 a2)
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
  _QWORD *v12; // rax
  _QWORD *result; // rax

  v2 = a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v4 = *a1;
  v5 = (a1[2] - v4) >> 3;
  v6 = v5 >> 1;
  if ( v5 <= 0x1FFFFFFFFFFFFFFFLL - (v5 >> 1) )
  {
    v7 = v6 + v5;
    if ( v6 + v5 < v2 )
      v7 = v2;
    v2 = v7;
  }
  if ( v4 )
  {
    v8 = 8 * v5;
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
  v12 = sub_180020F10((__int64)a1, v2);
  *a1 = (__int64)v12;
  a1[1] = (__int64)v12;
  result = &v12[v2];
  a1[2] = (__int64)result;
  return result;
}
