/*
 * XREFs of sub_1800DC5E8 @ 0x1800DC5E8
 * Callers:
 *     sub_1800DC834 @ 0x1800DC834 (sub_1800DC834.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800DD248 @ 0x1800DD248 (sub_1800DD248.c)
 *     sub_180105634 @ 0x180105634 (sub_180105634.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800DC5E8(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rbx

  if ( a2 )
  {
    v2 = a2;
    if ( a2 > 0x1FFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v4 = sub_1800DD248();
    *a1 = v4;
    a1[1] = v4;
    a1[2] = v4 + (v2 << 7);
    do
    {
      sub_180105634(v4);
      v4 += 128LL;
      --v2;
    }
    while ( v2 );
    a1[1] = v4;
  }
}
