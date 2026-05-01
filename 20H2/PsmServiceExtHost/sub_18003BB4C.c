/*
 * XREFs of sub_18003BB4C @ 0x18003BB4C
 * Callers:
 *     sub_18003BAA0 @ 0x18003BAA0 (sub_18003BAA0.c)
 *     sub_18007BE54 @ 0x18007BE54 (sub_18007BE54.c)
 * Callees:
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 */

__int64 __fastcall sub_18003BB4C(__int64 a1, __int64 a2)
{
  sub_18001E830(a1, a2, 8u);
  *(_DWORD *)(a1 + 104) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 96);
}
