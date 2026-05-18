/*
 * XREFs of sub_180122214 @ 0x180122214
 * Callers:
 *     sub_1801222C8 @ 0x1801222C8 (sub_1801222C8.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     sub_1801223CC @ 0x1801223CC (sub_1801223CC.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180125246 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180122214(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  _QWORD *v7; // r14
  __int64 v8; // rdx
  __int64 result; // rax
  _QWORD *v10; // [rsp+28h] [rbp-30h]

  if ( *(_QWORD *)(a1 + 8) == 0x1745D1745D1745DLL )
    std::_Xlength_error("list<T> too long");
  v7 = *(_QWORD **)(a2 + 8);
  v10 = operator new(0xB0uLL);
  v8 = *a4;
  v10[4] = 0LL;
  v10[5] = 0LL;
  sub_18001277C(v10 + 2, v8);
  result = sub_1801223CC(v10 + 6);
  *v10 = a2;
  v10[1] = v7;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v10;
  *v7 = v10;
  return result;
}
