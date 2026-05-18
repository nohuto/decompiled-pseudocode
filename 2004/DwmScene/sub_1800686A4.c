/*
 * XREFs of sub_1800686A4 @ 0x1800686A4
 * Callers:
 *     sub_180096B80 @ 0x180096B80 (sub_180096B80.c)
 * Callees:
 *     sub_1800DAE80 @ 0x1800DAE80 (sub_1800DAE80.c)
 */

__int64 __fastcall sub_1800686A4(__int64 a1, __int128 *a2)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 96) + 14472LL;
  v4 = *a2;
  return sub_1800DAE80(v2, &v4);
}
