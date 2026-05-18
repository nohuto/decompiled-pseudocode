/*
 * XREFs of sub_18009B10C @ 0x18009B10C
 * Callers:
 *     sub_1800185F0 @ 0x1800185F0 (sub_1800185F0.c)
 * Callees:
 *     sub_180038FA8 @ 0x180038FA8 (sub_180038FA8.c)
 *     sub_180062250 @ 0x180062250 (sub_180062250.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18009B10C(_QWORD *a1)
{
  _QWORD *v2; // rax

  sub_180062250(a1, 4, 0xBu);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::Sampler::`vftable';
  sub_180038FA8((__int64)(a1 + 14));
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
