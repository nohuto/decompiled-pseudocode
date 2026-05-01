/*
 * XREFs of sub_18000803C @ 0x18000803C
 * Callers:
 *     sub_180003960 @ 0x180003960 (sub_180003960.c)
 *     sub_180007084 @ 0x180007084 (sub_180007084.c)
 * Callees:
 *     sub_18000B084 @ 0x18000B084 (sub_18000B084.c)
 */

__int64 __fastcall sub_18000803C(__int64 a1, __int64 a2)
{
  sub_18000B084(a1, a2, 4LL);
  return RtlAcquireSRWLockShared(a1 + 16);
}
