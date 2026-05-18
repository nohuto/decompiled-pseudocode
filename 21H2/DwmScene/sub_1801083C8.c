/*
 * XREFs of sub_1801083C8 @ 0x1801083C8
 * Callers:
 *     sub_1800D536C @ 0x1800D536C (sub_1800D536C.c)
 * Callees:
 *     sub_18006AE58 @ 0x18006AE58 (sub_18006AE58.c)
 *     sub_1800E1280 @ 0x1800E1280 (sub_1800E1280.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1801083C8(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax

  sub_1800E1280(a1);
  sub_1800E1280(a1 + 176);
  sub_1800E1280(a1 + 352);
  sub_1800E1280(a1 + 528);
  sub_1800E1280(a1 + 704);
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 888) = 0LL;
  v4 = operator new(0x1D0uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *(_QWORD *)(a1 + 880) = v4;
  *(_QWORD *)(a1 + 896) = 0LL;
  *(_QWORD *)(a1 + 904) = 0LL;
  *(_QWORD *)(a1 + 912) = a2;
  sub_18006AE58(a1 + 928);
  *(_DWORD *)(a1 + 920) = 0;
  return a1;
}
