/*
 * XREFs of sub_18006F198 @ 0x18006F198
 * Callers:
 *     sub_18006F208 @ 0x18006F208 (sub_18006F208.c)
 * Callees:
 *     sub_18011C188 @ 0x18011C188 (sub_18011C188.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18006F198(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax

  *a1 = &Spectre::Engine::RenderDevice::QueryPool::`vftable';
  sub_18011C188(a1 + 1, a2);
  a1[2] = a2;
  a1[3] = 0LL;
  a1[4] = 0LL;
  v4 = operator new(0x40uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  a1[3] = v4;
  return a1;
}
