/*
 * XREFs of sub_1800F9A68 @ 0x1800F9A68
 * Callers:
 *     sub_1800FA570 @ 0x1800FA570 (sub_1800FA570.c)
 * Callees:
 *     sub_180060060 @ 0x180060060 (sub_180060060.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800F9A68(__int64 a1, __int64 a2, _WORD *a3, _WORD *a4, int a5, char a6)
{
  *(_QWORD *)a1 = &off_180155740;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 49) = a6;
  sub_180060060((__int64 *)(a1 + 56), a3);
  sub_180060060((__int64 *)(a1 + 88), a4);
  *(_DWORD *)(a1 + 120) = a5;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 7LL;
  *(_WORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 7LL;
  *(_WORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 192) = a2;
  *(_QWORD *)(a1 + 200) = 0LL;
  return a1;
}
