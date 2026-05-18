/*
 * XREFs of sub_180084B50 @ 0x180084B50
 * Callers:
 *     sub_180085770 @ 0x180085770 (sub_180085770.c)
 *     sub_1800B7C68 @ 0x1800B7C68 (sub_1800B7C68.c)
 *     sub_1801078BC @ 0x1801078BC (sub_1801078BC.c)
 *     sub_18010B8B4 @ 0x18010B8B4 (sub_18010B8B4.c)
 *     sub_1801173CC @ 0x1801173CC (sub_1801173CC.c)
 *     sub_18011CA84 @ 0x18011CA84 (sub_18011CA84.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001D118 @ 0x18001D118 (sub_18001D118.c)
 *     sub_180085B50 @ 0x180085B50 (sub_180085B50.c)
 */

void __fastcall sub_180084B50(_QWORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v4; // rbx
  _QWORD *v6; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
  {
    v4 = a2;
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v6 = sub_18001D118((__int64)a1, a2);
    *a1 = v6;
    a1[1] = v6;
    a1[2] = &v6[v4];
    do
    {
      *v6++ = *a3;
      --v4;
    }
    while ( v4 );
    v7[0] = 0LL;
    a1[1] = v6;
    sub_180085B50(v7);
  }
}
