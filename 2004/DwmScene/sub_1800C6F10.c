/*
 * XREFs of sub_1800C6F10 @ 0x1800C6F10
 * Callers:
 *     sub_1800215B8 @ 0x1800215B8 (sub_1800215B8.c)
 * Callees:
 *     sub_180062250 @ 0x180062250 (sub_180062250.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800C6F10(_QWORD *a1)
{
  _QWORD *v2; // rax

  sub_180062250(a1, 9, 4u);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::RenderState::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  a1[17] = 0LL;
  v2 = operator new(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  a1[16] = v2;
  return a1;
}
