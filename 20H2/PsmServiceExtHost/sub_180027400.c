/*
 * XREFs of sub_180027400 @ 0x180027400
 * Callers:
 *     sub_180027374 @ 0x180027374 (sub_180027374.c)
 * Callees:
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 */

__int64 __fastcall sub_180027400(__int64 a1, __int64 a2)
{
  sub_18001E830(a1, a2, 9u);
  *(_DWORD *)(a1 + 32) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 24);
}
