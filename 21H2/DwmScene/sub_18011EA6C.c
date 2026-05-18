/*
 * XREFs of sub_18011EA6C @ 0x18011EA6C
 * Callers:
 *     sub_18011FF14 @ 0x18011FF14 (sub_18011FF14.c)
 * Callees:
 *     sub_1800113F8 @ 0x1800113F8 (sub_1800113F8.c)
 *     sub_18011FF84 @ 0x18011FF84 (sub_18011FF84.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180125246 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011EA6C(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // r14
  __int64 result; // rax
  _QWORD *v8; // [rsp+28h] [rbp-40h]

  if ( *(_QWORD *)(a1 + 8) == 0x1745D1745D1745DLL )
    std::_Xlength_error("list<T> too long");
  v6 = *(_QWORD **)(a2 + 8);
  v8 = operator new(0xB0uLL);
  sub_1800113F8((__int64)(v8 + 2), a3);
  result = sub_18011FF84(v8 + 6, a3 + 32);
  *v8 = a2;
  v8[1] = v6;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v8;
  *v6 = v8;
  return result;
}
