/*
 * XREFs of sub_18002E0A0 @ 0x18002E0A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180030490 @ 0x180030490 (sub_180030490.c)
 */

__int64 __fastcall sub_18002E0A0(__int64 a1, __int64 a2, __int128 *a3)
{
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a3;
  return ((__int64 (__fastcall *)(__int64, __int64, __int128 *, _QWORD))sub_180030490)(a1, a2, &v4, 0LL);
}
