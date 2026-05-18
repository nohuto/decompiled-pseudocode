/*
 * XREFs of sub_1800D6A24 @ 0x1800D6A24
 * Callers:
 *     sub_1800D6B10 @ 0x1800D6B10 (sub_1800D6B10.c)
 *     sub_1801090C0 @ 0x1801090C0 (sub_1801090C0.c)
 * Callees:
 *     sub_180069864 @ 0x180069864 (sub_180069864.c)
 *     sub_1800D76F4 @ 0x1800D76F4 (sub_1800D76F4.c)
 */

__int64 __fastcall sub_1800D6A24(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rdi
  __int64 v5; // r9
  char v7; // [rsp+30h] [rbp+8h]

  v2 = (_QWORD *)(a2 + 136);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  v3 = (_QWORD *)(a1 + 136);
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
  if ( a1 + 136 != a2 + 136 )
  {
    sub_1800D76F4(a1 + 136);
    sub_180069864(v3, v2, v7, v5);
  }
  return a1;
}
