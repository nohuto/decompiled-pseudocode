/*
 * XREFs of sub_18007BBD8 @ 0x18007BBD8
 * Callers:
 *     sub_18007BD64 @ 0x18007BD64 (sub_18007BD64.c)
 *     sub_18007BF28 @ 0x18007BF28 (sub_18007BF28.c)
 *     sub_1800826B0 @ 0x1800826B0 (sub_1800826B0.c)
 * Callees:
 *     sub_18000B084 @ 0x18000B084 (sub_18000B084.c)
 */

__int64 __fastcall sub_18007BBD8(__int64 a1, __int64 a2)
{
  sub_18000B084(a1, a2, 0xAu, 0);
  return RtlAcquireSRWLockShared(a1);
}
