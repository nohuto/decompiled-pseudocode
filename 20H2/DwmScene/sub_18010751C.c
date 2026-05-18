/*
 * XREFs of sub_18010751C @ 0x18010751C
 * Callers:
 *     sub_180107934 @ 0x180107934 (sub_180107934.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18011F976 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18010751C(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // r14
  _QWORD *v7; // [rsp+28h] [rbp-30h]

  if ( *(_QWORD *)(a1 + 8) == 0x492492492492492LL )
    std::_Xlength_error("list<T> too long");
  v6 = *(_QWORD **)(a2 + 8);
  v7 = operator new(0x38uLL);
  v7[4] = 0LL;
  v7[5] = 0LL;
  sub_18001CDF8(v7 + 2, a3);
  *((_BYTE *)v7 + 48) = *(_BYTE *)(a3 + 32);
  *v7 = a2;
  v7[1] = v6;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v7;
  *v6 = v7;
}
