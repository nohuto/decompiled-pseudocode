/*
 * XREFs of sub_1801086C8 @ 0x1801086C8
 * Callers:
 *     sub_180108788 @ 0x180108788 (sub_180108788.c)
 *     sub_1801090C0 @ 0x1801090C0 (sub_1801090C0.c)
 * Callees:
 *     sub_1800D76F4 @ 0x1800D76F4 (sub_1800D76F4.c)
 */

__int64 __fastcall sub_1801086C8(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 *v3; // rsi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx

  v2 = (__int64 *)(a1 + 136);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  v3 = (__int64 *)(a2 + 136);
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
    sub_1800D76F4(v2);
    v5 = *v2;
    *v2 = *v3;
    v6 = v3[1];
    *v3 = v5;
    v7 = v2[1];
    v2[1] = v6;
    v3[1] = v7;
  }
  return a1;
}
