/*
 * XREFs of sub_1800B2250 @ 0x1800B2250
 * Callers:
 *     sub_180101110 @ 0x180101110 (sub_180101110.c)
 * Callees:
 *     sub_1800B1C18 @ 0x1800B1C18 (sub_1800B1C18.c)
 *     sub_1800B1E40 @ 0x1800B1E40 (sub_1800B1E40.c)
 */

__int64 __fastcall sub_1800B2250(__int64 a1)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = 0LL;
  sub_1800B1E40(a1, v3);
  *(_OWORD *)v3 = 0LL;
  sub_1800B1C18(a1, v3);
  return sub_1800693F8((_QWORD *)(a1 + 448));
}
