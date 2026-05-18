/*
 * XREFs of sub_18006DF74 @ 0x18006DF74
 * Callers:
 *     sub_18009C450 @ 0x18009C450 (sub_18009C450.c)
 * Callees:
 *     sub_1800E0750 @ 0x1800E0750 (sub_1800E0750.c)
 */

__int64 __fastcall sub_18006DF74(__int64 a1, __int128 *a2)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 96) + 14472LL;
  v4 = *a2;
  return sub_1800E0750(v2, &v4);
}
