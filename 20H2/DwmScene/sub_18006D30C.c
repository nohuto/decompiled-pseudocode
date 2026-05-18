/*
 * XREFs of sub_18006D30C @ 0x18006D30C
 * Callers:
 *     sub_180073BBC @ 0x180073BBC (sub_180073BBC.c)
 *     sub_1800A40D4 @ 0x1800A40D4 (sub_1800A40D4.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18011F976 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006D30C(__int64 a1, __int64 a2, _QWORD *a3)
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
