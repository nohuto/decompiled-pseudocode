/*
 * XREFs of sub_180067B20 @ 0x180067B20
 * Callers:
 *     sub_180068494 @ 0x180068494 (sub_180068494.c)
 *     sub_180091538 @ 0x180091538 (sub_180091538.c)
 *     sub_180096D20 @ 0x180096D20 (sub_180096D20.c)
 *     sub_18009ECAC @ 0x18009ECAC (sub_18009ECAC.c)
 *     sub_1800A09DC @ 0x1800A09DC (sub_1800A09DC.c)
 *     sub_1800CC7E0 @ 0x1800CC7E0 (sub_1800CC7E0.c)
 *     sub_1800CE2CC @ 0x1800CE2CC (sub_1800CE2CC.c)
 *     sub_1800D0174 @ 0x1800D0174 (sub_1800D0174.c)
 *     sub_1800D1C5C @ 0x1800D1C5C (sub_1800D1C5C.c)
 *     sub_1800D2984 @ 0x1800D2984 (sub_1800D2984.c)
 *     sub_1800D359C @ 0x1800D359C (sub_1800D359C.c)
 * Callees:
 *     sub_180067A80 @ 0x180067A80 (sub_180067A80.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180067B20(_QWORD *a1, int a2, unsigned int a3)
{
  _QWORD *v4; // rax

  sub_180067A80((__int64)a1, a2, a3);
  *a1 = &Spectre::Engine::SharedResource::`vftable';
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  v4 = operator new(0x28uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  a1[10] = v4;
  return a1;
}
