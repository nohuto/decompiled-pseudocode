/*
 * XREFs of sub_1800654A4 @ 0x1800654A4
 * Callers:
 *     sub_1800640C4 @ 0x1800640C4 (sub_1800640C4.c)
 *     sub_180064480 @ 0x180064480 (sub_180064480.c)
 *     sub_180066088 @ 0x180066088 (sub_180066088.c)
 *     sub_1800D0F48 @ 0x1800D0F48 (sub_1800D0F48.c)
 * Callees:
 *     sub_180063F94 @ 0x180063F94 (sub_180063F94.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800654A4(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // r9
  char v8; // [rsp+20h] [rbp-28h]

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_BYTE *)(a1 + 120) = *(_BYTE *)(a2 + 120);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  v3 = (_QWORD *)(a2 + 136);
  v4 = (_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v5 = operator new(0x58uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *v4 = v5;
  sub_180063F94(v4, v3, v8, v6);
  return a1;
}
