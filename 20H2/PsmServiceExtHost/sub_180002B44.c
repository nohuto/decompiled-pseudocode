/*
 * XREFs of sub_180002B44 @ 0x180002B44
 * Callers:
 *     sub_180002A90 @ 0x180002A90 (sub_180002A90.c)
 * Callees:
 *     sub_18000B084 @ 0x18000B084 (sub_18000B084.c)
 */

__int64 __fastcall sub_180002B44(__int64 a1, __int64 a2)
{
  sub_18000B084(a1, a2, 11LL);
  return RtlAcquireSRWLockShared(a1);
}
