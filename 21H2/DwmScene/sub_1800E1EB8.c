/*
 * XREFs of sub_1800E1EB8 @ 0x1800E1EB8
 * Callers:
 *     sub_1800E2104 @ 0x1800E2104 (sub_1800E2104.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800E2B18 @ 0x1800E2B18 (sub_1800E2B18.c)
 *     sub_18010AF04 @ 0x18010AF04 (sub_18010AF04.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800E1EB8(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rbx

  if ( a2 )
  {
    v2 = a2;
    if ( a2 > 0x1FFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v4 = sub_1800E2B18();
    *a1 = v4;
    a1[1] = v4;
    a1[2] = v4 + (v2 << 7);
    do
    {
      sub_18010AF04(v4);
      v4 += 128LL;
      --v2;
    }
    while ( v2 );
    a1[1] = v4;
  }
}
