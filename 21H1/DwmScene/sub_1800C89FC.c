/*
 * XREFs of sub_1800C89FC @ 0x1800C89FC
 * Callers:
 *     sub_18009E604 @ 0x18009E604 (sub_18009E604.c)
 *     sub_18009E694 @ 0x18009E694 (sub_18009E694.c)
 *     sub_18009E724 @ 0x18009E724 (sub_18009E724.c)
 *     sub_18009E7B4 @ 0x18009E7B4 (sub_18009E7B4.c)
 *     sub_18009EA00 @ 0x18009EA00 (sub_18009EA00.c)
 * Callees:
 *     sub_180062250 @ 0x180062250 (sub_180062250.c)
 *     sub_18006294C @ 0x18006294C (sub_18006294C.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800C89FC(__int64 a1, int a2)
{
  _QWORD *v4; // rax

  sub_180062250((_QWORD *)a1, 2, 8u);
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
  sub_18006294C(a1, 2, 0);
  return a1;
}
