/*
 * XREFs of sub_180007EAC @ 0x180007EAC
 * Callers:
 *     sub_180007C3C @ 0x180007C3C (sub_180007C3C.c)
 * Callees:
 *     sub_180007F10 @ 0x180007F10 (sub_180007F10.c)
 */

__int64 __fastcall sub_180007EAC(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // r11
  __int64 v6; // r11
  __int64 v7; // r11

  sub_180007F10(a1[3], a2[3], a3 + 24);
  sub_180007F10(a1[2], a2[2], v5 + 16);
  sub_180007F10(a1[1], a2[1], v6 + 8);
  return sub_180007F10(*a1, *a2, v7);
}
