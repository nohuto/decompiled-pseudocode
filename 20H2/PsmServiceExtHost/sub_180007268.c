/*
 * XREFs of sub_180007268 @ 0x180007268
 * Callers:
 *     sub_180003960 @ 0x180003960 (sub_180003960.c)
 *     sub_180007084 @ 0x180007084 (sub_180007084.c)
 * Callees:
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 */

__int64 __fastcall sub_180007268(__int64 a1, __int64 a2)
{
  sub_18001E830(a1, a2, 4LL);
  return RtlReleaseSRWLockShared(a1 + 16);
}
