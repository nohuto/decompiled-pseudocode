/*
 * XREFs of sub_1800698C8 @ 0x1800698C8
 * Callers:
 *     sub_180069938 @ 0x180069938 (sub_180069938.c)
 * Callees:
 *     sub_1801168B8 @ 0x1801168B8 (sub_1801168B8.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800698C8(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax

  *a1 = &Spectre::Engine::RenderDevice::QueryPool::`vftable';
  sub_1801168B8(a1 + 1, a2);
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
