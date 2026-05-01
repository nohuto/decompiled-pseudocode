/*
 * XREFs of sub_18002E0E0 @ 0x18002E0E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180030490 @ 0x180030490 (sub_180030490.c)
 */

__int64 __fastcall sub_18002E0E0(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  LOBYTE(a4) = 1;
  v5 = *a2;
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, __int64))sub_180030490)(a1, 0LL, &v5, a4);
}
