/*
 * XREFs of sub_18010D060 @ 0x18010D060
 * Callers:
 *     sub_18010F440 @ 0x18010F440 (sub_18010F440.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18006D598 @ 0x18006D598 (sub_18006D598.c)
 *     sub_18010D0EC @ 0x18010D0EC (sub_18010D0EC.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18010D060(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax

  v6 = (a3 - a2) >> 6;
  if ( v6 )
  {
    if ( v6 > 0x3FFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v7 = sub_18006D598((__int64)a1, (a3 - a2) >> 6);
    *a1 = v7;
    a1[1] = v7;
    a1[2] = &v7[8 * v6];
    a1[1] = sub_18010D0EC(a2, a3, v7, a1);
  }
}
