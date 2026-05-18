/*
 * XREFs of sub_180068860 @ 0x180068860
 * Callers:
 *     sub_1800A8530 @ 0x1800A8530 (sub_1800A8530.c)
 * Callees:
 *     sub_1800DB1EC @ 0x1800DB1EC (sub_1800DB1EC.c)
 */

__int64 __fastcall sub_180068860(__int64 a1, __int128 *a2)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 96) + 14624LL;
  v4 = *a2;
  return sub_1800DB1EC(v2, &v4);
}
