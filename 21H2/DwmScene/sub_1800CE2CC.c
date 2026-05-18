/*
 * XREFs of sub_1800CE2CC @ 0x1800CE2CC
 * Callers:
 *     sub_1800A3ED4 @ 0x1800A3ED4 (sub_1800A3ED4.c)
 *     sub_1800A3F64 @ 0x1800A3F64 (sub_1800A3F64.c)
 *     sub_1800A3FF4 @ 0x1800A3FF4 (sub_1800A3FF4.c)
 *     sub_1800A4084 @ 0x1800A4084 (sub_1800A4084.c)
 *     sub_1800A42D0 @ 0x1800A42D0 (sub_1800A42D0.c)
 * Callees:
 *     sub_180067B20 @ 0x180067B20 (sub_180067B20.c)
 *     sub_18006821C @ 0x18006821C (sub_18006821C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800CE2CC(__int64 a1, int a2)
{
  _QWORD *v4; // rax

  sub_180067B20((_QWORD *)a1, 2, 8u);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Shader::`vftable';
  *(_DWORD *)(a1 + 112) = a2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v4 = operator new(0x38uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *(_QWORD *)(a1 + 136) = v4;
  *(_BYTE *)(a1 + 152) = 0;
  sub_18006821C(a1, 2, 0);
  return a1;
}
