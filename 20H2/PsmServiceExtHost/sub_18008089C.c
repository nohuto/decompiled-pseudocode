/*
 * XREFs of sub_18008089C @ 0x18008089C
 * Callers:
 *     sub_180079190 @ 0x180079190 (sub_180079190.c)
 *     sub_180079380 @ 0x180079380 (sub_180079380.c)
 *     sub_1800794D8 @ 0x1800794D8 (sub_1800794D8.c)
 *     sub_180079F98 @ 0x180079F98 (sub_180079F98.c)
 *     sub_18007A340 @ 0x18007A340 (sub_18007A340.c)
 *     sub_18007ADB0 @ 0x18007ADB0 (sub_18007ADB0.c)
 *     sub_18007B468 @ 0x18007B468 (sub_18007B468.c)
 * Callees:
 *     sub_18000ECB0 @ 0x18000ECB0 (sub_18000ECB0.c)
 */

__int64 __fastcall sub_18008089C(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return sub_18000ECB0(a1 + 56, (__int64)&v3, (__int64 (__fastcall *)(__int64, __int64))sub_1800805E0);
}
