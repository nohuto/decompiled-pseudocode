/*
 * XREFs of sub_18006AE58 @ 0x18006AE58
 * Callers:
 *     sub_18006B958 @ 0x18006B958 (sub_18006B958.c)
 *     sub_1800D60A0 @ 0x1800D60A0 (sub_1800D60A0.c)
 *     sub_1800D61D8 @ 0x1800D61D8 (sub_1800D61D8.c)
 *     sub_1800D6704 @ 0x1800D6704 (sub_1800D6704.c)
 *     sub_1800D6818 @ 0x1800D6818 (sub_1800D6818.c)
 *     sub_1801083C8 @ 0x1801083C8 (sub_1801083C8.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_18006AE58(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rax

  *(_QWORD *)a1 = 0LL;
  v1 = (_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v3 = operator new(0x58uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *v1 = v3;
  return a1;
}
