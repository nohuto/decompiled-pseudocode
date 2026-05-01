/*
 * XREFs of sub_18007FF78 @ 0x18007FF78
 * Callers:
 *     sub_180079F98 @ 0x180079F98 (sub_180079F98.c)
 *     sub_18007A340 @ 0x18007A340 (sub_18007A340.c)
 *     sub_18007FFAC @ 0x18007FFAC (sub_18007FFAC.c)
 * Callees:
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 */

__int64 __fastcall sub_18007FF78(__int64 a1, __int64 a2)
{
  sub_18001E830(a1, a2, 6u);
  return RtlReleaseSRWLockShared(a1 + 304);
}
