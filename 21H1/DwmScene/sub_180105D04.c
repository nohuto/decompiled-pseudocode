/*
 * XREFs of sub_180105D04 @ 0x180105D04
 * Callers:
 *     sub_180105404 @ 0x180105404 (sub_180105404.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180010B0C @ 0x180010B0C (sub_180010B0C.c)
 *     unknown_libname_100 @ 0x180011544 (unknown_libname_100.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_180105D04(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  _QWORD *result; // rax

  v3 = a2;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v4 = a1[2];
  v5 = *a1;
  v6 = (v4 - *a1) >> 4;
  if ( v6 <= 0xFFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v7 = (v6 >> 1) + v6;
    if ( v7 < v3 )
      v7 = v3;
    v3 = v7;
  }
  if ( v5 )
  {
    v8 = a1[1];
    if ( v5 != v8 )
    {
      do
      {
        unknown_libname_100(v5, 0);
        v5 += 16LL;
      }
      while ( v5 != v8 );
      v4 = a1[2];
      v5 = *a1;
    }
    v9 = (v4 - v5) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v9 >= 0x1000 )
    {
      v10 = *(_QWORD *)(v5 - 8);
      v11 = v9 + 39;
      if ( (unsigned __int64)(v5 - v10 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v10, v11);
        __debugbreak();
      }
      v5 = *(_QWORD *)(v5 - 8);
    }
    j_j__o_free(v5);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  result = sub_180010B0C((__int64)a1, v3);
  *a1 = (__int64)result;
  a1[2] = (__int64)&result[2 * v3];
  a1[1] = (__int64)result;
  return result;
}
