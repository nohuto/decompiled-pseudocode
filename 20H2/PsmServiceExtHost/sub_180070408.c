/*
 * XREFs of sub_180070408 @ 0x180070408
 * Callers:
 *     sub_18006C714 @ 0x18006C714 (sub_18006C714.c)
 *     sub_18006C9B0 @ 0x18006C9B0 (sub_18006C9B0.c)
 * Callees:
 *     sub_18000BD38 @ 0x18000BD38 (sub_18000BD38.c)
 */

__int64 __fastcall sub_180070408(__int64 a1, _QWORD *a2)
{
  RtlAcquireSRWLockExclusive(a1 + 16);
  sub_18000BD38(a1, a2);
  return RtlReleaseSRWLockExclusive(a1 + 16);
}
