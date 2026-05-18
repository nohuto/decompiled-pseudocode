/*
 * XREFs of sub_180062250 @ 0x180062250
 * Callers:
 *     sub_180062BC4 @ 0x180062BC4 (sub_180062BC4.c)
 *     sub_18008BC68 @ 0x18008BC68 (sub_18008BC68.c)
 *     sub_180091450 @ 0x180091450 (sub_180091450.c)
 *     sub_1800993DC @ 0x1800993DC (sub_1800993DC.c)
 *     sub_18009B10C @ 0x18009B10C (sub_18009B10C.c)
 *     sub_1800C6F10 @ 0x1800C6F10 (sub_1800C6F10.c)
 *     sub_1800C89FC @ 0x1800C89FC (sub_1800C89FC.c)
 *     sub_1800CA8A4 @ 0x1800CA8A4 (sub_1800CA8A4.c)
 *     sub_1800CC38C @ 0x1800CC38C (sub_1800CC38C.c)
 *     sub_1800CD0B4 @ 0x1800CD0B4 (sub_1800CD0B4.c)
 *     sub_1800CDCCC @ 0x1800CDCCC (sub_1800CDCCC.c)
 * Callees:
 *     sub_1800621B0 @ 0x1800621B0 (sub_1800621B0.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180062250(_QWORD *a1, int a2, unsigned int a3)
{
  _QWORD *v4; // rax

  sub_1800621B0((__int64)a1, a2, a3);
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
