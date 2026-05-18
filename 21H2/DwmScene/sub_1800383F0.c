/*
 * XREFs of sub_1800383F0 @ 0x1800383F0
 * Callers:
 *     sub_180037F1C @ 0x180037F1C (sub_180037F1C.c)
 *     sub_180043ACC @ 0x180043ACC (sub_180043ACC.c)
 *     sub_180096A98 @ 0x180096A98 (sub_180096A98.c)
 *     sub_18009EA6C @ 0x18009EA6C (sub_18009EA6C.c)
 *     sub_1800A0910 @ 0x1800A0910 (sub_1800A0910.c)
 *     sub_1800AC8A0 @ 0x1800AC8A0 (sub_1800AC8A0.c)
 *     sub_1800CC6F4 @ 0x1800CC6F4 (sub_1800CC6F4.c)
 *     sub_1800CDEB4 @ 0x1800CDEB4 (sub_1800CDEB4.c)
 *     sub_1800CF64C @ 0x1800CF64C (sub_1800CF64C.c)
 *     sub_1800D00EC @ 0x1800D00EC (sub_1800D00EC.c)
 *     sub_1800D1A04 @ 0x1800D1A04 (sub_1800D1A04.c)
 *     sub_1800F4140 @ 0x1800F4140 (sub_1800F4140.c)
 *     sub_1800F6800 @ 0x1800F6800 (sub_1800F6800.c)
 * Callees:
 *     sub_180037C00 @ 0x180037C00 (sub_180037C00.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800383F0(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, _DWORD **a5)
{
  __int64 v8; // rdi
  _DWORD *v9; // rax

  v8 = *a1;
  v9 = operator new(0x38uLL);
  v9[8] = **a5;
  *((_QWORD *)v9 + 5) = 0LL;
  *((_QWORD *)v9 + 6) = 0LL;
  *(_QWORD *)v9 = v8;
  *((_QWORD *)v9 + 1) = v8;
  *((_QWORD *)v9 + 2) = v8;
  *((_WORD *)v9 + 12) = 0;
  sub_180037C00(a1, a2, a3, v9 + 8, v9);
  return a2;
}
