/*
 * XREFs of sub_180107790 @ 0x180107790
 * Callers:
 *     sub_180109B70 @ 0x180109B70 (sub_180109B70.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180067CC8 @ 0x180067CC8 (sub_180067CC8.c)
 *     sub_18010781C @ 0x18010781C (sub_18010781C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180107790(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax

  v6 = (a3 - a2) >> 6;
  if ( v6 )
  {
    if ( v6 > 0x3FFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v7 = sub_180067CC8((__int64)a1, (a3 - a2) >> 6);
    *a1 = v7;
    a1[1] = v7;
    a1[2] = &v7[8 * v6];
    a1[1] = sub_18010781C(a2, a3, v7, a1);
  }
}
