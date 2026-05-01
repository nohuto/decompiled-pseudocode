/*
 * XREFs of sub_180027C9C @ 0x180027C9C
 * Callers:
 *     sub_180003960 @ 0x180003960 (sub_180003960.c)
 *     sub_180027BF0 @ 0x180027BF0 (sub_180027BF0.c)
 *     sub_18002ABE0 @ 0x18002ABE0 (sub_18002ABE0.c)
 *     sub_180081D04 @ 0x180081D04 (sub_180081D04.c)
 *     sub_180081D54 @ 0x180081D54 (sub_180081D54.c)
 * Callees:
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 */

__int64 __fastcall sub_180027C9C(__int64 a1, __int64 a2)
{
  sub_18001E830(a1, a2, 0xBu);
  *(_DWORD *)(a1 + 48) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 40);
}
