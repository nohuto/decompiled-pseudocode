/*
 * XREFs of sub_18008B1D0 @ 0x18008B1D0
 * Callers:
 *     sub_18008BFC0 @ 0x18008BFC0 (sub_18008BFC0.c)
 * Callees:
 *     sub_180066D08 @ 0x180066D08 (sub_180066D08.c)
 *     sub_18008B040 @ 0x18008B040 (sub_18008B040.c)
 *     sub_18011C188 @ 0x18011C188 (sub_18011C188.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18008B1D0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF

  v9[1] = a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  sub_180066D08(a1 + 16, a3);
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
  sub_18008B040(a1 + 120, v9);
  v9[0] = a1 + 184;
  sub_18011C188(a1 + 184, v6);
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
