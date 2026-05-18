/*
 * XREFs of sub_1800FB354 @ 0x1800FB354
 * Callers:
 *     sub_180115D7C @ 0x180115D7C (sub_180115D7C.c)
 *     sub_180116498 @ 0x180116498 (sub_180116498.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800F6294 @ 0x1800F6294 (sub_1800F6294.c)
 */

_QWORD *__fastcall sub_1800FB354(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  _QWORD *v4; // rax
  _DWORD *v5; // rdx

  *a1 = 0LL;
  v2 = a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x1555555555555555LL )
      std::vector<void *>::_Xlen();
    v4 = sub_1800F6294((__int64)a1, a2);
    *a1 = v4;
    v5 = v4;
    for ( a1[2] = (char *)v4 + 12 * v2; v2; --v2 )
    {
      *v5 = 0;
      v5[1] = 0;
      v5[2] = 0;
      v5 += 3;
    }
    a1[1] = v5;
  }
  return a1;
}
