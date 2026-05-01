/*
 * XREFs of sub_1800351EC @ 0x1800351EC
 * Callers:
 *     sub_180035188 @ 0x180035188 (sub_180035188.c)
 * Callees:
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 */

__int64 __fastcall sub_1800351EC(__int64 a1, __int64 a2)
{
  sub_18001E830(a1, a2, 7u);
  return RtlReleaseSRWLockShared(a1 + 168);
}
