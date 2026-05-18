/*
 * XREFs of sub_18011923C @ 0x18011923C
 * Callers:
 *     sub_18011A520 @ 0x18011A520 (sub_18011A520.c)
 * Callees:
 *     sub_18011CAFC @ 0x18011CAFC (sub_18011CAFC.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18011F976 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011923C(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  __int64 result; // rax
  _QWORD *v10; // [rsp+28h] [rbp-30h]

  if ( *(_QWORD *)(a1 + 8) == 0x1745D1745D1745DLL )
    std::_Xlength_error("list<T> too long");
  v7 = *(_QWORD **)(a2 + 8);
  v10 = operator new(0xB0uLL);
  v8 = *a4;
  v10[4] = 0LL;
  v10[5] = 0LL;
  *((_OWORD *)v10 + 1) = *(_OWORD *)v8;
  *((_OWORD *)v10 + 2) = *(_OWORD *)(v8 + 16);
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)(v8 + 24) = 7LL;
  *(_WORD *)v8 = 0;
  result = sub_18011CAFC(v10 + 6);
  *v10 = a2;
  v10[1] = v7;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v10;
  *v7 = v10;
  return result;
}
