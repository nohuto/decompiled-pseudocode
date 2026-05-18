/*
 * XREFs of sub_18010ADDC @ 0x18010ADDC
 * Callers:
 *     sub_18010AF04 @ 0x18010AF04 (sub_18010AF04.c)
 *     sub_18010AFA8 @ 0x18010AFA8 (sub_18010AFA8.c)
 *     sub_18010B0B4 @ 0x18010B0B4 (sub_18010B0B4.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180010BEC @ 0x180010BEC (sub_180010BEC.c)
 */

_QWORD *__fastcall sub_18010ADDC(_QWORD *a1, unsigned __int64 a2)
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
    v4 = sub_180010BEC((__int64)a1, a2);
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
