/*
 * XREFs of sub_18007BEF8 @ 0x18007BEF8
 * Callers:
 *     sub_18007BD64 @ 0x18007BD64 (sub_18007BD64.c)
 *     sub_18007BF28 @ 0x18007BF28 (sub_18007BF28.c)
 *     sub_1800826B0 @ 0x1800826B0 (sub_1800826B0.c)
 * Callees:
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 */

__int64 __fastcall sub_18007BEF8(__int64 a1, __int64 a2)
{
  sub_18001E830(a1, a2, 0xAu);
  return RtlReleaseSRWLockShared(a1);
}
