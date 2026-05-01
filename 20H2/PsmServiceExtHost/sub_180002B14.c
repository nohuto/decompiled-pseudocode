/*
 * XREFs of sub_180002B14 @ 0x180002B14
 * Callers:
 *     sub_180002A90 @ 0x180002A90 (sub_180002A90.c)
 * Callees:
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 */

__int64 __fastcall sub_180002B14(__int64 a1, __int64 a2)
{
  sub_18001E830(a1, a2, 11LL);
  return RtlReleaseSRWLockShared(a1);
}
