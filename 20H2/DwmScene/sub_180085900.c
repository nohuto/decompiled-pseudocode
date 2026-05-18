/*
 * XREFs of sub_180085900 @ 0x180085900
 * Callers:
 *     sub_1800866F0 @ 0x1800866F0 (sub_1800866F0.c)
 * Callees:
 *     sub_180061438 @ 0x180061438 (sub_180061438.c)
 *     sub_180085770 @ 0x180085770 (sub_180085770.c)
 *     sub_1801168B8 @ 0x1801168B8 (sub_1801168B8.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180085900(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF

  v9[1] = a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  sub_180061438(a1 + 16, a3);
  *(_QWORD *)(a1 + 72) = 0xFFFFFFFF00000001uLL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  v5 = operator new(0x50uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *(_QWORD *)(a1 + 88) = v5;
  *(_QWORD *)(a1 + 104) = a2;
  *(_DWORD *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 116) = 0;
  HIDWORD(v9[0]) = (unsigned __int64)(a1 + 120) >> 32;
  LODWORD(v9[0]) = 0;
  sub_180085770(a1 + 120, v9);
  v9[0] = a1 + 184;
  sub_1801168B8(a1 + 184, v6);
  *(_DWORD *)(a1 + 192) = 0;
  v9[0] = a1 + 200;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  v7 = operator new(0x38uLL);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  *(_QWORD *)(a1 + 200) = v7;
  return a1;
}
