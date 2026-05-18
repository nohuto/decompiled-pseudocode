/*
 * XREFs of sub_180084D18 @ 0x180084D18
 * Callers:
 *     sub_180088464 @ 0x180088464 (sub_180088464.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18011F976 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180084D18(__int64 a1, __int64 a2, _QWORD *a3)
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
