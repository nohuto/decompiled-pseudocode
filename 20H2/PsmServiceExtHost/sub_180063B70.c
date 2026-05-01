/*
 * XREFs of sub_180063B70 @ 0x180063B70
 * Callers:
 *     sub_180063BC8 @ 0x180063BC8 (sub_180063BC8.c)
 * Callees:
 *     sub_180063C84 @ 0x180063C84 (sub_180063C84.c)
 */

__int64 __fastcall sub_180063B70(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 v9; // r11

  sub_180063C84(a1[3], a2, a3 + 24);
  sub_180063C84(a1[2], v5, v4 + 16);
  sub_180063C84(a1[1], v7, v6 + 8);
  return sub_180063C84(*a1, v9, v8);
}
