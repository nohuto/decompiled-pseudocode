/*
 * XREFs of sub_1800CD0B4 @ 0x1800CD0B4
 * Callers:
 *     sub_1800C9E94 @ 0x1800C9E94 (sub_1800C9E94.c)
 *     sub_1800CA310 @ 0x1800CA310 (sub_1800CA310.c)
 * Callees:
 *     sub_180062250 @ 0x180062250 (sub_180062250.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800CD0B4(_QWORD *a1, int a2, unsigned int a3)
{
  _QWORD *v4; // rax

  sub_180062250(a1, a2, a3);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::ArrayBuffer::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  v4 = operator new(0x38uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  a1[15] = v4;
  a1[17] = 0LL;
  a1[18] = 0LL;
  return a1;
}
