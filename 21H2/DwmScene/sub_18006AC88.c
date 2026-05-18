/*
 * XREFs of sub_18006AC88 @ 0x18006AC88
 * Callers:
 *     sub_180069994 @ 0x180069994 (sub_180069994.c)
 *     sub_180069D50 @ 0x180069D50 (sub_180069D50.c)
 *     sub_18006B958 @ 0x18006B958 (sub_18006B958.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_18006AC88(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rdx

  v2 = (_QWORD *)(a1 + 136);
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
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v5 = operator new(0x58uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *v2 = v5;
  *v2 = *(_QWORD *)(a2 + 136);
  v6 = *(_QWORD *)(a2 + 144);
  *(_QWORD *)(a2 + 136) = v5;
  result = a1;
  v8 = v2[1];
  v2[1] = v6;
  *(_QWORD *)(a2 + 144) = v8;
  return result;
}
