/*
 * XREFs of sub_18006E130 @ 0x18006E130
 * Callers:
 *     sub_1800ADE00 @ 0x1800ADE00 (sub_1800ADE00.c)
 * Callees:
 *     sub_1800E0ABC @ 0x1800E0ABC (sub_1800E0ABC.c)
 */

__int64 __fastcall sub_18006E130(__int64 a1, __int128 *a2)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 96) + 14624LL;
  v4 = *a2;
  return sub_1800E0ABC(v2, &v4);
}
