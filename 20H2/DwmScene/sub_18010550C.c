/*
 * XREFs of sub_18010550C @ 0x18010550C
 * Callers:
 *     sub_180105634 @ 0x180105634 (sub_180105634.c)
 *     sub_1801056D8 @ 0x1801056D8 (sub_1801056D8.c)
 *     sub_1801057E4 @ 0x1801057E4 (sub_1801057E4.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180010B0C @ 0x180010B0C (sub_180010B0C.c)
 */

_QWORD *__fastcall sub_18010550C(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  _QWORD *v4; // rcx

  *a1 = 0LL;
  v2 = a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v4 = sub_180010B0C((__int64)a1, a2);
    *a1 = v4;
    for ( a1[2] = &v4[2 * v2]; v2; --v2 )
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      v4 += 2;
    }
    a1[1] = v4;
  }
  return a1;
}
