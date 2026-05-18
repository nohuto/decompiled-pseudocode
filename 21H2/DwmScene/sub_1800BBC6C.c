/*
 * XREFs of sub_1800BBC6C @ 0x1800BBC6C
 * Callers:
 *     sub_1800BC650 @ 0x1800BC650 (sub_1800BC650.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180125246 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800BBC6C(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rsi
  _QWORD *v7; // [rsp+28h] [rbp-20h]

  if ( *(_QWORD *)(a1 + 8) == 0x555555555555555LL )
    std::_Xlength_error("list<T> too long");
  v6 = *(_QWORD **)(a2 + 8);
  v7 = operator new(0x30uLL);
  v7[4] = 0LL;
  v7[5] = 0LL;
  sub_18001277C(v7 + 2, a3);
  *v7 = a2;
  v7[1] = v6;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v7;
  *v6 = v7;
}
