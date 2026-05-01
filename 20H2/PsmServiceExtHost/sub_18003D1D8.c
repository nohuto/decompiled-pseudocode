/*
 * XREFs of sub_18003D1D8 @ 0x18003D1D8
 * Callers:
 *     sub_18003D10C @ 0x18003D10C (sub_18003D10C.c)
 *     sub_1800817D0 @ 0x1800817D0 (sub_1800817D0.c)
 * Callees:
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 */

__int64 __fastcall sub_18003D1D8(__int64 a1, __int64 a2)
{
  sub_18001E830(a1, a2, 7u);
  *(_DWORD *)(a1 + 176) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 168);
}
