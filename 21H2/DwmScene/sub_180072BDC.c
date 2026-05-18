/*
 * XREFs of sub_180072BDC @ 0x180072BDC
 * Callers:
 *     sub_18007948C @ 0x18007948C (sub_18007948C.c)
 *     sub_1800A99A4 @ 0x1800A99A4 (sub_1800A99A4.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180125246 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180072BDC(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rsi
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list<T> too long");
  v6 = *(_QWORD **)(a2 + 8);
  v7 = operator new(0x20uLL);
  v7[2] = 0LL;
  v7[3] = 0LL;
  v8 = a3[1];
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  v7[2] = *a3;
  result = a3[1];
  v7[3] = result;
  *v7 = a2;
  v7[1] = v6;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v7;
  *v6 = v7;
  return result;
}
