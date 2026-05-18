/*
 * XREFs of sub_18008A5E8 @ 0x18008A5E8
 * Callers:
 *     sub_18008DD34 @ 0x18008DD34 (sub_18008DD34.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180125246 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18008A5E8(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rdi
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x666666666666666LL )
    std::_Xlength_error("list<T> too long");
  v6 = *(_QWORD **)(a2 + 8);
  result = operator new(0x28uLL);
  result[2] = *a3;
  result[3] = 0LL;
  result[4] = 0LL;
  result[3] = a3[1];
  result[4] = a3[2];
  a3[1] = 0LL;
  a3[2] = 0LL;
  *result = a2;
  result[1] = v6;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = result;
  *v6 = result;
  return result;
}
