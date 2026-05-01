/*
 * XREFs of sub_180036EBC @ 0x180036EBC
 * Callers:
 *     sub_1800197C0 @ 0x1800197C0 (sub_1800197C0.c)
 * Callees:
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 */

__int64 __fastcall sub_180036EBC(__int64 a1, __int64 a2)
{
  sub_18001E830(a1, a2, 5u);
  return RtlReleaseSRWLockShared(a1 + 576);
}
